using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Active : MonoBehaviour
{
    public bool isActive;
    public float radius;
    public string taging;
    public bool Del;

    private void Update()
    {
        Collider[] hitColliders = Physics.OverlapSphere(transform.position , radius);
        
        foreach(var Collide in hitColliders)
        {
            if (Collide.tag == taging && Collide.tag == "Fences")
            {
                Del = true;
                isActive = false;
                Debug.Log(Collide.name);
            }
            else if (Collide.tag == taging)
            {
                Del = false;
                isActive = false;
                Debug.Log(Collide.name);
            }
            else if(Collide.tag == "Fences")
            {
                Del = true;
                isActive = true;
            }
            else
            {
                Del = false;
                isActive = true;
            }
        }
    }
}
