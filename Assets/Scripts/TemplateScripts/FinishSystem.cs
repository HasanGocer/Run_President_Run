using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FinishSystem : MonoSingleton<FinishSystem>
{
    [Header("Finish_Field")]
    [Space(10)]

    int freeCount;

    public void FinishTime()
    {
        GameManager gameManager = GameManager.Instance;
        Buttons buttons = Buttons.Instance;
        MoneySystem moneySystem = MoneySystem.Instance;
        if (PopulationBar.Instance.populationCount > 50)
        {
            SoundSystem.Instance.CallFinishWin();
            StartCoroutine(BarSystem.Instance.BarImageFillAmountIenum());
            LevelManager.Instance.LevelCheck();
            buttons.winPanel.SetActive(true);
            buttons.barPanel.SetActive(true);
            buttons.finishGameMoneyText.text = moneySystem.NumberTextRevork(gameManager.addedMoney);
        }
        else
            buttons.failPanel.SetActive(true);
    }
}
