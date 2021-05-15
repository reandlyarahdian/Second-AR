using System.Collections;
using UnityEngine;

[CreateAssetMenu(menuName = "State Machine/Decision/isBall")]
public class IsBall : Decision
{
    public override bool Test(SMClass sm)
    {
        if (sm.GetNavMeshAgent().BallCheck())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}