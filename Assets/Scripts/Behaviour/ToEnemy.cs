using System.Collections;
using UnityEngine;

[CreateAssetMenu(menuName = "State Machine/Action/Enemy")]
public class ToEnemy : Action
{
    public override void Act(SMClass sm)
    {
        sm.GetNavMeshAgent().GoToTarget();
    }
}