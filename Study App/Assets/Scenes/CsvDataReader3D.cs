using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEngine;

public class CsvDataReader3D : MonoBehaviour
{
    public string FileName;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public List<Vector4> GetData()
    {
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
            return new List<Vector4>();
        }

        List<Vector4> data = new List<Vector4>();

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

            // If the line doesn't contain exactly three values, move on to the next.
            if (values.Length != 3 && values.Length != 4)
            {
                // Print an error message to Unity console showing line number and content
                //      that caused the error.
                //Debug.LogError("Error parsing line #" + (new List<string>(lines)).IndexOf(line) + ": " + line);
                continue;
            }

            // Parse the values
            float x;
            float y;
            float z;
            float w = 1f; // Defaults to one, so all values are the same, if the file does not specify any.

            try
            {
                x = float.Parse(values[0]);
                y = float.Parse(values[1]);
                z = float.Parse(values[2]);

                // Only parse the 4th value if one exists.
                if (values.Count() > 3)
                {
                    // Trim End is necessary to get rid of the carriage return character.
                    w = float.Parse(values[3].TrimEnd());
                }
            }
            catch
            {
                // Print an error message to Unity console showing line number and content
                //      that caused the error.
                Debug.LogError("Error parsing line #" + (new List<string>(lines)).IndexOf(line) + ": " + line);
                continue;
            }

            // Add a new vector containing the parsed data from the line to the list of
            //      vectors.
            data.Add(new Vector4(x, y, z, w));
        }

        // Return the completed list of vectors.
        return data;
    }
}
