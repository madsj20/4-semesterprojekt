using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LigtningSpawn : MonoBehaviour
{
    public GameObject objectToSpawn;
    public int numberOfObjects;
    public float spawnRadius;
    public Transform spawnPoint;
    public Blinking blink;

    public void Spawn()
    {
        for (int i = 0; i < numberOfObjects; i++)
        {
            Vector3 randomPos = Random.insideUnitSphere * spawnRadius;
            Instantiate(objectToSpawn, spawnPoint.position + randomPos, Quaternion.identity);
        }
    }

}
