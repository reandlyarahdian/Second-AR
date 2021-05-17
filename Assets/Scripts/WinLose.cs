using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class WinLose : MonoBehaviour
{
    public static int round = 1;

    public static int Draw = 0;

    public static int AttWin = 0;

    public static int DefWin = 0;

    Timer timer;

    Bola bola;

    MazeLoader maze;

    public int test;

    private void Start()
    {
        timer = FindObjectOfType<Timer>();
        bola = FindObjectOfType<Bola>();
        maze = GetComponent<MazeLoader>();
        RestartScene();
    }

    private void Awake()
    {
        test = round;
    }

    private void Update()
    {
        RestartScene();
    }

    public void RestartScene()
    {
        if(round != 6)
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
            else if (!bola.End)
            {
                StartCoroutine(enumerator());
            }
            else
            {
                return;
            }
        }
        else if(round == 6)
        {
            if (AttWin == DefWin || Draw == 5)
            {
                maze.enabled = true;
            }
            else
            {
                SceneManager.LoadScene("Menu");
            }
        }
        else
        {
            return;
        }
    }

    IEnumerator enumerator()
    {
        yield return new WaitForSecondsRealtime(25f);
        if (bola.transform.parent == null && Testing())
        {
            Debug.Log(Time.time);
            DefWin++;
            round++;
            SceneManager.LoadScene("Game");
        }
        else 
        {
            yield return null;
        }
    }
    
    public bool Testing()
    {
        foreach(AgentControll agent in FindObjectsOfType<AgentControll>())
        {
            return true;
        }

        return false;
    }
}
