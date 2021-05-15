using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.Events;

public class AgentControll : MonoBehaviour
{
    public Bola ball;
    public Gate gate;
    public GameObject target;
    public Vector3 point;
    Quaternion rotation;
    private NavMeshAgent agent;
    public SphereCollider col;
    public Transform ballPos;
    public bool isEnemy;
    private Active active;
    public float wait;
    ObstacleAvoidanceType type;
    public string taging;
    public float radius;
    private bool isActive;
    private bool isBall;

    void Start() 
    {
        point = this.transform.position;
        rotation = this.transform.rotation;
        active = GetComponentInChildren<Active>();
        agent = GetComponent<NavMeshAgent>();
        ball = FindObjectOfType<Bola>();
        gate = FindObjectOfType<Gate>();
        type = ObstacleAvoidanceType.NoObstacleAvoidance;
    }

    public void TempoCoroutine()
    {
        agent.isStopped = true;
        PasingBall();
        StartCoroutine(enumerator());
        agent.ResetPath();
    }

    IEnumerator enumerator()
    {
        agent.obstacleAvoidanceType = type;
        active.enabled = false;
        yield return new WaitForSecondsRealtime(wait);
        active.enabled = true;
        agent.obstacleAvoidanceType = ObstacleAvoidanceType.HighQualityObstacleAvoidance;
    }

    void PasingBall()
    {
        Collider[] hitColliders = Physics.OverlapSphere(transform.position, radius);

        foreach (var Collide in hitColliders)
        {
            if (Collide.tag == "Player")
            {
                Transform transform = Collide.GetComponent<AgentControll>().ballPos;
                ball.transform.SetParent(null);
                ball.GetComponent<Rigidbody>().isKinematic = false;
                ball.transform.position = Vector3.MoveTowards(ball.transform.position, 
                    transform.position, 
                    1.5f * Time.deltaTime);
            }
        }
    }

    public void GoToPreviousWaypoint() 
    {
        agent.speed = 2f;
        agent.destination = point;
        transform.rotation = rotation; 
        StartCoroutine(enumerator());
    }

    public void GoToBall() 
    {
        agent.speed = 1.5f;
        agent.destination = ball.transform.position; 
    }

    public void GoToGate()
    {
        agent.speed = 0.75f;
        agent.destination = gate.transform.position;
    }

    public void GoForward()
    {
        agent.speed = 1.5f;
        agent.destination = new Vector3(transform.position.x, transform.position.y, 17f);
    }

    public void GoToTarget()
    {
        agent.speed = 1f;
        agent.destination = target.transform.position;
    }

    public void StopAgent() 
    { 
        agent.isStopped = true; 
        agent.ResetPath(); 
    }

    public bool IsAtDestionation() 
    { 
        if (!agent.pathPending) 
        { 
            if (agent.remainingDistance <= 0.8f) 
            { 
                return true; 
            } 
        } 
        return false; 
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "Attacker")
        {
            target = other.gameObject;
            col.enabled = false;
            isEnemy = true;
            
        }
    }

    public bool BallCheck()
    {
        if (ball.isBall)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public bool Enemy()
    {
        if (isEnemy)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public bool Activate()
    {
        if (active.isActive)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
