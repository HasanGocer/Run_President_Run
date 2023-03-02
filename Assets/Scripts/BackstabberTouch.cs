using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackstabberTouch : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Breaker"))
        {
            gameObject.SetActive(false);
            print(21);
        }
    }
}
