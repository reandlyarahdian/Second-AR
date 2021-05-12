using System.Collections;
using UnityEngine;

[CreateAssetMenu(menuName = "State Machine/Action/Gate")]
public class MoveGate : Action
{
    public override void Act(SMClass sm)
    {
        sm.GetNavMeshAgent().GoToGate();
    }
}