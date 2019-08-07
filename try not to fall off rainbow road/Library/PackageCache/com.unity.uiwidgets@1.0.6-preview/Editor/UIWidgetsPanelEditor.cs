using Unity.UIWidgets.engine;
using UnityEditor;
#if !UNITY_2019_2_OR_NEWER
using UnityEditor.UI;
#endif

namespace Unity.UIWidgets.Editor {
#if !UNITY_2019_2_OR_NEWER
    [CustomEditor(typeof(UIWidgetsPanel), true)]
    [CanEditMultipleObjects]
    public class UIWidgetsPanelEditor : RawImageEditor {
        public override void OnInspectorGUI() {
            base.OnInspectorGUI();
            var pixelRatioProperty = this.serializedObject.FindProperty("devicePixelRatioOverride");
            var antiAliasingProperty = this.serializedObject.FindProperty("antiAliasingOverride");
            EditorGUILayout.PropertyField(pixelRatioProperty);
            EditorGUILayout.PropertyField(antiAliasingProperty);
            this.serializedObject.ApplyModifiedProperties();
        }
    }
#endif
}
