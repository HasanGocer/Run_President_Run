using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class MarketSystem : MonoSingleton<MarketSystem>
{
    [System.Serializable]
    public class FieldBool
    {
        public List<bool> MarketFieldBuyed = new List<bool>();
    }

    [System.Serializable]
    public class MarketMainField
    {
        public List<TMP_Text> MarketMainFieldLevel = new List<TMP_Text>();
        public List<TMP_Text> MarketMainFieldPrice = new List<TMP_Text>();
        public List<Button> PlayerImageButton = new List<Button>();
    }

    [Header("Market_Main_Field")]
    [Space(10)]

    public MarketMainField marketMainField;

    [Header("Market_UI_Field")]
    [Space(10)]

    [SerializeField] private Button _marketButton;
    [SerializeField] private Button _marketBackButton;
    public RectTransform marketPanel;
    [SerializeField] int _stickmanCount;
    public int stickmanUsedCount;
    [SerializeField] TMP_Text _stickmanPrice;
    [SerializeField] List<GameObject> _stickmanImages = new List<GameObject>();
    [SerializeField] Button _mainButton, _downButton, _upButton;
    [SerializeField] TMP_Text _buttonText;
    [SerializeField] List<int> _stickmanPrices = new List<int>();
    public FieldBool FieldsBools = new FieldBool();
    [SerializeField] Image _Around;
    public GameObject stickmanParent;
    public bool isOpen = false;

    public void MarketStart()
    {
        if (PlayerPrefs.HasKey("stickmanUsedCount")) stickmanUsedCount = PlayerPrefs.GetInt("stickmanUsedCount");
        else PlayerPrefs.SetInt("stickmanUsedCount", stickmanUsedCount);
        MarketOnOffPlacement();
    }

    public void GameStart()
    {
        marketPanel.gameObject.SetActive(true);
    }

    public void GameFinish()
    {
        marketPanel.gameObject.SetActive(false);
    }

    private void MarketBuyButton()
    {
        if (stickmanUsedCount == _stickmanCount) { }
        else if (FieldsBools.MarketFieldBuyed[_stickmanCount])
        {
            stickmanParent.transform.GetChild(stickmanUsedCount).gameObject.SetActive(false);
            stickmanUsedCount = _stickmanCount;
            stickmanParent.transform.GetChild(stickmanUsedCount).gameObject.SetActive(true);
            PlayerPrefs.SetInt("stickmanUsedCount", stickmanUsedCount);
            AnimController.Instance.CallIdleAnim();
        }
        else
            if (GameManager.Instance.money >= _stickmanPrices[stickmanUsedCount])
        {
            MoneySystem.Instance.MoneyTextRevork(-1 * _stickmanPrices[stickmanUsedCount]);
            FieldsBools.MarketFieldBuyed[stickmanUsedCount] = true;
            GameManager.Instance.MarketPlacementWrite(FieldsBools);
            _buttonText.text = "Use";
        }
    }
    private void DownStickman()
    {
        _stickmanImages[_stickmanCount].SetActive(false);
        _stickmanCount--;
        if (_stickmanCount == -1)
            _stickmanCount = _stickmanPrices.Count - 1;
        _stickmanImages[_stickmanCount].SetActive(true);
        _stickmanPrice.text = _stickmanPrices[_stickmanCount].ToString();
        if (stickmanUsedCount == _stickmanCount) _buttonText.text = "Equipped";
        else if (FieldsBools.MarketFieldBuyed[_stickmanCount]) _buttonText.text = "Use";
        else _buttonText.text = "Buy";
    }
    private void UpStickman()
    {
        _stickmanImages[_stickmanCount].SetActive(false);
        _stickmanCount++;
        if (_stickmanCount == _stickmanPrices.Count)
            _stickmanCount = 0;
        _stickmanImages[_stickmanCount].SetActive(true);
        _stickmanPrice.text = _stickmanPrices[_stickmanCount].ToString();
        if (stickmanUsedCount == _stickmanCount) _buttonText.text = "Equipped";
        else if (FieldsBools.MarketFieldBuyed[_stickmanCount]) _buttonText.text = "Use";
        else _buttonText.text = "Buy";
    }
    public void MarketButton()
    {
        if (!isOpen)
        {
            Buttons.Instance.SettingPanelOff();
            marketPanel.gameObject.SetActive(true);
            isOpen = true;
            StartCoroutine(TurnAround());
        }
        else
        {
            marketPanel.gameObject.SetActive(false);
            isOpen = false;
        }
    }
    private IEnumerator TurnAround()
    {
        yield return null;

        while (isOpen)
        {
            _Around.rectTransform.transform.rotation = Quaternion.Euler(new Vector3(0, 0, _Around.rectTransform.transform.rotation.z + Time.deltaTime));
            yield return new WaitForSeconds(Time.deltaTime);
        }
    }
    private void MarketOnOffPlacement()
    {
        _marketButton.onClick.AddListener(MarketButton);
        _marketBackButton.onClick.AddListener(MarketButton);
        _mainButton.onClick.AddListener(MarketBuyButton);
        _downButton.onClick.AddListener(DownStickman);
        _upButton.onClick.AddListener(UpStickman);
    }
}
