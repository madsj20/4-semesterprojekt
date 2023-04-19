using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class lightningControl : MonoBehaviour
{


    public List<GameObject> targetObjects; // The list of game objects you want to turn on/off
    public float onTime = 3f; // The time in seconds the object should be turned on
    public float offTime = 2f; // The time in seconds the object should be turned off
    public float minRandomTime = 1f; // The minimum amount of time to randomly add to onTime and offTime
    public float maxRandomTime = 5f; // The maximum amount of time to randomly add to onTime and offTime

    private Dictionary<GameObject, bool> objectStates = new Dictionary<GameObject, bool>(); // Dictionary to keep track of whether each object is currently on or off
    private Dictionary<GameObject, float> objectTimers = new Dictionary<GameObject, float>(); // Dictionary to keep track of how long each object has been on or off

    // Start is called before the first frame update
    void Start()
    {
        // Initialize the dictionaries with each target object
        foreach (GameObject obj in targetObjects)
        {
            objectStates[obj] = false;
            objectTimers[obj] = 0f;
        }
    }

    // Update is called once per frame
    void Update()
    {
        // Check each target object
        foreach (GameObject obj in targetObjects)
        {
            objectTimers[obj] += Time.deltaTime;

            // If the object is currently on and the onTime plus a random amount has elapsed, turn it off
            if (objectStates[obj] && objectTimers[obj] >= onTime + Random.Range(minRandomTime, maxRandomTime))
            {
                obj.SetActive(false);
                objectStates[obj] = false;
                objectTimers[obj] = 0f;
            }
            // If the object is currently off and the offTime plus a random amount has elapsed, turn it on
            else if (!objectStates[obj] && objectTimers[obj] >= offTime + Random.Range(minRandomTime, maxRandomTime))
            {
                obj.SetActive(true);
                objectStates[obj] = true;
                objectTimers[obj] = 0f;
            }
        }
    }



}
