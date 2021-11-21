# masters-thesis
Code for my masters thesis: Exploring the Impact of Augmented Reality on Collaborative Decision-Making in Small Teams.

Data Processing Steps
1. Open "Masters Thesis Data Analysis" in Unity. Project was created in version 2019.4.14f1.
2. Update the file "VideoTimes.csv" in path "\Assets\StreamingAssets" relative to the root of the project.
3. Update the file "Video Encoding Data.csv" in path "\Assets\StreamingAssets" relative to the root of the project.
    This must be in the format: Team, Trial,	Modality,	Chart Type,	Task Type,	Start,	End
4. Add the data logs for each session into the path
    The logs should be renamed to be in the format: Team[team number]_[modality]_datalog.csv
      Where:
      modality = Desktop, Hololens1, or Hololens2
    Delete any partial trial data from the end, if there is any (incomplete sessions due to sudden cutout such as battery failure). Failing to do so will cause the data processing to crash.
5. Run the scene in Unity. Ensure the DataCleaner script is enabled (checked) and note the output path (by default, "C:\\Users\\Public\\Documents\\").
6. Retrieve the output files from the path noted in step 5, and move them into a subfolder in the StreamingAssets folder, called "PathData". The path relative to th eroot of the project should be: "\Assets\StreamingAssets\PathData\".
7. In the "Masters Thesis Data Analysis" Unity scene, disble the "DataCleaner" script on the "SceneController" gameobject, and enable the "Movements Calculator" script.
8. Run the scene in Unity.
9. Retrieve the output file "MovementsData.csv" from the path "C:\\Users\\Public\\Documents\\".
10. Append the Movements Data to the "Video Encoding Data.csv" file.
11. Put a copy of the "Video Encoding Data.csv" file into the path "C:\\Users\\Public\\Documents\\".
12. Run the StatsTesting project from Visual Studio, not Unity.
13. Retrieve the three output files "ChartTypeStats.csv", "ModalityStats.csv", "TaskTypeStats.csv" from the path "C:\\Users\\Public\\Documents\\".
14. The total standard deviation (standard deviation across all samples), P-Value, and Statistical Power for each case must be manually calculated using a calculator or program of your choice.

Example Statistical Power calculator for two independent samples: https://www.stat.ubc.ca/~rollin/stats/ssize/n2.html
Example P-Value calculator from T-score: https://www.socscistatistics.com/pvalues/tdistribution.aspx
Example P-Value calculator from F-Statistic (ANOVA): https://www.socscistatistics.com/pvalues/fdistribution.aspx
