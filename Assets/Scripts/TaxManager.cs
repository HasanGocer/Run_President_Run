using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TaxManager : MonoSingleton<TaxManager>
{
    [SerializeField] List<GameObject> TaxPoses = new List<GameObject>();
    [SerializeField] List<GameObject> TempTaxes = new List<GameObject>();

    public void GatePlacement()
    {
        foreach (GameObject item in TaxPoses)
            Instantiate(TempTaxes[Random.Range(0, TaxPoses.Count)], item.transform.position, item.transform.rotation);
    }

}
