using Helpers;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets
{
    public class TrialDataBuilder
    {
        public int TeamNumber
        {
            get { return (this.CurrentData != null) ? this.CurrentData.TeamNumber : 0; }
        }

        public int TrialNumber
        {
            get { return (this.CurrentData != null) ? this.CurrentData.TrialNumber : 0; }
        }

        public int DeviceNumber
        {
            get { return (this.CurrentData != null) ? this.CurrentData.DeviceNumber : 0; }
        }

        /// <summary>
        /// Any view data before this time will be ignored.
        /// </summary>
        public DateTime ClipBeforeTime { get; private set; }

        /// <summary>
        /// Any view data after this time will be ignored.
        /// </summary>
        public DateTime ClipAfterTime { get; private set; }

        private TrialRecordedData CurrentData;

        public TrialDataBuilder()
        {
            this.CurrentData = null;
        }
        public void StartNewTrial(int teamNumber, int trialNumber, Modality modality, int deviceNumber, DateTime clipBeforeTime, DateTime clipAfterTime)
        {
            this.ClipBeforeTime = clipBeforeTime;
            this.ClipAfterTime = clipAfterTime;

            this.CurrentData = new TrialRecordedData()
            {
                TeamNumber = teamNumber,
                TrialNumber = trialNumber,
                Modality = modality,
                DeviceNumber = deviceNumber
            };

            //if (teamNumber == 1 && trialNumber == 17)
            //{
            //    string msg = "Started new trial!!! Team 6, Trial " + trialNumber;
            //    UnityEngine.Debug.Log(msg);
            //}
        }

        public bool RecordViewData(ViewData viewData)
        {
            //if (this.CurrentData.TeamNumber == 1 && this.CurrentData.TrialNumber == 17)
            //{
            //    string msg = "RECORD REJECTED!!! Team 6, Trial " + this.CurrentData.TrialNumber + ". Timestamp: " + viewData.TimeStamp + ", Clip before: " + this.ClipBeforeTime + ", Clip after: " + this.ClipAfterTime; ;
            //    UnityEngine.Debug.Log(msg);
            //}

            // Reject the data if it is outside of the clipping range.
            if (viewData.TimeStamp < this.ClipBeforeTime || viewData.TimeStamp > this.ClipAfterTime)
            {
                //if (this.CurrentData.TeamNumber == 10 && this.CurrentData.TrialNumber >= 14)
                //{
                //    string msg = "Data rejected!!! Team " + this.CurrentData.TeamNumber + ", Trial " + this.CurrentData.TrialNumber + " , Clip before: " + this.ClipBeforeTime + ", Clip after: " + this.ClipAfterTime;
                //    UnityEngine.Debug.Log(msg);
                //}
                return false;
            }

            //if (this.CurrentData.TeamNumber == 1 && this.CurrentData.TrialNumber == 17)
            //{
            //    string msg = "Recorded data for trial!!! Team 6, Trial " + this.CurrentData.TrialNumber;
            //    UnityEngine.Debug.Log(msg);
            //}

            // Record the data that is within the clipping range.
            this.CurrentData.Data.Add(viewData);
            return true;
        }

        public TrialRecordedData GetCurrentTrialData()
        {
            return this.CurrentData;
        }

        public override string ToString()
        {
            StringBuilder builder = new StringBuilder();

            // Write the header line.
            builder.Append(this.CurrentData.TeamNumber);
            builder.Append(",");
            builder.Append(this.CurrentData.TrialNumber);
            builder.Append(",");
            builder.Append(this.CurrentData.Modality.ToString());
            builder.Append(",");
            builder.Append(this.CurrentData.DeviceNumber);
            builder.Append("\n");

            // Write each data line.
            foreach (ViewData data in this.CurrentData.Data)
            {
                builder.Append(data.TimeStamp);
                builder.Append(",");
                builder.Append(data.Position.x);
                builder.Append(",");
                builder.Append(data.Position.y);
                builder.Append(",");
                builder.Append(data.Position.z);
                builder.Append(",");
                builder.Append(data.Rotation.x);
                builder.Append(",");
                builder.Append(data.Rotation.y);
                builder.Append(",");
                builder.Append(data.Rotation.z);
                builder.Append("\n");
            }

            //if (this.CurrentData.TeamNumber == 1 && this.CurrentData.TrialNumber == 17)
            //{
            //    string msg = "Output data for trial!!! Team 6, Trial " + this.CurrentData.TrialNumber + ", " + this.CurrentData.Data.Count + " lines found.";
            //    UnityEngine.Debug.Log(msg);
            //}

            return builder.ToString();
        }
    }
}
