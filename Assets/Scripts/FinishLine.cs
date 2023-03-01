using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class FinishLine : MonoBehaviour
{
    [SerializeField] GameObject _thridhObject, _secondObject, _firstObject;
    [SerializeField] GameObject _thridhPos, _secondPos, _firstPos;
    [SerializeField] int _finishMoveTime, _finishVoteTime;
    [SerializeField] GameObject finishCamPos, playerPos, blueVote, redVote;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            if (PopulationBar.Instance.populationCount > 70)
            {
                _thridhObject.SetActive(true);
                StartCoroutine(MoveTime(other.gameObject, _thridhPos));
            }
            else if (PopulationBar.Instance.populationCount > 50)
            {
                _secondObject.SetActive(true);
                StartCoroutine(MoveTime(other.gameObject, _secondPos));
            }
            else
            {
                _firstObject.SetActive(true);
                StartCoroutine(MoveTime(other.gameObject, _firstPos));
            }
        }
    }
    private IEnumerator MoveTime(GameObject player, GameObject finishPos)
    {
        player.transform.DOMove(finishPos.transform.position, _finishMoveTime);
        ParticalManager.Instance.CallWinFinishPartical();
        ParticalManager.Instance.CallWinManPartical(player);
        GameManager.Instance.gameStat = GameManager.GameStat.finish;
        AnimController.Instance.FinishSelect();
        yield return new WaitForSeconds(_finishMoveTime);
        VoteTime(player);
        yield return new WaitForSeconds(_finishVoteTime);
        FinishSystem.Instance.FinishTime();
    }
    private void VoteTime(GameObject player)
    {
        Camera.main.gameObject.GetComponent<CamMoveControl>().enabled = false;
        Camera.main.gameObject.transform.position = finishCamPos.transform.position;
        player.transform.position = playerPos.transform.position;
        AnimController.Instance.CallIdleAnim();
        player.transform.rotation = Quaternion.Euler(new Vector3(0, 180, 0));
        blueVote.transform.DOScale(new Vector3(3, PopulationBar.Instance.populationCount / 5, 3), _finishVoteTime);
        redVote.transform.DOScale(new Vector3(3, (100 - PopulationBar.Instance.populationCount) / 5, 3), _finishVoteTime);
    }
}
