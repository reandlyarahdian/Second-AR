using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Timer : MonoBehaviour
{
    public TextMeshProUGUI textMesh;

    public float timer;

    public bool End;
    private int times;

    private void Start()
    {
        times = (int)timer;
        textMesh.text = times.ToString() + "s";
        StartCoroutine(timers());
    }

    IEnumerator timers()
    {
        while (true)
        {
            if (times > 0)
            {
                times--;
                textMesh.text = times.ToString() + "s";
                End = false;
                yield return new WaitForSecondsRealtime(1f);
            }
            else
            {
                textMesh.text = times.ToString() + "s";
                End = true;
            }
            yield return null;
        }
    }
}
