using System;
using System.Collections.Generic;
using System.Text;

namespace StatsTesting.Models
{
    public class TrialData
    {
        public int Team { get; set; }
        public Modality Modality { get; set; }
        public ChartType ChartType { get; set; }
        public TaskType TaskType { get; set; }
        public string Task { get; set; }
        public int ConvoGrounding { get; set; }
        public TimeSpan TaskTime { get; set; }
        public double GesturesPerTime { get; set; }
        public double PercentGesturesP1 { get; set; }
        public double UtterancesPerTime { get; set; }
        public double PercentUtterancesP1 { get; set; }
        public double LooksPerTime { get; set; }

        public double? PA_Distance { get; set; }
        public double? PB_Distance { get; set; }
        public double? PA_PercentBelowAngleThreshold { get; set; }
        public double? PB_PercentBelowAngleThreshold { get; set; }

        public double? AverageDistance { get; set; }
        public double? PA_PercentDistance { get; set; }

        public double? AveragePercentTimeBelowThreshold { get; set; }
    }

    public enum Modality
    {
        Desktop,
        Hololens
    }

    public enum ChartType
    {
        BarChart,
        Network,
        ScatterPlot
    }

    public enum TaskType
    {
        Closed,
        Open
    }
}
