using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;

public class Intro : MonoBehaviour
{
    public int waitTime = 5;
    public TMP_Text introText;

    // Start is called before the first frame update
    void Start()
    {
        introText.text = "Entering plane\n" + waitTime;
        StartCoroutine(NextScene());
    }

    // Update is called once per frame
    void Update()
    {

    }

    IEnumerator NextScene()
    {
        for (int i = waitTime; i >= 0; i--)
        {
            yield return new WaitForSeconds(1);
            introText.text = "Entering plane\n" + waitTime;
            waitTime--;
            
        }
        SceneManager.LoadScene("Main");
    }
}
