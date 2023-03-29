using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

[System.Serializable]
public class CustomGameEvent : UnityEvent <Component, Object>
{

}
public class GameEventListener : MonoBehaviour
{
 public GameEvent GameEvent;

 public UnityEvent Response;

    private void OnEnable()
    {
        GameEvent.RegisterListener(this);
    }

    private void OnDisable()
    {
        GameEvent.UnregisterListener(this);
    }

    public void OnEventsRaised(Component sender, object data)
    {
        Response.Invoke();
    }

}
