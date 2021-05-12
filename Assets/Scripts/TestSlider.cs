using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;

public class TestSlider : MonoBehaviour
{
    public Slider slider;

    public int maxValue;

    public int minValue;

    public List<Image> images;

    public Color color;

    public Color hilightColor;

    private void Awake()
    {
        slider = GetComponent<Slider>();
        AddingValue();
    }

    public void AddingValue()
    {
        StartCoroutine(enumerator());
    }

    IEnumerator enumerator()
    {
        while(slider.value <= maxValue)
        {
            slider.value++;
            yield return new WaitForSecondsRealtime(1f);
        }
    }

    public void ValueChange()
    {
        switch (slider.value)
        {
            case 2:
                images[0].color = color;
                break;
            case 4:
                images[1].color = color;
                break;
            case 6:
                images[2].color = color;
                break;
            case 8:
                images[3].color = color;
                break;
            case 10:
                images[4].color = color;
                break;
            case 12:
                images[5].color = color;
                break;
        }
    }

}