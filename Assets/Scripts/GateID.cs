using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GateID : MonoBehaviour
{
    public enum GateColorStat
    {
        green = 0,
        red = 1,
        blue = 2
    }
    public enum GateSelectStat
    {
        flag = 0,
        money = 1,
        population = 2
    }

    [Header("Market_Main_Field")]
    [Space(10)]
    public GateColorStat gateColorStat;
    public GateSelectStat gateSelectStat;
    public GateID broGateID;
    public bool isTouch;
    public int gateCount;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("player") && !isTouch && !broGateID.isTouch)
        {
            isTouch = true;
            if (gateSelectStat == GateSelectStat.flag) FlagSelect();
            else if (gateSelectStat == GateSelectStat.money) MoneySelection();
            else if (gateSelectStat == GateSelectStat.population) PopulationSelection();
        }
    }

    private void PopulationSelection()
    {

    }
    private void MoneySelection()
    {
        GameManager.Instance.addedMoney += GateManager.Instance.moneyGatePrice;
    }
    private void FlagSelect()
    {
        GameManager gameManager = GameManager.Instance;

        if (gateCount == 0) gameManager.flagStat = GameManager.FlagStat.republic;
        else if (gateCount == 1) gameManager.flagStat = GameManager.FlagStat.democratic;
    }
}
