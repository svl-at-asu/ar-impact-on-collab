using System;
using System.Collections.Generic;
using System.Text;

namespace StatsTesting.Models
{
    public class TTestResult
    {
        public string TestedVariable { get; set; }
        public string DataSetXCategoryName { get; set; }
        public string DataSetYCategoryName { get; set; }
        public string[] FactorsHeldConstant { get; set; }

        public List<double> DataSetX { get; set; }
        public List<double> DataSetY { get; set; }

        /// <summary>
        /// Mean of dataset X.
        /// </summary>
        public double MeanX { get; set; }
        /// <summary>
        /// Mean of dataset Y.
        /// </summary>
        public double MeanY { get; set; }

        /// <summary>
        /// Standard Deviation of dataset X.
        /// </summary>
        public double StdDevX { get; set; }
        /// <summary>
        /// Standard Deviation of dataset Y.
        /// </summary>
        public double StdDevY { get; set; }

        public double MinX { get; set; }
        public double LowerQuartileX { get; set; }
        public double MedianX { get; set; }
        public double UpperQuartileX { get; set; }
        public double MaxX { get; set; }
        public double MinY { get; set; }
        public double LowerQuartileY { get; set; }
        public double MedianY { get; set; }
        public double UpperQuartileY { get; set; }
        public double MaxY { get; set; }


        /// <summary>
        /// t statistic t test.
        /// </summary>
        public double TStat { get; set; }
        /// <summary>
        /// Degrees of freedomS
        /// </summary>
        public double Df { get; set; }
    }
}
