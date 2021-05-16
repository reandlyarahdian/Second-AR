using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrackedInput : MonoBehaviour
{
    TestSlider[] chars;
    TestSlider A;
    TestSlider D;
    RaycastHit raycastHit;
    IEnumerator Start()
    {
        yield return new WaitForSeconds(0.11f);
        chars = GetComponentsInChildren<TestSlider>();
        foreach(TestSlider @char in chars)
        {
            if(@char.transform.parent.name == "Attacker")
            {
                A = @char;
            }
            else
            {
                D = @char;
            }
        }
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
                    A.ValueMin(hit.point);
                }
                else if (hit.point.z > 0.1f)
                {
                    D.ValueMin(hit.point);
                    
                }
            }
        }
    }
}


