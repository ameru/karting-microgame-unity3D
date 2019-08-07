using UnityEngine;
#if !UNITY_2019_2_OR_NEWER
using UnityEngine.EventSystems;
#endif

namespace UIWidgetsSample {
    public class SelectOnStart : MonoBehaviour {
        void Start() {
#if !UNITY_2019_2_OR_NEWER
            EventSystem.current.SetSelectedGameObject(this.gameObject);
#endif
        }
    }
}
