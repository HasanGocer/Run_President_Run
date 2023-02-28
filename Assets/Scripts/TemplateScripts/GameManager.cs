using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoSingleton<GameManager>
{
    //managerde bulunacak

    public enum GameStat
    {
        intro = 0,
        start = 1,
        wait = 2,
        finish = 3
    }

    public enum FlagStat
    {
        america = 0,
        russia = 1
    }


    [Header("Game_Main_Field")]
    [Space(10)]

    public FlagStat flagStat;
    public GameStat gameStat;
    public int addedMoney;
    public int level;
    public int money;
    public int vibration;
    public int sound;

    public void Awake()
    {
        PlayerPrefsPlacement();
        ItemData.Instance.AwakeID();
    }

    private void PlayerPrefsPlacement()
    {
        if (PlayerPrefs.HasKey("money"))
            money = PlayerPrefs.GetInt("money");
        else
            PlayerPrefs.SetInt("money", 100);
        MoneySystem.Instance.MoneyTextRevork(0);

        if (PlayerPrefs.HasKey("level"))
            level = PlayerPrefs.GetInt("level");
        else
            PlayerPrefs.SetInt("level", level);

        if (PlayerPrefs.HasKey("vibration"))
            vibration = PlayerPrefs.GetInt("vibration");
        else
            PlayerPrefs.SetInt("vibration", vibration);

        if (PlayerPrefs.HasKey("sound"))
            sound = PlayerPrefs.GetInt("sound");
        else
            PlayerPrefs.SetInt("sound", sound);

        if (PlayerPrefs.HasKey("first"))
        {
            ItemData.Instance.factor = FactorPlacementRead();
            MarketSystem.Instance.FieldsBools = MarketPlacementRead();
        }
        else
        {
            PlayerPrefs.SetInt("first", 1);
            FactorPlacementWrite(ItemData.Instance.factor);
            MarketPlacementWrite(MarketSystem.Instance.FieldsBools);
        }
    }

    public void FactorPlacementWrite(ItemData.Field factor)
    {
        string jsonData = JsonUtility.ToJson(factor);
        System.IO.File.WriteAllText(Application.persistentDataPath + "/FactorData.json", jsonData);
    }
    public void MarketPlacementWrite(MarketSystem.FieldBool field)
    {
        string jsonData = JsonUtility.ToJson(field);
        System.IO.File.WriteAllText(Application.persistentDataPath + "/FieldData.json", jsonData);
    }

    public ItemData.Field FactorPlacementRead()
    {
        string jsonRead = System.IO.File.ReadAllText(Application.persistentDataPath + "/FactorData.json");
        ItemData.Field factor = new ItemData.Field();
        factor = JsonUtility.FromJson<ItemData.Field>(jsonRead);
        return factor;
    }
    public MarketSystem.FieldBool MarketPlacementRead()
    {
        string jsonRead = System.IO.File.ReadAllText(Application.persistentDataPath + "/FieldData.json");
        MarketSystem.FieldBool field = new MarketSystem.FieldBool();
        field = JsonUtility.FromJson<MarketSystem.FieldBool>(jsonRead);
        return field;
    }
    public void SetMoney()
    {
        PlayerPrefs.SetInt("money", money);
    }

    public void SetSound()
    {
        PlayerPrefs.SetInt("sound", sound);
    }
    public void SetLevel()
    {
        level++;
        PlayerPrefs.SetInt("level", level);
    }

    public void SetVibration()
    {
        PlayerPrefs.SetInt("vibration", vibration);
    }
}
