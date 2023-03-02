using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PopulationBar : MonoSingleton<PopulationBar>
{
    public int populationCount = 0;
    [SerializeField] Image _populationBarImage;
    [SerializeField] GameObject _populationBarPanel;
    [SerializeField] int _barSpeed;
    public void BarOpen()
    {
        _populationBarPanel.SetActive(true);
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
