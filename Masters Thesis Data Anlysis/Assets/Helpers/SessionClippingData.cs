using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Helpers
{
    public class SessionClippingData
    {
        /// <summary>
        /// The number of the team this session is from.
        /// </summary>
        public int TeamNumber { get; set; }

        public Modality Modality { get; set; }

        /// <summary>
        /// A dictionary of the trial clipping data within this session clipping data, keyed based on trial number.
        /// </summary>
        public Dictionary<int, TrialClippingData> TrialClippingDatas { get; set; }

        public SessionClippingData()
        {
            this.TrialClippingDatas = new Dictionary<int, TrialClippingData>();
        }

        /// <summary>
        /// The name of the file to read the session from, in the format:
        /// Team[team number]_[modality]_datalog.csv.
        /// </summary>
        public List<string> GetFileNames()
        {
            List<string> fileNames = new List<string>();

            switch (this.Modality)
            {
                case Modality.Desktop:
                    fileNames.Add("Team" + this.TeamNumber + "_" + this.Modality + "_datalog.csv");
                    break;
                case Modality.Hololens:
                    fileNames.Add("Team" + this.TeamNumber + "_" + this.Modality + "1_datalog.csv");
                    fileNames.Add("Team" + this.TeamNumber + "_" + this.Modality + "2_datalog.csv");
                    break;
                default:
                    fileNames.Add("Team" + this.TeamNumber + "_" + this.Modality + "_datalog.csv");
                    break;
            }
            return fileNames;
        }
    }

    public enum Modality
    {
        Desktop,
        Hololens
    }
}
