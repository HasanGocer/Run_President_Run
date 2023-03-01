using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VoterManager : MonoSingleton<VoterManager>
{
    [SerializeField] GameObject _spawnPos;
    [SerializeField] int _OPWalkerVoterCount;
    public List<GameObject> Voters = new List<GameObject>();

    public void VoterAdded()
    {
        int xDistance = Random.Range(-300, 300);
        float xDistanceFloat = (float)xDistance / 100;

        int zDistance = Random.Range(-300, 0);
        float zDistanceFloat = (float)zDistance / 100;

        GameObject obj = ObjectPool.Instance.GetPooledObject(_OPWalkerVoterCount, _spawnPos.transform.position + new Vector3(xDistanceFloat, 0, zDistanceFloat));
        obj.transform.SetParent(_spawnPos.transform);
        Voters.Add(obj);
    }
}
