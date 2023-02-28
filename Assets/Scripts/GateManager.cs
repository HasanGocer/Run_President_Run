using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GateManager : MonoSingleton<GateManager>
{
    public int moneyGatePrice, moneyFieldPrice;

    [SerializeField] List<GameObject> GatePoses = new List<GameObject>();
    [SerializeField] List<GameObject> TempGatesCoutry = new List<GameObject>();
    [SerializeField] List<GameObject> TempGatesChoise = new List<GameObject>();

    public void GatePlacement()
    {
        foreach (GameObject item in GatePoses)
        {
            if (Random.Range(0, 10) < 8)
                Instantiate(TempGatesChoise[Random.Range(0, TempGatesChoise.Count)], item.transform.position, item.transform.rotation);
            else
                Instantiate(TempGatesCoutry[Random.Range(0, TempGatesCoutry.Count)], item.transform.position, item.transform.rotation);
        }
    }
}
