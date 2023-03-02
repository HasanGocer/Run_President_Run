using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PopulationBar : MonoSingleton<PopulationBar>
{
    public int populationCount = 50;
    [SerializeField] Image _populationBarImage;
    [SerializeField] GameObject _populationBarPanel;
    [SerializeField] int _barSpeed;

    [SerializeField] GameObject _leftFlag, _rightFlag;
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

        if (down > 0) StartCoroutine(BarUpdateEnum(afterBar, true));
        else StartCoroutine(BarUpdateEnum(afterBar, false));
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

    private IEnumerator BarUpdateEnum(float finish, bool isPlus)
    {
        float lerpCount = 0;
        int lerpintCount = 0;

        while (true)
        {
            lerpintCount++;
            if (isPlus) lerpCount += Time.deltaTime * _barSpeed * 2;
            else lerpCount += Time.deltaTime * _barSpeed;
            _populationBarImage.fillAmount = Mathf.Lerp(_populationBarImage.fillAmount, finish, Time.deltaTime);
            yield return new WaitForSeconds(Time.deltaTime);
            if (lerpintCount == 50)
            {
                _populationBarImage.fillAmount = finish;
                break;
            }
            if (_populationBarImage.fillAmount == finish) break;
        }
    }
}
