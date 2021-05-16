using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharControl : MonoBehaviour
{
    [HideInInspector]
    public Character character;
    [HideInInspector]
    public GameObject CharPrefab;
    [HideInInspector]
    public string CharName;
    [HideInInspector]
    public int EnergyCost;
    [HideInInspector]
    public Materials materials;

    void Start()
    {
        if(transform.parent.name == "Attacker")
        {
            character = GetComponentInParent<PlayerControl>().Attacker;
        }
        else
        {
            character = GetComponentInParent<PlayerControl>().Defender;
        }
        chara();
    }
    public void chara()
    {
        CharPrefab = character.CharPrefab;
        CharName = character.CharName;
        EnergyCost = character.EnergyCost;
        materials = character.materials;
    }
}
