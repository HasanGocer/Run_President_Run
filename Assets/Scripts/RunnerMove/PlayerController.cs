using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerController : MonoBehaviour
{
    private PlayerInputs PlayerInputs;
    public float Verticalspeed = 1f, horizontalSpeed;
    private Vector3 movement;
    public float xBound = 4.3f;

    private void Awake()
    {
        PlayerInputs = new PlayerInputs();
    }

    void Start()
    {
        Cursor.lockState = CursorLockMode.Locked;
    }

    void Update()
    {
        if (GameManager.Instance.gameStat == GameManager.GameStat.start)
            Move();
    }

    public void Move()
    {
        AutoMoveForward();
        LeftRightTouchMove();
        BoundaryCheck();
    }

    private void LeftRightTouchMove()
    {
        int touchCount = Input.touchCount;

        if (touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);

            switch (touch.phase)
            {
                case UnityEngine.TouchPhase.Moved:
                    gameObject.transform.position = new Vector3((touch.position.x / Camera.main.pixelWidth) * (xBound * 2), gameObject.transform.position.y, gameObject.transform.position.z);
                    break;
            }
        }

    }
    private void LeftRightMove()
    {
        Vector2 inputVector = PlayerInputs.Player.Movement.ReadValue<Vector2>();
        movement = new Vector3(inputVector.x, 0, 0);
        transform.position = Vector3.Lerp(transform.position, transform.position + movement * horizontalSpeed * Time.deltaTime, Time.deltaTime);

    }
    private void AutoMoveForward()
    {//ileri
        transform.position = Vector3.Lerp(transform.position, transform.position + Vector3.forward * Verticalspeed * Time.deltaTime, Time.deltaTime);
    }
    private void BoundaryCheck()
    {
        if (transform.position.x <= -xBound)
        {
            transform.position = new Vector3(-xBound, transform.position.y, transform.position.z);
        }
        else if (transform.position.x >= xBound)
        {
            transform.position = new Vector3(xBound, transform.position.y, transform.position.z);
        }
    }


    private void OnEnable()
    {
        PlayerInputs.Enable();
    }

    private void OnDisable()
    {
        PlayerInputs.Disable();
    }
}