using System.Collections;
using UnityEngine;

[CreateAssetMenu(menuName = "State Machine/Action/Straight")]
public class MoveStraight : Action
{
    public override void Act(SMClass sm)
    {
        sm.GetNavMeshAgent().GoForward();
    }
}