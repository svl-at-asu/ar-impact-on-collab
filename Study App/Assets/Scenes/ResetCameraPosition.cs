using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResetCameraPosition : MonoBehaviour
{
    public Camera MainCamera;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKey(KeyCode.R))
        {
            this.ResetPosition();
        }
    }

    private void ResetPosition()
    {
        this.MainCamera.transform.position = new Vector3(0, 0, -5);
        this.MainCamera.transform.rotation = new Quaternion();
    }
}
