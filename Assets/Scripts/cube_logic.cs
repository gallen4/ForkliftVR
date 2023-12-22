using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cube_logic : MonoBehaviour
{
    private bool box_1 = false;
    private bool box_2 = false;
    private bool box_3 = false;

    public GameObject text;
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("box_1"))
        {
            Debug.Log(box_1);
            box_1 = true;
        }
        if (other.CompareTag("box_2"))
        {
            Debug.Log(box_2);
            box_2 = true;
        }
        if (other.CompareTag("box_3"))
        {
            Debug.Log(box_3);
            box_3 = true;
        }
    }
    private void Update()
    {

        if (box_1 || box_2 || box_3)
        {
            text.SetActive(true);
        }
    }
}
