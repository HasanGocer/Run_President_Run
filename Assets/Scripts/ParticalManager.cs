using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ParticalManager : MonoSingleton<ParticalManager>
{
    [SerializeField] int _OPWinFinishParticalCount, _OPWinManParticalCount, _OPMoneyGateParticalCount;
    [SerializeField] int _winFinishTime, _winManTime, _moneyGateTime;
    [SerializeField] GameObject winFinishPos1, winFinishPos2;

    public void CallWinFinishPartical()
    {
        StartCoroutine(CallWinFinishParticalEnum());
    }
    public void CallWinManPartical(GameObject pos)
    {
        StartCoroutine(CallWinManParticalEnum(pos));
    }
    public void CallMoneyGatePartical(GameObject pos)
    {
        StartCoroutine(CallMoneyGateParticalEnum(pos));
    }

    private IEnumerator CallWinFinishParticalEnum()
    {
        GameObject obj1 = ObjectPool.Instance.GetPooledObject(_OPWinFinishParticalCount, winFinishPos1.transform.position);
        GameObject obj2 = ObjectPool.Instance.GetPooledObject(_OPWinFinishParticalCount, winFinishPos2.transform.position);
        yield return new WaitForSeconds(_winFinishTime);
    }
    private IEnumerator CallWinManParticalEnum(GameObject pos)
    {
        GameObject obj = ObjectPool.Instance.GetPooledObject(_OPWinManParticalCount, pos.transform.position, Vector3.zero);
        yield return new WaitForSeconds(_winManTime);
    }
    private IEnumerator CallMoneyGateParticalEnum(GameObject pos)
    {
        GameObject obj = ObjectPool.Instance.GetPooledObject(_OPMoneyGateParticalCount, pos.transform.position);
        yield return new WaitForSeconds(_moneyGateTime);
        ObjectPool.Instance.AddObject(_OPMoneyGateParticalCount, obj);
    }
}
