using System.Collections;
using UnityEngine;

[CreateAssetMenu(menuName = "State Machine/Decision/Activation")]
public class Activation : Decision
{
    public override bool Test(SMClass sm)
    {
        if (sm.GetNavMeshAgent().Activate())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}