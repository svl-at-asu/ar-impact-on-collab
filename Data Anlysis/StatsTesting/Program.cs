using StatsTesting.Managers;
using StatsTesting.Models;
using StatsTesting.Utility;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;

namespace StatsTesting
{
    class Program
    {
        static string FilePath = "C:\\Users\\Public\\Documents\\";
        //private static string[] VariablesToTest = { "ConvoGrounding", "TaskTime", "GesturesPerTime", "PercentGesturesP1", "UtterancesPerTime", "PercentUtterancesP1", "LooksPerTime" };
        private static string[] VariablesToTest = { "PA_Distance", "PB_Distance", "PA_PercentBelowAngleThreshold", "PB_PercentBelowAngleThreshold", "AverageDistance", "PA_PercentDistance", "AveragePercentTimeBelowThreshold" };

        static void Main(string[] args)
        {
            string fileName = "Video Encoding Data.csv";
            string filePath = "C:\\Users\\Public\\Documents\\";

            // Read in the trial data.
            List<TrialData> data = DataReader.ReadAllData(fileName, filePath);

            // FOR MOVEMENT DATA ONLY BECAUSE THIS CASE HAS NO PROCESSED DATA
            //data.RemoveAll(d => d.PA_Distance == null);
            // --------------------------------------------------------------

            // Calculate the statistics.
            Dictionary<string, Dictionary<string, TTestResult>> modalityResults = Program.RunModalityTests(data);
            Dictionary<string, Dictionary<string, ANOVAResult>> chartTypeResults = Program.RunChartTypeTests(data);
            Dictionary<string, Dictionary<string, TTestResult>> taskTypeResults = Program.RunTaskTypeTests(data);

            // Output the results.
            Program.WriteTTestFile(modalityResults, "ModalityStats.csv");
            Program.WriteANOVAFile(chartTypeResults, "ChartTypeStats.csv");
            Program.WriteTTestFile(taskTypeResults, "TaskTypeStats.csv");
        }

        #region Tests
        private static Dictionary<string, Dictionary<string, TTestResult>> RunModalityTests(List<TrialData> data)
        {
            Dictionary<string, Dictionary<string, TTestResult>> results = new Dictionary<string, Dictionary<string, TTestResult>>();

            foreach (ChartType chartType in (ChartType[])Enum.GetValues(typeof(ChartType)))
            {
                foreach (TaskType taskType in (TaskType[])Enum.GetValues(typeof(TaskType)))
                {
                    Dictionary<string, TTestResult> resultsForTheseConstantFactors = new Dictionary<string, TTestResult>();

                    List<TrialData> groupXData = data.Where(d => d.ChartType == chartType &&
                                                                 d.TaskType == taskType &&
                                                                 d.Modality == Modality.Desktop).ToList();

                    List<TrialData> groupYData = data.Where(d => d.ChartType == chartType &&
                                                                 d.TaskType == taskType &&
                                                                 d.Modality == Modality.Hololens).ToList();

                    // Clean up the data by removing un-paried cases.
                    if (groupXData.Count != groupYData.Count)
                    {
                        List<TrialData> longerListCopy;
                        List<TrialData> shorterList;
                        List<TrialData> longerList;
                        if (groupXData.Count > groupYData.Count)
                        {
                            longerListCopy = new List<TrialData>(groupXData);
                            longerList = groupXData;
                            shorterList = groupYData;
                        }
                        else
                        {
                            longerListCopy = new List<TrialData>(groupYData);
                            longerList = groupYData;
                            shorterList = groupXData;
                        }

                        foreach (TrialData trialData in longerListCopy)
                        {
                            // If there is no match in the shorter list, remove it.
                            if (shorterList.Where(d => d.Team == trialData.Team && d.Task == trialData.Task).FirstOrDefault() == null)
                            {
                                longerList.Remove(trialData);
                            }
                        }
                    }
                    System.Diagnostics.Debug.Assert(groupXData.Count == groupYData.Count);

                    foreach (string variableToTest in Program.VariablesToTest)
                    {
                        // Do final clean up of null values.
                        List<TrialData> nullX = groupXData.Where(d => d.GetType().GetProperty(variableToTest).GetValue(d, null) == null).ToList();
                        List<TrialData> nullY = groupYData.Where(d => d.GetType().GetProperty(variableToTest).GetValue(d, null) == null).ToList();
                        groupYData.RemoveAll(d => nullX.Where(u => d.Team == u.Team && d.Task == u.Task).FirstOrDefault() != null);
                        groupXData.RemoveAll(d => nullY.Where(u => d.Team == u.Team && d.Task == u.Task).FirstOrDefault() != null);

                        TTestResult result = Program.RunTTest(groupXData, groupYData, variableToTest);
                        result.DataSetXCategoryName = Modality.Desktop.ToString();
                        result.DataSetYCategoryName = Modality.Hololens.ToString();
                        result.FactorsHeldConstant = new string[] { chartType.ToString(), taskType.ToString() };
                        resultsForTheseConstantFactors.Add(variableToTest, result);
                    }

                    results.Add(chartType.ToString() + " " + taskType.ToString(), resultsForTheseConstantFactors);
                }
            }

            return results;
        }

        private static Dictionary<string, Dictionary<string, ANOVAResult>> RunChartTypeTests(List<TrialData> data)
        {
            Dictionary<string, Dictionary<string, ANOVAResult>> results = new Dictionary<string, Dictionary<string, ANOVAResult>>();

            foreach (Modality modality in (Modality[])Enum.GetValues(typeof(Modality)))
            {
                foreach (TaskType taskType in (TaskType[])Enum.GetValues(typeof(TaskType)))
                {
                    Dictionary<string, ANOVAResult> resultsForTheseConstantFactors = new Dictionary<string, ANOVAResult>();

                    List<TrialData> groupXData = data.Where(d => d.ChartType == ChartType.BarChart &&
                                                                 d.TaskType == taskType &&
                                                                 d.Modality == modality).ToList();

                    List<TrialData> groupYData = data.Where(d => d.ChartType == ChartType.Network &&
                                                                 d.TaskType == taskType &&
                                                                 d.Modality == modality).ToList();

                    List<TrialData> groupZData = data.Where(d => d.ChartType == ChartType.ScatterPlot &&
                                                                 d.TaskType == taskType &&
                                                                 d.Modality == modality).ToList();

                    // Clean up the data by removing un-paried cases.
                    if (!(groupXData.Count == groupYData.Count && groupXData.Count == groupZData.Count))
                    {
                        // Determine the shortest list.
                        List<List<TrialData>> lists = new List<List<TrialData>>() { groupXData, groupYData, groupZData };
                        List<int> counts = new List<int>() { groupXData.Count, groupYData.Count, groupZData.Count };

                        int minCount = counts.Min();

                        List<TrialData> shortestList = lists[counts.IndexOf(minCount)];

                        // For the other lists... (iterate through and skip the shortest one)
                        foreach (List<TrialData> longerList in lists)
                        {
                            // If the list is NOT the shortest one, AND the list is longer than the shortest one...
                            if (longerList != shortestList && longerList.Count > shortestList.Count)
                            {
                                List<TrialData> longerListCopy = new List<TrialData>(longerList);
                                foreach (TrialData trialData in longerListCopy)
                                {
                                    // If there is no match in the shorter list, remove it.
                                    int matchingTrials = shortestList.Where(d => d.Team == trialData.Team).ToList().Count;
                                    int teamTrialsInLonger = longerList.Where(d => d.Team == trialData.Team).ToList().Count;
                                    if (matchingTrials < teamTrialsInLonger)
                                    {
                                        longerList.Remove(trialData);
                                    }
                                }
                            }
                        }
                    }
                    System.Diagnostics.Debug.Assert(groupXData.Count == groupYData.Count && groupXData.Count == groupZData.Count);

                    foreach (string variableToTest in Program.VariablesToTest)
                    {
                        ANOVAResult result = Program.RunANOVATest(groupXData, groupYData, groupZData, variableToTest);
                        result.DataSetXCategoryName = ChartType.BarChart.ToString();
                        result.DataSetYCategoryName = ChartType.Network.ToString();
                        result.DataSetZCategoryName = ChartType.ScatterPlot.ToString();
                        result.FactorsHeldConstant = new string[] { modality.ToString(), taskType.ToString() };
                        resultsForTheseConstantFactors.Add(variableToTest, result);
                    }

                    results.Add(modality.ToString() + " " + taskType.ToString(), resultsForTheseConstantFactors);
                }
            }

            return results;
        }

        private static Dictionary<string, Dictionary<string, TTestResult>> RunTaskTypeTests(List<TrialData> data)
        {
            Dictionary<string, Dictionary<string, TTestResult>> results = new Dictionary<string, Dictionary<string, TTestResult>>();

            foreach (Modality modality in (Modality[])Enum.GetValues(typeof(Modality)))
            {
                foreach (ChartType chartType in (ChartType[])Enum.GetValues(typeof(ChartType)))
                {
                    Dictionary<string, TTestResult> resultsForTheseConstantFactors = new Dictionary<string, TTestResult>();

                    List<TrialData> groupXData = data.Where(d => d.ChartType == chartType &&
                                                                 d.TaskType == TaskType.Closed &&
                                                                 d.Modality == modality).ToList();

                    List<TrialData> groupYData = data.Where(d => d.ChartType == chartType &&
                                                                 d.TaskType == TaskType.Open &&
                                                                 d.Modality == modality).ToList();

                    // Clean up the data by removing un-paried cases.
                    if (groupXData.Count != groupYData.Count)
                    {
                        List<TrialData> longerListCopy;
                        List<TrialData> shorterList;
                        List<TrialData> longerList;
                        if (groupXData.Count > groupYData.Count)
                        {
                            longerListCopy = new List<TrialData>(groupXData);
                            longerList = groupXData;
                            shorterList = groupYData;
                        }
                        else
                        {
                            longerListCopy = new List<TrialData>(groupYData);
                            longerList = groupYData;
                            shorterList = groupXData;
                        }

                        foreach (TrialData trialData in longerListCopy)
                        {
                            // If there is no match in the shorter list, remove it.
                            int matchingTrials = shorterList.Where(d => d.Team == trialData.Team).ToList().Count;
                            int teamTrialsInLonger = longerList.Where(d => d.Team == trialData.Team).ToList().Count;
                            if (matchingTrials < teamTrialsInLonger)
                            {
                                longerList.Remove(trialData);
                            }
                        }
                    }
                    System.Diagnostics.Debug.Assert(groupXData.Count == groupYData.Count);

                    foreach (string variableToTest in Program.VariablesToTest)
                    {
                        TTestResult result = Program.RunTTest(groupXData, groupYData, variableToTest);
                        result.DataSetXCategoryName = TaskType.Closed.ToString();
                        result.DataSetYCategoryName = TaskType.Open.ToString();
                        result.FactorsHeldConstant = new string[] { modality.ToString(), chartType.ToString() };
                        resultsForTheseConstantFactors.Add(variableToTest, result);
                    }

                    results.Add(modality.ToString() + " " + chartType.ToString(), resultsForTheseConstantFactors);
                }
            }

            return results;
        }
        #endregion

        #region Test Helpers
        private static TTestResult RunTTest(List<TrialData> xData, List<TrialData> yData, string onVariable)
        {
            List<double> x = new List<double>();
            List<double> y = new List<double>();

            // Create the lists of data points for the stats test.
            foreach (TrialData xTrialData in xData)
            {
                if (xTrialData.GetType().GetProperty(onVariable).GetValue(xTrialData, null) == null)
                {
                    // Skip null values.
                    continue;
                }

                Type type = xTrialData.GetType().GetProperty(onVariable).GetValue(xTrialData, null).GetType();

                double value;
                if (type == typeof(int))
                {
                    value = (int)xTrialData.GetType().GetProperty(onVariable).GetValue(xTrialData, null);
                }
                else if (type == typeof(TimeSpan))
                {
                    TimeSpan timeSpan = (TimeSpan)xTrialData.GetType().GetProperty(onVariable).GetValue(xTrialData, null);
                    value = timeSpan.TotalSeconds;
                }
                else if (type == typeof(double))
                {
                    value = (double)xTrialData.GetType().GetProperty(onVariable).GetValue(xTrialData, null);
                }
                else
                {
                    // Skip other values.
                    continue;
                }
                x.Add(value);
            }
            foreach (TrialData yTrialData in yData)
            {
                if (yTrialData.GetType().GetProperty(onVariable).GetValue(yTrialData, null) == null)
                {
                    // Skip null values.
                    continue;
                }

                Type type = yTrialData.GetType().GetProperty(onVariable).GetValue(yTrialData, null).GetType();

                double value;
                if (type == typeof(int))
                {
                    value = (int)yTrialData.GetType().GetProperty(onVariable).GetValue(yTrialData, null);
                }
                else if (type == typeof(TimeSpan))
                {
                    TimeSpan timeSpan = (TimeSpan)yTrialData.GetType().GetProperty(onVariable).GetValue(yTrialData, null);
                    value = timeSpan.TotalSeconds;
                }
                else if (type == typeof(double))
                {
                    value = (double)yTrialData.GetType().GetProperty(onVariable).GetValue(yTrialData, null);
                }
                else
                {
                    // Skip other values.
                    continue;
                }
                y.Add(value);
            }

            TTestResult result = StatsCalculator.PairedTTest(x, y);
            result.TestedVariable = onVariable;

            return result;
        }

        private static ANOVAResult RunANOVATest(List<TrialData> xData, List<TrialData> yData, List<TrialData> zData, string onVariable)
        {
            List<double> x = new List<double>();
            List<double> y = new List<double>();
            List<double> z = new List<double>();

            // Create the lists of data points for the stats test.
            foreach (TrialData xTrialData in xData)
            {
                if (xTrialData.GetType().GetProperty(onVariable).GetValue(xTrialData, null) == null)
                {
                    // Skip null values.
                    continue;
                }

                Type type = xTrialData.GetType().GetProperty(onVariable).GetValue(xTrialData, null).GetType();

                double value;
                if (type == typeof(int))
                {
                    value = (int)xTrialData.GetType().GetProperty(onVariable).GetValue(xTrialData, null);
                }
                else if (type == typeof(TimeSpan))
                {
                    TimeSpan timeSpan = (TimeSpan)xTrialData.GetType().GetProperty(onVariable).GetValue(xTrialData, null);
                    value = timeSpan.TotalSeconds;
                }
                else if (type == typeof(double))
                {
                    value = (double)xTrialData.GetType().GetProperty(onVariable).GetValue(xTrialData, null);
                }
                else
                {
                    // Skip other values.
                    continue;
                }
                x.Add(value);
            }
            foreach (TrialData yTrialData in yData)
            {
                if (yTrialData.GetType().GetProperty(onVariable).GetValue(yTrialData, null) == null)
                {
                    // Skip null values.
                    continue;
                }

                Type type = yTrialData.GetType().GetProperty(onVariable).GetValue(yTrialData, null).GetType();

                double value;
                if (type == typeof(int))
                {
                    value = (int)yTrialData.GetType().GetProperty(onVariable).GetValue(yTrialData, null);
                }
                else if (type == typeof(TimeSpan))
                {
                    TimeSpan timeSpan = (TimeSpan)yTrialData.GetType().GetProperty(onVariable).GetValue(yTrialData, null);
                    value = timeSpan.TotalSeconds;
                }
                else if (type == typeof(double))
                {
                    value = (double)yTrialData.GetType().GetProperty(onVariable).GetValue(yTrialData, null);
                }
                else
                {
                    // Skip other values.
                    continue;
                }
                y.Add(value);
            }
            foreach (TrialData zTrialData in zData)
            {
                if (zTrialData.GetType().GetProperty(onVariable).GetValue(zTrialData, null) == null)
                {
                    // Skip null values.
                    continue;
                }

                Type type = zTrialData.GetType().GetProperty(onVariable).GetValue(zTrialData, null).GetType();

                double value;
                if (type == typeof(int))
                {
                    value = (int)zTrialData.GetType().GetProperty(onVariable).GetValue(zTrialData, null);
                }
                else if (type == typeof(TimeSpan))
                {
                    TimeSpan timeSpan = (TimeSpan)zTrialData.GetType().GetProperty(onVariable).GetValue(zTrialData, null);
                    value = timeSpan.TotalSeconds;
                }
                else if (type == typeof(double))
                {
                    value = (double)zTrialData.GetType().GetProperty(onVariable).GetValue(zTrialData, null);
                }
                else
                {
                    // Skip other values.
                    continue;
                }
                z.Add(value);
            }

            ANOVAResult result = StatsCalculator.ANOVA(new List<List<double>>() { x, y, z });
            result.TestedVariable = onVariable;

            return result;
        }
        #endregion

        #region Output

        private static void WriteTTestFile(Dictionary<string, Dictionary<string, TTestResult>> results, string fileName)
        {
            StringBuilder builder = new StringBuilder();

            // Print Header.
            builder.Append(Program.GenerateHeader());
            builder.Append("\n");

            // For each logical row in the spreadsheet...
            foreach (KeyValuePair<string, Dictionary<string, TTestResult>> pair in results)
            {
                // Print the row header.
                builder.Append(pair.Key);
                builder.Append(",");
                builder.Append(",");

                // For each logical column in the row...
                foreach (string variableTested in Program.VariablesToTest)
                {
                    // Skip sheet column for test results row headers.
                    builder.Append(",");

                    // Write test results column headers.
                    builder.Append(pair.Value[variableTested].DataSetXCategoryName);
                    builder.Append(",");
                    builder.Append(pair.Value[variableTested].DataSetYCategoryName);
                    builder.Append(",");

                    // Finish with a blank sheet column to separate logical columns.
                    builder.Append(",");
                }

                // Move to next sheet line and skip sheet columns containing row header.
                builder.Append("\n");
                builder.Append(",");
                builder.Append(",");

                // For each logical column in the row...
                foreach (string variableTested in Program.VariablesToTest)
                {
                    // Print test results row header.
                    builder.Append("Mean");
                    builder.Append(",");

                    // Write test results means.
                    builder.Append(pair.Value[variableTested].MeanX);
                    builder.Append(",");
                    builder.Append(pair.Value[variableTested].MeanY);
                    builder.Append(",");

                    // Finish with a blank sheet column to separate logical columns.
                    builder.Append(",");
                }

                // Move to next sheet line and skip sheet columns containing row header.
                builder.Append("\n");
                builder.Append(",");
                builder.Append(",");

                // For each logical column in the row...
                foreach (string variableTested in Program.VariablesToTest)
                {
                    // Print test results row header.
                    builder.Append("Std Dev");
                    builder.Append(",");

                    // Write test results standard deviations.
                    builder.Append(pair.Value[variableTested].StdDevX);
                    builder.Append(",");
                    builder.Append(pair.Value[variableTested].StdDevY);
                    builder.Append(",");

                    // Finish with a blank sheet column to separate logical columns.
                    builder.Append(",");
                }

                // Move to next sheet line and skip sheet columns containing row header.
                builder.Append("\n");
                builder.Append(",");
                builder.Append(",");

                // For each logical column in the row...
                foreach (string variableTested in Program.VariablesToTest)
                {
                    // Print test results row header.
                    builder.Append("Min");
                    builder.Append(",");

                    // Write test results means.
                    builder.Append(pair.Value[variableTested].MinX);
                    builder.Append(",");
                    builder.Append(pair.Value[variableTested].MinY);
                    builder.Append(",");

                    // Finish with a blank sheet column to separate logical columns.
                    builder.Append(",");
                }

                // Move to next sheet line and skip sheet columns containing row header.
                builder.Append("\n");
                builder.Append(",");
                builder.Append(",");

                // For each logical column in the row...
                foreach (string variableTested in Program.VariablesToTest)
                {
                    // Print test results row header.
                    builder.Append("Lower Qaurtile");
                    builder.Append(",");

                    // Write test results means.
                    builder.Append(pair.Value[variableTested].LowerQuartileX);
                    builder.Append(",");
                    builder.Append(pair.Value[variableTested].LowerQuartileY);
                    builder.Append(",");

                    // Finish with a blank sheet column to separate logical columns.
                    builder.Append(",");
                }

                // Move to next sheet line and skip sheet columns containing row header.
                builder.Append("\n");
                builder.Append(",");
                builder.Append(",");

                // For each logical column in the row...
                foreach (string variableTested in Program.VariablesToTest)
                {
                    // Print test results row header.
                    builder.Append("Median");
                    builder.Append(",");

                    // Write test results means.
                    builder.Append(pair.Value[variableTested].MedianX);
                    builder.Append(",");
                    builder.Append(pair.Value[variableTested].MedianY);
                    builder.Append(",");

                    // Finish with a blank sheet column to separate logical columns.
                    builder.Append(",");
                }

                // Move to next sheet line and skip sheet columns containing row header.
                builder.Append("\n");
                builder.Append(",");
                builder.Append(",");

                // For each logical column in the row...
                foreach (string variableTested in Program.VariablesToTest)
                {
                    // Print test results row header.
                    builder.Append("Upper Quartile");
                    builder.Append(",");

                    // Write test results means.
                    builder.Append(pair.Value[variableTested].UpperQuartileX);
                    builder.Append(",");
                    builder.Append(pair.Value[variableTested].UpperQuartileY);
                    builder.Append(",");

                    // Finish with a blank sheet column to separate logical columns.
                    builder.Append(",");
                }

                // Move to next sheet line and skip sheet columns containing row header.
                builder.Append("\n");
                builder.Append(",");
                builder.Append(",");

                // For each logical column in the row...
                foreach (string variableTested in Program.VariablesToTest)
                {
                    // Print test results row header.
                    builder.Append("Max");
                    builder.Append(",");

                    // Write test results means.
                    builder.Append(pair.Value[variableTested].MaxX);
                    builder.Append(",");
                    builder.Append(pair.Value[variableTested].MaxY);
                    builder.Append(",");

                    // Finish with a blank sheet column to separate logical columns.
                    builder.Append(",");
                }

                // Move to next sheet line and skip sheet columns containing row header.
                builder.Append("\n");
                builder.Append(",");
                builder.Append(",");

                // For each logical column in the row...
                foreach (string variableTested in Program.VariablesToTest)
                {
                    // Print test results row header.
                    builder.Append("df");
                    builder.Append(",");

                    // Write test results degrees of freedom.
                    builder.Append(pair.Value[variableTested].Df);
                    builder.Append(",");
                    builder.Append(",");

                    // Finish with a blank sheet column to separate logical columns.
                    builder.Append(",");
                }

                // Move to next sheet line and skip sheet columns containing row header.
                builder.Append("\n");
                builder.Append(",");
                builder.Append(",");

                // For each logical column in the row...
                foreach (string variableTested in Program.VariablesToTest)
                {
                    // Print test results row header.
                    builder.Append("t Stat");
                    builder.Append(",");

                    // Write test results t statistic.
                    builder.Append(pair.Value[variableTested].TStat);
                    builder.Append(",");
                    builder.Append(",");

                    // Finish with a blank sheet column to separate logical columns.
                    builder.Append(",");
                }

                // Skip two lines.
                builder.Append("\n");
                builder.Append("\n");
                builder.Append("\n");
            }

            string fileData = builder.ToString();
            File.WriteAllText(Program.FilePath + fileName, fileData);
        }

        private static void WriteANOVAFile(Dictionary<string, Dictionary<string, ANOVAResult>> results, string fileName)
        {
            StringBuilder builder = new StringBuilder();

            // Print Header.
            builder.Append(Program.GenerateANOVAHeader());
            builder.Append("\n");

            // For each logical row in the spreadsheet...
            foreach (KeyValuePair<string, Dictionary<string, ANOVAResult>> pair in results)
            {
                // Print the row header.
                builder.Append(pair.Key);
                builder.Append(",");
                builder.Append(",");

                // For each logical column in the row...
                foreach (string variableTested in Program.VariablesToTest)
                {
                    // Skip sheet column for test results row headers.
                    builder.Append(",");

                    // Write test results column headers.
                    builder.Append(pair.Value[variableTested].DataSetXCategoryName);
                    builder.Append(",");
                    builder.Append(pair.Value[variableTested].DataSetYCategoryName);
                    builder.Append(",");
                    builder.Append(pair.Value[variableTested].DataSetZCategoryName);
                    builder.Append(",");

                    // Finish with a blank sheet column to separate logical columns.
                    builder.Append(",");
                }

                // Move to next sheet line and skip sheet columns containing row header.
                builder.Append("\n");
                builder.Append(",");
                builder.Append(",");

                // For each logical column in the row...
                foreach (string variableTested in Program.VariablesToTest)
                {
                    // Print test results row header.
                    builder.Append("Mean");
                    builder.Append(",");

                    // Write test results means.
                    builder.Append(pair.Value[variableTested].MeanX);
                    builder.Append(",");
                    builder.Append(pair.Value[variableTested].MeanY);
                    builder.Append(",");
                    builder.Append(pair.Value[variableTested].MeanZ);
                    builder.Append(",");

                    // Finish with a blank sheet column to separate logical columns.
                    builder.Append(",");
                }

                // Move to next sheet line and skip sheet columns containing row header.
                builder.Append("\n");
                builder.Append(",");
                builder.Append(",");

                // For each logical column in the row...
                foreach (string variableTested in Program.VariablesToTest)
                {
                    // Print test results row header.
                    builder.Append("Std Dev");
                    builder.Append(",");

                    // Write test results standard deviations.
                    builder.Append(pair.Value[variableTested].StdDevX);
                    builder.Append(",");
                    builder.Append(pair.Value[variableTested].StdDevY);
                    builder.Append(",");
                    builder.Append(pair.Value[variableTested].StdDevZ);
                    builder.Append(",");

                    // Finish with a blank sheet column to separate logical columns.
                    builder.Append(",");
                }

                // Move to next sheet line and skip sheet columns containing row header.
                builder.Append("\n");
                builder.Append(",");
                builder.Append(",");

                // For each logical column in the row...
                foreach (string variableTested in Program.VariablesToTest)
                {
                    // Print test results row header.
                    builder.Append("Min");
                    builder.Append(",");

                    // Write test results means.
                    builder.Append(pair.Value[variableTested].MinX);
                    builder.Append(",");
                    builder.Append(pair.Value[variableTested].MinY);
                    builder.Append(",");
                    builder.Append(pair.Value[variableTested].MinZ);
                    builder.Append(",");

                    // Finish with a blank sheet column to separate logical columns.
                    builder.Append(",");
                }

                // Move to next sheet line and skip sheet columns containing row header.
                builder.Append("\n");
                builder.Append(",");
                builder.Append(",");

                // For each logical column in the row...
                foreach (string variableTested in Program.VariablesToTest)
                {
                    // Print test results row header.
                    builder.Append("Lower Quartile");
                    builder.Append(",");

                    // Write test results means.
                    builder.Append(pair.Value[variableTested].LowerQuartileX);
                    builder.Append(",");
                    builder.Append(pair.Value[variableTested].LowerQuartileY);
                    builder.Append(",");
                    builder.Append(pair.Value[variableTested].LowerQuartileZ);
                    builder.Append(",");

                    // Finish with a blank sheet column to separate logical columns.
                    builder.Append(",");
                }

                // Move to next sheet line and skip sheet columns containing row header.
                builder.Append("\n");
                builder.Append(",");
                builder.Append(",");

                // For each logical column in the row...
                foreach (string variableTested in Program.VariablesToTest)
                {
                    // Print test results row header.
                    builder.Append("Median");
                    builder.Append(",");

                    // Write test results means.
                    builder.Append(pair.Value[variableTested].MedianX);
                    builder.Append(",");
                    builder.Append(pair.Value[variableTested].MedianY);
                    builder.Append(",");
                    builder.Append(pair.Value[variableTested].MedianZ);
                    builder.Append(",");

                    // Finish with a blank sheet column to separate logical columns.
                    builder.Append(",");
                }

                // Move to next sheet line and skip sheet columns containing row header.
                builder.Append("\n");
                builder.Append(",");
                builder.Append(",");

                // For each logical column in the row...
                foreach (string variableTested in Program.VariablesToTest)
                {
                    // Print test results row header.
                    builder.Append("Upper Quartile");
                    builder.Append(",");

                    // Write test results means.
                    builder.Append(pair.Value[variableTested].UpperQuartileX);
                    builder.Append(",");
                    builder.Append(pair.Value[variableTested].UpperQuartileY);
                    builder.Append(",");
                    builder.Append(pair.Value[variableTested].UpperQuartileZ);
                    builder.Append(",");

                    // Finish with a blank sheet column to separate logical columns.
                    builder.Append(",");
                }

                // Move to next sheet line and skip sheet columns containing row header.
                builder.Append("\n");
                builder.Append(",");
                builder.Append(",");

                // For each logical column in the row...
                foreach (string variableTested in Program.VariablesToTest)
                {
                    // Print test results row header.
                    builder.Append("Max");
                    builder.Append(",");

                    // Write test results means.
                    builder.Append(pair.Value[variableTested].MaxX);
                    builder.Append(",");
                    builder.Append(pair.Value[variableTested].MaxY);
                    builder.Append(",");
                    builder.Append(pair.Value[variableTested].MaxZ);
                    builder.Append(",");

                    // Finish with a blank sheet column to separate logical columns.
                    builder.Append(",");
                }

                // Move to next sheet line and skip sheet columns containing row header.
                builder.Append("\n");
                builder.Append(",");
                builder.Append(",");

                // For each logical column in the row...
                foreach (string variableTested in Program.VariablesToTest)
                {
                    // Print test results row header.
                    builder.Append("df - Numerator");
                    builder.Append(",");

                    // Write test results degrees of freedom.
                    builder.Append(pair.Value[variableTested].DfNumerator);
                    builder.Append(",");
                    builder.Append(",");
                    builder.Append(",");

                    // Finish with a blank sheet column to separate logical columns.
                    builder.Append(",");
                }

                // Move to next sheet line and skip sheet columns containing row header.
                builder.Append("\n");
                builder.Append(",");
                builder.Append(",");

                // For each logical column in the row...
                foreach (string variableTested in Program.VariablesToTest)
                {
                    // Print test results row header.
                    builder.Append("df - Denominator");
                    builder.Append(",");

                    // Write test results degrees of freedom.
                    builder.Append(pair.Value[variableTested].DfDenominator);
                    builder.Append(",");
                    builder.Append(",");
                    builder.Append(",");

                    // Finish with a blank sheet column to separate logical columns.
                    builder.Append(",");
                }

                // Move to next sheet line and skip sheet columns containing row header.
                builder.Append("\n");
                builder.Append(",");
                builder.Append(",");

                // For each logical column in the row...
                foreach (string variableTested in Program.VariablesToTest)
                {
                    // Print test results row header.
                    builder.Append("F Stat");
                    builder.Append(",");

                    // Write test results t statistic.
                    builder.Append(pair.Value[variableTested].F);
                    builder.Append(",");
                    builder.Append(",");
                    builder.Append(",");

                    // Finish with a blank sheet column to separate logical columns.
                    builder.Append(",");
                }

                // Skip two lines.
                builder.Append("\n");
                builder.Append("\n");
                builder.Append("\n");
            }

            string fileData = builder.ToString();
            File.WriteAllText(Program.FilePath + fileName, fileData);
        }

        private static string GenerateHeader()
        {
            StringBuilder builder = new StringBuilder();

            // Move to the 3rd column.
            builder.Append(",");
            builder.Append(",");

            // Write out headers.
            foreach (string variableTested in Program.VariablesToTest)
            {
                builder.Append(variableTested);
                // Leave 4 columns of space.
                builder.Append(",");
                builder.Append(",");
                builder.Append(",");
                builder.Append(",");
            }

            return builder.ToString();
        }

        private static string GenerateANOVAHeader()
        {
            StringBuilder builder = new StringBuilder();

            // Move to the 4th column.
            builder.Append(",");
            builder.Append(",");

            // Write out headers.
            foreach (string variableTested in Program.VariablesToTest)
            {
                builder.Append(variableTested);
                // Leave 5 columns of space.
                builder.Append(",");
                builder.Append(",");
                builder.Append(",");
                builder.Append(",");
                builder.Append(",");
            }

            return builder.ToString();
        }

        #endregion
    }
}
