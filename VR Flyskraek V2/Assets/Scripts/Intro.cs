using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Intro : MonoBehaviour
{
    public float waitTime = 10f;
    // Start is called before the first frame update
    void Start()
    {
        Invoke("NextScene", waitTime);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void NextScene()
    {
        SceneManager.LoadScene("Main");
    }
}
