using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Database : MonoBehaviour
{
    public CharDatabase charDatabase;

    public static Database instance;

    [HideInInspector]
    public Character AttackerE;
    [HideInInspector]
    public Character AttackerO;
    [HideInInspector]
    public Character DefenderE;
    [HideInInspector]
    public Character DefenderO;

    private void Awake()
    {
        instance = this;
        character();
    }
    public void character()
    {
        foreach (Character character in charDatabase.characters)
        {
            character.charaColor();

            if (character.name == "Attacker")
            {
                AttackerE = character;
            }
            else if (character.name == "Defender")
            {
                DefenderE = character;
            }
            if (character.name == "Attacker 2")
            {
                AttackerO = character;
            }
            else if (character.name == "Defender 2")
            {
                DefenderO = character;
            }
        }
    }
}
