using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Microsoft.Maps.Unity;
using Microsoft.Geospatial;

public class BarSelector : MonoBehaviour
{
    public List<GameObject> barer = new List<GameObject>();
    public string[] drinks = new string[] { "Draft beer", "Mojito", "Gin Hass", "Bottle beer", "Shot", "Vodka Redbull" };

    [SerializeField]
    private int barNr = 0;

    public TMP_Text currentLocationText;
    public TMP_Text currentDrinkText;
    public TMP_Text barText;
    public TMP_Text drinkText;

    private string savedDrink;


    // Start is called before the first frame update
    void Start()
    {
        //Updates text first time
        barText.text = "Next bar: " + barer[barNr].name;
        savedDrink = drinks[Random.Range(0, drinks.Length)];
        drinkText.text = "Next drink: " + savedDrink;
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
        if (barNr < barer.Count)
        {
            currentLocationText.text = barer[barNr].name;
            currentDrinkText.text = savedDrink;
            barText.text = "Next bar: " + barer[barNr+1].name;
            savedDrink = drinks[Random.Range(0, drinks.Length)];
            drinkText.text = "Next drink: " + savedDrink;
            barer[barNr].GetComponent<MapPin>().enabled = false;
            barer[barNr].SetActive(false);
            barNr++;
            barer[barNr].GetComponent<MapPin>().enabled = true;
            barer[barNr].SetActive(true);
            Debug.Log(barNr);
        }
    }
}
