using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEngine;

public class GraphDataReader : MonoBehaviour
{
    public string FileName;

    // Whether the second through fourth item on each line represents a position
    //      for the node or not. If not, then all items after the first are assumed
    //      to be nodes the first node is connected to.
    public bool PrecalculatedPosition;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    /// <summary>
    /// Reads from an adjacency list, with the first node on each
    ///         line assumed to be the From node, and the remaining
    ///         nodes on each line to be the To nodes, and each
    ///         node separated by a comma.
    /// </summary>
    /// <returns></returns>
    public GraphData GetData()
    {
        GraphData data = new GraphData();

        string asset = null;
        string path = Path.Combine(Application.streamingAssetsPath + "/" + this.FileName);

        try
        {
            asset = File.ReadAllText(path);
        }
        catch (Exception ex)
        {
            // Nothing to do but continue...
            // Please don't ask about this debug log, it was a rough time.
            Debug.Log("Error lolz " + path);
        }

        if (asset == null)
        {
            return data;
        }

        // Extract the lines from the CSV file.
        string[] lines = asset.Split('\n');

        // Print a warning to the Unity console if the file is found to be empty.
        //      Note that the foreach loop below will not execute in this case,
        //      and the empty list of vectors will be returned.
        if (lines.Length == 0)
        {
            Debug.LogWarning("Empty input file");
        }

        // For each line...
        foreach (string line in lines)
        {
            // Extract the values on that line.
            string[] values = line.Split(',');

            // Skip any extra new line characters.
            if (String.IsNullOrWhiteSpace(values[0]))
            {
                continue;
            }

            //Debug.Log(Uri.EscapeDataString(line.TrimEnd()));

            // The first value on the line is the from node, and
            //      if the precalculated position flag is NOT set,
            //      the remaining values on the line are the to
            //      nodes. Otherwise, the next three values are the
            //      position of the node in XYZ space, and the
            //      remaining values after that are the to nodes.
            string fromNode = values[0];
            int startPositionForToNodes = this.PrecalculatedPosition ? 4 : 1;
            string[] toNodes = values.Skip(startPositionForToNodes).ToArray();

            // Add only new nodes to the node list.
            if (data.Nodes.Where(n => n.Name == fromNode).FirstOrDefault() == null)
            {
                GraphDataNode node = new GraphDataNode(fromNode);

                // Populate the position data if the precomputed
                //      positions flag is set.
                if (this.PrecalculatedPosition)
                {
                    try
                    {
                        //string xPos = "X POS: " + float.Parse(values[1]).ToString();
                        //string yPos = "Y POS: " + float.Parse(values[2]).ToString();
                        //string zPos = "Z POS: " + float.Parse(values[3]).ToString();
                        //string myMessage = "Node position read at: (" + xPos + " , " + yPos + " , " + zPos + ")";
                        //Debug.Log(myMessage);
                        node.X = float.Parse(values[1]);
                        node.Y = float.Parse(values[2]);
                        node.Z = float.Parse(values[3]);
                    }
                    catch(Exception ex)
                    {
                        //string message = "ERROR ON NODE ROW " + fromNode.ToString() + " File Line: " + lines.ToList().IndexOf(line);
                        //Debug.Log(message);
                    }
                }

                data.Nodes.Add(node);
            }

            // For each To node in the list...
            foreach (string toNode in toNodes)
            {
                // Add only new nodes to the node list.
                //if (data.Nodes.Where(n => n.Name == toNode).FirstOrDefault() == null)
                //{
                //    data.Nodes.Add(new GraphDataNode(toNode));
                //}

                // Skip any extra new line characters.
                if (String.IsNullOrWhiteSpace(toNode))
                {
                    continue;
                }

                // Create and add the edge to the edge list.
                GraphDataEdge edge = new GraphDataEdge()
                {
                    From = fromNode,
                    To = toNode.TrimEnd()
                };
                data.EdgeList.Add(edge);
            }

            //string newMessage = "Total Nodes: " + data.Nodes.Count + " Total Edges: " + data.EdgeList.Count;
            //Debug.Log(newMessage);
        }

        return data;
    }
}

public class GraphData
{
    public List<GraphDataNode> Nodes { get; set; }
    public List<GraphDataEdge> EdgeList { get; set; }

    public GraphData()
    {
        this.Nodes = new List<GraphDataNode>();
        this.EdgeList = new List<GraphDataEdge>();
    }
}

public class GraphDataEdge
{
    public string From { get; set; }
    public string To { get; set; }
    public int Weight { get; set; }

    public GraphDataEdge()
    {
        this.Weight = 1;
    }
}

public class GraphDataNode
{
    public string Name { get; set; }
    public float X { get; set; }
    public float Y { get; set; }
    public float Z { get; set; }

    public GraphDataNode(string name)
    {
        this.Name = name;
        this.X = 0;
        this.Y = 0;
        this.Z = 0;
    }
}
