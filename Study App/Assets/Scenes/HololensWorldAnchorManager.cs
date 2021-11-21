using Microsoft.MixedReality.Toolkit.Experimental.Utilities;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.WSA;
using UnityEngine.XR.WSA.Persistence;

public class HololensWorldAnchorManager : MonoBehaviour
{
    private WorldAnchorStore Store;
    private WorldAnchorManager Manager;

    // Start is called before the first frame update
    void Start()
    {
        // Load and get a reference to the store.
        //WorldAnchorStore.GetAsync(this.AnchorStoreLoaded);
        //this.AttachAnchor();
        WorldAnchor worldAnchor = this.gameObject.AddComponent<WorldAnchor>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    // Handler for the Anchor Store loaded event.
    private void AnchorStoreLoaded(WorldAnchorStore store)
    {
        // Store the reference to the store.
        this.Store = store;
        this.LoadAnchors();
    }

    private void LoadAnchors()
    {
        bool loaded = this.Store.Load(this.gameObject.name, this.gameObject);
        if (!loaded)
        {
            // No matching anchor was previously saved to load.
        }

        this.AttachAnchor();
    }

    private void SaveAnchor()
    {
        bool saved;
        WorldAnchor anchor = this.gameObject.GetComponent<WorldAnchor>();

        // Remove any previous world anchor objects from the store.
        this.Store.Delete(this.gameObject.name);

        // Save the new anchor.
        saved = this.Store.Save(this.gameObject.name, anchor);

        if (!saved)
        {
            // There was an issue saving the anchor to the store.
            Debug.LogError("Anchor save failed");
        }
    }

    private void AttachAnchor()
    {
        this.Manager = new WorldAnchorManager();
        this.Manager.AttachAnchor(this.gameObject);
    }
}
