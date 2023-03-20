using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Android;

public class Permissions : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        //Checks if location permissions are allowed, if not it requests them
        if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            Permission.RequestUserPermission(Permission.FineLocation);
            Permission.RequestUserPermission(Permission.CoarseLocation);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
