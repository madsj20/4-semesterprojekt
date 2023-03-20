using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.Maps.Unity;
using Microsoft.Geospatial;
using UnityEngine.Android;
using UnityEngine.UI;

public class GPS : MonoBehaviour
{
    public float latitude, longitude;
    public MapRenderer map;
    public MapPin PIN;
    private bool mapCenteret = false;
    private float zoomLevel;
    private bool centerContinuous = true;

    public Texture currentLocation;
    public Texture currentLocationCentered;
    public GameObject CurrentLocationGameObject;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(GPSLoc());
        zoomLevel = map.ZoomLevel;
    }

    // Update is called once per frame
    void Update()
    {
        if (mapCenteret == true)
        {
            if (centerContinuous == true)
            {
                latitude = Input.location.lastData.latitude;
                longitude = Input.location.lastData.longitude;
                map.Center = new LatLon(latitude, longitude);
                map.ZoomLevel = zoomLevel;
            }
        }

        if (centerContinuous == true)
        {
            CurrentLocationGameObject.GetComponent<RawImage>().texture = currentLocationCentered;
        }
        else
        {
            CurrentLocationGameObject.GetComponent<RawImage>().texture = currentLocation;
        }
    }

    IEnumerator GPSLoc()
    {
        //Checks if location permissions are allowed, if not it requests them
        if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            Permission.RequestUserPermission(Permission.FineLocation);
            Permission.RequestUserPermission(Permission.CoarseLocation);
        }

        if(!Input.location.isEnabledByUser)
        {
            print("NO GPS Signal");
            yield break;
        }

        Input.location.Start();

        int waitTime = 10;
        while(Input.location.status == LocationServiceStatus.Initializing && waitTime > 0)
        {
            yield return new WaitForSeconds(1);
            waitTime--;
        }

        if (waitTime < 1)
        {
            print("timed out");
            yield break;
        }

        if (Input.location.status == LocationServiceStatus.Failed)
        {
            print("No GPS");
            yield break;
        }
        else
        {
            InvokeRepeating("UpdateGPSLocation", 0, 0.5f);
            //Makes sure map is centered at when app starts
            if (mapCenteret == false)
            {
                SetScreenLocation();
                mapCenteret = true;
            }
        }

    }

    //Updates PIN/Player coordiantes
    public void UpdateGPSLocation()
    {
        if(Input.location.status == LocationServiceStatus.Running)
        {
            latitude = Input.location.lastData.latitude;
            longitude = Input.location.lastData.longitude;
            PIN.Location = new LatLon(latitude, longitude);
            Debug.Log(latitude);
            Debug.Log(longitude);
        }
        else
        {
            print("Stopped");
        }
    }

    //Centers screen to current coordinates
    public void SetScreenLocation()
    {
        latitude = Input.location.lastData.latitude;
        longitude = Input.location.lastData.longitude;
        map.Center = new LatLon(latitude, longitude);
        map.ZoomLevel = zoomLevel;
    }

    //used to toggle if the player is center of screen or not
    public void ToggleScreenCenter()
    {
        centerContinuous = !centerContinuous;
        Debug.Log(centerContinuous);
    }

    //Used when touching and dragging the map so you don't automatically snap back to the player
    public void DisableScreenCenter()
    {
        centerContinuous = false;
        Debug.Log(centerContinuous);
    }
}
