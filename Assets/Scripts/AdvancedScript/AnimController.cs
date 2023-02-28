using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Animancer;

public class AnimController : MonoSingleton<AnimController>
{
    [SerializeField] private List<AnimancerComponent> character = new List<AnimancerComponent>();
    [SerializeField] private AnimationClip walk, sadWalk, winWalk, ýdle, dance, sad, sadFinish, winFinish;
    public GameObject republicFlag, democraticFlag;
    [SerializeField] GameObject poorPartical, richPartical;

    public void CallIdleAnim()
    {
        character[MarketSystem.Instance.stickmanUsedCount].Play(ýdle, 0.2f);
    }
    public void CallSadAnim()
    {
        StartCoroutine(CallSadAnimEnum());
    }
    public void CallDanceAnim()
    {
        StartCoroutine(CallDanceAnimEnum());
    }
    public void ChoiseWalkType()
    {
        if (PopulationBar.Instance.populationCount > 70) CallWinWalkAnim();
        else if (PopulationBar.Instance.populationCount > 50) CallWalkAnim();
        else CallSadWalkAnim();
    }

    private void CallSadWalkAnim()
    {
        poorPartical.SetActive(true);
        richPartical.SetActive(false);
        character[MarketSystem.Instance.stickmanUsedCount].Play(sadWalk, 0.2f);
    }
    private void CallWalkAnim()
    {
        poorPartical.SetActive(false);
        richPartical.SetActive(false);
        character[MarketSystem.Instance.stickmanUsedCount].Play(walk, 0.2f);
    }
    private void CallWinWalkAnim()
    {
        poorPartical.SetActive(false);
        richPartical.SetActive(true);
        character[MarketSystem.Instance.stickmanUsedCount].Play(winWalk, 0.2f);
    }
    private IEnumerator CallDanceAnimEnum()
    {
        character[MarketSystem.Instance.stickmanUsedCount].Play(dance, 0.2f);
        yield return new WaitForSeconds(1);
        ChoiseWalkType();
    }
    private IEnumerator CallSadAnimEnum()
    {
        character[MarketSystem.Instance.stickmanUsedCount].Play(sad, 0.2f);
        yield return new WaitForSeconds(1);
        ChoiseWalkType();
    }
}
