using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Highlights : MonoBehaviour
{

    public float maxDistance = 10f; // the maximum distance at which objects can be highlighted
    public Color highlightColor = Color.yellow; // the color to use when highlighting an object
    public GameObject[] highlightObjects; // the specific objects to highlight
    private Transform lastHitObject = null; // the last object that was highlighted
    public Material material;
    public GameObject image;

    void Update()
    {
        RaycastHit hit;

        // cast a ray from the VR camera's position in the direction it's looking
        if (Physics.Raycast(transform.position, transform.forward, out hit, maxDistance))
        {
            // check if the object hit by the ray is in the list of objects to highlight
            if (highlightObjects != null && System.Array.IndexOf(highlightObjects, hit.collider.gameObject) != -1)
            {
                // unhighlight the last object that was highlighted
                if (lastHitObject != null && lastHitObject != hit.transform)
                {
                    UnhighlightObject(lastHitObject);
                }

                // highlight the object hit by the ray
                HighlightObject(hit.transform);
                lastHitObject = hit.transform;
            }
        }
        else
        {
            // unhighlight the last object that was highlighted
            if (lastHitObject != null)
            {
                UnhighlightObject(lastHitObject);
                lastHitObject = null;
            }
        }
    }

    void HighlightObject(Transform obj)
    {
        // change the color of the object's material to the highlight color
        MeshRenderer renderer = obj.gameObject.GetComponent<MeshRenderer>();
        if (renderer != null)
        {
            renderer.material.color = highlightColor;
            if (renderer.material.color == highlightColor)
            {
                image.GetComponent<SpriteRenderer>().enabled = true;
            }
        }
    }

    void UnhighlightObject(Transform obj)
    {
        // restore the object's material to its original color
        MeshRenderer renderer = obj.gameObject.GetComponent<MeshRenderer>();
        if (renderer != null)
        {
            renderer.material = material;
            image.GetComponent<SpriteRenderer>().enabled = false;
        }
    }
}

