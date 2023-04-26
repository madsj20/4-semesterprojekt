using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MaskSpringVisualiser : MonoBehaviour
{
    public Transform origin;
    public Transform target;
    public LineRenderer lineRenderer;

    private void Update()
    {
        lineRenderer.SetPosition(0, origin.position);
        lineRenderer.SetPosition(1, new Vector3(target.position.x, target.position.y, target.position.z));
    }
}
