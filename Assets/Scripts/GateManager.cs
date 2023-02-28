using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GateManager : MonoSingleton<GateManager>
{
    public int moneyGatePrice, moneyFieldPrice;

    [SerializeField] List<GameObject> GatePoses = new List<GameObject>();
    [SerializeField] List<GameObject> TempGates = new List<GameObject>();

    public void GatePlacement()
    {
        foreach (GameObject item in GatePoses)
            Instantiate(TempGates[Random.Range(0, TempGates.Count)], item.transform.position, item.transform.rotation);
    }
}
