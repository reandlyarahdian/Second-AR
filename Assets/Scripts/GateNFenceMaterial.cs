using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GateNFenceMaterial : MonoBehaviour
{
    public Material mat;
    Material[] mats = new Material[2];
    private void Start()
    {
        for(int i = 0; i < mats.Length; i++)
        {
            mats[i] = mat;
        }
        foreach(MeshRenderer mesh in GetComponentsInChildren<MeshRenderer>())
        {
            mesh.materials = mats;
        }
    }
}
