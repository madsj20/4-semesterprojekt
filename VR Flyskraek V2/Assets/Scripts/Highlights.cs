using System.Collections.Generic;
using UnityEngine;


public class Highlights : MonoBehaviour
{
    public float highlightTime = 2f; // the duration for which each object will be highlighted
    public Color highlightColor = Color.yellow; // the color to use when highlighting an object
    public GameObject[] highlightObjects; // the specific objects to highlight

    private bool highlightingEnabled = false;
    private float highlightTimer = 0f;
    private int highlightedIndex = -1;
    private Dictionary<GameObject, Material> originalMaterials = new Dictionary<GameObject, Material>(); // dictionary to store original materials of the objects

    void Start()
    {
        // store the original materials of the objects
        foreach (GameObject obj in highlightObjects)
        {
            MeshRenderer renderer = obj.GetComponent<MeshRenderer>();
            if (renderer != null)
            {
                originalMaterials[obj] = renderer.material;
            }
        }
    }

    void Update()
    {
        // check if highlighting is currently enabled
        if (highlightingEnabled)
        {
            // update the highlight timer
            highlightTimer += Time.deltaTime;

            // check if the timer has expired
            if (highlightTimer >= highlightTime)
            {
                // unhighlight the current object
                UnhighlightObject(highlightedIndex);

                // move on to the next object
                highlightedIndex++;

                // check if we have looped through all the objects
                if (highlightedIndex >= highlightObjects.Length)
                {
                    // disable highlighting
                    highlightingEnabled = false;

                    // reset the highlight timer and index
                    highlightedIndex = -1;
                    highlightTimer = 0f;
                }
                else
                {
                    // highlight the next object
                    HighlightObject(highlightedIndex);
                    highlightTimer = 0f;
                }
            }
        }

        switch (highlightedIndex)
        {
            case -1:
                case 0:
                highlightingEnabled = true;
                highlightTimer = 0f;
                break;
                case 1: highlightingEnabled = false;
                highlightTimer = 0f; break;
                case 2: highlightingEnabled = false;
                highlightTimer = 0f; break;
                case 3: highlightingEnabled = false;
                highlightTimer = 0f; break;
                case 4: highlightingEnabled = false;
                highlightTimer = 0f; break;
                case 5: highlightingEnabled = false;
                highlightTimer = 0f; break;
                case 6: highlightingEnabled = false;
                highlightTimer = 0f; break;
                case 7: highlightingEnabled = false;
                highlightTimer = 0f; break;
        }
    }


    public void StartHighlighting()
    {
        // enable highlighting and start with the first object in the list
        highlightingEnabled = true;
        highlightedIndex = 0;
        HighlightObject(highlightedIndex);
        highlightTimer = 0f;
    }

    void HighlightObject(int index)
    {
        // highlight the specified object
        GameObject obj = highlightObjects[index];
        MeshRenderer renderer = obj.GetComponent<MeshRenderer>();
        if (renderer != null)
        {
            Material originalMaterial;
            if (originalMaterials.TryGetValue(obj, out originalMaterial))
            {
                renderer.material = new Material(originalMaterial); // create a copy of the original material
                renderer.material.color = highlightColor; // change the color of the material

            }
        }
    }

    void UnhighlightObject(int index)
    {
        // unhighlight the specified object and restore its original material
        GameObject obj = highlightObjects[index];
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
