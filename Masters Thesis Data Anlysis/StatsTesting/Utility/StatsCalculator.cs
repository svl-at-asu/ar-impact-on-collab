using StatsTesting.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace StatsTesting.Utility
{
    public static class StatsCalculator
    {
        /// <summary>
        /// Based on sample from: https://docs.microsoft.com/en-us/archive/msdn-magazine/2015/november/test-run-the-t-test-using-csharp#the-demo-program
        /// </summary>
        /// <param name="dataSet"></param>
        /// <returns></returns>
        public static double Mean(List<double> dataSet)
        {
            // The definition of method TTest begins by summing the values in each dataset:
            double sum = 0.0;
            for (int i = 0; i < dataSet.Count; ++i)
                sum += dataSet[i];

            // Next, the sums are used to calculate the sample mean:
            int n1 = dataSet.Count;
            return sum / n1;
        }

        /// <summary>
        /// Based on sample from: https://docs.microsoft.com/en-us/archive/msdn-magazine/2015/november/test-run-the-t-test-using-csharp#the-demo-program
        /// </summary>
        /// <param name="dataSet"></param>
        /// <returns></returns>
        public static double Variance(List<double> dataSet)
        {
            // Next, the sums are used to calculate the two sample means:
            int n1 = dataSet.Count;
            double mean = StatsCalculator.Mean(dataSet);

            // Next, the two means are used to calculate the two sample variances:
            double sumXminusMeanSquared = 0.0; // Calculate variance
            for (int i = 0; i < n1; ++i)
                sumXminusMeanSquared += (dataSet[i] - mean) * (dataSet[i] - mean);
            return sumXminusMeanSquared / (n1 - 1);
        }

        /// <summary>
        /// Based on sample from: https://docs.microsoft.com/en-us/archive/msdn-magazine/2015/november/test-run-the-t-test-using-csharp#the-demo-program
        /// </summary>
        /// <param name="dataSet"></param>
        /// <returns></returns>
        public static double StandardDeviation(List<double> dataSet)
        {
            return Math.Sqrt(StatsCalculator.Variance(dataSet));
        }

        public static double Median(List<double> dataSet)
        {
            dataSet.Sort();

            int n = dataSet.Count;

            double median;
            if (n % 2 == 0)
            {
                // even number of elements, so take the average of the middle two.
                int medianIndex = n / 2;
                median = (dataSet[medianIndex] + dataSet[medianIndex - 1]) / 2.0;
            }
            else
            {
                // odd number of elements, so take the middle element.
                int medianIndex = ((n + 1) / 2) - 1;
                median = dataSet[medianIndex];
            }

            return median;
        }

        public static double LowerQuartile(List<double> dataSet)
        {
            dataSet.Sort();

            // Note that integer division handles the case where the size is odd.
            int halfCount= dataSet.Count / 2;

            List<double> lowerHalf = dataSet.GetRange(0, halfCount);

            return StatsCalculator.Median(lowerHalf);
        }

        public static double UpperQuartile(List<double> dataSet)
        {
            dataSet.Sort();

            // Note that integer division handles the case where the size is odd.
            int halfCount = dataSet.Count / 2;

            List<double> upperHalf = dataSet.GetRange(halfCount, halfCount);

            return StatsCalculator.Median(upperHalf);
        }

        /// <summary>
        /// Based on sample from: https://docs.microsoft.com/en-us/archive/msdn-magazine/2015/november/test-run-the-t-test-using-csharp#the-demo-program
        /// </summary>
        /// <param name="x"></param>
        /// <param name="y"></param>
        public static TTestResult TTest(List<double> x, List<double> y)
        {
            // Next, the sums are used to calculate the two sample variances:
            int n1 = x.Count;
            int n2 = y.Count;
            double meanX = StatsCalculator.Mean(x);
            double meanY = StatsCalculator.Mean(y);
            double varX = StatsCalculator.Variance(x);
            double varY = StatsCalculator.Variance(y);

            // The variance of a set of data is the square of the standard deviation,
            // so the standard deviation is the square root of the variance and the
            // t-test works with variances. Next, the t statistic is calculated:
            double top = (meanX - meanY);
            double bot = Math.Sqrt((varX / n1) + (varY / n2));
            double t = top / bot;

            // In words, the t statistic is the difference between the two sample means,
            // divided by the square root of the sum of the variances divided by their
            // associated sample sizes. Next, the degrees of freedom is calculated:
            double num = ((varX / n1) + (varY / n2)) * ((varX / n1) + (varY / n2));
            double denomLeft = ((varX / n1) * (varX / n1)) / (n1 - 1);
            double denomRight = ((varY / n2) * (varY / n2)) / (n2 - 1);
            double denom = denomLeft + denomRight;
            double df = num / denom;

            return new TTestResult()
            {
                DataSetX = x,
                DataSetY = y,
                MeanX = meanX,
                MeanY = meanY,
                StdDevX = Math.Sqrt(varX),
                StdDevY = Math.Sqrt(varY),
                TStat = t,
                Df = df
            };
        }

        public static TTestResult PairedTTest(List<double> x, List<double> y)
        {
            if (x.Count == 0 || y.Count == 0)
            {
                return new TTestResult();
            }

            // Next, the sums are used to calculate the two sample variances:
            int n = x.Count;

            // Calculate the sum of differences.
            List<double> differences = new List<double>();
            for (int i = 0; i < n; i++)
            {
                differences.Add(y[i] - x[i]);
            }
            double sDiff = StatsCalculator.StandardDeviation(differences);

            double meanX = StatsCalculator.Mean(x);
            double meanY = StatsCalculator.Mean(y);
            double varX = StatsCalculator.Variance(x);
            double varY = StatsCalculator.Variance(y);

            double top = meanX - meanY;
            double bot = sDiff / Math.Sqrt(n);
            double t = top / bot;

            return new TTestResult()
            {
                DataSetX = x,
                DataSetY = y,
                MeanX = meanX,
                MeanY = meanY,
                StdDevX = Math.Sqrt(varX),
                StdDevY = Math.Sqrt(varY),
                MinX = x.Min(),
                MinY = y.Min(),
                LowerQuartileX = StatsCalculator.LowerQuartile(x),
                LowerQuartileY = StatsCalculator.LowerQuartile(y),
                MedianX = StatsCalculator.Median(x),
                MedianY = StatsCalculator.Median(y),
                UpperQuartileX = StatsCalculator.UpperQuartile(x),
                UpperQuartileY = StatsCalculator.UpperQuartile(y),
                MaxX = x.Max(),
                MaxY = y.Max(),
                TStat = t,
                Df = n - 1
            };
        }

        /// <summary>
        /// Based on sample from: https://docs.microsoft.com/en-us/archive/msdn-magazine/2015/november/test-run-the-t-test-using-csharp#the-demo-program
        /// </summary>
        /// <param name="dataSets"></param>
        public static ANOVAResult ANOVA(List<List<double>> dataSets)
        {
            int[] df = null;
            double F = StatsCalculator.ANOVA_FStat(dataSets, out df);

            return new ANOVAResult()
            {
                DataSetX = dataSets[0],
                DataSetY = dataSets[1],
                DataSetZ = dataSets[2],
                MeanX = StatsCalculator.Mean(dataSets[0]),
                MeanY = StatsCalculator.Mean(dataSets[1]),
                MeanZ = StatsCalculator.Mean(dataSets[2]),
                StdDevX = StatsCalculator.StandardDeviation(dataSets[0]),
                StdDevY = StatsCalculator.StandardDeviation(dataSets[1]),
                StdDevZ = StatsCalculator.StandardDeviation(dataSets[2]),
                MinX = dataSets[0].Min(),
                MinY = dataSets[1].Min(),
                MinZ = dataSets[2].Min(),
                LowerQuartileX = StatsCalculator.LowerQuartile(dataSets[0]),
                LowerQuartileY = StatsCalculator.LowerQuartile(dataSets[1]),
                LowerQuartileZ = StatsCalculator.LowerQuartile(dataSets[2]),
                MedianX = StatsCalculator.Median(dataSets[0]),
                MedianY = StatsCalculator.Median(dataSets[1]),
                MedianZ = StatsCalculator.Median(dataSets[2]),
                UpperQuartileX = StatsCalculator.UpperQuartile(dataSets[0]),
                UpperQuartileY = StatsCalculator.UpperQuartile(dataSets[1]),
                UpperQuartileZ = StatsCalculator.UpperQuartile(dataSets[2]),
                MaxX = dataSets[0].Max(),
                MaxY = dataSets[1].Max(),
                MaxZ = dataSets[2].Max(),
                DfNumerator = df[0],
                DfDenominator = df[1],
                F = F
            };
        }

        /// <summary>
        /// Based on sample from: https://docs.microsoft.com/en-us/archive/msdn-magazine/2015/november/test-run-the-t-test-using-csharp#the-demo-program
        /// </summary>
        /// <param name="dataSets"></param>
        /// <param name="df"></param>
        /// <returns></returns>
        private static double ANOVA_FStat(List<List<double>> dataSets, out int[] df)
        {
            int K = dataSets.Count; // Number groups
            int[] n = new int[K]; // Number items each group
            int N = 0; // total number data points
            for (int i = 0; i < K; ++i)
            {
                n[i] = dataSets[i].Count;
                N += dataSets[i].Count;
            }

            // At this point, local array n has the number of values in each group,
            // K has the number of groups, and N is the total number of values in
            // all groups. Next, the group means are calculated into an array named
            // means, and the overall grand mean is calculated into variable gMean:
            double[] means = new double[K];
            double gMean = 0.0;
            for (int i = 0; i < K; ++i)
            {
                for (int j = 0; j < dataSets[i].Count; ++j)
                {
                    means[i] += dataSets[i][j];
                    gMean += dataSets[i][j];
                }
                means[i] /= n[i];
            }
            gMean /= N;

            // The next sub-step is to calculate the “sum of squares between groups”
            // (SSb) and “mean square between groups” (MSb). SSb is the weighted sum
            // of squared differences between each group mean and the overall mean.
            // MSb = SSb / (K-1) where K is the number of groups.
            double SSb = 0.0;
            for (int i = 0; i < K; ++i)
                SSb += n[i] * (means[i] - gMean) * (means[i] - gMean);
            double MSb = SSb / (K - 1);

            // The next sub-step is to calculate the “sum of squares within groups”
            // (SSw) and the “mean square within groups (MSw). SSw is the sum of
            // squared differences between each sample value and its group mean.
            // MSw = SSw / (N-K).
            double SSw = 0.0;
            for (int i = 0; i < K; ++i)
                for (int j = 0; j < dataSets[i].Count; ++j)
                    SSw += (dataSets[i][j] - means[i]) * (dataSets[i][j] - means[i]);
            double MSw = SSw / (N - K);

            //The final sub-step is to calculate the two df values and the F-statistic. 
            // The two df values are K - 1, and N - K. And F = MSb / MSw.
            df = new int[2];
            df[0] = K - 1;
            df[1] = N - K;
            double F = MSb / MSw;
            return F;
        }
    }
}
