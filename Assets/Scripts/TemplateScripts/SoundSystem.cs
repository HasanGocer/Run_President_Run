using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundSystem : MonoSingleton<SoundSystem>
{
    [SerializeField] private AudioSource mainSource;
    [SerializeField] private AudioClip mainMusic, winFinish, goldEffect, gate;

    public void MainMusicPlay()
    {
        mainSource.clip = mainMusic;
        mainSource.volume = 70;
        mainSource.Play();
    }

    public void MainMusicStop()
    {
        mainSource.Stop();
        mainSource.volume = 0;
    }
    public void CallFinishWin()
    {
        mainSource.PlayOneShot(winFinish);
    }
    public void CallCoin()
    {
        mainSource.PlayOneShot(goldEffect);
    }
    public void CallGate()
    {
        mainSource.PlayOneShot(gate);
    }
}
