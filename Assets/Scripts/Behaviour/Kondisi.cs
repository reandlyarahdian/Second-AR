using System.Collections;
using UnityEngine;

[CreateAssetMenu(menuName = "PluggableAI/Kondisi")]
public class Kondisi : ScriptableObject
{
    public Action[] actions;
    public Transisi[] transitions;
    public Color sceneGizmoColor = Color.grey;

    public void UpdateState(SMClass controller)
    {
        DoActions(controller);
        CheckTransitions(controller);
    }

    private void DoActions(SMClass controller)
    {
        for (int i = 0; i < actions.Length; i++)
        {
            actions[i].Act(controller);
        }
    }

    private void CheckTransitions(SMClass controller)
    {
        for (int i = 0; i < transitions.Length; i++)
        {
            bool decisionSucceeded = transitions[i].decision.Test(controller);

            if (decisionSucceeded)
            {
                controller.TransitionToState(transitions[i].trueState);
            }
            else
            {
                controller.TransitionToState(transitions[i].falseState);
            }
        }
    }
}