using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Helpers
{
    public class TrialClippingData
    {
        /// <summary>
        /// The number of the trial this clipping data is for.
        /// </summary>
        public int TrialNumber { get; set; }

        /// <summary>
        /// The name of the chart used in this trial.
        /// </summary>
        public string ChartName { get; set; }

        /// <summary>
        /// The time to use for clipping the beginning of the trial data.
        /// </summary>
        public TimeSpan StartTime { get; set; }

        /// <summary>
        /// The time to use for clipping the ending of the trial data.
        /// </summary>
        public TimeSpan EndTime { get; set; }
    }
}
