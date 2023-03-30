using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

public class ButtonEvents : MonoBehaviour
{
    public GameObject image;
    public AudioSource sound;

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



    public void PlaySound()
    {
        sound.Play();
    }
}
