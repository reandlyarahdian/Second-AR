using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrackedInput : MonoBehaviour
{
    RaycastHit raycastHit;
    void Start()
    {
        
    }

    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            RaycastHit hit;

            if(Physics.Raycast(ray, out hit))
            {
                if(hit.point.z < 0.1f)
                {
                    
                }else if (hit.point.z > 0.1f)
                {
                    
                }
            }
        }
    }
}


