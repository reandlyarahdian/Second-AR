using System.Collections;
using UnityEngine;

[CreateAssetMenu(menuName = "State Machine/Decision/Catch")]
public class Catch : Decision
{
    public override bool Test(SMClass sm)
    {
        if (sm.GetNavMeshAgent().IsAtDestionation())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}