using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonEvents : MonoBehaviour
{
    public GameObject image;

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
}
