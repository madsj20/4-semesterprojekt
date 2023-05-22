using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class StormScene : MonoBehaviour
{
    public GameObject badWeather;

    public AudioSource crewSeatingAnnouncement;
    public AudioSource passengerSeatingAnnouncement;
    private bool passiveShaking = true;
    private bool mildShaking = false;
    private bool mediumShaking = false;
    public bool isConnected = false;
    public bool introEnded = false;
    public PlayerController playerController;
    public LigtningSpawn lightningSpawn;
    public ButtonEvents buttonEvents;
    public Blinking blink;
    public AudioSource shakeSound;
    public AudioSource turbulens1;
    public AudioSource turbulens2;
    public AudioSource cabinNoise;
    public AudioSource creaking;

    // Start is called before the first frame update
    void Start()
    {
        //StartCoroutine(Storm());
    }

    // Update is called once per frame
    void Update()
    {
        if (isConnected && introEnded)
        {
            StartCoroutine(Storm());
            isConnected = false;
        }

        if (passiveShaking && mildShaking)
        {
            StartCoroutine(passiveShakeMild());
            passiveShaking = false;
        }
        if (passiveShaking && mediumShaking)
        {
            StartCoroutine(passiveShakeMedium());
            passiveShaking = false;
        }
    }

    //passive automatic shake funktion mild
    private IEnumerator passiveShakeMild()
    {
        //shakeTime determines how long on shake takes
        float shakeTime;
        //magnitude determines how much the players head should move
        float magnitudeY;
        float magnitudeZ;
        //shakeDelay determines the delay between shakes
        float shakeDelay;
        //ShakePitch changes the pitch of the shake audio to a random value
        float shakePitch;

        //Randomizing screenshake
        shakeTime = Random.Range(0.05f, 0.15f);
        magnitudeY = Random.Range(-0.01f, -0.005f);
        magnitudeZ = Random.Range(-0.005f, 0.005f);
        shakeDelay = Random.Range(0.2f, 2.5f);
        shakePitch = Random.Range(0.5f, 1.1f);

        shakeSound.pitch = shakePitch;
        shakeSound.Play();
        playerController.InitScreenShake(magnitudeY, magnitudeZ, shakeTime);
        //shakeTime has to be added and multiplied by 2, to give the animation time to finish, bacause shakeTime is used 2 times in the original function in the PlayerController script
        yield return new WaitForSeconds(shakeDelay+(shakeTime*2));
        passiveShaking = true;
    }

    //passive automatic shake funktion medium
    private IEnumerator passiveShakeMedium()
    {
        //shakeTime determines how long on shake takes
        float shakeTime;
        //magnitude determines how much the players head should move
        float magnitudeY;
        float magnitudeZ;
        //shakeDelay determines the delay between shakes
        float shakeDelay;
        //ShakePitch changes the pitch of the shake audio to a random value
        float shakePitch;

        //Randomizing screenshake
        shakeTime = Random.Range(0.015f, 0.09f);
        magnitudeY = Random.Range(-0.04f, -0.03f);
        magnitudeZ = Random.Range(-0.02f, 0.02f);
        shakeDelay = Random.Range(0.2f, 2.0f);
        shakePitch = Random.Range(0.5f, 1.1f);

        shakeSound.pitch = shakePitch;
        shakeSound.Play();
        playerController.InitScreenShake(magnitudeY, magnitudeZ, shakeTime);
        //shakeTime has to be added and multiplied by 2, to give the animation time to finish, bacause shakeTime is used 2 times in the original function in the PlayerController script
        yield return new WaitForSeconds(shakeDelay + (shakeTime * 2));
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
        //wait 10 seconds before beginning
        yield return new WaitForSeconds(10);

        //Starting mild shake
        mildShaking = true;

        //wait 5 seconds before announcement
        yield return new WaitForSeconds(5);
        passengerSeatingAnnouncement.Play();


        //Captain Crew Seating Announcement
        yield return new WaitForSeconds(20);
        crewSeatingAnnouncement.Play();
        yield return new WaitForSeconds(5);


        //starts storm 
        yield return new WaitForSeconds(10);
        blink.RunBlink();
        yield return new WaitForSeconds(0.7f);
        buttonEvents.StartBadWeather();
        lightningSpawn.Spawn();

        //wait 10 seconds and increase shaking to medium
        yield return new WaitForSeconds(6);
        mildShaking = false;
        mediumShaking = true;

        //less screen shaking
        yield return new WaitForSeconds(40);
        mildShaking = true;
        mediumShaking = false;

        //stop storm
        yield return new WaitForSeconds(7);
        blink.RunBlinkOff();
        yield return new WaitForSeconds(0.7f);
        buttonEvents.StopBadWeather();
        badWeather.SetActive(false);
        //Destroy all instances of lightning
        GameObject[] lightnings = GameObject.FindGameObjectsWithTag("Lightning");
        foreach (GameObject lightning in lightnings)
            GameObject.Destroy(lightning);

        //turn of shaking after 5 seconds
        yield return new WaitForSeconds(5);
        mildShaking = false;

        //Start information
        yield return new WaitForSeconds(2);
        turbulens1.Play();
        yield return new WaitForSeconds(18);
        turbulens2.Play();
        yield return new WaitForSeconds(23);
        creaking.Play();

    }
    
    public void initiateStorm()
    {
        StartCoroutine(Storm());
    }
}
