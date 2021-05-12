using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "State Machine/Action/DeactivationTempo")]
public class DeactTempo : Action
{
    public override void Act(SMClass sm)
    {
        sm.GetNavMeshAgent().TempoCoroutine();
    }
}