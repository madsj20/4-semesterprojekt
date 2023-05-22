using System.Collections;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerController : MonoBehaviour
{
    [SerializeField] Transform resetTransform;
    [SerializeField] GameObject player;
    [SerializeField] Camera playerHead;
    Vector3 playerHeadPos;
    Vector3 newPlayerHeadPos;

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

    //This function can be called in another script to run the screenshake
    public void InitScreenShake(float magnitudeY, float magnitudeZ, float duration)
    {
        StartCoroutine(ScreenShake(magnitudeY, magnitudeZ, duration));
    }

    //Change magnitude to choose how much the head should move, and change duration to choose how long the transition lasts
    public IEnumerator ScreenShake(float magnitudeY, float magnitudeZ, float duration)
    {
        //saves current player head position
        playerHeadPos = player.transform.position;
        //Creates the new player head position
        newPlayerHeadPos = new Vector3(playerHeadPos.x, playerHeadPos.y + magnitudeY, playerHeadPos.z + magnitudeZ);
        
        float time = 0;
        while (time < duration)
        {
            //Lerp makes a smooth transition from the player heads current position to the new position
            player.transform.position = Vector3.Lerp(playerHeadPos, newPlayerHeadPos, time / duration);
            time += Time.deltaTime;
            yield return null;
        }
        //ensures that player head position is infact the new player head position
        player.transform.position = newPlayerHeadPos;
        time = 0;
        while (time < duration)
        {
            //Lerp position back to original position
            player.transform.position = Vector3.Lerp(newPlayerHeadPos, playerHeadPos, time / duration);
            time += Time.deltaTime;
            yield return null;
        }
        //ensures that player head position is infact the old player head position
        player.transform.position = playerHeadPos;
    }
}
