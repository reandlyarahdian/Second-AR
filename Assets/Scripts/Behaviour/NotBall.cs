﻿using System.Collections;
using UnityEngine;

[CreateAssetMenu(menuName = "State Machine/Decision/NotBall")]
public class NotBall : Decision
{
    public override bool Test(SMClass sm)
    {
        if (sm.GetNavMeshAgent().BallNotCheck())
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}