using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StormScene : MonoBehaviour
{
    public AudioSource crewSeatingAnnouncement;
    public AudioSource passengerSeatingAnnouncement;
    private bool passiveShaking;
    private bool forceStopShaking = false;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (passiveShaking && !forceStopShaking)
        {
            StartCoroutine(passiveShake());
            passiveShaking = false;
        }
    }

    //passive automatic shake funktion
    private IEnumerator passiveShake()
    {
        float shakeTime;
        float magnitude;
        float shakeDelay;

        shakeTime = Random.Range(0.5f, 4f);
        magnitude = Random.Range(0.1f, 0.5f);
        shakeDelay = Random.Range(0.1f, 1.5f);

        ScreenShakeVR.TriggerShake(magnitude, shakeTime);
        yield return new WaitForSeconds(shakeTime);
        passiveShaking = true;
    }

    private IEnumerator Storm()
    {
        /*
        //Stewardesse Passenger Seating Announcement
        passengerSeatingAnnouncement.Play();
        yield return new WaitForSeconds(5);
        ScreenShakeVR.TriggerShake(0.1f, 0.5f);
        yield return new WaitForSeconds(1);
        ScreenShakeVR.TriggerShake(0.2f, 1f);
        yield return new WaitForSeconds(2);
        ScreenShakeVR.TriggerShake(0.1f, 0.5f);
        yield return new WaitForSeconds(4);
        ScreenShakeVR.TriggerShake(0.3f, 2f);
        yield return new WaitForSeconds(2);
        ScreenShakeVR.TriggerShake(0.7f, 4f);
        yield return new WaitForSeconds(2);
        ScreenShakeVR.TriggerShake(0.1f, 0.5f);
        //Hvis ikke nok, ændre til 1.2 magnitude
        yield return new WaitForSeconds(6);
        ScreenShakeVR.TriggerShake(1f, 6f);*/

        //Activate passive shaking
        passiveShaking = true;

        //Captain Crew Seating Announcement
        yield return new WaitForSeconds(5);
        crewSeatingAnnouncement.Play();
        yield return new WaitForSeconds(5);

        //Begin Turbulens
        //ScreenShakeVR.TriggerShake(0.1f, 20);


    }

    public void initiateStorm()
    {
        StartCoroutine(Storm());
    }
}
