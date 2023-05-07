using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StormScene : MonoBehaviour
{
    public AudioSource crewSeatingAnnouncement;
    public AudioSource passengerSeatingAnnouncement;
    private bool passiveShaking;
    private bool forceStopShaking = false;
    public PlayerController playerController;
    public AudioSource shakeSound;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (passiveShaking && !forceStopShaking)
        {
            StartCoroutine(passiveShakeV2());
            passiveShaking = false;
        }
    }

    //passive automatic shake funktion
    private IEnumerator passiveShakeV2()
    {
        //shakeTime determines how long on shake takes
        float shakeTime;
        //magnitude determines how much the players head should move
        float magnitude;
        //shakeDelay determines the delay between shakes
        float shakeDelay;
        //ShakePitch changes the pitch of the shake audio to a random value
        float shakePitch;

        //Randomizing screenshake
        shakeTime = Random.Range(0.15f, 0.03f);
        magnitude = Random.Range(-0.03f, -0.01f);
        shakeDelay = Random.Range(0.2f, 2.5f);
        shakePitch = Random.Range(0.5f, 1.1f);

        shakeSound.pitch = shakePitch;
        shakeSound.Play();
        playerController.InitScreenShake(magnitude, shakeTime);
        //shakeTime has to be added and multiplied by 2, to give the animation time to finish, bacause shakeTime is used 2 times in the original function in the PlayerController script
        yield return new WaitForSeconds(shakeDelay+(shakeTime*2));
        passiveShaking = true;
    }

    //Første itteration af screenshake
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
        //Activate passive shaking
        passiveShaking = true;

        //Captain Crew Seating Announcement
        yield return new WaitForSeconds(5);
        crewSeatingAnnouncement.Play();
        yield return new WaitForSeconds(5);

        //Begin Turbulens

    }
    
    public void initiateStorm()
    {
        StartCoroutine(Storm());
    }
}
