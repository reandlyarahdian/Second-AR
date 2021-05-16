using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerControl : MonoBehaviour
{
    [HideInInspector]
    public Database characters;
    public GateNFenceMaterial[] gates;
    [HideInInspector]
    public Character Attacker;
    [HideInInspector]
    public Character Defender;
    public WinLose win;

    private void Start()
    {
        characters = GetComponent<Database>();
        if (win.test % 2 == 0)
        {
            SetupChara2();
            Debug.Log("Even");
        }
        else
        {
            SetupChara();
            Debug.Log("Odd");
        }
        gateColor();
    }

    public void SetupChara() 
    {
        Attacker = characters.AttackerE;
        Defender = characters.DefenderE;
    }
    public void SetupChara2()
    {
        Attacker = characters.AttackerO;
        Defender = characters.DefenderO;
    }

    public void gateColor()
    {
        foreach(GateNFenceMaterial mesh in gates)
        {
            if(mesh.name == "Attacker")
            {
                mesh.mat = Attacker.materials.material;
            }
            else
            {
                mesh.mat = Defender.materials.material;
            }
        }
    }
}
