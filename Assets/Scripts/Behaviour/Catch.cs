using System.Collections;
using UnityEngine;

[CreateAssetMenu(menuName = "State Machine/Decision/Catch")]
public class Catch : Decision
{
    public override bool Test(SMClass sm)
    {
        if (sm.GetNavMeshAgent().IsAtDestionation())
        {
            sm.GetNavMeshAgent().animControl.Defender();
            return true;
        }
        else
        {
            return false;
        }
    }
}