using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class PopulationBar : MonoSingleton<PopulationBar>
{
    public int populationCount = 50;
    [SerializeField] Image _populationBarImage;
    [SerializeField] GameObject _populationBarPanel;
    [SerializeField] int _barSpeed;

    [SerializeField] GameObject _leftFlag, _rightFlag;

    [SerializeField] TMP_Text _popText, _rivalPopText;
    public void BarOpen()
    {
        _populationBarPanel.SetActive(true);
        FlagChange();
    }
    public void BarUpdate(int down)
    {
        float afterBar = ((float)populationCount + (float)down) / (float)100;
        populationCount += down;
        if (afterBar < 0)
        {
            afterBar = 0;
            populationCount = 0;
        }
        else if (afterBar > 1)
        {
            afterBar = 1;
            populationCount = 100;
        }

        if (down > 0) StartCoroutine(BarUpdateEnum(true));
        else StartCoroutine(BarUpdateEnum(false));
    }
    public void FlagChange()
    {
        if (GameManager.Instance.flagStat == GameManager.FlagStat.america)
        {
            _leftFlag.transform.GetChild(0).gameObject.SetActive(true);
            _leftFlag.transform.GetChild(1).gameObject.SetActive(false);
            _rightFlag.transform.GetChild(0).gameObject.SetActive(false);
            _rightFlag.transform.GetChild(1).gameObject.SetActive(true);
        }
        else
        {
            _leftFlag.transform.GetChild(0).gameObject.SetActive(false);
            _leftFlag.transform.GetChild(1).gameObject.SetActive(true);
            _rightFlag.transform.GetChild(0).gameObject.SetActive(true);
            _rightFlag.transform.GetChild(1).gameObject.SetActive(false);
        }
    }

    private IEnumerator BarUpdateEnum(bool isPlus)
    {
        float lerpCount = 0;
        int lerpintCount = 0;
        float textPlus = ((float)Camera.main.pixelWidth - (float)_popText.gameObject.transform.parent.transform.position.x) / 2;
        textPlus += 50;
        print(textPlus);
        while (true)
        {
            lerpintCount++;
            if (isPlus) lerpCount += Time.deltaTime * _barSpeed * 2;
            else lerpCount += Time.deltaTime * _barSpeed;
            _populationBarImage.fillAmount = Mathf.Lerp(_populationBarImage.fillAmount, (float)populationCount / 100, Time.deltaTime);
            _popText.text = ((int)(_populationBarImage.fillAmount * 100)).ToString();
            _rivalPopText.text = ((int)((1 - _populationBarImage.fillAmount) * 100)).ToString();
            _popText.transform.position = new Vector2(Mathf.Lerp(_popText.transform.position.x, textPlus + (float)populationCount * ((float)_popText.gameObject.transform.parent.transform.position.x / (float)100), lerpCount), _popText.transform.position.y);
            _rivalPopText.transform.position = new Vector2(Mathf.Lerp(_popText.transform.position.x, textPlus + 130 + (float)populationCount * ((float)_popText.gameObject.transform.parent.transform.position.x / (float)100), lerpCount), _rivalPopText.transform.position.y);
            yield return new WaitForSeconds(Time.deltaTime);
            _popText.text = ((int)(_populationBarImage.fillAmount * 100)).ToString();
            _rivalPopText.text = ((int)((1 - _populationBarImage.fillAmount) * 100)).ToString();
            if (lerpintCount == 50)
            {
                _populationBarImage.fillAmount = (float)populationCount / 100;
                break;
            }
            if (_populationBarImage.fillAmount == populationCount / 100) break;
        }
    }
}
