using System.Collections;
using UnityEngine;

[CreateAssetMenu(menuName = "State Machine/Decision/isBall")]
public class IsBall : Decision
{
    public override bool Test(SMClass sm)
    {
        if (sm.GetNavMeshAgent().BallCheck() && sm.GetNavMeshAgent().NotBallCheck())
        {
            sm.GetNavMeshAgent().example.line.enabled = true;
            return true;
        }
        else
        {
            return false;
        }
    }
}