using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class HMDInfoManger : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("is device active" + XRSettings.isDeviceActive);
        Debug.Log("loaded device name" + XRSettings.loadedDeviceName);


        if (!XRSettings.isDeviceActive)
        {
            Debug.Log("no headset pluged");
        }
        else if (XRSettings.isDeviceActive && (XRSettings.loadedDeviceName== "MOCK HMD" || XRSettings.loadedDeviceName == "MockHMDDisplay"))
        {
            Debug.Log("Using Mock HMD");
        }
        else
        {
            Debug.Log("we have a headset" + XRSettings.loadedDeviceName);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
