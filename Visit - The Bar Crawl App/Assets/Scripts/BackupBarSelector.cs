using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Microsoft.Maps.Unity;
using Microsoft.Geospatial;
using UnityEngine.UI;

public class BackupBarSelector : MonoBehaviour
{
    public GameObject addButton;
    public GameObject removeButton;
    public GameObject nextBarButton;
    public GameObject resultater;
    public GameObject ui;
    public List<GameObject> barer = new List<GameObject>();
    private string[] drinks = new string[] { "Opvarming", "Flaske øl med sidevogn", "Fadøl", "Flaske øl", "Flaske/Lille special øl", "Mojito", "Blå Thor", "Shot", "Giraf Øl", "Lika a Lady/Sex on the beach" };
    private int[] antalTårer = new int[] { 200, 5, 5, 4, 5, 5, 5, 1, 6, 6 };
    public List<int> personligeTårer = new List<int> { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    //public int[] personligeTårer = new int[] { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

    [SerializeField]
    private int barNr = 0;
    private int nuværendeTåre;

    public TMP_Text currentLocationText;
    public TMP_Text currentDrinkText;
    public TMP_Text ParText;
    public TMP_Text barText;
    public TMP_Text drinkText;

    private string savedDrink;

    //Table
    public TMP_Text par1, par2, par3, par4, par5, par6, par7, par8, par9;
    public TMP_Text sip1, sip2, sip3, sip4, sip5, sip6, sip7, sip8, sip9;
    public TMP_Text parSum;
    public TMP_Text sipSum;

    private bool showResults = false;

    // Start is called before the first frame update
    void Start()
    {
        //Updates text first time
        barText.text = "Next bar: " + barer[barNr].name;
        //savedDrink = drinks[Random.Range(0, drinks.Length)];
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


        //Set table par values
        par1.text = antalTårer[1].ToString();
        par2.text = antalTårer[2].ToString();
        par3.text = antalTårer[3].ToString();
        par4.text = antalTårer[4].ToString();
        par5.text = antalTårer[5].ToString();
        par6.text = antalTårer[6].ToString();
        par7.text = antalTårer[7].ToString();
        par8.text = antalTårer[8].ToString();
        par9.text = antalTårer[9].ToString();
        parSum.text = (antalTårer[1] + antalTårer[2] + antalTårer[3] + antalTårer[4] + antalTårer[5] + antalTårer[6] + antalTårer[7] + antalTårer[8] + antalTårer[9]).ToString();
    }

    // Update is called once per frame
    void Update()
    {
        if (barNr > barer.Count+1)
        {
            nextBarButton.GetComponent<Button>().interactable = false;
        }
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
        barer[barNr].GetComponent<MapPin>().enabled = false;
        barer[barNr].SetActive(false);
        barNr++;
        if (barNr <= barer.Count)
        {
            addButton.SetActive(true);
            removeButton.SetActive(true);
            //Adds current bars sips to list and sets them to 0 again
            if (barNr >= 1)
            {
                personligeTårer.Add(nuværendeTåre);
            }
            nuværendeTåre = 0;
            currentLocationText.text = barer[barNr-1].name;
            currentDrinkText.text = savedDrink;
                ParText.text = "Tårer/Par: " + nuværendeTåre + "/" + antalTårer[barNr-1];
                barText.text = "Next bar: " + barer[barNr ].name;
                //savedDrink = drinks[Random.Range(0, drinks.Length)];
                savedDrink = drinks[barNr];
                drinkText.text = "Next drink: " + savedDrink;
                //barNr++;
                barer[barNr].GetComponent<MapPin>().enabled = true;
                barer[barNr].SetActive(true);
                Debug.Log(savedDrink);
                Debug.Log("Next");
        }
        else
        {
            Debug.Log("DONE!!!");
            currentLocationText.text = "Done!!!";
            currentDrinkText.text = "";
            ParText.text = "";
            /*for (int i = 0; i < personligeTårer.Count; i++)
            {
                personligeTårer[i]++;
            }*/
            foreach (int nuværendeTåre in personligeTårer)
            {
                Debug.Log(nuværendeTåre.ToString());
            }

            ui.SetActive(false);
            resultater.SetActive(true);
            //Set table sip values
            sip1.text = personligeTårer[1].ToString();
            sip2.text = personligeTårer[2].ToString();
            sip3.text = personligeTårer[3].ToString();
            sip4.text = personligeTårer[4].ToString();
            sip5.text = personligeTårer[5].ToString();
            sip6.text = personligeTårer[6].ToString();
            sip7.text = personligeTårer[7].ToString();
            sip8.text = personligeTårer[8].ToString();
            sip9.text = personligeTårer[9].ToString();
            sipSum.text = (personligeTårer[1] + personligeTårer[2] + personligeTårer[3] + personligeTårer[4] + personligeTårer[5] + personligeTårer[6] + personligeTårer[7] + personligeTårer[8] + personligeTårer[9]).ToString();

        }
    }

    public void AddSip()
    {
        nuværendeTåre++;
        ParText.text = "Tårer/Par: " + nuværendeTåre + "/" + antalTårer[barNr-1];
    }

    public void RemoveSip()
    {
        nuværendeTåre--;
        ParText.text = "Tårer/Par: " + nuværendeTåre + "/" + antalTårer[barNr-1];
    }

    public void ToggleResults()
    {
        //Set table sip values
        sip1.text = personligeTårer[1].ToString();
        sip2.text = personligeTårer[2].ToString();
        sip3.text = personligeTårer[3].ToString();
        sip4.text = personligeTårer[4].ToString();
        sip5.text = personligeTårer[5].ToString();
        sip6.text = personligeTårer[6].ToString();
        sip7.text = personligeTårer[7].ToString();
        sip8.text = personligeTårer[8].ToString();
        sip9.text = personligeTårer[9].ToString();
        sipSum.text = (personligeTårer[1] + personligeTårer[2] + personligeTårer[3] + personligeTårer[4] + personligeTårer[5] + personligeTårer[6] + personligeTårer[7] + personligeTårer[8] + personligeTårer[9]).ToString();
        showResults = !showResults;
        ui.SetActive(showResults);
        resultater.SetActive(!showResults);
    }
}
