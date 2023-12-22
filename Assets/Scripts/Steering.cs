using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.XR;

namespace HurricaneVR.Framework.ControllerInput
{

    public class Steering : Singleton<Steering>
    {
        
        public GameObject Input;
        public ActionBasedController m_leftController;
        public ActionBasedController m_rightController;
        public Transform m_offset;
        public Transform m_SteeringWheel;
        public Transform m_SteeringWheelChild;
        public WheelCollider m_FLwheel;
        public WheelCollider m_FRwheel;
        public WheelCollider m_BLwheel;
        public WheelCollider m_BRwheel;
        public Transform m_FLwheelTransform;
        public Transform m_FRwheelTransform;
        private Transform m_target;
        public float m_accelerationForce;
        public float m_breakForce;
        public float m_maxSteerAngle;
        private Vector3 m_fromVector;
        private bool m_steered;
        private bool is_played_engine_sound;
        private bool is_played_stay_sound;
        private float m_angleBetween;
        private float speed;
        public Rigidbody Rigidbody_for_speed;
        public AudioSource Engine_prostoy_soundsource;
        public AudioSource Engine_working_soundsource;
        public AudioSource reverse_engine_soundsource;
        //public GameObject light1;
        //public GameObject light2;
        //public GameObject light3;
        //public GameObject light4;
        //public GameObject light5;
        private bool isPreviouslyActive = false;

        //public void Switch_Light()
        //{
        //    if (!isPreviouslyActive)
        //    {
        //        light3.SetActive(true);
        //        light4.SetActive(true);
        //        light5.SetActive(true);
        //        isPreviouslyActive = true;
        //    }
        //    else
        //    {
        //        light3.SetActive(false);
        //        light4.SetActive(false);
        //        light5.SetActive(false);
        //        isPreviouslyActive = false;
        //    }
        //}
        
        public void secondbutton(bool isHolde)
        {
            if (isHolde)
            {
                Debug.Log("pressed");
                m_accelerationForce = -m_accelerationForce;
            }
            if (!isHolde)
            {
                Debug.Log("unpressed");
                m_accelerationForce = Mathf.Abs(m_accelerationForce);
            }
        }
        private void OnTriggerEnter(Collider other)
        {
            if (other.tag == "PlayerHand")
            {
                m_target = other.transform;

                m_offset.position = m_target.position;
                m_offset.localPosition = new Vector3(m_offset.localPosition.x, 0, m_offset.localPosition.z);
                Vector3 dir = m_offset.position - transform.position;

                Quaternion rot = Quaternion.LookRotation(dir, transform.up);

                m_SteeringWheelChild.SetParent(null);
                m_SteeringWheel.rotation = rot;
                m_SteeringWheelChild.SetParent(m_SteeringWheel);

            }
        }

        private void OnTriggerStay(Collider other)
        {
            if (other.tag == "PlayerHand")
            {
                m_target = other.transform;
            }
        }
        private void OnTriggerExit(Collider other)
        {
            if (other.tag == "PlayerHand")
            {
                m_target = null;
                m_steered = false;
            }
        }


        private void Update()
        {
            
            if (m_target)
            {
                m_offset.position = m_target.position;
                m_offset.localPosition = new Vector3(m_offset.localPosition.x, 0, m_offset.localPosition.z);
                Vector3 dir = m_offset.position - transform.position;
                Quaternion rot = Quaternion.LookRotation(dir, transform.up);
                m_SteeringWheel.rotation = rot;
                if (m_steered)
                {
                    m_angleBetween = Vector3.Angle(m_fromVector, dir);
                    Vector3 cross = Vector3.Cross(m_fromVector, dir);
                    if (cross.y < 0)
                    {
                        m_angleBetween = -m_angleBetween;
                    }
                    m_fromVector = dir;
                    //Debug.Log(m_angleBetween);

                    float angle = m_FLwheel.steerAngle;
                    angle += m_angleBetween / 10;
                    angle = Mathf.Clamp(angle, -m_maxSteerAngle, m_maxSteerAngle);
                    m_FLwheel.steerAngle = angle;
                    m_FRwheel.steerAngle = angle;
                    AngleWheel(m_FLwheel, m_FLwheelTransform);
                    AngleWheel(m_FRwheel, m_FRwheelTransform);


                }
                else
                {
                    m_steered = true;
                    m_fromVector = dir;
                }
            }


            //if (Input.GetComponent<HVRPlayerInputs>().IsLeftTriggerHoldActive)
            //{
            //    Debug.Log("Brake!");
            //    m_FLwheel.brakeTorque = m_breakForce;
            //    m_FRwheel.brakeTorque = m_breakForce;
            //    m_BLwheel.brakeTorque = m_breakForce;
            //    m_BRwheel.brakeTorque = m_breakForce;

            //    //light1.SetActive(true);
            //    //light2.SetActive(true);     
            //}
            //else
            //{
            //    m_FLwheel.brakeTorque = 0;
            //    m_FRwheel.brakeTorque = 0;
            //    m_BLwheel.brakeTorque = 0;
            //    m_BRwheel.brakeTorque = 0;

            //    //light1.SetActive(false);
            //    //light2.SetActive(false);
            //}

            if (Input.GetComponent<HVRPlayerInputs>().IsRightTriggerHoldActive)
            {

                Engine_prostoy_soundsource.Stop();
                reverse_engine_soundsource.Stop();
                m_BLwheel.motorTorque = m_accelerationForce;
                m_BRwheel.motorTorque = m_accelerationForce;
                if (!is_played_engine_sound)
                {
                    Engine_working_soundsource.Play();
                    is_played_engine_sound = true;
                    is_played_stay_sound = false;
                }
                
                
                

            }
            else if (Input.GetComponent<HVRPlayerInputs>().IsLeftTriggerHoldActive)
            {
                Engine_prostoy_soundsource.Stop();
                m_BLwheel.motorTorque = -m_accelerationForce;
                m_BRwheel.motorTorque = -m_accelerationForce;
                if (!is_played_engine_sound)
                {
                    Engine_working_soundsource.Play();
                    reverse_engine_soundsource.Play();
                    is_played_engine_sound = true;
                    is_played_stay_sound = false;
                }
            }
            else {
                m_BLwheel.motorTorque = 0;
                m_BRwheel.motorTorque = 0;
                if (!is_played_stay_sound)
                {

                    Engine_prostoy_soundsource.Play();
                    Engine_working_soundsource.Stop();
                    reverse_engine_soundsource.Stop();
                    is_played_engine_sound = false;
                    is_played_stay_sound = true;
                }
            }


            void AngleWheel(WheelCollider w, Transform t)
            {
                Vector3 pos;
                Quaternion rot;

                w.GetWorldPose(out pos, out rot);
                t.rotation = rot;
            }
        }
    }
}