using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public class DesktopCameraController : MonoBehaviour
{
    public float MouseScrollThreshold;
    public float ZoomScalar;
    public float PanScalar;

    private Camera camera;
    private Vector2 mouseRightButtonDownPos;
    private Vector2 mouseMiddleButtonDownPos;

    // Start is called before the first frame update
    void Start()
    {
        this.camera = Camera.main;
    }

    // Update is called once per frame
    void Update()
    {
        // Check the mouse for input.
        // Forward/Back Position
        if (Input.mouseScrollDelta.y > this.MouseScrollThreshold)
        {
            // Zoom in.
            //camera.fieldOfView -= this.ZoomScalar;
            this.camera.transform.position += this.camera.transform.forward * ZoomScalar;
        }
        if (Input.mouseScrollDelta.y < -this.MouseScrollThreshold)
        {
            // Zoom out.
            //camera.fieldOfView += this.ZoomScalar;
            this.camera.transform.position -= this.camera.transform.forward * ZoomScalar;
        }

        // Rotation
        if (Input.GetMouseButtonDown((int)MouseButton.RightMouse))
        {
            // Capture the mouse position. This is when the user
            //      first presses the button.
            this.mouseRightButtonDownPos = Input.mousePosition;
        }
        if (Input.GetMouseButton((int)MouseButton.RightMouse))
        {
            // Rotate based on the delta of the mouse position since
            //      the button was first pressed.
            Vector3 rotation = new Vector3(
                -(Input.mousePosition.y - this.mouseRightButtonDownPos.y),
                Input.mousePosition.x - this.mouseRightButtonDownPos.x,
                0
                );
            //camera.transform.Rotate(rotation);
            camera.transform.localEulerAngles += rotation;

            this.mouseRightButtonDownPos = Input.mousePosition;
        }

        // Up/Down and Left/Right Position
        if (Input.GetMouseButtonDown((int)MouseButton.MiddleMouse))
        {
            // Capture the mouse position. This is when the user
            //      first presses the button.
            this.mouseMiddleButtonDownPos = Input.mousePosition;
        }
        if (Input.GetMouseButton((int)MouseButton.MiddleMouse))
        {
            // Pan based on the delta of the mouse position since
            //      the button was first pressed.
            Vector3 deltaPos = (this.camera.transform.right * (Input.mousePosition.x - this.mouseMiddleButtonDownPos.x) +
                this.camera.transform.up * (Input.mousePosition.y - this.mouseMiddleButtonDownPos.y)) * this.PanScalar;

            this.camera.transform.position -= deltaPos;

            this.mouseMiddleButtonDownPos = Input.mousePosition;
        }
    }
}
