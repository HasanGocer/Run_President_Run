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
        print(31);
        if (other.CompareTag("Player") && !isTouch && !broGateID.isTouch)
        {
            isTouch = true;
            if (gateSelectStat == GateSelectStat.flag) FlagSelect();
            else if (gateSelectStat == GateSelectStat.money) MoneySelection();
            else if (gateSelectStat == GateSelectStat.population) PopulationSelection();
        }
    }

    private void PopulationSelection()
    {
        int population = Random.Range(10, 30);
        int price = GateManager.Instance.moneyGatePrice;

        PopulationBar.Instance.BarUpdate(100, PopulationBar.Instance.populationCount, population);
        PointText.Instance.CallRedText(gameObject, population);

        GameManager.Instance.addedMoney -= price;
        AnimController.Instance.CallDanceAnim();
    }
    private void MoneySelection()
    {
        int price = GateManager.Instance.moneyGatePrice;
        price = Random.Range(price, price * 3);
        int population = Random.Range(10, 15);

        GameManager.Instance.addedMoney += price;
        PointText.Instance.CallGreenText(gameObject, price);

        PopulationBar.Instance.BarUpdate(100, population * -1, population);

        AnimController.Instance.CallSadAnim();
    }
    private void FlagSelect()
    {
        GameManager gameManager = GameManager.Instance;

        PopulationBar.Instance.BarOpen();
        if (gateCount == 0)
        {
            gameManager.flagStat = GameManager.FlagStat.republic;
            AnimController.Instance.republicFlag.SetActive(true);
        }
        else if (gateCount == 1)
        {
            gameManager.flagStat = GameManager.FlagStat.democratic;
            AnimController.Instance.democraticFlag.SetActive(true);
        }
    }
}
