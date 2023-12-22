using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[DisallowMultipleComponent]
public class Singleton<T> : MonoBehaviour where T : MonoBehaviour
{
    [SerializeField] private bool m_DoNotDestroyOnLoad;

    public static T Instance { get; private set; }

    #region UNITYEVENT
    protected virtual void Awake()
    {
        if(Instance != null)
        {
            Destroy(this);
            return;
        }

        Instance = this as T;

        if(m_DoNotDestroyOnLoad)
        {
            DontDestroyOnLoad(gameObject);
        }
    }

    #endregion
}
