using System;
using System.Collections;
using Unity.Connect.Share.Editor.store;
using Unity.Connect.Share.UIWidgets.Redux;
using Unity.UIWidgets.async;
using Unity.UIWidgets.editor;
using Unity.UIWidgets.material;
using Unity.UIWidgets.widgets;
using Unity.UIWidgets.ui;
using UnityEditor;
using UnityEditor.Build.Reporting;
using UnityEngine;

namespace Unity.Connect.Share.Editor
{   
    public class ConnectShareEditorWindow : UIWidgetsEditorWindow
    {
        // Add a menu item named "Share WebGL Game" to Window in the menu bar.
        [MenuItem("Window/Share WebGL Game")]
        static void Connect()
        {
            string token = UnityConnectSession.instance.GetAccessToken();
            if (token.Length == 0)
            {
                StoreFactory.get().Dispatch(new NotLoginAction());
            }
            
            ConnectShareEditorWindow window = (ConnectShareEditorWindow) GetWindow(typeof(ConnectShareEditorWindow));
            window.minSize = new Vector2(600f, 360f);
            window.maxSize = window.minSize;
            window.Show();
        }
        
        public static UIWidgetsCoroutine StartCoroutine(IEnumerator coroutine)
        {
            ConnectShareEditorWindow window = (ConnectShareEditorWindow) GetWindow(typeof(ConnectShareEditorWindow), false, "", false);
            return window.window.startCoroutine(coroutine);
        }

        protected override Widget createWidget()
        {
            return new MaterialApp(
                home: new StoreProvider<AppState>(StoreFactory.get(), new ShareReduxWidget())
            );
        }

        public void Awake()
        {
            FontManager.instance.addFont(Resources.Load<Font>("MaterialIcons-Regular"), "Material Icons");
        }

        protected override void OnDisable()
        {
            StoreFactory.get().Dispatch(new DestroyAction());
        }
    }


}


