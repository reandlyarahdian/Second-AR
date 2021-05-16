using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bola : MonoBehaviour
{
    public bool isBall;
    public float radius;
    public bool End;

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

    private void Update()
    {
        Collider[] hitColliders = Physics.OverlapSphere(transform.position, radius);

        foreach (var Collide in hitColliders)
        {
            if (Collide.tag == "Goal")
            {
                End = true;
            }
            else
            {
                End = false;
            }
        }
    }
}
