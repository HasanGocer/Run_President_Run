using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Animancer;

public class AnimController : MonoSingleton<AnimController>
{
    [SerializeField] private AnimancerComponent character;
    [SerializeField] private AnimationClip walk, sadWalk, winWalk, ýdle, dance, sad, sadFinish, winFinish;

    public void CallIdleAnim()
    {
        character.Play(ýdle, 0.2f);
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
        character.Play(sadWalk, 0.2f);
    }
    private void CallWalkAnim()
    {
        character.Play(walk, 0.2f);
    }
    private void CallWinWalkAnim()
    {
        character.Play(winWalk, 0.2f);
    }
    private IEnumerator CallDanceAnimEnum()
    {
        character.Play(dance, 0.2f);
        yield return new WaitForSeconds(1);
        ChoiseWalkType();
    }
    private IEnumerator CallSadAnimEnum()
    {
        character.Play(sad, 0.2f);
        yield return new WaitForSeconds(1);
        ChoiseWalkType();
    }
}
