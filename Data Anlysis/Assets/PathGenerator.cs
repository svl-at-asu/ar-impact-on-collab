using Assets;
using Helpers;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class PathGenerator : MonoBehaviour
{
    public int TeamNumber;
    public int TrialNumber;
    public int DeviceNumber;

    public bool ShowBothPaths;

    public Vector3 P1Offset;
    public Vector3 P2Offset;

    public float PathThickness;
    public Color P1StartColor;
    public Color P1EndColor;
    public Color P2StartColor;
    public Color P2EndColor;

    private Dictionary<string, TrialRecordedData> TrialDatas { get; set; }
    private static string FilePath = "C:\\Users\\Public\\Documents\\";
    private int imageCount;

    // Start is called before the first frame update
    void Start()
    {
        this.imageCount = 0;

        this.InitializePath();

        if (this.ShowBothPaths)
        {
            int otherDeviceNumber = (this.DeviceNumber + 1) % 2;
            this.InitializePath(this.TeamNumber, this.TrialNumber, otherDeviceNumber, this.P2StartColor, this.P2EndColor, this.P2Offset);
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            this.ClearPaths();

            this.DeviceNumber++;

            if (this.InitializePath() == false)
            {
                this.DeviceNumber = 0;
                this.TrialNumber++;

                if (this.InitializePath() == false)
                {
                    this.TrialNumber = 0;
                    this.TeamNumber++;

                    if (this.InitializePath() == false)
                    {
                        // Do nothing.
                    }
                }
            }

            Debug.Log("Advanced!");
        }
    }

    public bool Initialize(Dictionary<string, TrialRecordedData> trialDatas)
    {
        this.TrialDatas = trialDatas;
        return this.InitializePath(this.TeamNumber, this.TrialNumber, this.DeviceNumber, this.P1StartColor, this.P1EndColor, this.P1Offset);
    }

    public bool InitializePath()
    {
        return this.InitializePath(this.TeamNumber, this.TrialNumber, this.DeviceNumber, this.P1StartColor, this.P1EndColor, this.P1Offset);
    }

    public bool InitializePath(int teamNumber, int trialNumber, int deviceNumber, Color startColor, Color endColor, Vector3 offset)
    {
        DataReader reader = this.GetComponent<DataReader>();
        List<ViewData> viewData = reader.GetPathData(teamNumber, trialNumber, deviceNumber);

        if (viewData.Count == 0)
        {
            string missingPathDataErrorMessage = "No path data for team " + teamNumber + ", trial " + trialNumber + ", device " + deviceNumber;
            Debug.LogWarning(missingPathDataErrorMessage);
            return false;
        }

        // Load the graph matieral once before entering the loop, for efficiency,
        //      since the same material will be applied to all segments.
        Material graphMaterial = this.GetMaterial("PathMaterial");

        // For the first viewData until the one before last...
        for (int index = 0; index < viewData.Count - 1; index++)
        {
            // Make the cylinder for the sample segment.
            Vector3 fromPoint = viewData[index].Position;
            Vector3 toPoint = viewData[index + 1].Position;

            // Create a new cylinder to model the segment.
            GameObject cylinder = GameObject.CreatePrimitive(PrimitiveType.Cylinder);

            // Make the segment a child of this game object.
            cylinder.transform.parent = this.gameObject.transform;

            // The length of the cylinder is half the distance between positions
            //      (since the cylinder is scaled both directions by the size).
            float length = (toPoint - fromPoint).magnitude / 2.0f;
            cylinder.transform.localScale = new Vector3(this.PathThickness, length, this.PathThickness);

            // Angle the segment so the up (y) axis aligns with the two positions.
            cylinder.transform.up = (toPoint - fromPoint);

            // Position the segment's center to halfway between the two positions.
            cylinder.transform.localPosition = fromPoint + ((toPoint - fromPoint) / 2.0f) + offset;

            // Set the material for the segment.
            Renderer renderer = cylinder.GetComponent<Renderer>();
            renderer.material = graphMaterial;
            renderer.material.color = Color.Lerp(startColor, endColor, index / (float)viewData.Count);
        }

        string pathGeneratedMessage = "Path generated for team " + teamNumber + ", trial " + trialNumber;
        Debug.Log(pathGeneratedMessage);

        return true;
    }

    public void ClearPaths()
    {
        for (int i = 0; i < this.transform.childCount; i++)
        {
            this.transform.GetChild(i).gameObject.SetActive(false);
        }
    }

    public void CaptureScreenShot()
    {
        string path = Path.Combine(PathGenerator.FilePath + DataCleaner.GetTrialDataKey(this.TeamNumber, this.TrialNumber, this.DeviceNumber));

        if (File.Exists(path + "_Image" + this.imageCount + ".png"))
        {
            this.imageCount++;
        }
        else
        {
            this.imageCount = 0;
        }

        path += "_Image" + this.imageCount + ".png";
        ScreenCapture.CaptureScreenshot(path);
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
