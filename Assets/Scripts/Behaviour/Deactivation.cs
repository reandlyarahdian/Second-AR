using System.Collections;
using UnityEngine;

[CreateAssetMenu(menuName = "State Machine/Decision/Deactivation")]
public class Deactivation : Decision
{
    public override bool Test(SMClass sm)
    {
        if (sm.GetNavMeshAgent().Activate())
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}