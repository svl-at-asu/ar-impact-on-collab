using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class BarChartGenerator : MonoBehaviour
{
    // Parameters to set in Unity editor for testing.
    public bool TestMode = false;
    public int NumOfColumns;
    public int NumOfRows;

    // The size of the chart, configured in the Unity editor.
    public Vector3 ChartSize;

    // The size of the spacing between bars in the chart. Zero
    //      corresponds to no spacing. The absolute value is taken,
    //      so negative values are equivalent to their positive
    //      counterparts.
    public float GutterSize;

    // Controls whether the ticks appear on the bars.
    public bool DisplayTicksOnBars;

    // Controls the interval of the ticks.
    public float TickFrequency;

    private float BarTickOffset = 0.005f;

    // Stores the bars in the chart.
    private List<GameObject> Bars { get; set; }

    private Vector2 BarSize { get; set; }

    private CsvDataReader3D FileDataReader { get; set; }

    private LineRenderer XAxisRenderer { get; set; }
    private LineRenderer YAxisRenderer { get; set; }
    private LineRenderer ZAxisRenderer { get; set; }

    // Start is called before the first frame update
    void Start()
    {
        this.InitializeBars();
        this.InitializeAxes();
        this.InitializeBoundingBox();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void InitializeBars()
    {
        this.Bars = new List<GameObject>();

        float tallestBarHeight = 0.0f;

        // Check to see that the chart can be meaningfully be created.
        //      Returning prevents any divide by zero errors in sizing.
        if (this.ChartSize.x == 0 || this.ChartSize.y == 0 || this.ChartSize.z == 0)
        {
            Debug.LogWarning("Bar Chart cannot be drawn. One of the Chart size dimensions is set to zero.");
            return;
        }
        if (this.DisplayTicksOnBars && this.TickFrequency <= 0)
        {
            Debug.LogWarning("Ticks cannot be drawn. The tick frequency must be greater than zero.");
        }
        if (this.TestMode && this.NumOfColumns == 0 || this.NumOfRows == 0)
        {
            Debug.LogWarning("Bar Chart cannot be drawn. The number of columns or number of rows is set to zero for the test data.");
            return;
        }

        List<Vector4> data = new List<Vector4>();

        if (this.TestMode)
        {
            // Generate the data for the bars.
            for (int row = 0; row < this.NumOfRows; row++)
            {
                for (int column = 0; column < this.NumOfColumns; column++)
                {
                    // Set the height to a random number.
                    data.Add(new Vector4(
                        row,
                        column,
                        Random.value * this.ChartSize.y,
                        1f
                        ));
                }
            }

            // This will cancel out the operation setting the bar's Y scale, so that
            //      the scale is just the bar's Z data.
            tallestBarHeight = this.ChartSize.y;
        }
        else
        {
            // Get a reference to the file data reader.
            this.FileDataReader = this.GetComponent(typeof(CsvDataReader3D)) as CsvDataReader3D;

            // If no file data reader component is found, revert back to the test
            //      chart data, and print a warning to the Unity console.
            if (this.FileDataReader == null)
            {
                this.InitializeBars();
                Debug.LogWarning("No CsvDataReader3D component found. Reverting back to test chart data.");
                return;
            }

            // Get the data from the file data reader.
            data = this.FileDataReader.GetData();

            // Measure the number of bars needed in each dimension.
            //      This code currently assumes all values are positive.
            this.NumOfRows = 0;
            this.NumOfColumns = 0;
            foreach (Vector3 barData in data)
            {
                if (barData.x > this.NumOfRows)
                {
                    this.NumOfRows = Mathf.RoundToInt(barData.x);
                }
                if (barData.y > this.NumOfColumns)
                {
                    this.NumOfColumns = Mathf.RoundToInt(barData.y);
                }
            }

            // Accounts for zero-indexed file.
            this.NumOfRows++;
            this.NumOfColumns++;
        }

        // Calculate the size of each bar. Bars are evenly distributed across the
        //      total given space, so the size of an individual bar is simply the
        //      total divided by the number of bars.
        this.BarSize = new Vector2(
            this.ChartSize.x / this.NumOfRows,
            this.ChartSize.z / this.NumOfColumns
            );

        // Calculate the vertical offset for the bars.
        List<float> heightValues = new List<float>();
        data.ForEach(b => heightValues.Add(b.z));
        float minHeight = heightValues.Min();
        float maxHeight = heightValues.Max();
        tallestBarHeight = maxHeight - minHeight;

        Material barMaterial = this.GetMaterial("PointMaterial");

        // Generate the bars.
        foreach (Vector3 barData in data)
        {
            // Create a new cube to model a bar in the bar chart.
            GameObject cube = GameObject.CreatePrimitive(PrimitiveType.Cube);

            // Make the bar a child of the chart.
            cube.transform.parent = this.gameObject.transform;

            float height = (minHeight > 0) ? barData.z : barData.z + Mathf.Abs(minHeight);

            // Display the tick marks on the bar.
            if (this.DisplayTicksOnBars)
            {
                this.GenerateBarTicks(cube, height);
            }

            // Scale the bar based on the the previously calculated bar size.
            //      The height is scaled such that the tallest bar vertically
            //          fills the chart.
            cube.transform.localScale = new Vector3(
                this.BarSize.x - Mathf.Abs(this.GutterSize),
                this.ChartSize.y * (height / tallestBarHeight),
                this.BarSize.y - Mathf.Abs(this.GutterSize));

            // Position the bar so that it is adjacent to the previous bar.
            //      Note that the origin is in the middle of the first bar by default,
            //      so each bar must be shifted by half of the bar size.
            cube.transform.localPosition = new Vector3(
                (this.BarSize.x / 2.0f) + barData.x * this.BarSize.x,
                cube.transform.localScale.y / 2f,
                (this.BarSize.y / 2.0f) + barData.y * this.BarSize.y);

            // Set the material for the bar.
            Renderer renderer = cube.GetComponent<Renderer>();
            renderer.material = barMaterial;
            renderer.material.color = Color.white;

            // Add the bar to the list.
            this.Bars.Add(cube);
        }
    }

    private void GenerateBarTicks(GameObject bar, float barHeight)
    {
        // The bar needs a tick for each tick frequency, plus one for the 
        //      bottom of the bar. Take the floor of this number, because
        //      whatever is left at the top will not have a tick above it.
        int numOfTicks = Mathf.FloorToInt(barHeight / this.TickFrequency) + 1;

        // Load the point matieral once before entering the loop, for efficiency,
        //      since the same material will be applied to all points.
        Material tickMaterial = this.GetMaterial("BarTickMaterial");

        // For each tick on the bar...
        for (int i = 0; i < numOfTicks; i++)
        {
            // Create a game object to hold the tick.
            GameObject tickObject = new GameObject();

            // Parent the bar to the tick game object.
            tickObject.transform.parent = bar.transform;

            // Create the line renderer components on the tick object, 
            //      one for each side of the bar.
            LineRenderer tickRenderer = tickObject.AddComponent(typeof(LineRenderer)) as LineRenderer;
            tickRenderer.useWorldSpace = false;

            // Define the tick endpoint positions for each side.
            //      The Y starts at negative half of the scale, and goes up in
            //          increments based on the tick frequency. The division by
            //          height is to account for the scaling later (code is in
            //          wrong order... should have been scaled first).
            //      The X and Z are going to be offset by half of the cube size
            //          in their respective directions, depending on which side
            //          of the bar.
            Vector3[] leftPositions = new Vector3[5]
            {
                            new Vector3(-bar.transform.localScale.x / 2 - this.BarTickOffset,
                                        -bar.transform.localScale.y / 2 + (this.TickFrequency / barHeight) * i,
                                        -bar.transform.localScale.z / 2 - this.BarTickOffset),
                            new Vector3(-bar.transform.localScale.x / 2 - this.BarTickOffset,
                                        -bar.transform.localScale.y / 2 + (this.TickFrequency / barHeight) * i,
                                        bar.transform.localScale.z / 2 + this.BarTickOffset),
                            new Vector3(bar.transform.localScale.x / 2 + this.BarTickOffset,
                                        -bar.transform.localScale.y / 2 + (this.TickFrequency / barHeight) * i,
                                        bar.transform.localScale.z / 2 + this.BarTickOffset),
                            new Vector3(bar.transform.localScale.x / 2 + this.BarTickOffset,
                                        -bar.transform.localScale.y / 2 + (this.TickFrequency / barHeight) * i,
                                        -bar.transform.localScale.z / 2 - this.BarTickOffset),
                            new Vector3(-bar.transform.localScale.y / 2 - this.BarTickOffset,
                                        -bar.transform.localScale.x / 2 + (this.TickFrequency / barHeight) * i,
                                        -bar.transform.localScale.z / 2 - this.BarTickOffset),
            };

            // Set the tick endpoint positions.
            tickRenderer.positionCount = leftPositions.Length;
            tickRenderer.SetPositions(leftPositions);

            // Set the start and end colors for each side.
            tickRenderer.material = tickMaterial;
            tickRenderer.material.color = Color.white;
            tickRenderer.startColor = Color.red;
            tickRenderer.endColor = Color.red;

            // Set the start and end widths for each side.
            tickRenderer.startWidth = 0.01f;
            tickRenderer.endWidth = 0.01f;
        }
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
