using System.Collections;
using UnityEngine;

[RequireComponent(typeof(LineRenderer))]
public class example : MonoBehaviour
{
    public int segments = 50;
    public float radius = 5;
    LineRenderer line;
    public SphereCollider col;
    public static example i;
    AgentControll agent;

    void Start()
    {
        line = gameObject.GetComponent<LineRenderer>();
        agent = GetComponent<AgentControll>();

        radius = col.radius;

        line.positionCount = segments + 1;
        line.useWorldSpace = false;
        CreatePoints(radius);

        i = this;
    }

    private void Update()
    {
        if (agent.Enemy())
        {
            CreatePoints(0);
        }
        else
        {
            CreatePoints(radius);
        }
    }

    public void CreatePoints(float radius)
    {
        float x;
        float y;
        float z;

        float angle = 20f;

        for (int i = 0; i < (segments + 1); i++)
        {
            x = Mathf.Sin(Mathf.Deg2Rad * angle) * radius;
            y = Mathf.Cos(Mathf.Deg2Rad * angle) * radius;

            line.SetPosition(i, new Vector3(x, 0, y));

            angle += (360f / segments);
        }
    }
}