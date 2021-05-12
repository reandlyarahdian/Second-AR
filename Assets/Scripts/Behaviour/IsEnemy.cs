using System.Collections;
using UnityEngine;

[CreateAssetMenu(menuName = "State Machine/Decision/isEnemy")]
public class IsEnemy : Decision
{
    public override bool Test(SMClass sm)
    {
        if (sm.GetNavMeshAgent().Enemy())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}