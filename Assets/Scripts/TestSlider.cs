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
    [HideInInspector]
    public CharControl @char;

    public Transform parent;

    private void Awake()
    {
        slider = GetComponent<Slider>();
        @char = GetComponent<CharControl>();
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

    public void ValueMin(Vector3 position)
    {
        if (slider.value >= @char.EnergyCost)
        {
            slider.value = slider.value - @char.EnergyCost;
            Instant(position);
        }
        else return;
    }
    private void Instant(Vector3 position)
    {
        Instantiate(@char.CharPrefab, position, @char.CharPrefab.transform.rotation, parent);
        Debug.Log(position);
    }
}