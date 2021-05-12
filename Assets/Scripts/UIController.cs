using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIController : MonoBehaviour
{
    public List<TestSlider> sliders;

    private void Start()
    {
        StartCoroutine(addingValue());
    }

    private void Update()
    {
        
    }

    IEnumerator addingValue()
    {
        foreach(TestSlider test in sliders)
        {
            test.AddingValue();
            yield return new WaitForSecondsRealtime(1f);
        }
    }
}
