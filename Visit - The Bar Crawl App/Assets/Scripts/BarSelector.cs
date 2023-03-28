using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Microsoft.Maps.Unity;
using Microsoft.Geospatial;
using UnityEngine.UI;

public class BarSelector : MonoBehaviour
{
    public GameObject addButton;
    public GameObject removeButton;
    public GameObject nextBarButton;
    public GameObject resultater;
    public GameObject ui;
    public List<GameObject> barer = new List<GameObject>();
    private string[] drinks = new string[] { "Opvarming", "Flaske øl + shot", "Fadøl", "Flaske øl", "Special øl", "Mojito", "Blå Thor", "Jägerbomb", "Giraf Øl", "Sex on the beach" };

    [SerializeField]
    private int barNr = 0;

    public TMP_Text currentLocationText;
    public TMP_Text currentDrinkText;
    public TMP_Text ParText;
    public TMP_Text barText;
    public TMP_Text drinkText;
    public TMP_Text completedText;

    private string savedDrink;

    // Start is called before the first frame update
    void Start()
    {
        //Updates text first time
        barText.text = "Next bar: " + barer[barNr].name;
        savedDrink = drinks[barNr];
        drinkText.text = "Next drink: " + savedDrink;
        Debug.Log(savedDrink);
        //Disables every bar at start
        for (int i = 0; i < barer.Count; i++)
        {
            barer[i].GetComponent<MapPin>().enabled = false;
            barer[i].SetActive(false);
        }
        //Activates first bar
        barer[0].GetComponent<MapPin>().enabled = true;
        barer[0].SetActive(true);
    }

    // Update is called once per frame
    void Update()
    {
            
    }

    private void OnTriggerStay(Collider other)
    {
        if (other.gameObject.CompareTag("Bar"))
        {
            NextBar();
        }
    }

    public void NextBar()
    {
        //Disables current bar
        barer[barNr].GetComponent<MapPin>().enabled = false;
        barer[barNr].SetActive(false);
        barNr++;
        //Updates current bar text and drink
        currentLocationText.text = barer[barNr - 1].name;
        currentDrinkText.text = savedDrink;
        //Makes sure we don't get out of range
        if (barNr < barer.Count)
        {
            //Enables next bar
            barer[barNr].GetComponent<MapPin>().enabled = true;
            barer[barNr].SetActive(true);
            //Updates text to next bar
            barText.text = "Next bar: " + barer[barNr].name;
            savedDrink = drinks[barNr];
            drinkText.text = "Next drink: " + savedDrink;
        }
        else
        {
            // Disables "Next button"
            nextBarButton.GetComponent<Button>().interactable = false;
            //Updates bottom text to blank
            barText.text = "";
            drinkText.text = "";
            //Sets completed text
            completedText.text = "Bar Crawl Completed!";
        }
    }
}
