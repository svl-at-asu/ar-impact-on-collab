using Assets;
using Assets.Helpers;
using Helpers;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Security.Cryptography;
using System.Text;
using UnityEditor;
using UnityEngine;

/// <summary>
/// Takes an output file from the app, an input file of times to clip, and generates a clean data file.
/// </summary>
public class DataCleaner : MonoBehaviour
{
    public string FileOutputPath;
    public string ClippingTimesFileName;

    public string VideoTimesFileName;

    private Dictionary<string, VideoTimeData> VideoTimeDatas { get; set; }

    private List<SessionClippingData> SessionClippingDatas { get; set; }

    private Dictionary<string, TrialRecordedData> TrialDatas { get; set; }

    // Start is called before the first frame update
    void Start()
    {
        this.ReadVideoTimeDatas();

        // Read in the "instructions" on what to clip and when from the clipping data file.
        this.PopulateSessionClippingDatas();

        // Accumulate the clipped data.
        this.ClipDataFiles();
        //this.GeneratePaths(); // WARNING THIS TAKES A VERY LONG TIME, LIKE 2+ HOURS TO LOAD THE SCENE
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ReadVideoTimeDatas()
    {
        this.VideoTimeDatas = new Dictionary<string, VideoTimeData>();

        // Read in the file data.
        string asset = null;
        string path = Path.Combine(Application.streamingAssetsPath + "/" + this.VideoTimesFileName);

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
            string nullAssetErrorMessage = "File for video times not found: " + this.VideoTimesFileName;
            Debug.LogWarning(nullAssetErrorMessage);
            return;
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

        foreach (string line in lines)
        {
            // Extract the values on that line.
            string[] values = line.Split(',');

            // If the line doesn't contain exactly two values, move on to the next.
            if (values.Length != 4)
            {
                // Print an error message to Unity console showing line number and content
                //      that caused the error.
                string lineParseErrorMessage = "Error parsing line #" + values.ToList().IndexOf(line) + ": " + line;
                Debug.LogError(lineParseErrorMessage);
                continue;
            }

            try
            {
                int teamNumber = int.Parse(values[0]);
                Modality modality = (Modality)Enum.Parse(typeof(Modality), values[1]);

                VideoTimeData data = new VideoTimeData()
                {
                    VideoEndTime = DateTime.Parse(values[2]),
                    VideoLength = TimeSpan.Parse(values[3])
                };

                string key = DataCleaner.GetVideoDataKey(teamNumber, modality);
                this.VideoTimeDatas.Add(key, data);

                string videoDataParseMessage = "Video data parsed for team " + teamNumber + " " + modality.ToString() + ". Video starts at " + data.VideoBeginTime + " and lasts " + data.VideoLength + " and ends at " + data.VideoEndTime + ".";
                Debug.Log(videoDataParseMessage);
            }
            catch (Exception ex)
            {
                Console.WriteLine("Error parsing line " + values.ToList().IndexOf(line));
            }
        }
    }

    public void PopulateSessionClippingDatas()
    {
        string asset = null;
        string path = Path.Combine(Application.streamingAssetsPath + "/" + this.ClippingTimesFileName);

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
            Debug.Log("Asset was not found.");
            return;
        }

        this.SessionClippingDatas = new List<SessionClippingData>();

        // Extract the lines from the CSV file.
        string[] lines = asset.Split('\n');

        string lineCountMessage = lines.Length + " lines found";
        Debug.Log(lineCountMessage);

        // Print a warning to the Unity console if the file is found to be empty.
        //      Note that the foreach loop below will not execute in this case,
        //      and the empty list of vectors will be returned.
        if (lines.Length == 0)
        {
            Debug.LogWarning("Empty input file");
        }

        // Remove the header row.
        lines = lines.Skip(1).ToArray();

        // For each line...
        int linesParsed = 0;
        foreach (string line in lines)
        {
            // Extract the values on that line.
            string[] values = line.Split(',');

            // If the line doesn't contain exactly six values, move on to the next.
            if (values.Length != 7)
            {
                // Print an error message to Unity console showing line number and content
                //      that caused the error.
                string lineParseErrorMessage = "Error parsing line #" + lines.ToList().IndexOf(line) + ": " + line;
                Debug.LogError(lineParseErrorMessage);
                continue;
            }

            int teamNumber = int.Parse(values[0]);
            string modality = values[2];

            // Get a reference to the session data for the session this clipping data is within.
            SessionClippingData sessionData = this.SessionClippingDatas.Where(d => d.TeamNumber == teamNumber && d.Modality.ToString() == modality).FirstOrDefault();

            // Check if a session clipping data already exists for this line.
            if (sessionData == null)
            {
                // Create the new session clipping data.
                sessionData = new SessionClippingData()
                {
                    TeamNumber = teamNumber,
                    Modality = (Modality)Enum.Parse(typeof(Modality), modality)
                };

                this.SessionClippingDatas.Add(sessionData);
            }

            // Parse the values
            try
            {
                TrialClippingData trialData = new TrialClippingData()
                {
                    TrialNumber = int.Parse(values[1]),
                    ChartName = values[3],
                    StartTime = TimeSpan.Parse(values[5]),
                    EndTime = TimeSpan.Parse(values[6])
                };

                // Add the trial data to the session data.
                sessionData.TrialClippingDatas.Add(trialData.TrialNumber, trialData);
                //string tmpMsg = "Trial " + trialData.TrialNumber + " added to Team " + sessionData.TeamNumber + " " + sessionData.Modality + " session.";
                //Debug.Log(tmpMsg);
                linesParsed++;
            }
            catch
            {
                // Print an error message to Unity console showing line number and content
                //      that caused the error.
                string message = "Error parsing line #" + lines.ToList().IndexOf(line) + ": " + line;
                Debug.LogWarning(message);
                continue;
            }
        }

        string parsedTotalMessage = linesParsed + " lines successfully parsed.";
        Debug.Log(parsedTotalMessage);
    }

    public void ClipDataFiles()
    {
        this.TrialDatas = new Dictionary<string, TrialRecordedData>();

        int inputFilesProcessed = 0;
        int inputFilesAttempted = 0;
        int totalTrials = 0;
        int totalLines = 0;
        foreach (SessionClippingData session in this.SessionClippingDatas)
        {
            // For each file the session has (one per device).
            List<string> fileNames = session.GetFileNames();
            foreach (string fileName in fileNames)
            {
                inputFilesAttempted++;

                int deviceNumber = fileNames.IndexOf(fileName);

                // Read in the file data.
                string asset = null;
                string path = Path.Combine(Application.streamingAssetsPath + "/" + fileName);

                try
                {
                    asset = File.ReadAllText(path);
                }
                catch (Exception ex)
                {
                    // Nothing to do but continue...
                    // Please don't ask about this debug log, it was a rough time.
                    Debug.Log("Error lolz " + path + ", Message: " + ex.Message);
                }

                if (asset == null)
                {
                    string nullAssetErrorMessage = "File to clip not found: " + fileName;
                    Debug.LogWarning(nullAssetErrorMessage);
                    continue;
                }

                // Extract the lines from the CSV file.
                string[] lines = asset.Split('\n');
                int newTrialLinesCount = 0;
                int dataLinesRecorded = 0;
                int dataLinesProcessed = 0;
                int dataLinesAttempted = 0;

                // Print a warning to the Unity console if the file is found to be empty.
                //      Note that the foreach loop below will not execute in this case,
                //      and the empty list of vectors will be returned.
                if (lines.Length == 0)
                {
                    Debug.LogWarning("Empty input file");
                }

                // For each line...
                TrialDataBuilder trialbuilder = new TrialDataBuilder();
                int trialNumber = 0;
                int trialDataLinesRecorded = 0;
                for (int lineNumber = 0; lineNumber < lines.Length; lineNumber++)
                {
                    dataLinesAttempted++;
                    string line = lines[lineNumber];

                    // Extract the values on that line.
                    string[] values = line.Split(',');

                    if (values[0] == "NEW TRIAL")
                    {
                        // This is a header line marking a new trial.
                        trialNumber++;
                        newTrialLinesCount++;

                        // Finish recording the last trial.
                        TrialRecordedData trialData = trialbuilder.GetCurrentTrialData();

                        if (trialData != null)
                        {
                            string key = DataCleaner.GetTrialDataKey(trialData.TeamNumber, trialData.TrialNumber, deviceNumber);
                            this.TrialDatas.Add(key, trialData);
                            int linesWritten = this.WriteClippedLogFile(trialbuilder);

                            string assertLinesWrittenMsg = "ASSERT FAILED: " + trialDataLinesRecorded + " lines recorded, but only " + linesWritten + " lines written to file for key " + key;
                            Debug.Assert(trialDataLinesRecorded == linesWritten, assertLinesWrittenMsg);

                            string assertTrialNumberMsg = "ASSERT FAILED: trial number " + trialNumber + " is NOT one greater than " + trialData.TrialNumber;
                            Debug.Assert(trialNumber - 1 == trialData.TrialNumber, assertTrialNumberMsg);

                            if (linesWritten == 0)
                            {
                                string msg = "No lines written for Team " + session.TeamNumber + " " + session.Modality + " session, trial " + trialData.TrialNumber;
                                Debug.LogError(msg);
                            }
                        }

                        // Start recording a new trial.
                        trialDataLinesRecorded = 0;
                        string videoDataKey = DataCleaner.GetVideoDataKey(session.TeamNumber, session.Modality);
                        VideoTimeData videoData = this.VideoTimeDatas[videoDataKey];

                        if (session.TrialClippingDatas.ContainsKey(trialNumber) == false)
                        {
                            //string keyError = newTrialLinesCount + " is missing from the data for the " + session.Modality.ToString() + " session for team " + session.TeamNumber + ". Only " + session.TrialClippingDatas.Count + " records found in this session's trial data.";
                            //Debug.LogError(keyError);

                            //StringBuilder errorMessageBuilder = new StringBuilder();
                            //foreach (KeyValuePair<int, TrialClippingData> errorTrialClippingDataPair in session.TrialClippingDatas)
                            //{
                            //    errorMessageBuilder.Append(", Team " + errorTrialClippingDataPair.Key);
                            //}

                            //Debug.Log(errorMessageBuilder.ToString());

                            // This session starts at Trial 13, not Trial 1.
                            trialNumber += 12;

                            Debug.Assert(session.TrialClippingDatas.ContainsKey(trialNumber));
                        }

                        TrialClippingData trialClippingData = new TrialClippingData();
                        try
                        {
                            trialClippingData = session.TrialClippingDatas[trialNumber];
                        }
                        catch (Exception ex)
                        {
                            Debug.Log("Cannot find data for trial number " + trialNumber + " in team " + session.TeamNumber + " " + session.Modality + " session.");
                        }
                        DateTime trialStart = videoData.VideoBeginTime + trialClippingData.StartTime;
                        DateTime trialEnd = videoData.VideoBeginTime + trialClippingData.EndTime;
                        trialbuilder.StartNewTrial(session.TeamNumber, trialNumber, session.Modality, deviceNumber, trialStart, trialEnd);
                    }
                    // If the line doesn't contain exactly seven values, move on to the next.
                    else if (values.Length != 7)
                    {
                        // Print an error message to Unity console showing line number and content
                        //      that caused the error.
                        string lineParseErrorMessage = "Error parsing line #" + lineNumber + ": " + line + " in Team " + session.TeamNumber + " " + session.Modality + " session.";
                        Debug.LogError(lineParseErrorMessage);
                        continue;
                    }
                    else
                    {
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

                            //if (session.TeamNumber == 10 && trialNumber >= 0)
                            //{
                            //    string msg = "Recorded line " + lineNumber + ": " + line + " for Team " + session.TeamNumber + " " + session.Modality + " session, trial " + trialNumber;
                            //    Debug.Log(msg);
                            //}

                            bool recorded = trialbuilder.RecordViewData(viewData);

                            dataLinesProcessed++;

                            if (recorded)
                            {
                                dataLinesRecorded++;
                                trialDataLinesRecorded++;
                            }
                        }
                        catch (Exception ex)
                        {
                            // Print an error message to Unity console showing line number and content
                            //      that caused the error.
                            string lineParseErrorMessage = "Error parsing line #" + lineNumber + ": " + line + " in Team " + session.TeamNumber + " " + session.Modality + " session.";
                            Debug.LogError(lineParseErrorMessage);
                        }
                    }
                }

                // Finish recording the last trial.
                TrialRecordedData finalTrialData = trialbuilder.GetCurrentTrialData();

                if (finalTrialData != null)
                {
                    string key = DataCleaner.GetTrialDataKey(finalTrialData.TeamNumber, finalTrialData.TrialNumber, deviceNumber);
                    this.TrialDatas.Add(key, finalTrialData);
                    int linesWritten = this.WriteClippedLogFile(trialbuilder);

                    string assertLinesWrittenMsg = "ASSERT FAILED: " + trialDataLinesRecorded + " lines recorded, but only " + linesWritten + " lines written to file for key " + key;
                    Debug.Assert(trialDataLinesRecorded == linesWritten, assertLinesWrittenMsg);

                    if (linesWritten == 0)
                    {
                        string msg = "No lines written for Team " + session.TeamNumber + " " + session.Modality + " session, trial " + finalTrialData.TrialNumber;
                        Debug.LogError(msg);
                    }
                }

                // Print the line stats for the session file.
                string linesCountMessage = dataLinesAttempted + " lines attempted, " +
                                           dataLinesProcessed + " lines processed, " +
                                           dataLinesRecorded + " lines recorded " +
                                           "for file " + fileName;
                Debug.Log(linesCountMessage);
                string trialsCountMessage = newTrialLinesCount + " trials found in file " + fileName;
                Debug.Log(trialsCountMessage);

                totalTrials += newTrialLinesCount;
                totalLines += dataLinesProcessed;
                inputFilesProcessed++;
             }
        }

        string fileAttemptedCountMessage = inputFilesAttempted + " files attempted.";
        Debug.Log(fileAttemptedCountMessage);
        string fileProcessedCountMessage = inputFilesProcessed + " files processed.";
        Debug.Log(fileProcessedCountMessage);

        string totalTrialsCountMessage = totalTrials + " total trials processed.";
        Debug.Log(totalTrialsCountMessage);
        string totalLinesCountMessage = totalLines + " total lines processed.";
        Debug.Log(totalLinesCountMessage);
    }

    /// <summary>
    /// Used for testing purposes... not intented to be used in practice. 
    /// </summary>
    public void GeneratePaths()
    {
        PathGenerator generator = this.GetComponent<PathGenerator>();
        generator.Initialize(this.TrialDatas);
    }

    /// <summary>
    /// 
    /// </summary>
    /// <param name="builder"></param>
    /// <returns>The number of lines writen to file.</returns>
    public int WriteClippedLogFile(TrialDataBuilder builder)
    {
        string fileName = DataCleaner.GetTrialDataKey(builder.TeamNumber, builder.TrialNumber, builder.DeviceNumber);
        string path = Path.Combine(this.FileOutputPath, fileName + ".csv");

        //string msg = "WRITING " + builder.GetCurrentTrialData().Data.Count + " lines to file " + fileName;
        //Debug.Log(msg);

        string dataString = builder.ToString();
        File.WriteAllText(path, dataString);

        return builder.GetCurrentTrialData().Data.Count;
    }

    public static string GetVideoDataKey(int teamNumber, Modality modality)
    {
        return teamNumber + "." + modality.ToString();
    }

    public static string GetTrialDataKey(int teamNumber, int trialNumber, int deviceNumber)
    {
        return "Team" + teamNumber + "_Trial" + trialNumber + "_Device" + deviceNumber;
    }
}
