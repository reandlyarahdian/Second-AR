using System.Collections;
using UnityEngine;

[CreateAssetMenu(menuName = "State Machine/Action/Stop")]
public class StopAction : Action
{
    public override void Act(SMClass sm)
    {
        sm.GetNavMeshAgent().StopAgent();
        sm.GetNavMeshAgent().example.line.enabled = true;
    }
}