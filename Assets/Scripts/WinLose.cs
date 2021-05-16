using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class WinLose : MonoBehaviour
{
    public static int round = 1;

    public static int Draw;

    public static int AttWin;

    public static int DefWin;

    Timer timer;

    Bola bola;

    public int test;

    private void Awake()
    {
        timer = FindObjectOfType<Timer>();
        bola = FindObjectOfType<Bola>();
        test = round;
    }

    private void Update()
    {
        Debug.Log(round);
        RestartScene();
    }

    public void RestartScene()
    {
        if(round != 5)
        {
            if (timer.End)
            {
                Draw++;
                round++;
                SceneManager.LoadScene("Game");
            }
            else if (bola.End)
            {
                AttWin++;
                round++;
                SceneManager.LoadScene("Game");
            }
            else
            {
                return;
            }
        }
        else if(round == 5)
        {
            if (AttWin == DefWin || Draw == 5)
            {
                SceneManager.LoadScene("Penalty");
            }
            else
            {
                return;
            }
        }
        else
        {
            return;
        }
    }
}
