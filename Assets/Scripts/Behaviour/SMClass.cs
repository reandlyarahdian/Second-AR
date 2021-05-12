using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;


public class SMClass : MonoBehaviour
{
    /*public State initState;
    private State currState;
    
    public List<Action> actions = new List<Action>();
    [Space]*/
    public Kondisi remainState;
    private float stateTimeElapsed;
    public Kondisi currentState;
    private AgentControll agent;
    public AgentControll GetNavMeshAgent()
    {
        return agent;
    }
    private void Start()
    {
        //currState = initState;
        agent = GetComponent<AgentControll>();
        //StartCoroutine(UpdateAction());
    }

    private void Update()
    {
        currentState.UpdateState(this);
    }

    /*IEnumerator UpdateAction()
    {
        while (true)
        {
            Transition triggeredTransition = null;
            foreach (Transition t in currState.GetTransitions())
            {
                if (t.IsTriggered(this))
                {
                    triggeredTransition = t;
                    break;
                }
            }

            if (triggeredTransition)
            {
                State targetState = triggeredTransition.GetTargetState();
                actions.Add(currState.GetExitAction());
                actions.Add(triggeredTransition.GetAction());
                actions.Add(targetState.GetEntryAction());
                currState = targetState;
            }
            else
            {
                foreach (Action a in currState.GetActions())
                {
                    actions.Add(a);
                    break;
                }
            }
            DoActions(actions);
            yield return null;
        }
    }

    void DoActions(List<Action> actions) 
    { 
        foreach (Action a in actions) 
        { 
            if (a != null) a.Act(this); 
        } 
    }*/

    public void TransitionToState(Kondisi nextState)
    {
        if (nextState != remainState)
        {
            currentState = nextState;
        }
    }
}
