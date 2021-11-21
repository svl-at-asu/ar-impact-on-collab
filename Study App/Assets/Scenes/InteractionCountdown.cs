using Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking;
using Microsoft.MixedReality.Toolkit.Input;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Fires an event when a number of clicks are recorded within a time limit. The time limit resets to
/// full value when a click happens, and the count for clicks returns to zero if the timer expires
/// before another click is registered.
/// </summary>
public class InteractionCountdown : MonoBehaviour, IMixedRealityPointerHandler
{
    public int NumTapsToAdvance = 5;

    public float TimeLimitBetweenClicks = 1;

    private int TapCounter;
    private float TimeRemaining;
    private bool Tracking;

    #region Events
    public delegate void ClicksCompletedHandler();
    /// <summary>
    /// Raised when the number of clicks within the time limit of each other ocure.
    /// </summary>
    public event ClicksCompletedHandler ClicksCompleted;

    private void RaiseClicksCompleted()
    {
        // Create the args, and call the listening event handlers, if there are any.
        this.ClicksCompleted?.Invoke();
    }
    #endregion

    // Start is called before the first frame update
    void Start()
    {
        this.Reset();
    }

    // Update is called once per frame
    void Update()
    {
        // If tracking, keep the timer counting down.
        if (this.Tracking)
        {
            this.TimeRemaining -= Time.deltaTime;
            //Debug.LogWarning(this.TimeRemaining);
        }

        // If no time is left, reset.
        if (this.TimeRemaining <= 0)
        {
            this.Reset();
        }
    }

    private void OnMouseDown()
    {
        //Debug.Log("Clicked!!!");

        // Increase tap count.
        this.TapCounter++;
        //Debug.Log(this.TapCounter);

        // Turn on tracking if not already on.
        this.Tracking = true;

        // Reset the countdown.
        this.TimeRemaining = this.TimeLimitBetweenClicks;

        // If the change trials gesture is complete...
        if (this.GestureComplete())
        {
            // Change to the next trial.
            this.RaiseClicksCompleted();

            this.Reset();
        }
    }

    private bool GestureComplete()
    {
        return this.TapCounter >= this.NumTapsToAdvance;
    }

    private void Reset()
    {
        this.TapCounter = 0;
        this.TimeRemaining = this.TimeLimitBetweenClicks;
        this.Tracking = false;
    }

    void IMixedRealityPointerHandler.OnPointerClicked(MixedRealityPointerEventData eventData)
    {
        //Debug.LogError("Clicked!!!");

        // Increase tap count.
        this.TapCounter++;
        //Debug.Log(this.TapCounter);

        // Turn on tracking if not already on.
        this.Tracking = true;

        // Reset the countdown.
        this.TimeRemaining = this.TimeLimitBetweenClicks;

        // If the change trials gesture is complete...
        if (this.GestureComplete())
        {
            // Change to the next trial.
            this.RaiseClicksCompleted();

            this.Reset();
        }
    }

    public void OnPointerDragged(MixedRealityPointerEventData eventData)
    {
        //throw new System.NotImplementedException();
    }

    public void OnPointerUp(MixedRealityPointerEventData eventData)
    {
        //throw new System.NotImplementedException();
    }

    public void OnPointerDown(MixedRealityPointerEventData eventData)
    {
        //throw new System.NotImplementedException();
    }
}
