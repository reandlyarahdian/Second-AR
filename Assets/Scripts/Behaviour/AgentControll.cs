using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.Events;

public class AgentControll : MonoBehaviour
{
    [HideInInspector]
    public Bola ball;
    [HideInInspector]
    public Gate gate;
    [HideInInspector]
    public GameObject target;
    [HideInInspector]
    public Vector3 point;
    Quaternion rotation;
    private NavMeshAgent agent;
    [HideInInspector]
    public SphereCollider col;
    [HideInInspector]
    public Transform ballPos;
    [HideInInspector]
    public bool isEnemy;
    private Active active;
    public float wait;
    ObstacleAvoidanceType type;
    public string taging;
    public float radius;
    public bool isBall;
    [HideInInspector]
    public Material inactiveMat, DefeaultMat;
    [HideInInspector]
    public example example;
    [HideInInspector]
    public animationController animControl;

    void Start() 
    {
        point = this.transform.position;
        rotation = this.transform.rotation;
        active = GetComponentInChildren<Active>();
        agent = GetComponent<NavMeshAgent>();
        ball = FindObjectOfType<Bola>();
        gate = FindObjectOfType<Gate>();
        type = ObstacleAvoidanceType.NoObstacleAvoidance;
        DefeaultMat = GetComponentInChildren<SkinnedMeshRenderer>().material;
        example = GetComponent<example>();
        animControl = GetComponent<animationController>();
        animControl.Pose();
    }

    private void Update()
    {
        if (active.Del)
        {
            Destroy(this.gameObject);
        }
    }

    public void TempoCoroutine()
    {
        charaInactive();
        agent.isStopped = true;
        PasingBall();
        StartCoroutine(enumerator());
        animControl.Attacker();
        agent.ResetPath();
    }

    IEnumerator enumerator()
    {
        agent.obstacleAvoidanceType = type;
        active.enabled = false;
        yield return new WaitForSecondsRealtime(wait);
        active.enabled = true;
        agent.obstacleAvoidanceType = ObstacleAvoidanceType.HighQualityObstacleAvoidance;
        charaActuve();
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
        charaInactive();
        agent.speed = 2f;
        agent.destination = point;
        transform.rotation = rotation;
        animControl.Jog();
        StartCoroutine(enumerator());
    }

    public void GoToBall() 
    {
        agent.speed = 1.5f;
        agent.destination = ball.transform.position;
        animControl.Jog();
    }

    public void GoToGate()
    {
        agent.speed = 0.75f;
        agent.destination = gate.transform.position;
        animControl.Jog();
    }

    public void GoForward()
    {
        agent.speed = 1.5f;
        agent.destination = new Vector3(transform.position.x, transform.position.y, 40f);
        animControl.Jog();
    }

    public void GoToTarget()
    {
        agent.speed = 1f;
        agent.destination = target.transform.position;
        animControl.Jog();
    }

    public void StopAgent() 
    {
        agent.isStopped = true;
        animControl.Defender();
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

        if (other.GetComponent<Bola>())
        {
            isBall = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.GetComponent<Bola>())
        {
            isBall = false;
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

    public bool NotBallCheck()
    {
        if (isBall)
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

    public void charaActuve()
    {
        foreach (SkinnedMeshRenderer Chara in this.GetComponentsInChildren<SkinnedMeshRenderer>())
        {
            Chara.material = DefeaultMat;
        }
    }

    public void charaInactive()
    {
        foreach (SkinnedMeshRenderer Chara in this.GetComponentsInChildren<SkinnedMeshRenderer>())
        {
            Chara.material = inactiveMat;
        }
    }
}
