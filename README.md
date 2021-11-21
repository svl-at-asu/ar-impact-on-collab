# ar-impact-on-collab
This repository contains the AR application and visualization data generation scripts for the study "Exploring the Impact of Augmented Reality on Collaboration Strategies in Two Person Teams".


Generating Data for the App
The app is pre-loaded with data that is synthetically generated from a Gaussian distribution. To generate a new data set:
1. Open the "Masters Thesis.sln" solution in Visual Studio (2019 or newer).
2. Open the project "GaussianDataGenerator" from the solution explorer.
3. This is a console app, and can be run directly.
4. Retrieve the output files at the path "C:\\Users\\Public\\Documents\\".
    The files are named with the format: {Point|Bar}_{Extrema|Trend}_Dataset_[number_a].csv OR Network_Dataset_[number_b].csv
      Where:
      number_a = 0, 1, 2, or 3
      number_b = 0, 1, 2, 3, 4, 5, 6, or 7
5. The files can be added to the "Assets/Scenes" folder in the Unity project.
6. Add a file to the "File Name" property of the "Csv Data Reader 3D" script component on each of the ScatterPlot, Netowrk, and BarChart GameObjects in the scene. Note that this must be repeated for both scenes, the Hololense Scene and the Desktop Scene.


Building and Running the App
This app is developed as a UWP app, and can be deployed on both Modern Windows (Windows 10, should work on Windows 11 as well but is untested) and on the Microsoft HoloLens. The "Masters Thesis" Unity project (in the "Study App" folder) contains the source code for both. There is a separate scene for each modality: a "Hololense Scene" and a "Desktop Scene". Both are already set up for the appropriate devices, and can be run inside of Unity. To build the UWP app, use the File > Build and Run menu item in Unity. If issues arise, try File > Build Settings... and then confirm the settings are correct.


Data Processing Steps
The "Masters Thesis Data Analysis" Unity project (in the "Data Analysis" folder) contains the scripts to process the data collected from the study sessions, as well as some scripts to visualize the paths participants took.
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
