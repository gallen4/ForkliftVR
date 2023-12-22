using UnityEngine;
public class VrSlider : MonoBehaviour
{
    public XRHand m_right;

    public Transform startPosition;
    public Transform endPosition;
    public GameObject lever;

    private Vector3 startPositionOffset;
    private Vector3 endPositionOffset;
    [SerializeField]
    private float forwardBackTilt = 0;
    [SerializeField]
    private float sideToSideTilt = 0;

    private bool isDragging = false;

    //private void Start()
    //{
    //    // Сохраняем начальное смещение позиций слайдера и конечной точки относительно родительского объекта
    //    //startPositionOffset = slider.position - startPosition.position;
    //    //endPositionOffset = slider.position - endPosition.position;
    //}

    //    private void Update()
    //    {
    //        forwardBackwardTilt = topOfJoystick.rotation.eulerAngles.x; 
    //        if (forwardBackwardTilt < 355 && forwardBackwardTilt > 290)
    //        {
    //            forwardBackwardTilt = Math.Abs(forwardBackwardTilt);
    //            Debug.Log("Backward" + forwardBackwardTilt);
    //            //Move something using forwardBackwardTilt as speed
    //            360);
    //else if (forwardBackwardTilt > 5 && forwardBackwardTilt < 74)
    //            {
    //            }
    //            Debug.Log("Forward" + forwardBackwardTilt);|
    //            sideToSideTilt = topOfJoystick.rotation.eulerAngles.z;
    //            if (sideToSideTilt < 355 && sideToSideTilt > 290)
    //            {
    //                sideToSideTilt = Math.Abs(sideToSideTilt Debug.Log("Right" + sideToSideTilt);
    //                -
    //                360);
    //else if (sideToSide Tilt > 5 && sideToSideTilt < 74)
    //{
    //                    if (isDragging)
    //        {
    //            //// Вычисляем смещение от начальной точки вдоль оси X относительно родительского объекта
    //            //float distanceFromStart = transform.InverseTransformPoint(slider.position).x - transform.InverseTransformPoint(startPosition.position).x;

    //            //// Ограничиваем значение distanceFromStart от 0 до расстояния между начальной и конечной точками
    //            //float clampedDistance = Mathf.Clamp(distanceFromStart, 0f, Vector3.Distance(startPosition.position, endPosition.position));

    //            //// Вычисляем новую позицию слайдера на основе clampedDistance
    //            //Vector3 newPosition = startPosition.position + (endPosition.position - startPosition.position).normalized * clampedDistance;

    //            //// Применяем новую позицию слайдера с учетом смещения от начальной точки и конечной точки
    //            //slider.position = newPosition + startPositionOffset;


    //            lever.transform.LookAt(m_right.transform);
    //        }
    //    }

    //    private void OnTriggerEnter(Collider other)
    //    {
    //        if (other.CompareTag("Player"))
    //        {
    //            isDragging = true;
    //        }
    //    }

    //    private void OnTriggerExit(Collider other)
    //    {
    //        if (other.CompareTag("Player"))
    //        {
    //            isDragging = false;
    //        }
    //    }
    //}
}
