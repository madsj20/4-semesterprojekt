using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class LightToggle : MonoBehaviour
{
    public Material offMaterial;
    public Material onMaterial;

    public GameObject overheadLight;
    public GameObject overheadLightGlass;
    private bool isActive;
    public void ToggleLight()
    {
        isActive = !isActive;
        overheadLight.GetComponent<Light>().enabled = isActive;
        if (isActive)
        {
            overheadLightGlass.GetComponent<MeshRenderer>().material = onMaterial;
        }
        else
        {
            overheadLightGlass.GetComponent<MeshRenderer>().material = offMaterial;
        }
    }
}
