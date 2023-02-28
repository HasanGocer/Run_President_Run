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
    public List<GameObject> MoneyImages = new List<GameObject>();
    public List<GameObject> PopulationImages = new List<GameObject>();
    public bool isTouch;
    public int gateCount;

    private void Start()
    {
        if (gateSelectStat == GateSelectStat.money) MoneyImages[Random.Range(0, MoneyImages.Count)].SetActive(true);
        else if (gateSelectStat == GateSelectStat.population) PopulationImages[Random.Range(0, PopulationImages.Count)].SetActive(true);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player") && !isTouch)
        {
            if (broGateID == null)
            {
                isTouch = true;
                if (gateSelectStat == GateSelectStat.flag) FlagSelect();
                else if (gateSelectStat == GateSelectStat.money) MoneySelection(other.gameObject);
                else if (gateSelectStat == GateSelectStat.population) PopulationSelection(other.gameObject);
            }
            else if (!broGateID.isTouch)
            {
                isTouch = true;
                if (gateSelectStat == GateSelectStat.flag) FlagSelect();
                else if (gateSelectStat == GateSelectStat.money) MoneySelection(other.gameObject);
                else if (gateSelectStat == GateSelectStat.population) PopulationSelection(other.gameObject);
            }
        }
    }

    private void PopulationSelection(GameObject obj)
    {
        int population = Random.Range(10, 30);
        int price = GateManager.Instance.moneyGatePrice;

        PopulationBar.Instance.BarUpdate(100, PopulationBar.Instance.populationCount, population);
        PointText.Instance.CallRedText(obj, population);

        GameManager.Instance.addedMoney -= price;
        if (GameManager.Instance.addedMoney < 0) GameManager.Instance.addedMoney = 0;
        AnimController.Instance.CallDanceAnim();
    }
    private void MoneySelection(GameObject obj)
    {
        int price = GateManager.Instance.moneyGatePrice;
        price = Random.Range(price, price * 3);
        int population = Random.Range(10, 15);

        GameManager.Instance.addedMoney += price;
        PointText.Instance.CallGreenText(obj, price);

        PopulationBar.Instance.BarUpdate(100, population * -1, population);

        AnimController.Instance.CallSadAnim();
    }
    private void FlagSelect()
    {
        GameManager gameManager = GameManager.Instance;

        PopulationBar.Instance.BarOpen();
        if (gateCount == 0)
        {
            gameManager.flagStat = GameManager.FlagStat.america;
            AnimController.Instance.republicFlag.SetActive(true);
            AnimController.Instance.democraticFlag.SetActive(false);
        }
        else if (gateCount == 1)
        {
            gameManager.flagStat = GameManager.FlagStat.russia;
            AnimController.Instance.democraticFlag.SetActive(true);
            AnimController.Instance.republicFlag.SetActive(false);
        }
    }
}
