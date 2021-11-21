using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class NetworkGenerator : MonoBehaviour
{
    // Parameters to set in Unity editor for testing.
    public bool TestMode = false;
    public int NumNodes;
    public int NumEdges;

    // The scale of the nodes in the chart.
    public float PointScale;

    // The scale of the edges in the chart.
    public float EdgeScale;

    // The size of the chart, configured in the Unity editor.
    public Vector3 ChartSize;

    // Stores the points in the plot.
    private Dictionary<string, GameObject> Nodes { get; set; }
    private Dictionary<GraphDataEdge, GameObject> Edges { get; set; }

    private GraphDataReader FileDataReader { get; set; }

    // Start is called before the first frame update
    void Start()
    {
        this.InitializePoints();
    }

    // Update is called once per frame
    void Update()
    {

    }

    private void InitializePoints()
    {
        this.Nodes = new Dictionary<string, GameObject>();
        this.Edges = new Dictionary<GraphDataEdge, GameObject>();

        // Check to see that the chart can be meaningfully created.
        //      Returning prevents any divide by zero errors in sizing.
        if (this.ChartSize.x == 0 || this.ChartSize.y == 0 || this.ChartSize.z == 0)
        {
            Debug.LogWarning("Network cannot be drawn. One of the Chart size dimensions is set to zero.");
            return;
        }
        if (this.PointScale <= 0)
        {
            Debug.LogWarning("Network cannot be drawn. Point Scale must be greater than 0.");
            return;
        }
        if (this.EdgeScale <= 0)
        {
            Debug.LogWarning("Network cannot be drawn. Edge Scale must be greater than 0.");
            return;
        }
        // A positive number of nodes, and a number of edges between 0
        //      and a full graph inclusively should be specified.
        if (this.NumNodes <= 0)
        {
            Debug.LogWarning("Network cannot be drawn. Specify at least one node.");
            return;
        }
        if (this.NumEdges < 0)
        {
            Debug.LogWarning("Network cannot be drawn. Specify at least 0 edges.");
            return;
        }
        int fullGraphEdgeCount = Mathf.RoundToInt(this.NumNodes * (this.NumNodes - 1) / 2.0f);
        if (this.NumEdges > fullGraphEdgeCount)
        {
            Debug.LogWarning("Network cannot contain more than a complete graph of edges. Network will be drawn with a complete edge set, of " + fullGraphEdgeCount + " edges.");
            this.NumEdges = fullGraphEdgeCount;
        }

        // Either generate or read the data depending on the test mode setting.
        this.FileDataReader = this.GetComponent(typeof(GraphDataReader)) as GraphDataReader;
        GraphData graphData = this.TestMode ? this.GenerateTestGraph() : this.FileDataReader.GetData();

        // To hold the maximums and minimums.
        float xMax = float.MinValue;
        float xMin = float.MaxValue;
        float yMax = float.MinValue;
        float yMin = float.MaxValue;
        float zMax = float.MinValue;
        float zMin = float.MaxValue;

        // Load the graph matieral once before entering the loop, for efficiency,
        //      since the same material will be applied to all nodes and edges.
        Material graphMaterial = this.GetMaterial("PointMaterial");

        // Generate a sphere to represent each node.
        System.Random rand = new System.Random();
        foreach (GraphDataNode nodeData in graphData.Nodes)
        {
            // Create a new sphere to model the point.
            GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);

            // Make the node a child of the chart.
            sphere.transform.parent = this.gameObject.transform;

            // Scale the node according to the point scale set in the Unity editor.
            sphere.transform.localScale = new Vector3(this.PointScale, this.PointScale, this.PointScale);

            // Position the sphere randomly within the chart size.
            //sphere.transform.position = new Vector3(
            //    rand.Next(0, Mathf.RoundToInt(this.ChartSize.x)),
            //    rand.Next(0, Mathf.RoundToInt(this.ChartSize.y)),
            //    rand.Next(0, Mathf.RoundToInt(this.ChartSize.z))
            //    );

            // Update the maximum and minimum position values.
            if (nodeData.X > xMax)
            {
                xMax = nodeData.X;
            }
            if (nodeData.X < xMin)
            {
                xMin = nodeData.X;
            }
            if (nodeData.Y > yMax)
            {
                yMax = nodeData.Y;
            }
            if (nodeData.Y < yMin)
            {
                yMin = nodeData.Y;
            }
            if (nodeData.Z > zMax)
            {
                zMax = nodeData.Z;
            }
            if (nodeData.Z < zMin)
            {
                zMin = nodeData.Z;
            }

            sphere.transform.localPosition = new Vector3(
                nodeData.X,
                nodeData.Y,
                nodeData.Z
                );

            //string message = "Placed node " + nodeData.Name + " initially at: " + sphere.transform.position.ToString();
            //Debug.Log(message);

            // Set the material for the bar.
            Renderer renderer = sphere.GetComponent<Renderer>();
            renderer.material = graphMaterial;
            renderer.material.color = Color.white;

            // Add the node to the dictionary, indexed by it's name.
            this.Nodes.Add(nodeData.Name, sphere);
        }

        //Debug.Log("Position Stats: ");
        //Debug.Log(xMax);
        //Debug.Log(xMin);
        //Debug.Log(yMax);
        //Debug.Log(yMin);
        //Debug.Log(zMax);
        //Debug.Log(zMin);
        // Adjust the position position of each sphere based on the pre-calculated layout,
        //      scaled for the size of the chart.
        float xRange = xMax - xMin;
        float yRange = yMax - yMin;
        float zRange = zMax - zMin;
        foreach (KeyValuePair<string, GameObject> pair in this.Nodes)
        {
            pair.Value.transform.localPosition = new Vector3(
                pair.Value.transform.localPosition.x / xRange * this.ChartSize.x,
                pair.Value.transform.localPosition.y / yRange * this.ChartSize.y,
                pair.Value.transform.localPosition.z / zRange * this.ChartSize.z
                );

            //string message = "Placed node " + pair.Key + " at: " + pair.Value.transform.position.ToString();
            //Debug.Log(message);
        }

        // Now build out the edges.
        foreach (GraphDataEdge edge in graphData.EdgeList)
        {
            // The points the edge must connect.
            if (this.Nodes.ContainsKey(edge.From) == false)
            {
                Debug.Log("Missing FROM key: " + edge.From + "for edge to " + edge.To);
                continue;
            }
            if (this.Nodes.ContainsKey(edge.To) == false)
            {
                Debug.Log("Missing TO key: " + edge.To + "for edge from " + edge.From);
                continue;
            }
            Vector3 fromPoint = this.Nodes[edge.From].transform.localPosition;
            Vector3 toPoint = this.Nodes[edge.To].transform.localPosition;

            // Create a new cylinder to model the edge.
            GameObject cylinder = GameObject.CreatePrimitive(PrimitiveType.Cylinder);

            // Make the edge a child of the chart.
            cylinder.transform.parent = this.gameObject.transform;

            // Scale the edge according to the edge scale set in the Unity editor.
            //      The length of the cylinder is half the distance between nodes
            //      (since the cylinder is scaled both directions by the size).
            float length = (toPoint - fromPoint).magnitude / 2.0f;
            cylinder.transform.localScale = new Vector3(this.EdgeScale, length, this.EdgeScale);

            // Angle the edge so the up (y) axis aligns with the two points.
            cylinder.transform.up = (toPoint - fromPoint);

            // Position the edge's center to halfway between the two nodes.
            cylinder.transform.localPosition = fromPoint + ((toPoint - fromPoint) / 2.0f);

            // Set the material for the bar.
            Renderer renderer = cylinder.GetComponent<Renderer>();
            renderer.material = graphMaterial;
            renderer.material.color = Color.white;

            // Add the edge to the dictionary, indexed by it's edge data.
            this.Edges.Add(edge, cylinder);
        }
    }

    private GraphData GenerateTestGraph()
    {
        GraphData data = new GraphData();

        System.Random rand = new System.Random();
        
        for (int i = 0; i < this.NumNodes; i++)
        {
            // Put the number in as the node name. This ensures
            //      they are unique.
            data.Nodes.Add(new GraphDataNode(i.ToString()));
        }

        for (int j = 0; j < this.NumEdges; j++)
        {
            // Pick a random start and end node, ensuring that
            //      they are not the same node.
            int fromNodeNum = rand.Next(0, this.NumNodes - 1);
            int toNodeNum = rand.Next(fromNodeNum + 1, fromNodeNum + this.NumNodes - 1) % this.NumNodes;
            Debug.Log("New Edge #" + j + ": " + fromNodeNum + " -> " + toNodeNum);

            data.EdgeList.Add(new GraphDataEdge()
            {
                From = fromNodeNum.ToString(),
                To = toNodeNum.ToString()
            });
        }

        return data;

        //return new GraphData()
        //{
        //    Nodes = new List<string>()
        //    {
        //        "A",
        //        "B"
        //    },
        //    EdgeList = new List<GraphDataEdge>()
        //    {
        //        new GraphDataEdge()
        //        {
        //            From = "A",
        //            To = "B"
        //        }
        //    }
        //};
    }

    private Material GetMaterial(string path)
    {
        Material asset = null;

        try
        {
            asset = Resources.Load(path, typeof(Material)) as Material;
        }
        catch (System.Exception ex)
        {
            // Nothing to do but continue...
        }

        return asset;
    }
}
