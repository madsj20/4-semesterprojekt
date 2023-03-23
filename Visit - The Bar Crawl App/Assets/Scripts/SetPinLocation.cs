using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.Maps.Unity;
using Microsoft.Geospatial;

public class SetPinLocation : MonoBehaviour
{
    public MapPin PIN;
    public float latitude, longitude;
    // Start is called before the first frame update
    void Start()
    {

        if (Input.location.status == LocationServiceStatus.Running)
        {
            latitude = Input.location.lastData.latitude;
            longitude = Input.location.lastData.longitude;
            Debug.Log(latitude);
            Debug.Log(longitude);
            PIN.Altitude = 15;
            PIN.Location = new LatLon(55.368934, 10.427775);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
