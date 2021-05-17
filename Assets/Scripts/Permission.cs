using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using NativeCameraNamespace;

public class Permission : MonoBehaviour
{
    public void Start()
    {
        if (!NativeCamera.IsCameraBusy())
        {
            if (NativeCamera.CheckPermission() == NativeCamera.Permission.ShouldAsk)
            {
                NativeCamera.RequestPermission();
            }
            else
            {
                return;
            }
        }
        else
        {
            return;
        }
    }
}
