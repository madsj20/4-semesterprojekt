using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class clicktogether : MonoBehaviour
{
    public StormScene stormScene;
    public GameObject maleBelt;
    public GameObject femaleBelt;
    public Hand hand1;
    public Hand hand2;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

    }

    void OnCollisionEnter(Collision col)
    {
        if (col.gameObject.tag == "Buckle")
        {
            // creates joint
            FixedJoint joint = gameObject.AddComponent<FixedJoint>();
            // sets joint position to point of contact
            joint.anchor = col.contacts[0].point;

            // conects the joint to the other object
            joint.connectedBody = col.contacts[0].otherCollider.transform.GetComponentInParent<Rigidbody>();
            // Stops objects from continuing to collide and creating more joints
            joint.enableCollision = false;
            // sets the break force and torque to infinity so the joint never breaks
            joint.breakForce = Mathf.Infinity;
            joint.breakTorque = Mathf.Infinity;
            joint.enablePreprocessing = true;
            joint.massScale = 10000000;
            joint.connectedMassScale = 10000000;
            stormScene.isConnected = true;
            maleBelt.layer = 0;
            femaleBelt.layer = 0;
            hand1.ReleaseBelt();
            hand2.ReleaseBelt();
        }
    }
}