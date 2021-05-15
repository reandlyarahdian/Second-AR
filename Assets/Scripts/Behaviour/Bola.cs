using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bola : MonoBehaviour
{
    public bool isBall;

    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "Player")
        {
            transform.parent = other.GetComponent<AgentControll>().ballPos;
            transform.position = other.GetComponent<AgentControll>().ballPos.position;
            isBall = true;
        }
    }

    private void OnTriggerStay(Collider other)
    {
        if (other.tag == "Player")
        {
            isBall = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "Player")
        {
            transform.SetParent(null);
            isBall = false;
        }
    }
}
