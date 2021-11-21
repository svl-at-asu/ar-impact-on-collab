using Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Threading.Tasks;
using UnityEngine;

#if WINDOWS_UWP
using Windows.Storage;
using Windows.Storage.Pickers;
#endif

public class TrialsController : MonoBehaviour
{
    public GameObject LoggerGameObject;

    // A reference to all of the charts in the scene, indexed
    //      by name.
    private Dictionary<string, GameObject> Charts;

    // A list of the chart names in the order for the trials.
    private string[] OrderedNames;

    private int ActiveChartIndex;

    private string TeamName;

    // Start is called before the first frame update
    void Start()
    {
        // Get a reference to all charts in the scene.
        GameObject[] charts = GameObject.FindGameObjectsWithTag("Chart");

        if (charts.Length <= 0)
        {
            Debug.LogError("No game objects found with the Chart tag.");
            return;
        }

        this.Charts = new Dictionary<string, GameObject>();
        foreach (GameObject chart in charts)
        {
            this.Charts.Add(chart.name, chart);
        }



        // Load the trials order.
        // This is done as a coroutine, to ensure the remaining
        //      setup is completeded AFTER the async open file
        //      picker is completed.
        this.StartCoroutine(this.SetUp());
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private IEnumerator SetUp()
    {
        bool asyncOperationDone = false;

#if WINDOWS_UWP
        UnityEngine.WSA.Application.InvokeOnUIThread(async () =>
        {
            this.OrderedNames = await this.ReadChartOrderAsync();
            asyncOperationDone = true;
        }, true);
#else
        this.OrderedNames = null;
        asyncOperationDone = true;
#endif

        while (!asyncOperationDone)
        {
            yield return null;
        }

        if (this.OrderedNames != null)
        {
            // Subscribe to the event for each chart, and make the chart inactive.
            foreach (KeyValuePair<string, GameObject> pair in this.Charts)
            {
                InteractionCountdown countdown = pair.Value.GetComponent<InteractionCountdown>();
                countdown.ClicksCompleted += this.SwapTrials;

                pair.Value.SetActive(false);
            }

            // Show first trial.
            this.ActiveChartIndex = 0;
            string currentTrialName = this.OrderedNames[this.ActiveChartIndex];
            this.Charts[currentTrialName].SetActive(true);

            // Start the data logging.
            Logger logger = this.LoggerGameObject.GetComponent<Logger>();
            logger.RecordNewTrial(this.TeamName, currentTrialName);
        }
    }

    public void SwapTrials()
    {
        // Deactivate the currently active chart.
        this.Charts[this.OrderedNames[this.ActiveChartIndex]].SetActive(false);

        // Activate the next chart.
        this.ActiveChartIndex++;

        if (this.ActiveChartIndex < this.OrderedNames.Length)
        {
            string currentTrialName = this.OrderedNames[this.ActiveChartIndex];
            this.Charts[currentTrialName].SetActive(true);

            // Notify the logger to start a new trial.
            Logger logger = this.LoggerGameObject.GetComponent<Logger>();
            logger.RecordNewTrial(this.TeamName, currentTrialName);
        }
        else
        {
            // The end of the trials has been reached.
            ExitAppScript exitScript = this.GetComponent<ExitAppScript>();
            exitScript.CloseApp();
        }
    }

    private async Task<string[]> ReadChartOrderAsync()
    {
        string[] names = null;
#if WINDOWS_UWP
        FileOpenPicker openPicker = new FileOpenPicker();
        openPicker.ViewMode = PickerViewMode.List;
        openPicker.SuggestedStartLocation = PickerLocationId.DocumentsLibrary;
        openPicker.FileTypeFilter.Add(".txt");

        StorageFile file = await openPicker.PickSingleFileAsync();
        if (file != null)
        {
            using (Stream fileStream = await file.OpenStreamForReadAsync())
            {
                using (StreamReader reader = new StreamReader(fileStream))
                {
                    string text = reader.ReadToEnd();
                    names = text.Split(',');
                }
            }

            this.TeamName = file.DisplayName;
        }
#endif
        return names;
    }
}
