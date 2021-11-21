using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEngine;
using UnityEngine.SocialPlatforms;

public class ScatterPlotGenerator : MonoBehaviour
{
    // Parameters to set in Unity editor for testing.
    public bool TestMode = false;
    public float NumPoints;
    public float PointMaxXValue;
    public float PointMaxYValue;
    public float PointMaxZValue;

    // The scale of the points in the chart.
    public float PointScale;

    // The size of the chart, configured in the Unity editor.
    public Vector3 ChartSize;

    // The minimum and maximum point sizes to scale all points between.
    public float MinPointSize;
    public float MaxPointSize;

    public string PointMaterialFileName;

    // Stores the points in the plot.
    private List<GameObject> Points { get; set; }

    private CsvDataReader3D FileDataReader { get; set; }

    private LineRenderer XAxisRenderer { get; set; }
    private LineRenderer YAxisRenderer { get; set; }
    private LineRenderer ZAxisRenderer { get; set; }

    // Start is called before the first frame update
    void Start()
    {
        if (this.TestMode)
        {
            this.InitializePointsTest();
        }
        else
        {
            this.InitializePoints();
        }
        this.InitializeAxes();
        this.InitializeBoundingBox();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void InitializePointsTest()
    {
        this.Points = new List<GameObject>();

        // Check to see that the chart can be meaningfully be created.
        //      Returning prevents any divide by zero errors in sizing.
        if (this.ChartSize.x == 0 || this.ChartSize.y == 0 || this.ChartSize.z == 0)
        {
            Debug.LogWarning("Scatter Plot cannot be drawn. One of the Chart size dimensions is set to zero.");
            return;
        }
        if (this.PointScale <= 0)
        {
            Debug.LogWarning("Scatter Plot cannot be drawn. Point Scale must be greater than 0.");
            return;
        }
        if (this.NumPoints <= 0)
        {
            Debug.LogWarning("Scatter Plot cannot be drawn. Number of points must be greater than 0 for test data.");
            return;
        }
        if (this.PointMaxXValue <= 0 || this.PointMaxYValue <= 0 || this.PointMaxZValue <= 0)
        {
            Debug.LogWarning("Scatter Plot cannot be drawn. One of the point max values is set to zero for the test data.");
            return;
        }

        List<Vector3> data = new List<Vector3>();

        for (int i = 0; i < this.NumPoints; i++)
        {
            data.Add(new Vector3(
                UnityEngine.Random.value * this.PointMaxXValue,
                UnityEngine.Random.value * this.PointMaxYValue,
                UnityEngine.Random.value * this.PointMaxZValue)
                );
        }

        // Measure the scale factor of the chart to fit all points in the chart size.
        //      This code currently assumes all values are positive.
        float xGreatest = 0f;
        float yGreatest = 0f;
        float zGreatest = 0f;
        foreach (Vector3 pointData in data)
        {
            if (pointData.x > xGreatest)
            {
                xGreatest = pointData.x;
            }
            if (pointData.y > yGreatest)
            {
                yGreatest = pointData.y;
            }
            if (pointData.z > zGreatest)
            {
                zGreatest = pointData.z;
            }
        }

        // Generate the points.
        foreach (Vector3 pointData in data)
        {
            // Create a new sphere to model the point.
            GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);

            // Make the point a child of the chart.
            sphere.transform.parent = this.gameObject.transform;

            // Scale the point according to the point scale set in the Unity editor.
            sphere.transform.localScale = new Vector3(this.PointScale, this.PointScale, this.PointScale);

            // Position the sphere based on the data, relative to the size of the chart.
            //      Note that the "Z" value of the data is placed in the "Y"
            //      position. This is because Unity has the Y axis pointing
            //      up instead of the Z axis.
            sphere.transform.localPosition = new Vector3(
                (pointData.x / xGreatest) * this.ChartSize.x,
                (pointData.z / zGreatest) * this.ChartSize.z,
                (pointData.y / yGreatest) * this.ChartSize.y
                );

            // Add the point to the list.
            this.Points.Add(sphere);
        }
    }

    private void InitializePoints()
    {
        this.Points = new List<GameObject>();

        // Check to see that the chart can be meaningfully be created.
        //      Returning prevents any divide by zero errors in sizing.
        if (this.ChartSize.x == 0 || this.ChartSize.y == 0 || this.ChartSize.z == 0)
        {
            Debug.LogWarning("Scatter Plot cannot be drawn. One of the Chart size dimensions is set to zero.");
            return;
        }
        if (this.PointScale <= 0)
        {
            Debug.LogWarning("Scatter Plot cannot be drawn. Point Scale must be greater than 0.");
            return;
        }

        // Get a reference to the file data reader.
        this.FileDataReader = this.GetComponent(typeof(CsvDataReader3D)) as CsvDataReader3D;

        // If no file data reader component is found, revert back to the test
        //      chart data, and print a warning to the Unity console.
        if (this.FileDataReader == null)
        {
            this.InitializePointsTest();
            Debug.LogWarning("No CsvDataReader3D component found. Reverting back to test chart data.");
            return;
        }

        // Get the data from the file data reader.
        List<Vector4> data = this.FileDataReader.GetData();

        List<Vector4> scaledData = this.ScalePointsToChart(data);

        // Load the point matieral once before entering the loop, for efficiency,
        //      since the same material will be applied to all points.
        Material pointMaterial = this.GetPointMaterial();

        // Generate the points.
        foreach (Vector4 pointData in scaledData)
        {
            // Create a new sphere to model the point.
            GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);

            // Make the point a child of the chart.
            sphere.transform.parent = this.gameObject.transform;

            // Scale the point according to the point scale set in the Unity editor.
            sphere.transform.localScale = new Vector3(pointData.w, pointData.w, pointData.w);

            // Position the sphere based on the data, relative to the size of the chart.
            //      Note that the "Z" value of the data is placed in the "Y"
            //      position. This is because Unity has the Y axis pointing
            //      up instead of the Z axis.
            sphere.transform.localPosition = (Vector3)pointData + (this.ChartSize / 2f);

            // Set the material for the point.
            Renderer renderer = sphere.GetComponent<Renderer>();
            renderer.material = pointMaterial;
            renderer.material.color = Color.white;

            // Add the point to the list.
            this.Points.Add(sphere);
        }
    }

    private List<Vector4> ScalePointsToChart(List<Vector4> unscaledPoints)
    {
        // Return an empty list if given an empty list.
        if (unscaledPoints.Count == 0)
        {
            return new List<Vector4>();
        }

        // Measure the scale factor of the chart to fit all points in the chart size.
        List<float> xValues = new List<float>();
        List<float> yValues = new List<float>();
        List<float> zValues = new List<float>();
        List<float> wValues = new List<float>();
        foreach (Vector4 pointData in unscaledPoints)
        {
            xValues.Add(pointData.x);
            yValues.Add(pointData.y);
            zValues.Add(pointData.z);
            wValues.Add(pointData.w);
        }

        // Get references to the min and max valus (doing this in advance of the
        //      loop for performance).
        float xMin = xValues.Min();
        float yMin = yValues.Min();
        float zMin = zValues.Min();
        float wMin = wValues.Min();
        float xMax = xValues.Max();
        float yMax = yValues.Max();
        float zMax = zValues.Max();
        float wMax = wValues.Max();

        // Find the dimension with the greatest range, as the chart will be scaled
        //      to fit this dimension. Attempting to scale by each dimension
        //      independently would lead to visual distortion (different scales on
        //      each axis relative to physical realtiy and each other).
        float[] ranges = { Mathf.Abs(xMax - xMin), Mathf.Abs(yMax - yMin), Mathf.Abs(zMax - zMin) };
        float maxRange = Mathf.Max(ranges);

        // Precompute some scaling values for efficiency.
        float chartRange = this.ChartSize[ranges.ToList().IndexOf(maxRange)];
        float scaleFactor = chartRange / maxRange;

        // Scale each point.
        List<Vector4> scaledPoints = new List<Vector4>();
        foreach (Vector4 unscaledPoint in unscaledPoints)
        {
            // Note that w is scaled independently of the spatial dimensions.
            scaledPoints.Add(new Vector4(
                ((unscaledPoint.x - xMin) * scaleFactor) - (this.ChartSize.x / 2f),
                ((unscaledPoint.y - yMin) * scaleFactor) - (this.ChartSize.y / 2f),
                ((unscaledPoint.z - zMin) * scaleFactor) - (this.ChartSize.z / 2f),
                ((unscaledPoint.w - wMin) * (this.MaxPointSize - this.MinPointSize) / (wMax - wMin)) + this.MinPointSize
                ));
        }

        return scaledPoints;
    }

    private Material GetPointMaterial()
    {
        Material asset = null;
        // Empty path for a resource directly in the resources folder.
        string path = "PointMaterial";

        try
        {
            asset = Resources.Load(path, typeof(Material)) as Material;
        }
        catch (Exception ex)
        {
            // Nothing to do but continue...
        }

        return asset;
    }

    private void InitializeAxes()
    {
        // Get the line renderers for each axis.
        GameObject xAxis = this.transform.Find("XAxisLine").gameObject;
        GameObject yAxis = this.transform.Find("YAxisLine").gameObject;
        GameObject zAxis = this.transform.Find("ZAxisLine").gameObject;
        this.XAxisRenderer = xAxis.GetComponent(typeof(LineRenderer)) as LineRenderer;
        this.YAxisRenderer = yAxis.GetComponent(typeof(LineRenderer)) as LineRenderer;
        this.ZAxisRenderer = zAxis.GetComponent(typeof(LineRenderer)) as LineRenderer;

        // Define the axis endpoint positions for each axis.
        Vector3[] xAxispositions = new Vector3[2]
        {
            new Vector3(0f, 0f, 0f),
            new Vector3(this.ChartSize.x, 0f, 0f)
        };
        Vector3[] yAxispositions = new Vector3[2]
        {
            new Vector3(0f, 0f, 0f),
            new Vector3(0f, this.ChartSize.y, 0f)
        };
        Vector3[] zAxispositions = new Vector3[2]
        {
            new Vector3(0f, 0f, 0f),
            new Vector3(0f, 0f, this.ChartSize.z)
        };

        // Set the axis endpoint positions.
        this.XAxisRenderer.positionCount = xAxispositions.Length;
        this.YAxisRenderer.positionCount = yAxispositions.Length;
        this.ZAxisRenderer.positionCount = zAxispositions.Length;
        this.XAxisRenderer.SetPositions(xAxispositions);
        this.YAxisRenderer.SetPositions(yAxispositions);
        this.ZAxisRenderer.SetPositions(zAxispositions);

        // Set the start and end colors for each axis.
        this.XAxisRenderer.startColor = Color.red;
        this.XAxisRenderer.endColor = Color.red;
        this.YAxisRenderer.startColor = Color.green;
        this.YAxisRenderer.endColor = Color.green;
        this.ZAxisRenderer.startColor = Color.blue;
        this.ZAxisRenderer.endColor = Color.blue;

        // Set the start and end widths for each axis.
        this.XAxisRenderer.startWidth = 0.005f;
        this.XAxisRenderer.endWidth = 0.005f;
        this.YAxisRenderer.startWidth = 0.005f;
        this.YAxisRenderer.endWidth = 0.005f;
        this.ZAxisRenderer.startWidth = 0.005f;
        this.ZAxisRenderer.endWidth = 0.005f;
    }

    public void InitializeBoundingBox()
    {
        // Get the line renderers for each bounding box side.
        GameObject leftSide = this.transform.Find("LeftBoundingBoxSide").gameObject;
        GameObject rightSide = this.transform.Find("RightBoundingBoxSide").gameObject;
        GameObject frontSide = this.transform.Find("FrontBoundingBoxSide").gameObject;
        GameObject backSide = this.transform.Find("BackBoundingBoxSide").gameObject;
        GameObject topSide = this.transform.Find("TopBoundingBoxSide").gameObject;
        GameObject bottomSide = this.transform.Find("BottomBoundingBoxSide").gameObject;
        LineRenderer leftSideRenderer = leftSide.GetComponent(typeof(LineRenderer)) as LineRenderer;
        LineRenderer rightSideRenderer = rightSide.GetComponent(typeof(LineRenderer)) as LineRenderer;
        LineRenderer frontSideRenderer = frontSide.GetComponent(typeof(LineRenderer)) as LineRenderer;
        LineRenderer backSideRenderer = backSide.GetComponent(typeof(LineRenderer)) as LineRenderer;
        LineRenderer topSideRenderer = topSide.GetComponent(typeof(LineRenderer)) as LineRenderer;
        LineRenderer bottomSideRenderer = bottomSide.GetComponent(typeof(LineRenderer)) as LineRenderer;

        // Define the edge endpoint positions for each side.
        Vector3[] leftPositions = new Vector3[3]
        {
            new Vector3(0f, this.ChartSize.y, 0f),
            new Vector3(0f, this.ChartSize.y, this.ChartSize.z),
            new Vector3(0f, 0f, this.ChartSize.z)
        };
        Vector3[] rightPositions = new Vector3[3]
        {
            new Vector3(this.ChartSize.x, this.ChartSize.y, 0f),
            new Vector3(this.ChartSize.x, this.ChartSize.y, this.ChartSize.z),
            new Vector3(this.ChartSize.x, 0f, this.ChartSize.z)
        };
        Vector3[] frontPositions = new Vector3[3]
        {
            new Vector3(0f, this.ChartSize.y, 0f),
            new Vector3(this.ChartSize.x, this.ChartSize.y, 0f),
            new Vector3(this.ChartSize.x, 0f, 0f)
        };
        Vector3[] backPositions = new Vector3[2]
        {
            new Vector3(0f, 0f, this.ChartSize.z),
            new Vector3(this.ChartSize.x, 0f, this.ChartSize.z)
        };
        Vector3[] topPositions = new Vector3[2]
        {
            new Vector3(0f, this.ChartSize.y, this.ChartSize.z),
            new Vector3(this.ChartSize.x, this.ChartSize.y, this.ChartSize.z)
        };
        Vector3[] bottomPositions = new Vector3[2]
        {
            new Vector3(this.ChartSize.x, 0f, 0f),
            new Vector3(this.ChartSize.x, 0f, this.ChartSize.z)
        };

        // Set the bounding box edge endpoint positions.
        leftSideRenderer.positionCount = leftPositions.Length;
        rightSideRenderer.positionCount = rightPositions.Length;
        frontSideRenderer.positionCount = frontPositions.Length;
        backSideRenderer.positionCount = backPositions.Length;
        topSideRenderer.positionCount = topPositions.Length;
        bottomSideRenderer.positionCount = bottomPositions.Length;
        leftSideRenderer.SetPositions(leftPositions);
        rightSideRenderer.SetPositions(rightPositions);
        frontSideRenderer.SetPositions(frontPositions);
        backSideRenderer.SetPositions(backPositions);
        topSideRenderer.SetPositions(topPositions);
        bottomSideRenderer.SetPositions(bottomPositions);

        // Put the renderers in a list, for easy iteration over to set the
        //      remaining properties that apply to all.
        List<LineRenderer> lineRenderers = new List<LineRenderer>()
        {
            leftSideRenderer,
            rightSideRenderer,
            frontSideRenderer,
            backSideRenderer,
            topSideRenderer,
            bottomSideRenderer
        };

        foreach (LineRenderer renderer in lineRenderers)
        {
            // Set the start and end colors for each side's edges.
            renderer.startColor = Color.white;
            renderer.endColor = Color.white;

            // Set the start and end widths for each side's edges.
            renderer.startWidth = 0.01f;
            renderer.endWidth = 0.01f;
        }
    }
}
