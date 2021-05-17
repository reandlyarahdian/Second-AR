using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class animationController : MonoBehaviour
{
    Animator animator;

    private void Start()
    {
        animator = GetComponent<Animator>();
    }

    public void Jog()
    {
        animator.Play("Forward");
    }

    public void Attacker()
    {
        animator.Play("Attacker Idle");
    }

    public void Defender()
    {
        animator.Play("Defender Idle");
    }

    public void Pose()
    {
        animator.Play("Tpose");
    }
}
