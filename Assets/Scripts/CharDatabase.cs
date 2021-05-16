using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "Character/Database")]
public class CharDatabase : ScriptableObject
{
    public List<Character> characters;
}
