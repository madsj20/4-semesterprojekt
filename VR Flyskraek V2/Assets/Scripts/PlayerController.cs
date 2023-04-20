using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerController : MonoBehaviour
{
    [SerializeField] Transform resetTransform;
    [SerializeField] GameObject player;
    [SerializeField] Camera playerHead;

    public InputActionReference resetPositionReference = null;

    private void Awake()
    {
        resetPositionReference.action.started += resetPosition;
    }

    private void OnDestroy()
    {
        resetPositionReference.action.started -= resetPosition;
    }
    private void Start()
    {
        Invoke("resetPosition", 0.5f);
    }


    //When right clicking the script in the Inspector, reset position can be clicked and activated directly
    [ContextMenu("Reset Position")]
    public void resetPosition()
    {
        //Finds difference between the resetTransform rotation and the playerHead rotation, and applies it to the player/XR Origin rotation
        var rotationAngleY = resetTransform.rotation.eulerAngles.y - playerHead.transform.rotation.eulerAngles.y;
        player.transform.Rotate(0, rotationAngleY, 0);

        //Finds difference between the resetTransform position and the playerHead postition, and applies it to the player/XR Origin position
        var distanceDiff = resetTransform.position - playerHead.transform.position;
        player.transform.position += distanceDiff;
    }

    public void resetPosition(InputAction.CallbackContext context)
    {
        //Finds difference between the resetTransform rotation and the playerHead rotation, and applies it to the player/XR Origin rotation
        var rotationAngleY = resetTransform.rotation.eulerAngles.y - playerHead.transform.rotation.eulerAngles.y;
        player.transform.Rotate(0, rotationAngleY, 0);

        //Finds difference between the resetTransform position and the playerHead postition, and applies it to the player/XR Origin position
        var distanceDiff = resetTransform.position - playerHead.transform.position;
        player.transform.position += distanceDiff;
    }
}
