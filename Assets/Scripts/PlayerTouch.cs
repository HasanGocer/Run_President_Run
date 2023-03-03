using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerTouch : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Tax")) MoneyAdded(other.gameObject);
        else if (other.CompareTag("Population")) PopulationAdded(other.gameObject);
        else if (other.CompareTag("Breaker")) BreakerTouch(other);
    }
    private void BreakerTouch(Collider other)
    {
        other.enabled = false;
        PointText.Instance.CallRedText(gameObject, -5);
        PopulationBar.Instance.BarUpdate(5 * -1);
    }
    private void PopulationAdded(GameObject pop)
    {
        PopulationBar populationBar = PopulationBar.Instance;

        PointText.Instance.CallRedText(gameObject, 3);
        ParticalManager.Instance.CallMoneyGatePartical(gameObject);
        for (int i = 0; i < 10; i++)
            VoterManager.Instance.VoterAdded();
        pop.SetActive(false);
        populationBar.BarUpdate(3);
    }
    private void MoneyAdded(GameObject money)
    {
        money.SetActive(false);
        SoundSystem.Instance.CallCoin();
        PopulationBar.Instance.BarUpdate(3 * -1);
        PointText.Instance.CallRedText(gameObject, -3);
        GameManager.Instance.addedMoney += GateManager.Instance.moneyFieldPrice;
    }
}
