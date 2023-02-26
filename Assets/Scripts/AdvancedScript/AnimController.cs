using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Animancer;

public class AnimController : MonoBehaviour
{
    [SerializeField] private AnimancerComponent character;
    [SerializeField] private AnimationClip walk, sad, ýdle, dance;

    public void CallIdleAnim()
    {
        character.Play(ýdle, 0.2f);
    }
    public void CallSadAnim()
    {
        character.Play(sad, 0.2f);
    }
    public void CallWalkAnim()
    {
        character.Play(walk, 0.2f);
    }
    public void CallDanceAnim()
    {
        character.Play(dance, 0.2f);
    }
}
