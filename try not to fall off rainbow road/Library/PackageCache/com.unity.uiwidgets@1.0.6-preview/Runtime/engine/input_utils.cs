using Unity.UIWidgets.foundation;
using Unity.UIWidgets.ui;
#if !UNITY_2019_2_OR_NEWER
using UnityEngine.EventSystems;
#endif

namespace Unity.UIWidgets.engine {
    static class InputUtils {
        const int mouseScrollId = 1;
        const int preservedKeyNum = 10;
        const int preservedMouseKeyNum = 100;
        const int fingerKeyStart = preservedKeyNum + preservedMouseKeyNum;

#if !UNITY_2019_2_OR_NEWER
        public static PointerDeviceKind getPointerDeviceKind(PointerEventData eventData) {
            return isTouchEvent(eventData) ? PointerDeviceKind.touch : PointerDeviceKind.mouse;
        }
#endif

#if !UNITY_2019_2_OR_NEWER
        public static int getPointerDeviceKey(PointerEventData eventData) {
            return isTouchEvent(eventData)
                ? getTouchFingerKey(eventData.pointerId)
                : getMouseButtonKey((int) eventData.button);
        }
#endif

        public static int getScrollButtonKey() {
            return mouseScrollId;
        }

        public static int getMouseButtonKey(int buttonId) {
            D.assert(buttonId < preservedMouseKeyNum);
            return buttonId + preservedKeyNum;
        }

        static int getTouchFingerKey(int fingerId) {
            return fingerId + fingerKeyStart;
        }

#if !UNITY_2019_2_OR_NEWER
        static bool isTouchEvent(PointerEventData eventData) {
            //pointerId >= 0 : touches
            //ref: https://docs.unity3d.com/ScriptReference/EventSystems.PointerEventData-pointerId.html
            return eventData.pointerId >= 0;
        }
#endif

#if !UNITY_2019_2_OR_NEWER
        static bool isMouseEvent(PointerEventData eventData) {
            //pointerId = -1, -2, -3 : mouse buttons
            //ref: https://docs.unity3d.com/ScriptReference/EventSystems.PointerEventData-pointerId.html
            return eventData.pointerId < 0;
        }
#endif
    }
}