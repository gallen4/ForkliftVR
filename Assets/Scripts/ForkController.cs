using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
//using Valve.VR.InteractionSystem;

namespace HurricaneVR.Framework.Components
{
    public class ForkController : MonoBehaviour {

        public Transform fork;
        public Transform mast;
        public GameObject pause;
        //public LinearMapping linearMapping;
        public AudioSource moving_up_or_down_audiosource;
        public AudioClip moving_up_or_down_audioclip;
        public float speedTranslate; //Platform travel speed
        public Vector3 maxY; //The maximum height of the platform
        public Vector3 minY; //The minimum height of the platform
        public Vector3 maxYmast; //The maximum height of the mast
        public Vector3 minYmast; //The minimum height of the mast

        private bool mastMoveTrue = false; //Activate or deactivate the movement of the mast
        private bool is_played = true;
        private bool play_once = false;
        public AnimationCurve curve;
        public HVRRotationTracker lever;

        // Update is called once per frame

        void Start()
        {
            //linearMapping = GetComponentInChildren<LinearMapping>();

            curve = new AnimationCurve(new Keyframe(0, 1), new Keyframe(90, 0), new Keyframe(180, 1));
        }
        public void FixedUpdate() {

            Debug.Log(lever.ClampedAngle);

            if (fork.transform.localPosition.y >= maxYmast.y && fork.transform.localPosition.y < maxY.y)
            {
                mastMoveTrue = true;
            }
            else
            {
                mastMoveTrue = false;

            }

            if (fork.transform.localPosition.y <= maxYmast.y)
            {
                mastMoveTrue = false;
            }

            //Aqui Cambiar

            if (lever.ClampedAngle > 100f)
            {
                if (play_once)
                {
                    moving_up_or_down_audiosource.Play();
                    play_once = false;
                }
                
                //fork.Translate(Vector3.up * speedTranslate * Time.deltaTime);
                fork.transform.localPosition = Vector3.MoveTowards(fork.transform.localPosition, maxY, speedTranslate * curve.Evaluate(lever.ClampedAngle) * Time.deltaTime);
                is_played = false;


            }
            else if (lever.ClampedAngle < 80f)
            {
                if (play_once)
                {
                    moving_up_or_down_audiosource.Play();
                    play_once = false;
                }
                fork.transform.localPosition = Vector3.MoveTowards(fork.transform.localPosition, minY, speedTranslate * curve.Evaluate(lever.ClampedAngle) * Time.deltaTime);
                is_played = false;


            }
            else if (lever.ClampedAngle > 80f && lever.ClampedAngle < 100f)
            {
                if (is_played == false)
                {
                    moving_up_or_down_audiosource.Stop();
                    moving_up_or_down_audiosource.PlayOneShot(moving_up_or_down_audioclip);
                    is_played = true;
                    play_once = true;
                }
            }








        }

    }
}


