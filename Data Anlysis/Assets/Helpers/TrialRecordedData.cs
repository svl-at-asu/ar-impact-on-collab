using Assets;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Helpers
{
    public class TrialRecordedData
    {
        /// <summary>
        /// The number of the team this session is from.
        /// </summary>
        public int TeamNumber { get; set; }

        public int TrialNumber { get; set; }

        public Modality Modality { get; set; }

        public int DeviceNumber { get; set; }

        public List<ViewData> Data { get; set; }

        public TrialRecordedData()
        {
            this.Data = new List<ViewData>();
        }
    }
}
