using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName ="Character/Character")]
public class Character : ScriptableObject
{
    public GameObject CharPrefab;
    public string CharName;
    public int EnergyCost;

    public Materials materials;

    public void charaColor()
    {
        foreach(SkinnedMeshRenderer Chara in CharPrefab.GetComponentsInChildren<SkinnedMeshRenderer>())
        {
            Chara.material = materials.material;
        }
    }
}
