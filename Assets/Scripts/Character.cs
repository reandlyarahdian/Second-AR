using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName ="Character/Character")]
public class Character : ScriptableObject
{
    public GameObject CharPrefab;
    public string CharName;
    public Material material;
    public int EnergyCost;
}
