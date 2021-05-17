using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrackedInput : MonoBehaviour
{
    TestSlider[] chars;
    TestSlider A;
    TestSlider D;
    RaycastHit raycastHit;
    public float ZoomMinBound;
    public float ZoomMaxBound;
    public float MouseZoomSpeed;
    public float TouchZoomSpeed;

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
        if (Input.touchSupported)
        {
            if (Input.touchCount == 2)
            {
                
                Touch tZero = Input.GetTouch(0);
                Touch tOne = Input.GetTouch(1);
                
                Vector2 tZeroPrevious = tZero.position - tZero.deltaPosition;
                Vector2 tOnePrevious = tOne.position - tOne.deltaPosition;

                float oldTouchDistance = Vector2.Distance(tZeroPrevious, tOnePrevious);
                float currentTouchDistance = Vector2.Distance(tZero.position, tOne.position);

               
                float deltaDistance = oldTouchDistance - currentTouchDistance;
                Zoom(deltaDistance, TouchZoomSpeed);
            }
            else if(Input.touchCount == 1)
            {
                instance(Input.GetTouch(0).position);
            }
        }
        else
        {
            float scroll = Input.GetAxis("Mouse ScrollWheel");
            Zoom(scroll, MouseZoomSpeed);
            if (Input.GetMouseButtonDown(0))
            {
                instance(Input.mousePosition);
            }
        }
    }
    
    void instance(Vector3 input)
    {
        Ray ray = Camera.main.ScreenPointToRay(input);

        RaycastHit hit;

        if (Physics.Raycast(ray, out hit))
        {
            if (hit.point.z < 15.1f)
            {
                A.ValueMin(hit.point);
            }
            else if (hit.point.z > 15.1f)
            {
                D.ValueMin(hit.point);

            }
        }
    }

    void Zoom(float deltaMagnitudeDiff, float speed)
    {
        Camera.main.fieldOfView += deltaMagnitudeDiff * speed;
        // set min and max value of Clamp function upon your requirement
        Camera.main.fieldOfView = Mathf.Clamp(Camera.main.fieldOfView, ZoomMinBound, ZoomMaxBound);
    }
}


