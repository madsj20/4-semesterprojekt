using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

public class ButtonEvents : MonoBehaviour
{
    public GameObject image;
    public GameObject BadWeather;
    public Material BadSky;
    public Material GoodSky;

    void Start()
    {
        
    }

    void Update()
    {
        
    }

    public void ShowImage()
    {
        image.GetComponent<SpriteRenderer>().enabled = true;
    }

    public void HideImage()
    {
        image.GetComponent<SpriteRenderer>().enabled = false;
    }



    public void StartBadWeather()
    {
        BadWeather.SetActive(true);
        RenderSettings.skybox = BadSky;
    }

    public void StopBadWeather()
    {
        BadWeather.SetActive(false);
        RenderSettings.skybox = GoodSky;
    }
}
