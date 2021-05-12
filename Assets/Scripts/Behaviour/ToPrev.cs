using System.Collections;
using UnityEngine;

[CreateAssetMenu(menuName = "State Machine/Action/Previous")]
public class ToPrev : Action
{
    public override void Act(SMClass sm)
    {
        sm.GetNavMeshAgent().GoToPreviousWaypoint();
    }
}