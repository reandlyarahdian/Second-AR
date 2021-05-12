using System.Collections;
using UnityEngine;

[CreateAssetMenu(menuName = "State Machine/Action/Ball")]
public class ChaseBall : Action
{
    public override void Act(SMClass sm)
    {
        sm.GetNavMeshAgent().GoToBall();
    }
}