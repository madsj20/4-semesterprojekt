using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IntroScene : MonoBehaviour
{
    private Dictionary<GameObject, Material> originalMaterials = new Dictionary<GameObject, Material>(); // dictionary to store original materials of the objects
    public Color highlightColor = Color.yellow; // the color to use when highlighting an object

    public GameObject curtain1;
    public GameObject curtain2;
    public GameObject mask;
    public GameObject lifeWest;
    public GameObject lifeWestBox;
    public GameObject maleBelt;
    public GameObject femaleBelt;

    public StormScene stormScene;

    public AudioSource clip1;
    public AudioSource clip3;
    public AudioSource clip4;
    public AudioSource clip5;
    public AudioSource clip6;
    public AudioSource clip7;
    public AudioSource crewSeatingAnnouncement;
    public AudioSource passengerSeatingAnnouncement;



    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine("Intro");
    }

    // Update is called once per frame
    void Update()
    {

    }

    private IEnumerator Intro()
    {
        //1. scene
        yield return new WaitForSeconds(5);
        clip1.Play();
        yield return new WaitForSeconds(10);

        //2. scene
        clip3.Play();
        HighlightObject(curtain1);
        HighlightObject(curtain2);
        yield return new WaitForSeconds(25);
        UnhighlightObject(curtain1);
        UnhighlightObject(curtain2);

        //3. scene
        clip4.Play();
        HighlightObject(mask);
        yield return new WaitForSeconds(36);
        UnhighlightObject(mask);

        //4. scene
        clip5.Play();
        yield return new WaitForSeconds(11);

        //5. scene
        clip6.Play();
        HighlightObject(lifeWest);
        HighlightObject(lifeWestBox);
        yield return new WaitForSeconds(25);
        UnhighlightObject(lifeWest);
        UnhighlightObject(lifeWestBox);

        //6. scene
        clip7.Play();
        yield return new WaitForSeconds(7);

        //wait 5 seconds before announcement
        yield return new WaitForSeconds(5);
        passengerSeatingAnnouncement.Play();
        HighlightObject(maleBelt);
        HighlightObject(femaleBelt);
        maleBelt.layer = 8;
        femaleBelt.layer = 8;

        //Captain Crew Seating Announcement
        yield return new WaitForSeconds(20);
        crewSeatingAnnouncement.Play();
        stormScene.introEnded = true;
    }



    void HighlightObject(GameObject obj)
    {
        // highlight the specified object
        MeshRenderer renderer = obj.GetComponent<MeshRenderer>();
        if (renderer != null)
        {
            originalMaterials[obj] = renderer.material;
            Material originalMaterial;
            if (originalMaterials.TryGetValue(obj, out originalMaterial))
            {
                renderer.material = new Material(originalMaterial); // create a copy of the original material
                renderer.material.color = highlightColor; // change the color of the material

            }
        }
    }

    public void UnhighlightObject(GameObject obj)
    {
        // unhighlight the specified object and restore its original material
        MeshRenderer renderer = obj.GetComponent<MeshRenderer>();
        if (renderer != null)
        {
            Material originalMaterial;
            if (originalMaterials.TryGetValue(obj, out originalMaterial))
            {
                renderer.material = originalMaterial;
            }
        }
    }
}
