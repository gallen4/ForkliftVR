using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Lever : MonoBehaviour
{
    public Transform TopOfTheStick;
    public float forwardBackwardDegree = 0;
    public float sideToSide = 0;

    private void Update()
    {
        forwardBackwardDegree = TopOfTheStick.rotation.eulerAngles.x;

        if(forwardBackwardDegree < 355 && forwardBackwardDegree > 290)
        {
            forwardBackwardDegree = Mathf.Abs(forwardBackwardDegree - 360);
        }
        else if(forwardBackwardDegree > 5 && forwardBackwardDegree < 74) { }

        sideToSide = TopOfTheStick.rotation.eulerAngles.z;

        if(sideToSide < 355 && sideToSide > 290)
        {
            sideToSide = Mathf.Abs(sideToSide - 360);
        }
        else if(sideToSide > 5 && sideToSide < 74) { }
    }

    private void OnTriggerStay(Collider other)
    {
        if(other.gameObject.tag == "Player")
        {
            transform.LookAt(other.transform.position, transform.up);
        }
    }
}
