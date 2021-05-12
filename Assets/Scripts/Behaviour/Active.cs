using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Active : MonoBehaviour
{
    public bool isActive;
    public float radius;
    public string taging;

    private void Update()
    {
        Collider[] hitColliders = Physics.OverlapSphere(transform.position , radius);
        
        foreach(var Collide in hitColliders)
        {
            if (Collide.tag == taging)
            {
                isActive = false;
                Debug.Log(Collide.name);
            }
            else
            {
                isActive = true;
            }
        }
    }
}
