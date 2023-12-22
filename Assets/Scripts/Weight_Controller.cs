using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Weight_Controller : MonoBehaviour
{
    public GameObject Elevator;
    
    private void OnTriggerEnter(Collider other)
    {

        if(other.CompareTag("3T"))
        {
            Destroy(Elevator);
        }
    }
}
