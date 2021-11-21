using Assets;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEngine;

public class DataReader : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public List<ViewData> GetPathData(int teamNumber, int trialNumber, int deviceNumber)
    {
        string asset = null;
        string fileName = DataCleaner.GetTrialDataKey(teamNumber, trialNumber, deviceNumber);
        string path = Path.Combine(Application.streamingAssetsPath + "/PathData/" + fileName + ".csv");

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
            return new List<ViewData>();
        }

        List<ViewData> data = new List<ViewData>();

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

            // If the line doesn't contain exactly seven values, move on to the next.
            if (values.Length != 7)
            {
                // Print an error message to Unity console showing line number and content
                //      that caused the error.
                string lineParseErrorMessage = "Error parsing line #" + lines.ToList().IndexOf(line) + ": " + line;
                Debug.LogError(lineParseErrorMessage);
                continue;
            }

            try
            {
                DateTime timeStamp = DateTime.Parse(values[0]);
                float xPos = float.Parse(values[1]);
                float yPos = float.Parse(values[2]);
                float zPos = float.Parse(values[3]);
                float xRot = float.Parse(values[4]);
                float yRot = float.Parse(values[5]);
                float zRot = float.Parse(values[6]);
                ViewData viewData = new ViewData()
                {
                    Position = new Vector3(xPos, yPos, zPos),
                    Rotation = new Quaternion(xRot, yRot, zRot, 1.0f),
                    TimeStamp = timeStamp
                };

                data.Add(viewData);
            }
            catch (Exception ex)
            {
                Console.WriteLine("Error parsing line " + lines.ToList().IndexOf(line));
            }
        }

        string linesProcessedCountMessage = data.Count + " lines processed for file " + fileName;
        Debug.Log(linesProcessedCountMessage);

        // Return the completed list of vectors.
        return data;
    }
}
