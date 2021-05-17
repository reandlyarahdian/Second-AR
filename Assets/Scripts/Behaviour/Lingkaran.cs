using System.Collections;
using UnityEngine;

[CreateAssetMenu(menuName = "State Machine/Action/Circle")]
public class Lingkaran : Action
{
    public override void Act(SMClass sm)
    {
        sm.GetNavMeshAgent().animControl.Defender();
        sm.GetNavMeshAgent().col.enabled = true;
        sm.GetNavMeshAgent().target = null;
        sm.GetNavMeshAgent().isEnemy = false;
    }
}