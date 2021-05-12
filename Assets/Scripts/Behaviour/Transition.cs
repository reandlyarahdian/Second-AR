using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

[CreateAssetMenu(menuName = "State Machine/Transition")]
public class Transition : ScriptableObject
{
    [SerializeField]
    private Decision decision;
    [SerializeField]
    private State targetState;
    [SerializeField]
    private Action action;

    public bool IsTriggered(SMClass sm) 
    { 
        return decision.Test(sm); 
    }
    public State GetTargetState() 
    { 
        return targetState; 
    }
    public Action GetAction() 
    { 
        return action; 
    }
}