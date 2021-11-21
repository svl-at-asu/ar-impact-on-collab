using System;
using System.Collections.Generic;
using System.Text;

namespace StatsTesting.Models
{
    public class ANOVAResult
    {
        public string TestedVariable { get; set; }
        public string DataSetXCategoryName { get; set; }
        public string DataSetYCategoryName { get; set; }
        public string DataSetZCategoryName { get; set; }
        public string[] FactorsHeldConstant { get; set; }

        public List<double> DataSetX { get; set; }
        public List<double> DataSetY { get; set; }
        public List<double> DataSetZ { get; set; }

        /// <summary>
        /// Mean of dataset X.
        /// </summary>
        public double MeanX { get; set; }
        /// <summary>
        /// Mean of dataset Y.
        /// </summary>
        public double MeanY { get; set; }
        /// <summary>
        /// Mean of dataset Z.
        /// </summary>
        public double MeanZ { get; set; }

        /// <summary>
        /// Standard Deviation of dataset X.
        /// </summary>
        public double StdDevX { get; set; }
        /// <summary>
        /// Standard Deviation of dataset Y.
        /// </summary>
        public double StdDevY { get; set; }
        /// <summary>
        /// Standard Deviation of dataset Y.
        /// </summary>
        public double StdDevZ { get; set; }

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
        public double MinZ { get; set; }
        public double LowerQuartileZ { get; set; }
        public double MedianZ { get; set; }
        public double UpperQuartileZ { get; set; }
        public double MaxZ { get; set; }

        public int DfNumerator { get; set; }
        public int DfDenominator { get; set; }
        public double F { get; set; }
    }
}
