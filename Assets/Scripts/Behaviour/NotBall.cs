using System.Collections;
using UnityEngine;

[CreateAssetMenu(menuName = "State Machine/Decision/NotBall")]
public class NotBall : Decision
{
    public override bool Test(SMClass sm)
    {
        if (!sm.GetNavMeshAgent().NotBallCheck() && sm.GetNavMeshAgent().BallCheck())
        {
            sm.GetNavMeshAgent().example.line.enabled = false;
            return true;
        }
        else
        {
            return false;
        }
    }
}