using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class FinishLine : MonoBehaviour
{
    [SerializeField] GameObject _thridhObject, _secondObject, _firstObject;
    [SerializeField] GameObject _thridhPos, _secondPos, _firstPos;
    [SerializeField] int _finishMoveTime;

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
        yield return new WaitForSeconds(_finishMoveTime);
        FinishSystem.Instance.FinishCheck();

    }
}
