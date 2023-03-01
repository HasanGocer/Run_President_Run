using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerTouch : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Tax")) MoneyAdded(other.gameObject);
        else if (other.CompareTag("Population")) PopulationAdded(other.gameObject);
    }
    private void PopulationAdded(GameObject pop)
    {
        PopulationBar populationBar = PopulationBar.Instance;

        ParticalManager.Instance.CallMoneyGatePartical(gameObject);
        VoterManager.Instance.VoterAdded();
        pop.SetActive(false);
        populationBar.BarUpdate(100, populationBar.populationCount, 5);
    }
    private void MoneyAdded(GameObject money)
    {
        money.SetActive(false);
        GameManager.Instance.addedMoney += GateManager.Instance.moneyFieldPrice;
    }
}
