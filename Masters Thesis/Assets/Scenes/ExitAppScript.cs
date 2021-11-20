using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExitAppScript : MonoBehaviour
{
    public GameObject LoggerObject;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKey("escape"))
        {
            this.CloseApp();
        }
    }

    public void CloseApp()
    {
        if (LoggerObject != null)
        {
            Logger logger = LoggerObject.GetComponent(typeof(Logger)) as Logger;
            if (logger != null)
            {
                logger.CloseLogFile();
            }
        }

        Debug.Log("");
        Application.Quit();
    }
}
