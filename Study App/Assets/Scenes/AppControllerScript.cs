using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class AppControllerScript : MonoBehaviour
{
    /// <summary>
    /// True for mixed reality, false for desktop.
    /// </summary>
    public bool MixedRealityMode;

    // Start is called before the first frame update
    void Start()
    {
        // Load the scene depending on the configured setting.
        if (this.MixedRealityMode)
        {
            SceneManager.LoadScene("Hololense Scene");
        }
        else
        {
            SceneManager.LoadScene("Desktop Scene");
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
