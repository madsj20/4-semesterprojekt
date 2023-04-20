using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class CubeColorTest : MonoBehaviour
{
    public InputActionReference toggleReference = null;
    public InputActionReference colorReference = null;

    private MeshRenderer meshRenderer = null;

    private void Awake()
    {
        toggleReference.action.started += Toggle;
        meshRenderer = GetComponent<MeshRenderer>();
    }
    private void OnDestroy()
    {
        toggleReference.action.started -= Toggle;
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        float value = colorReference.action.ReadValue<float>();
        UpdateColor(value);
    }



    private void Toggle(InputAction.CallbackContext context)
    {
        bool isActive = !gameObject.activeSelf;
        gameObject.SetActive(isActive);
    }
    private void UpdateColor(float value)
    {
        meshRenderer.material.color = new Color(value, value, value);
    }
}
