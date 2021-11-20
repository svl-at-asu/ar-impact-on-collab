using Assets;
using System.Collections;
using System.Collections.Generic;
using System.Data.Common;
using System.IO;
using System.Text;
using UnityEngine;

public class MovementsCalculator : MonoBehaviour
{
    private static string FilePath = "C:\\Users\\Public\\Documents\\";

    public bool RunAllTrials;
    public int NumberOfTeams;
    public int TeamNumber;
    public int TrialNumber;

    // Start is called before the first frame update
    void Start()
    {
        if (this.RunAllTrials)
        {
            this.CalculateAllTrials();
        }
        else
        {
            this.CalculateTrial(this.TeamNumber, this.TrialNumber);
        }

        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void CalculateTrial(int team, int trial)
    {
        StringBuilder builder = new StringBuilder();
        string header = this.GetTrialDataHeader();
        builder.Append(header);

        string dataLine = this.GetTrialDataLine(team, trial);
        builder.Append(dataLine);

        string path = Path.Combine(MovementsCalculator.FilePath, "Team_" + team + "Trial_" + trial + "MovementsData.csv");

        string dataString = builder.ToString();
        File.WriteAllText(path, dataString);
    }

    public void CalculateAllTrials()
    {
        StringBuilder builder = new StringBuilder();
        string header = this.GetTrialDataHeader();
        builder.Append(header);

        for (int team = 1; team <= this.NumberOfTeams; team++)
        {
            for (int trial = 1; trial < 25; trial++)
            {
                string dataLine = this.GetTrialDataLine(team, trial);
                builder.Append(dataLine);
            }
        }

        string path = Path.Combine(MovementsCalculator.FilePath, "MovementsData.csv");

        string dataString = builder.ToString();
        File.WriteAllText(path, dataString);
    }

    private string GetTrialDataHeader()
    {
        StringBuilder builder = new StringBuilder();
        // Write the header.
        builder.Append("Team");
        builder.Append(",");
        builder.Append("Trial");
        builder.Append(",");
        builder.Append("P_A Distance");
        builder.Append(",");
        builder.Append("P_B Distance");
        builder.Append(",");
        builder.Append("P_A Percent Below 43.3 Degrees");
        builder.Append(",");
        builder.Append("P_B Percent Below 43.3 Degrees");
        builder.Append("\n");

        return builder.ToString();
    }

    private string GetTrialDataLine(int team, int trial)
    {
        DataReader reader = this.GetComponent<DataReader>();
        List<ViewData> p1ViewData = reader.GetPathData(team, trial, 0);
        List<ViewData> p2ViewData = reader.GetPathData(team, trial, 1);

        StringBuilder builder = new StringBuilder();
        if (p1ViewData.Count > 0)
        {
            float aDistance = this.CalculateDistance(p1ViewData);

            builder.Append(team);
            builder.Append(",");
            builder.Append(trial);
            builder.Append(",");
            builder.Append(aDistance);

            if (p2ViewData.Count > 0)
            {

                float bDistance = this.CalculateDistance(p2ViewData);
                float aPercent;
                float bPercent;
                this.CalculateAngleStats(p1ViewData, p2ViewData, out aPercent, out bPercent);

                builder.Append(",");
                builder.Append(bDistance);
                builder.Append(",");
                builder.Append(aPercent);
                builder.Append(",");
                builder.Append(bPercent);
            }

            builder.Append("\n");

            string message = "Processed data for team " + team + ", trial " + trial;
            Debug.Log(message);
        }

        return builder.ToString();
    }

    public float CalculateDistance(List<ViewData> path)
    {
        float total = 0;
        for (int i = 0; i < path.Count - 1; i++)
        {
            total += Vector3.Distance(path[i].Position, path[i + 1].Position);
        }

        return total;
    }

    /// <summary>
    /// 
    /// </summary>
    /// <param name="pathA"></param>
    /// <param name="pathB"></param>
    /// <param name="a">The percentage of time A had below 43.3 degrees between B and the origin.</param>
    /// <param name="b">The percentage of time B had below 43.3 degrees between A and the origin.</param>
    public void CalculateAngleStats(List<ViewData> pathA, List<ViewData> pathB, out float a, out float b)
    {
        // Only go through as many values as there are matches.
        int smallerCount = Mathf.Min(pathA.Count, pathB.Count);
        int p1AngleBelowThresholdCount = 0;
        int p2AngleBelowThresholdCount = 0;

        for (int i = 0; i < smallerCount; i++)
        {
            float p1Angle = Vector3.Angle(-pathA[i].Position, pathB[i].Position - pathA[i].Position);
            float p2Angle = Vector3.Angle(-pathB[i].Position, pathA[i].Position - pathB[i].Position);

            if (p1Angle <= 43.3f)
            {
                p1AngleBelowThresholdCount++;
            }
            if (p2Angle <= 43.3f)
            {
                p2AngleBelowThresholdCount++;
            }
        }

        a = p1AngleBelowThresholdCount / (float)smallerCount;
        b = p2AngleBelowThresholdCount / (float)smallerCount;
    }
}
