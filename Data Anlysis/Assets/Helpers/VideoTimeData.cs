using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets.Helpers
{
    public class VideoTimeData
    {
        public DateTime VideoEndTime { get; set; }
        public TimeSpan VideoLength { get; set; }

        public DateTime VideoBeginTime
        {
            get
            {
                return this.VideoEndTime - this.VideoLength;
            }
        }
    }
}
