using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;

public class TestSlider : MonoBehaviour
{
    public Slider slider;

    public int maxValue;

    public List<Image> images;

    public Color color;

    public Color hilightColor;
    [HideInInspector]
    public CharControl @char;

    public Transform parent;

    public Image image;

    private void Awake()
    {    
        
        
    }

    IEnumerator Start()
    {
        yield return new WaitForSeconds(0.1f);
        @char = GetComponent<CharControl>();
        image.color = @char.materials.color;
        AddingValue();
    }

    private void Update()
    {
        if(slider.value%2 > 0)
        {
            ValueMin();
        }
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
                CurValue(0);
                break;
            case 4:
                CurValue(1);
                break;
            case 6:
                CurValue(2);
                break;
            case 8:
                CurValue(3);
                break;
            case 10:
                CurValue(4);
                break;
            case 12:
                CurValue(5);
                break;
        }
    }

    public void ValueMin()
    {
        switch (slider.value)
        {
            case 1:
                CurMin(0);
                break;
            case 3:
                CurMin(1);
                break;
            case 5:
                CurMin(2);
                break;
            case 7:
                CurMin(3);
                break;
            case 9:
                CurMin(4);
                break;
            case 11:
                CurMin(5);
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

    public void CurValue(int i)
    {
        images[i].color = color;
    }

    public void CurMin(int i)
    {
        images[i].color = hilightColor;
    }

    private void Instant(Vector3 position)
    {
        Instantiate(@char.CharPrefab, position, @char.CharPrefab.transform.rotation, parent);
        Debug.Log(position);
    }
}