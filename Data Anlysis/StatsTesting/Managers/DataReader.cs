using StatsTesting.Models;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;

namespace StatsTesting.Managers
{
    public static class DataReader
    {
        public static List<TrialData> ReadAllData(string fileName, string filePath)
        {
            string text = File.ReadAllText(filePath + fileName);

            // Extract the lines from the CSV file.
            string[] lines = text.Split('\n');

            // Print a warning to the Unity console if the file is found to be empty.
            //      Note that the foreach loop below will not execute in this case,
            //      and the empty list of vectors will be returned.
            if (lines.Length == 0)
            {
                Console.WriteLine("Empty input file");
                return new List<TrialData>();
            }

            // Remove the header row.
            lines = lines.Skip(1).ToArray();

            List<TrialData> trialDataRecords = new List<TrialData>();
            int linesParsed = 0;

            // For each line...
            foreach (string line in lines)
            {
                int lineNumber = lines.ToList().IndexOf(line);

                // Extract the values on that line.
                string[] values = line.Split(',');

                // If the line doesn't contain at least six values, move on to the next.
                if (values.Length < 27)
                {
                    // Print an error message to console showing line number and content
                    //      that caused the error.
                    Console.WriteLine("Missing required data on line " + lineNumber);
                    continue;
                }

                try
                {
                    TrialData trialData = new TrialData()
                    {
                        Team = int.Parse(values[0]),
                        Modality = (Modality)Enum.Parse(typeof(Modality), values[2]),
                        ChartType = (ChartType)Enum.Parse(typeof(ChartType), values[3]),
                        TaskType = (TaskType)Enum.Parse(typeof(TaskType), values[4]),
                        Task = values[5],
                        ConvoGrounding = int.Parse(values[15]),
                        TaskTime = TimeSpan.Parse(values[18]),
                        GesturesPerTime = double.Parse(values[20]),
                        PercentGesturesP1 = double.Parse(values[21]),
                        UtterancesPerTime = double.Parse(values[23]),
                        PercentUtterancesP1 = double.Parse(values[24]),
                        LooksPerTime = double.Parse(values[26])
                    };

                    double dummy;
                    bool parseSuccess;

                    // Parse the PA_Distance value.
                    parseSuccess = double.TryParse(values[28], out dummy);
                    if (parseSuccess)
                    {
                        trialData.PA_Distance = dummy;
                    }
                    else
                    {
                        trialData.PA_Distance = null;
                    }

                    // Parse the AverageDistance value.
                    parseSuccess = double.TryParse(values[32], out dummy);
                    if (parseSuccess)
                    {
                        trialData.AverageDistance = dummy;
                    }
                    else
                    {
                        trialData.AverageDistance = null;
                    }

                    // Parse the PA_PercentDistance value.
                    parseSuccess = double.TryParse(values[33], out dummy);
                    if (parseSuccess)
                    {
                        trialData.PA_PercentDistance = dummy;
                    }
                    else
                    {
                        trialData.PA_PercentDistance = null;
                    }

                    // Parse Hololens - specific values.
                    if (trialData.Modality == Modality.Hololens)
                    {
                        // Parse the PB_Distance value.
                        parseSuccess = double.TryParse(values[29], out dummy);
                        if (parseSuccess)
                        {
                            trialData.PB_Distance = dummy;
                        }
                        else
                        {
                            trialData.PB_Distance = null;
                        }

                        // Parse the PA_PercentBelowAngleThreshold value.
                        parseSuccess = double.TryParse(values[30], out dummy);
                        if (parseSuccess)
                        {
                            trialData.PA_PercentBelowAngleThreshold = dummy;
                        }
                        else
                        {
                            trialData.PA_PercentBelowAngleThreshold = null;
                        }

                        // Parse the PB_PercentBelowAngleThreshold value.
                        parseSuccess = double.TryParse(values[31], out dummy);
                        if (parseSuccess)
                        {
                            trialData.PB_PercentBelowAngleThreshold = dummy;
                        }
                        else
                        {
                            trialData.PB_PercentBelowAngleThreshold = null;
                        }

                        // Parse the AveragePercentTimeBelowThreshold value.
                        parseSuccess = double.TryParse(values[34], out dummy);
                        if (parseSuccess)
                        {
                            trialData.AveragePercentTimeBelowThreshold = dummy;
                        }
                        else
                        {
                            trialData.AveragePercentTimeBelowThreshold = null;
                        }
                    }

                    trialDataRecords.Add(trialData);

                    linesParsed++;
                }
                catch (Exception ex)
                {
                    Console.WriteLine("Error parsing line " + lineNumber + " " + ex.Message + " " + line);
                }
            }

            Console.WriteLine(linesParsed + " lines successfully parsed.");
            return trialDataRecords;
        }
    }
}
