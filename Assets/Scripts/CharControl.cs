using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharControl : MonoBehaviour
{
    public Character character;

    public GameObject CharPrefab;

    public string CharName;

    public Material material;

    public int EnergyCost;

    void Awake()
    {
        CharPrefab = character.CharPrefab;
        CharName = character.CharName;
        material = character.material;
        EnergyCost = character.EnergyCost;
    }
}
