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
    public void BarUpdate(int max, int count, int down)
    {
        float nowBar = (float)count / (float)max;
        float afterBar = ((float)count + (float)down) / (float)max;
        populationCount += down;
        if (afterBar < 0) afterBar = 0;
        else if (afterBar > 1) afterBar = 1;
        StartCoroutine(BarUpdateEnum(nowBar, afterBar));
    }

    private IEnumerator BarUpdateEnum(float start, float finish)
    {
        float lerpCount = 0;

        while (true)
        {
            lerpCount += Time.deltaTime * _barSpeed;
            _populationBarImage.fillAmount = Mathf.Lerp(_populationBarImage.fillAmount, finish, Time.deltaTime);
            yield return new WaitForSeconds(Time.deltaTime);
            if (_populationBarImage.fillAmount == finish) break;
        }
    }
}
