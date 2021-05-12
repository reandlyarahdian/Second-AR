using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

[CreateAssetMenu(menuName = "State Machine/State")]
public class State : ScriptableObject
{
    [SerializeField]
    private Action entry;
    [SerializeField]
    private Action[] stateAct;
    [SerializeField]
    private Action exit;
    [SerializeField]
    private Transition[] transitions;

    public Action[] GetActions() 
    { 
        return stateAct; 
    }
    public Action GetEntryAction() 
    {  
        return entry; 
    }
    public Action GetExitAction()
    {
        return exit; 
    }
    public Transition[] GetTransitions() 
    { 
        return transitions; 
    }
}