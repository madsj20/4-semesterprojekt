using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Blinking : MonoBehaviour
{
    private float blinkDuration = 1f;
    private float blinkCloseSpeed = 4f;
    private float blinkOpenSpeed = 2f;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

    }

    IEnumerator Blink()
    {
        Debug.Log("Coroutine Started");
        //Fades to black
        CanvasGroup canvasGroup = GetComponent<CanvasGroup>();
        Debug.Log("Start Fade");
        while (canvasGroup.alpha < 1)
        {
            canvasGroup.alpha += Time.deltaTime * blinkCloseSpeed;
            yield return null;
        }
        //Waits a while
        Debug.Log("Wait");
        yield return new WaitForSeconds(blinkDuration);
        Debug.Log("Stop Waiting");
        //Fades out
        while (canvasGroup.alpha > 0)
        {
            canvasGroup.alpha -= Time.deltaTime * blinkOpenSpeed;
            yield return null;
        }
        Debug.Log("Done Fading out");
        canvasGroup.interactable = false;
        yield return null;

    }

    public void RunBlink()
    {
        Debug.Log("Blink Initiated");
        StartCoroutine(Blink());
    }
}
