#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Int32>[]
struct EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_tEECFF3D52DBAFA05FAD1589D36F0A8EEF9E2670E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_tDDB69E91697CCB64C7993B651487CEEC287DB7E8;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_tAE7A8756D8CF0882DD348DC328FB36FEE0FB7DD0;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694;
// System.Collections.Generic.List`1<UnityEngine.IntervalTreeNode>
struct List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F;
// System.Collections.Generic.List`1<UnityEngine.IntervalTree`1/Entry<System.Object>>
struct List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0;
// System.Collections.Generic.Queue`1<UnityEngine.Transform>
struct Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Int32>>
struct Stack_1_t8E8DE8B40F82D27FFD37A645E4DE60FF495EAE00;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Object>>
struct Stack_1_t83EEA6C9C9B43999F0FB28B378D20F56711A9DB7;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct Stack_1_tA8954C7914CA3BFAB547D0F09691E26AFB6138A3;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct Stack_1_t24347DA243AA3515E9AE6C68F02B953993FF98D8;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct Stack_1_tE4D0BA5034D7B700F0C2C183AC42BD2C969E4A6C;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct Stack_1_tA30706EF9E94D43BFD43FE4AE0AB0499A9A1682B;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct Stack_1_tAB502A0341E85CB581B7AF26F8E45C60127741F9;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rendering.PostProcessing.ParameterOverride>
struct ReadOnlyCollection_1_t27F043E8DE5EED8464F76863AEE4EBD68561389B;
// System.Comparison`1<System.Object>
struct Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.ICloneable
struct ICloneable_tB0EF2757D90DF969033D641822566814815EB134;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidCastException
struct InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA;
// System.NotImplementedException
struct NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3;
// UnityEngine.Events.InvokableCall
struct InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Int32>>
struct UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Object>>
struct UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2;
// UnityEngine.Events.UnityAction`3<System.Object,System.Int32,System.Int32>
struct UnityAction_3_t1FF48E6A020CC297A52A774322E1ABAFB7F989F7;
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89;
// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t88E036FD5956DB491BCC160FA57EF4F9584042B9;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t1324E90D5AF00DA0F61802033E51716D0D9CBED1;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>
struct UnityEvent_3_t2806FFBD49F1501D6C532F2520EFAB143233B6D9;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9;
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A;
// UnityEngine.Experimental.ISubsystemDescriptor
struct ISubsystemDescriptor_tDF5EB3ED639A15690D2CB9993789BB21F24D3934;
// UnityEngine.Experimental.IntegratedSubsystem
struct IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86;
// UnityEngine.Experimental.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0;
// UnityEngine.Experimental.IntegratedSubsystemDescriptor`1<System.Object>
struct IntegratedSubsystemDescriptor_1_t7D1472A1BC79BD25D18737293171056B0B896957;
// UnityEngine.Experimental.IntegratedSubsystem`1<System.Object>
struct IntegratedSubsystem_1_t73613F32CADA1C0AD6BA0A43275D73052DCD5495;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
// UnityEngine.IExposedPropertyTable
struct IExposedPropertyTable_tBA6A5A41F6283C34744CA6EE8B7BE2F0679CF885;
// UnityEngine.IntervalTreeNode[]
struct IntervalTreeNodeU5BU5D_tEBF5123303D6D14009F82236C0EB8BCF59462E5D;
// UnityEngine.IntervalTree`1/Entry<System.Object>[]
struct EntryU5BU5D_t65800475AEF6F1C8D5DB03D0DC1E202A32A72FC0;
// UnityEngine.IntervalTree`1<System.Object>
struct IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Playables.IPlayableBehaviour
struct IPlayableBehaviour_t32311BCB9F89BA86E1E396B39B28E334722F4A8F;
// UnityEngine.Rendering.PostProcessing.BoolParameter
struct BoolParameter_tEBE5D980C8D9609041E3D8D90F2CF2D92F62B0AE;
// UnityEngine.Rendering.PostProcessing.ParameterOverride
struct ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>
struct ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>
struct ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32Enum>
struct ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>
struct ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>
struct ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>
struct ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>
struct ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>
struct ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0;
// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>
struct ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F;
// UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer
struct PostProcessEffectRenderer_t4989C38AAABA92A01D597B3B6F25E8BDB63C7A2F;
// UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<System.Object>
struct PostProcessEffectRenderer_1_tF66E329F997B6E2EE53BE40C5CA9541F9D948461;
// UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings
struct PostProcessEffectSettings_tF399FB819B12B3398DDDEF1AAA1FB0685C524042;
// UnityEngine.Rendering.PostProcessing.RuntimeUtilities/<GetAllSceneObjects>d__79`1<System.Object>
struct U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893;
// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139;
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5;
// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenCallback
struct ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0;
// UnityEngine.UI.CoroutineTween.FloatTween/FloatTweenCallback
struct FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502;
// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>
struct U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07;
// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>
struct U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>
struct ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>
struct ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39;
// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;

extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* ICloneable_tB0EF2757D90DF969033D641822566814815EB134_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
extern RuntimeClass* IExposedPropertyTable_tBA6A5A41F6283C34744CA6EE8B7BE2F0679CF885_il2cpp_TypeInfo_var;
extern RuntimeClass* IInterval_tCD6A4E1393CEA83D7B3F7441687D838BFEE52842_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var;
extern RuntimeClass* InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F_il2cpp_TypeInfo_var;
extern RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
extern RuntimeClass* NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var;
extern RuntimeClass* Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663_il2cpp_TypeInfo_var;
extern RuntimeClass* Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral03610397B10FD1D4F9813C1618E587023F172685;
extern String_t* _stringLiteral04231B44477132B3DBEFE7768A921AE5A13A00FC;
extern String_t* _stringLiteral6E7F1D4313DB18F6DB79C6CEABD99B7C7F59D3FB;
extern String_t* _stringLiteralA413973124713A2B7B3570CE8D97C7151C8628A9;
extern String_t* _stringLiteralDFADDFA065E9D92CFE8B8F06444DD5652DFC1D58;
extern const RuntimeMethod* IndexedSet_1_GetEnumerator_mF4C9F11991CEDD2323438C82F6EA51984A818B86_RuntimeMethod_var;
extern const RuntimeMethod* IndexedSet_1_Insert_m81066D7E0A93E43F2CA764C332EA1D424D2A5BBB_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2A39909C67ABA245ED6CA56451E7339AC57FFF3E_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_mDB6E12D0FAE6E9856BB29FA6A7622969D36E9C3B_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m08B137C702A072664AD450924B16E03D0BA74EBC_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_mCD2BB6E243437934958FCC95EC7548AE1C75A05B_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m0DF586D5994204FCD3FA15694B29C72CD60B0DC5_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Capacity_m645868CE9C7BABBF251436FC092CDA20FBCE793B_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Item_mF9887A59F0C3EADF8AFB206F77CDA7023E5ECCE0_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Dequeue_m4255117298948764AA48104A50476CB3B1792460_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Enqueue_m0AE12FFA5BD870C099227186990EA21D30A519F8_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1__ctor_m1114B4B3A14520FABE413206AE14D21D88BEA3F8_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_get_Count_mF0A3AC2F450CF4B0839855F9AE17BD42FF745780_RuntimeMethod_var;
extern const RuntimeMethod* ScriptPlayable_1__ctor_mE48F064F653E626EF44A1629FC97AB40C3896648_RuntimeMethod_var;
extern const RuntimeMethod* U3CGetAllSceneObjectsU3Ed__79_1_System_Collections_IEnumerator_Reset_m1C2A1DCB706F27B08B11159413FA1E892C5349C3_RuntimeMethod_var;
extern const RuntimeMethod* U3CStartU3Ec__Iterator0_Reset_m439E251EE39AF2851415914D8F11867A65D9E63F_RuntimeMethod_var;
extern const RuntimeMethod* U3CStartU3Ec__Iterator0_Reset_m7703121C2007A9FF4EC664BC758BC00DF683B629_RuntimeMethod_var;
extern const RuntimeType* ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_0_0_0_var;
extern const uint32_t ExposedReference_1_Resolve_m6E6BDC354FC9A5BD0AE6F4B9806F69127C4B044E_MetadataUsageId;
extern const uint32_t IndexedSet_1_GetEnumerator_mF4C9F11991CEDD2323438C82F6EA51984A818B86_MetadataUsageId;
extern const uint32_t IndexedSet_1_Insert_m81066D7E0A93E43F2CA764C332EA1D424D2A5BBB_MetadataUsageId;
extern const uint32_t IntervalTree_1_Add_m8C031D356903E7BDDE63D2FD44DA8D7D777BD015_MetadataUsageId;
extern const uint32_t IntervalTree_1_IntersectsWith_mE08C7D3E7429BCFCF8FBD33F53D2BEDA5DF85D22_MetadataUsageId;
extern const uint32_t IntervalTree_1_Query_m8B2EEF36525510FB48594D9282138D367713B84C_MetadataUsageId;
extern const uint32_t IntervalTree_1_Rebuild_m397F3A143DAEFDD3DB57CF26E31E23A6023FAB19_MetadataUsageId;
extern const uint32_t IntervalTree_1_Rebuild_m7249EC2371A2FB513FD8CE089913EC9D963FEA20_MetadataUsageId;
extern const uint32_t IntervalTree_1_UpdateIntervals_mB8DC60E99312E1912F74EF6CD271793316614920_MetadataUsageId;
extern const uint32_t IntervalTree_1__ctor_m3324DCC055DD6BDF0F14AF2922111167BFEA53F4_MetadataUsageId;
extern const uint32_t ObjectPool_1_Release_mEF76D0678288FA4D4D8D81C57B3FEBF7AE87BD74_MetadataUsageId;
extern const uint32_t ScriptPlayable_1_CloneScriptInstanceFromEngineObject_m54480F28193A91630B99395F7D0D8E0BCEBF2686_MetadataUsageId;
extern const uint32_t ScriptPlayable_1_CloneScriptInstanceFromIClonable_mD834410040DDFC50A7BCA39928E7835D9ECCD5A5_MetadataUsageId;
extern const uint32_t ScriptPlayable_1_CloneScriptInstance_m1A625CA1BB813C13370613C09BE72E7B68836296_MetadataUsageId;
extern const uint32_t ScriptPlayable_1_CreateHandle_mF3A8AFE758710C0BCF9D74BF6BC7EA16D90C262A_MetadataUsageId;
extern const uint32_t ScriptPlayable_1_CreateScriptInstance_mD1FED4EC532337B9139DEECE32E0633FA7C5A180_MetadataUsageId;
extern const uint32_t ScriptPlayable_1_Equals_mEC9B601B576756D27895555A2402771172AED97F_MetadataUsageId;
extern const uint32_t ScriptPlayable_1__cctor_mBD14994A6A539555759436490FCDCF3217A000DA_MetadataUsageId;
extern const uint32_t ScriptPlayable_1__ctor_mE48F064F653E626EF44A1629FC97AB40C3896648_MetadataUsageId;
extern const uint32_t TweenRunner_1_StartTween_m8637A776CD96BAB0EDC8A8FA7479127E2BEC92C4_MetadataUsageId;
extern const uint32_t TweenRunner_1_StartTween_mE0CB96AF945209ABC26F2AA9899CB9794A64D92D_MetadataUsageId;
extern const uint32_t U3CGetAllSceneObjectsU3Ed__79_1_MoveNext_mD7DFF0365B734C2E877BC04AAD255067A4B0BD1F_MetadataUsageId;
extern const uint32_t U3CGetAllSceneObjectsU3Ed__79_1_System_Collections_IEnumerator_Reset_m1C2A1DCB706F27B08B11159413FA1E892C5349C3_MetadataUsageId;
extern const uint32_t U3CGetAllSceneObjectsU3Ed__79_1_U3CU3Em__Finally1_mD32F8554130A68103A6C7B99B92FD89D9F0CF03B_MetadataUsageId;
extern const uint32_t U3CStartU3Ec__Iterator0_MoveNext_m17A6A3B6131EFE960C4DA7784DDE816250347E99_MetadataUsageId;
extern const uint32_t U3CStartU3Ec__Iterator0_MoveNext_mB6BE65FBF43A13162E304F0F012BAA539F3D0C9F_MetadataUsageId;
extern const uint32_t U3CStartU3Ec__Iterator0_Reset_m439E251EE39AF2851415914D8F11867A65D9E63F_MetadataUsageId;
extern const uint32_t U3CStartU3Ec__Iterator0_Reset_m7703121C2007A9FF4EC664BC758BC00DF683B629_MetadataUsageId;
extern const uint32_t UnityEvent_1_FindMethod_Impl_mE864CF4CD0578B8D425C65CB10D95458D88678C8_MetadataUsageId;
extern const uint32_t UnityEvent_1_Invoke_m1E9071DF098AC25832A55B6928EBC3924CD4819A_MetadataUsageId;
extern const uint32_t UnityEvent_2_FindMethod_Impl_m03311CACE68316DC88479DFD2AF9AA0A88A615A3_MetadataUsageId;
extern const uint32_t UnityEvent_2_Invoke_mD905BCAB5C22629BF8F3B7CF869C02E3C31ED4F4_MetadataUsageId;
extern const uint32_t UnityEvent_3_FindMethod_Impl_mDEE1409662BC040478ADF5E0ABF95B8E381D32C4_MetadataUsageId;
extern const uint32_t UnityEvent_3_FindMethod_Impl_mF15A2B2F6BFE33613B6675FD2500E144CEF40FFA_MetadataUsageId;
extern const uint32_t UnityEvent_3_Invoke_m012D72FFB78BAC1A48A2B8C027CC180D96E963DA_MetadataUsageId;
extern const uint32_t UnityEvent_3_Invoke_mFBD41665482064D8F8909DB9828D3946C57EEA1E_MetadataUsageId;
extern const uint32_t UnityEvent_4_FindMethod_Impl_m74BBF94AAC7B6B09A4BC3E4A923CBFE4781D08A1_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef DICTIONARY_2_T81923CE2A312318AE13F58085CCF7FA8D879B77A_H
#define DICTIONARY_2_T81923CE2A312318AE13F58085CCF7FA8D879B77A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct  Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tEECFF3D52DBAFA05FAD1589D36F0A8EEF9E2670E * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___entries_1)); }
	inline EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___keys_7)); }
	inline KeyCollection_tEECFF3D52DBAFA05FAD1589D36F0A8EEF9E2670E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tEECFF3D52DBAFA05FAD1589D36F0A8EEF9E2670E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tEECFF3D52DBAFA05FAD1589D36F0A8EEF9E2670E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___values_8)); }
	inline ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T81923CE2A312318AE13F58085CCF7FA8D879B77A_H
#ifndef LIST_1_TE1526161A558A17A39A8B69D8EEF3801393B6226_H
#define LIST_1_TE1526161A558A17A39A8B69D8EEF3801393B6226_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____items_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TE1526161A558A17A39A8B69D8EEF3801393B6226_H
#ifndef LIST_1_T05CC3C859AB5E6024394EF9A42E3E696628CA02D_H
#define LIST_1_T05CC3C859AB5E6024394EF9A42E3E696628CA02D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T05CC3C859AB5E6024394EF9A42E3E696628CA02D_H
#ifndef LIST_1_T749ADA5233D9B421293A000DCB83608A24C3D5D5_H
#define LIST_1_T749ADA5233D9B421293A000DCB83608A24C3D5D5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Color32>
struct  List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5, ____items_1)); }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* get__items_1() const { return ____items_1; }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5_StaticFields, ____emptyArray_5)); }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T749ADA5233D9B421293A000DCB83608A24C3D5D5_H
#ifndef LIST_1_TB6CB50ED979D7494123AC5ADF0C1C587142B5694_H
#define LIST_1_TB6CB50ED979D7494123AC5ADF0C1C587142B5694_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct  List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____items_1)); }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* get__items_1() const { return ____items_1; }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694_StaticFields, ____emptyArray_5)); }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TB6CB50ED979D7494123AC5ADF0C1C587142B5694_H
#ifndef LIST_1_TC8317187490E4FED230DE4FC55D5B0A43153AA3F_H
#define LIST_1_TC8317187490E4FED230DE4FC55D5B0A43153AA3F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.IntervalTreeNode>
struct  List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IntervalTreeNodeU5BU5D_tEBF5123303D6D14009F82236C0EB8BCF59462E5D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F, ____items_1)); }
	inline IntervalTreeNodeU5BU5D_tEBF5123303D6D14009F82236C0EB8BCF59462E5D* get__items_1() const { return ____items_1; }
	inline IntervalTreeNodeU5BU5D_tEBF5123303D6D14009F82236C0EB8BCF59462E5D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IntervalTreeNodeU5BU5D_tEBF5123303D6D14009F82236C0EB8BCF59462E5D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IntervalTreeNodeU5BU5D_tEBF5123303D6D14009F82236C0EB8BCF59462E5D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F_StaticFields, ____emptyArray_5)); }
	inline IntervalTreeNodeU5BU5D_tEBF5123303D6D14009F82236C0EB8BCF59462E5D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IntervalTreeNodeU5BU5D_tEBF5123303D6D14009F82236C0EB8BCF59462E5D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IntervalTreeNodeU5BU5D_tEBF5123303D6D14009F82236C0EB8BCF59462E5D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TC8317187490E4FED230DE4FC55D5B0A43153AA3F_H
#ifndef LIST_1_T4244A14D92E202B5A89AA072D92952ECBF5B8B1B_H
#define LIST_1_T4244A14D92E202B5A89AA072D92952ECBF5B8B1B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.IntervalTree`1_Entry<System.Object>>
struct  List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EntryU5BU5D_t65800475AEF6F1C8D5DB03D0DC1E202A32A72FC0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B, ____items_1)); }
	inline EntryU5BU5D_t65800475AEF6F1C8D5DB03D0DC1E202A32A72FC0* get__items_1() const { return ____items_1; }
	inline EntryU5BU5D_t65800475AEF6F1C8D5DB03D0DC1E202A32A72FC0** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EntryU5BU5D_t65800475AEF6F1C8D5DB03D0DC1E202A32A72FC0* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	EntryU5BU5D_t65800475AEF6F1C8D5DB03D0DC1E202A32A72FC0* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B_StaticFields, ____emptyArray_5)); }
	inline EntryU5BU5D_t65800475AEF6F1C8D5DB03D0DC1E202A32A72FC0* get__emptyArray_5() const { return ____emptyArray_5; }
	inline EntryU5BU5D_t65800475AEF6F1C8D5DB03D0DC1E202A32A72FC0** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(EntryU5BU5D_t65800475AEF6F1C8D5DB03D0DC1E202A32A72FC0* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4244A14D92E202B5A89AA072D92952ECBF5B8B1B_H
#ifndef LIST_1_T4CE16E1B496C9FE941554BB47727DFDD7C3D9554_H
#define LIST_1_T4CE16E1B496C9FE941554BB47727DFDD7C3D9554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct  List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554, ____items_1)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get__items_1() const { return ____items_1; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554_StaticFields, ____emptyArray_5)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4CE16E1B496C9FE941554BB47727DFDD7C3D9554_H
#ifndef LIST_1_T0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB_H
#define LIST_1_T0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct  List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____items_1)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get__items_1() const { return ____items_1; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB_StaticFields, ____emptyArray_5)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB_H
#ifndef LIST_1_TFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_H
#define LIST_1_TFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____items_1)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_H
#ifndef LIST_1_TFF4005B40E5BA433006DA11C56DB086B1E2FC955_H
#define LIST_1_TFF4005B40E5BA433006DA11C56DB086B1E2FC955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct  List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____items_1)); }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* get__items_1() const { return ____items_1; }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955_StaticFields, ____emptyArray_5)); }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TFF4005B40E5BA433006DA11C56DB086B1E2FC955_H
#ifndef QUEUE_1_T0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663_H
#define QUEUE_1_T0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<UnityEngine.Transform>
struct  Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663, ____array_0)); }
	inline TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139* get__array_0() const { return ____array_0; }
	inline TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_1_T0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663_H
#ifndef STACK_1_T5697A763CE21E705BB0297FFBE9AFCB5F95C9163_H
#define STACK_1_T5697A763CE21E705BB0297FFBE9AFCB5F95C9163_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Stack`1<System.Object>
struct  Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163, ____array_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_1_T5697A763CE21E705BB0297FFBE9AFCB5F95C9163_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef BASEINVOKABLECALL_TE686BE3371ABBF6DB32C422D433199AD18316DF5_H
#define BASEINVOKABLECALL_TE686BE3371ABBF6DB32C422D433199AD18316DF5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.BaseInvokableCall
struct  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINVOKABLECALL_TE686BE3371ABBF6DB32C422D433199AD18316DF5_H
#ifndef UNITYEVENTBASE_T6E0F7823762EE94BB8489B5AE41C7802A266D3D5_H
#define UNITYEVENTBASE_T6E0F7823762EE94BB8489B5AE41C7802A266D3D5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T6E0F7823762EE94BB8489B5AE41C7802A266D3D5_H
#ifndef INTERVALTREE_1_TC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81_H
#define INTERVALTREE_1_TC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.IntervalTree`1<System.Object>
struct  IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.IntervalTree`1_Entry<T>> UnityEngine.IntervalTree`1::m_Entries
	List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B * ___m_Entries_3;
	// System.Collections.Generic.List`1<UnityEngine.IntervalTreeNode> UnityEngine.IntervalTree`1::m_Nodes
	List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F * ___m_Nodes_4;
	// System.Boolean UnityEngine.IntervalTree`1::<dirty>k__BackingField
	bool ___U3CdirtyU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_m_Entries_3() { return static_cast<int32_t>(offsetof(IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81, ___m_Entries_3)); }
	inline List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B * get_m_Entries_3() const { return ___m_Entries_3; }
	inline List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B ** get_address_of_m_Entries_3() { return &___m_Entries_3; }
	inline void set_m_Entries_3(List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B * value)
	{
		___m_Entries_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Entries_3), value);
	}

	inline static int32_t get_offset_of_m_Nodes_4() { return static_cast<int32_t>(offsetof(IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81, ___m_Nodes_4)); }
	inline List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F * get_m_Nodes_4() const { return ___m_Nodes_4; }
	inline List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F ** get_address_of_m_Nodes_4() { return &___m_Nodes_4; }
	inline void set_m_Nodes_4(List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F * value)
	{
		___m_Nodes_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Nodes_4), value);
	}

	inline static int32_t get_offset_of_U3CdirtyU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81, ___U3CdirtyU3Ek__BackingField_5)); }
	inline bool get_U3CdirtyU3Ek__BackingField_5() const { return ___U3CdirtyU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdirtyU3Ek__BackingField_5() { return &___U3CdirtyU3Ek__BackingField_5; }
	inline void set_U3CdirtyU3Ek__BackingField_5(bool value)
	{
		___U3CdirtyU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERVALTREE_1_TC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81_H
#ifndef PARAMETEROVERRIDE_T2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C_H
#define PARAMETEROVERRIDE_T2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ParameterOverride
struct  ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Rendering.PostProcessing.ParameterOverride::overrideState
	bool ___overrideState_0;

public:
	inline static int32_t get_offset_of_overrideState_0() { return static_cast<int32_t>(offsetof(ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C, ___overrideState_0)); }
	inline bool get_overrideState_0() const { return ___overrideState_0; }
	inline bool* get_address_of_overrideState_0() { return &___overrideState_0; }
	inline void set_overrideState_0(bool value)
	{
		___overrideState_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEROVERRIDE_T2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C_H
#ifndef POSTPROCESSEFFECTRENDERER_T4989C38AAABA92A01D597B3B6F25E8BDB63C7A2F_H
#define POSTPROCESSEFFECTRENDERER_T4989C38AAABA92A01D597B3B6F25E8BDB63C7A2F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer
struct  PostProcessEffectRenderer_t4989C38AAABA92A01D597B3B6F25E8BDB63C7A2F  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer::m_ResetHistory
	bool ___m_ResetHistory_0;

public:
	inline static int32_t get_offset_of_m_ResetHistory_0() { return static_cast<int32_t>(offsetof(PostProcessEffectRenderer_t4989C38AAABA92A01D597B3B6F25E8BDB63C7A2F, ___m_ResetHistory_0)); }
	inline bool get_m_ResetHistory_0() const { return ___m_ResetHistory_0; }
	inline bool* get_address_of_m_ResetHistory_0() { return &___m_ResetHistory_0; }
	inline void set_m_ResetHistory_0(bool value)
	{
		___m_ResetHistory_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSEFFECTRENDERER_T4989C38AAABA92A01D597B3B6F25E8BDB63C7A2F_H
#ifndef U3CGETALLSCENEOBJECTSU3ED__79_1_T8D3D860F6E4735B97CB68958A32FC432E9CE1893_H
#define U3CGETALLSCENEOBJECTSU3ED__79_1_T8D3D860F6E4735B97CB68958A32FC432E9CE1893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1<System.Object>
struct  U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// T UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.Queue`1<UnityEngine.Transform> UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1::<queue>5__2
	Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 * ___U3CqueueU3E5__2_3;
	// UnityEngine.GameObject[] UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1::<>7__wrap2
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___U3CU3E7__wrap2_4;
	// System.Int32 UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1::<>7__wrap3
	int32_t ___U3CU3E7__wrap3_5;
	// System.Collections.IEnumerator UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1::<>7__wrap4
	RuntimeObject* ___U3CU3E7__wrap4_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CqueueU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893, ___U3CqueueU3E5__2_3)); }
	inline Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 * get_U3CqueueU3E5__2_3() const { return ___U3CqueueU3E5__2_3; }
	inline Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 ** get_address_of_U3CqueueU3E5__2_3() { return &___U3CqueueU3E5__2_3; }
	inline void set_U3CqueueU3E5__2_3(Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 * value)
	{
		___U3CqueueU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CqueueU3E5__2_3), value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_4() { return static_cast<int32_t>(offsetof(U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893, ___U3CU3E7__wrap2_4)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_U3CU3E7__wrap2_4() const { return ___U3CU3E7__wrap2_4; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_U3CU3E7__wrap2_4() { return &___U3CU3E7__wrap2_4; }
	inline void set_U3CU3E7__wrap2_4(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___U3CU3E7__wrap2_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E7__wrap2_4), value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap3_5() { return static_cast<int32_t>(offsetof(U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893, ___U3CU3E7__wrap3_5)); }
	inline int32_t get_U3CU3E7__wrap3_5() const { return ___U3CU3E7__wrap3_5; }
	inline int32_t* get_address_of_U3CU3E7__wrap3_5() { return &___U3CU3E7__wrap3_5; }
	inline void set_U3CU3E7__wrap3_5(int32_t value)
	{
		___U3CU3E7__wrap3_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap4_6() { return static_cast<int32_t>(offsetof(U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893, ___U3CU3E7__wrap4_6)); }
	inline RuntimeObject* get_U3CU3E7__wrap4_6() const { return ___U3CU3E7__wrap4_6; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap4_6() { return &___U3CU3E7__wrap4_6; }
	inline void set_U3CU3E7__wrap4_6(RuntimeObject* value)
	{
		___U3CU3E7__wrap4_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E7__wrap4_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETALLSCENEOBJECTSU3ED__79_1_T8D3D860F6E4735B97CB68958A32FC432E9CE1893_H
#ifndef INDEXEDSET_1_T2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5_H
#define INDEXEDSET_1_T2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct  IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.UI.Collections.IndexedSet`1::m_List
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___m_List_0;
	// System.Collections.Generic.Dictionary`2<T,System.Int32> UnityEngine.UI.Collections.IndexedSet`1::m_Dictionary
	Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * ___m_Dictionary_1;

public:
	inline static int32_t get_offset_of_m_List_0() { return static_cast<int32_t>(offsetof(IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5, ___m_List_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_m_List_0() const { return ___m_List_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_m_List_0() { return &___m_List_0; }
	inline void set_m_List_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___m_List_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_List_0), value);
	}

	inline static int32_t get_offset_of_m_Dictionary_1() { return static_cast<int32_t>(offsetof(IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5, ___m_Dictionary_1)); }
	inline Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * get_m_Dictionary_1() const { return ___m_Dictionary_1; }
	inline Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A ** get_address_of_m_Dictionary_1() { return &___m_Dictionary_1; }
	inline void set_m_Dictionary_1(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * value)
	{
		___m_Dictionary_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Dictionary_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXEDSET_1_T2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5_H
#ifndef TWEENRUNNER_1_T56CEB168ADE3739A1BDDBF258FDC759DF8927172_H
#define TWEENRUNNER_1_T56CEB168ADE3739A1BDDBF258FDC759DF8927172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct  TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172  : public RuntimeObject
{
public:
	// UnityEngine.MonoBehaviour UnityEngine.UI.CoroutineTween.TweenRunner`1::m_CoroutineContainer
	MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * ___m_CoroutineContainer_0;
	// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1::m_Tween
	RuntimeObject* ___m_Tween_1;

public:
	inline static int32_t get_offset_of_m_CoroutineContainer_0() { return static_cast<int32_t>(offsetof(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172, ___m_CoroutineContainer_0)); }
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * get_m_CoroutineContainer_0() const { return ___m_CoroutineContainer_0; }
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 ** get_address_of_m_CoroutineContainer_0() { return &___m_CoroutineContainer_0; }
	inline void set_m_CoroutineContainer_0(MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * value)
	{
		___m_CoroutineContainer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_CoroutineContainer_0), value);
	}

	inline static int32_t get_offset_of_m_Tween_1() { return static_cast<int32_t>(offsetof(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172, ___m_Tween_1)); }
	inline RuntimeObject* get_m_Tween_1() const { return ___m_Tween_1; }
	inline RuntimeObject** get_address_of_m_Tween_1() { return &___m_Tween_1; }
	inline void set_m_Tween_1(RuntimeObject* value)
	{
		___m_Tween_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Tween_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEENRUNNER_1_T56CEB168ADE3739A1BDDBF258FDC759DF8927172_H
#ifndef TWEENRUNNER_1_TA7C92F52BF30E9A20EDA2DD956E11A1493D098EF_H
#define TWEENRUNNER_1_TA7C92F52BF30E9A20EDA2DD956E11A1493D098EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct  TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF  : public RuntimeObject
{
public:
	// UnityEngine.MonoBehaviour UnityEngine.UI.CoroutineTween.TweenRunner`1::m_CoroutineContainer
	MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * ___m_CoroutineContainer_0;
	// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1::m_Tween
	RuntimeObject* ___m_Tween_1;

public:
	inline static int32_t get_offset_of_m_CoroutineContainer_0() { return static_cast<int32_t>(offsetof(TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF, ___m_CoroutineContainer_0)); }
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * get_m_CoroutineContainer_0() const { return ___m_CoroutineContainer_0; }
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 ** get_address_of_m_CoroutineContainer_0() { return &___m_CoroutineContainer_0; }
	inline void set_m_CoroutineContainer_0(MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * value)
	{
		___m_CoroutineContainer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_CoroutineContainer_0), value);
	}

	inline static int32_t get_offset_of_m_Tween_1() { return static_cast<int32_t>(offsetof(TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF, ___m_Tween_1)); }
	inline RuntimeObject* get_m_Tween_1() const { return ___m_Tween_1; }
	inline RuntimeObject** get_address_of_m_Tween_1() { return &___m_Tween_1; }
	inline void set_m_Tween_1(RuntimeObject* value)
	{
		___m_Tween_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Tween_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEENRUNNER_1_TA7C92F52BF30E9A20EDA2DD956E11A1493D098EF_H
#ifndef LISTPOOL_1_TFA23B363858EAC800B614A18D05C359F72028407_H
#define LISTPOOL_1_TFA23B363858EAC800B614A18D05C359F72028407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ListPool`1<System.Int32>
struct  ListPool_1_tFA23B363858EAC800B614A18D05C359F72028407  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tFA23B363858EAC800B614A18D05C359F72028407_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mgU24cache0
	UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tFA23B363858EAC800B614A18D05C359F72028407_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_ListPool_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_tFA23B363858EAC800B614A18D05C359F72028407_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTPOOL_1_TFA23B363858EAC800B614A18D05C359F72028407_H
#ifndef LISTPOOL_1_T66B0CA6885E680896C9747F9C0E28458D59743BE_H
#define LISTPOOL_1_T66B0CA6885E680896C9747F9C0E28458D59743BE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ListPool`1<System.Object>
struct  ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mgU24cache0
	UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_ListPool_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTPOOL_1_T66B0CA6885E680896C9747F9C0E28458D59743BE_H
#ifndef LISTPOOL_1_TBA324F10FC7E73FB9F71457FFE143CD03160D463_H
#define LISTPOOL_1_TBA324F10FC7E73FB9F71457FFE143CD03160D463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ListPool`1<UnityEngine.Color32>
struct  ListPool_1_tBA324F10FC7E73FB9F71457FFE143CD03160D463  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tBA324F10FC7E73FB9F71457FFE143CD03160D463_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mgU24cache0
	UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tBA324F10FC7E73FB9F71457FFE143CD03160D463_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_ListPool_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_tBA324F10FC7E73FB9F71457FFE143CD03160D463_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTPOOL_1_TBA324F10FC7E73FB9F71457FFE143CD03160D463_H
#ifndef LISTPOOL_1_TAFD0E4E019381064EBBF5E8710B0F1E0B85EBB56_H
#define LISTPOOL_1_TAFD0E4E019381064EBBF5E8710B0F1E0B85EBB56_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>
struct  ListPool_1_tAFD0E4E019381064EBBF5E8710B0F1E0B85EBB56  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tAFD0E4E019381064EBBF5E8710B0F1E0B85EBB56_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mgU24cache0
	UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tAFD0E4E019381064EBBF5E8710B0F1E0B85EBB56_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_ListPool_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_tAFD0E4E019381064EBBF5E8710B0F1E0B85EBB56_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTPOOL_1_TAFD0E4E019381064EBBF5E8710B0F1E0B85EBB56_H
#ifndef LISTPOOL_1_TAB2044BEC36628D346141AEA4743A824A6FB688C_H
#define LISTPOOL_1_TAB2044BEC36628D346141AEA4743A824A6FB688C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ListPool`1<UnityEngine.Vector2>
struct  ListPool_1_tAB2044BEC36628D346141AEA4743A824A6FB688C  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tAB2044BEC36628D346141AEA4743A824A6FB688C_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mgU24cache0
	UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tAB2044BEC36628D346141AEA4743A824A6FB688C_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_ListPool_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_tAB2044BEC36628D346141AEA4743A824A6FB688C_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTPOOL_1_TAB2044BEC36628D346141AEA4743A824A6FB688C_H
#ifndef LISTPOOL_1_TC0119DB1C2EC9C29F424EC953509E2CDC3995059_H
#define LISTPOOL_1_TC0119DB1C2EC9C29F424EC953509E2CDC3995059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ListPool`1<UnityEngine.Vector3>
struct  ListPool_1_tC0119DB1C2EC9C29F424EC953509E2CDC3995059  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tC0119DB1C2EC9C29F424EC953509E2CDC3995059_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mgU24cache0
	UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tC0119DB1C2EC9C29F424EC953509E2CDC3995059_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_ListPool_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_tC0119DB1C2EC9C29F424EC953509E2CDC3995059_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTPOOL_1_TC0119DB1C2EC9C29F424EC953509E2CDC3995059_H
#ifndef LISTPOOL_1_TD0E00B3B8CFB855678B750B02E1ACEB57D4FC67A_H
#define LISTPOOL_1_TD0E00B3B8CFB855678B750B02E1ACEB57D4FC67A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ListPool`1<UnityEngine.Vector4>
struct  ListPool_1_tD0E00B3B8CFB855678B750B02E1ACEB57D4FC67A  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tD0E00B3B8CFB855678B750B02E1ACEB57D4FC67A_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mgU24cache0
	UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tD0E00B3B8CFB855678B750B02E1ACEB57D4FC67A_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_ListPool_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_tD0E00B3B8CFB855678B750B02E1ACEB57D4FC67A_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTPOOL_1_TD0E00B3B8CFB855678B750B02E1ACEB57D4FC67A_H
#ifndef OBJECTPOOL_1_TC08E18CA4686E07104774795FF479D68B6B2889A_H
#define OBJECTPOOL_1_TC08E18CA4686E07104774795FF479D68B6B2889A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>
struct  ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t8E8DE8B40F82D27FFD37A645E4DE60FF495EAE00 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A, ___m_Stack_0)); }
	inline Stack_1_t8E8DE8B40F82D27FFD37A645E4DE60FF495EAE00 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t8E8DE8B40F82D27FFD37A645E4DE60FF495EAE00 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t8E8DE8B40F82D27FFD37A645E4DE60FF495EAE00 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A, ___m_ActionOnGet_1)); }
	inline UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_TC08E18CA4686E07104774795FF479D68B6B2889A_H
#ifndef OBJECTPOOL_1_TDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B_H
#define OBJECTPOOL_1_TDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>
struct  ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t83EEA6C9C9B43999F0FB28B378D20F56711A9DB7 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B, ___m_Stack_0)); }
	inline Stack_1_t83EEA6C9C9B43999F0FB28B378D20F56711A9DB7 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t83EEA6C9C9B43999F0FB28B378D20F56711A9DB7 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t83EEA6C9C9B43999F0FB28B378D20F56711A9DB7 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_TDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B_H
#ifndef OBJECTPOOL_1_T6E42C9408E003E775EC7139A3F1EFC1346440D07_H
#define OBJECTPOOL_1_T6E42C9408E003E775EC7139A3F1EFC1346440D07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct  ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_tA8954C7914CA3BFAB547D0F09691E26AFB6138A3 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07, ___m_Stack_0)); }
	inline Stack_1_tA8954C7914CA3BFAB547D0F09691E26AFB6138A3 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_tA8954C7914CA3BFAB547D0F09691E26AFB6138A3 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_tA8954C7914CA3BFAB547D0F09691E26AFB6138A3 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_T6E42C9408E003E775EC7139A3F1EFC1346440D07_H
#ifndef OBJECTPOOL_1_TB641A4FECBF1E01BBA0C252F01EDE98D41033CF5_H
#define OBJECTPOOL_1_TB641A4FECBF1E01BBA0C252F01EDE98D41033CF5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct  ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t24347DA243AA3515E9AE6C68F02B953993FF98D8 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5, ___m_Stack_0)); }
	inline Stack_1_t24347DA243AA3515E9AE6C68F02B953993FF98D8 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t24347DA243AA3515E9AE6C68F02B953993FF98D8 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t24347DA243AA3515E9AE6C68F02B953993FF98D8 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_TB641A4FECBF1E01BBA0C252F01EDE98D41033CF5_H
#ifndef OBJECTPOOL_1_T77D90EC466D5DC3CD8703898D0D3206B7D320D49_H
#define OBJECTPOOL_1_T77D90EC466D5DC3CD8703898D0D3206B7D320D49_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct  ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_tE4D0BA5034D7B700F0C2C183AC42BD2C969E4A6C * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49, ___m_Stack_0)); }
	inline Stack_1_tE4D0BA5034D7B700F0C2C183AC42BD2C969E4A6C * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_tE4D0BA5034D7B700F0C2C183AC42BD2C969E4A6C ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_tE4D0BA5034D7B700F0C2C183AC42BD2C969E4A6C * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_T77D90EC466D5DC3CD8703898D0D3206B7D320D49_H
#ifndef OBJECTPOOL_1_T9CC17CF511664D2F103A4C4F73C9BD8820B88DF2_H
#define OBJECTPOOL_1_T9CC17CF511664D2F103A4C4F73C9BD8820B88DF2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct  ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_tA30706EF9E94D43BFD43FE4AE0AB0499A9A1682B * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2, ___m_Stack_0)); }
	inline Stack_1_tA30706EF9E94D43BFD43FE4AE0AB0499A9A1682B * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_tA30706EF9E94D43BFD43FE4AE0AB0499A9A1682B ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_tA30706EF9E94D43BFD43FE4AE0AB0499A9A1682B * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_T9CC17CF511664D2F103A4C4F73C9BD8820B88DF2_H
#ifndef OBJECTPOOL_1_T89359398AF2898F35015A1938357AD5AC70B2C39_H
#define OBJECTPOOL_1_T89359398AF2898F35015A1938357AD5AC70B2C39_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct  ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_tAB502A0341E85CB581B7AF26F8E45C60127741F9 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39, ___m_Stack_0)); }
	inline Stack_1_tAB502A0341E85CB581B7AF26F8E45C60127741F9 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_tAB502A0341E85CB581B7AF26F8E45C60127741F9 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_tAB502A0341E85CB581B7AF26F8E45C60127741F9 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_T89359398AF2898F35015A1938357AD5AC70B2C39_H
#ifndef OBJECTPOOL_1_T642A3D701C6162F913D9252AB3E5BEB96161F6BD_H
#define OBJECTPOOL_1_T642A3D701C6162F913D9252AB3E5BEB96161F6BD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Object>
struct  ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD, ___m_Stack_0)); }
	inline Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_T642A3D701C6162F913D9252AB3E5BEB96161F6BD_H
#ifndef YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#define YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#define INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#define UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#define COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifndef INVOKABLECALL_T4195709D9C5DF20B7FC3986828A7612C9C28B0FC_H
#define INVOKABLECALL_T4195709D9C5DF20B7FC3986828A7612C9C28B0FC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall
struct  InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC, ___Delegate_0)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_T4195709D9C5DF20B7FC3986828A7612C9C28B0FC_H
#ifndef INVOKABLECALL_1_T470687C56312E855046B6CC5CDC84075DFEB954E_H
#define INVOKABLECALL_1_T470687C56312E855046B6CC5CDC84075DFEB954E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>
struct  InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E, ___Delegate_0)); }
	inline UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_1_T470687C56312E855046B6CC5CDC84075DFEB954E_H
#ifndef INVOKABLECALL_2_T92DAC0F2FB25BD6576E876379F30AD0C93C4E42E_H
#define INVOKABLECALL_2_T92DAC0F2FB25BD6576E876379F30AD0C93C4E42E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct  InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`2<T1,T2> UnityEngine.Events.InvokableCall`2::Delegate
	UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E, ___Delegate_0)); }
	inline UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_2_T92DAC0F2FB25BD6576E876379F30AD0C93C4E42E_H
#ifndef INVOKABLECALL_3_T6A8BFB842DE22C189B46EBAB57685EB9778BE9ED_H
#define INVOKABLECALL_3_T6A8BFB842DE22C189B46EBAB57685EB9778BE9ED_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`3<System.Object,System.Int32,System.Int32>
struct  InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`3<T1,T2,T3> UnityEngine.Events.InvokableCall`3::Delegate
	UnityAction_3_t1FF48E6A020CC297A52A774322E1ABAFB7F989F7 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED, ___Delegate_0)); }
	inline UnityAction_3_t1FF48E6A020CC297A52A774322E1ABAFB7F989F7 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_3_t1FF48E6A020CC297A52A774322E1ABAFB7F989F7 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_3_t1FF48E6A020CC297A52A774322E1ABAFB7F989F7 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_3_T6A8BFB842DE22C189B46EBAB57685EB9778BE9ED_H
#ifndef INVOKABLECALL_3_T4C86EE6D323407D93E34FFFC787D64FE62C5973D_H
#define INVOKABLECALL_3_T4C86EE6D323407D93E34FFFC787D64FE62C5973D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct  InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`3<T1,T2,T3> UnityEngine.Events.InvokableCall`3::Delegate
	UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D, ___Delegate_0)); }
	inline UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_3_T4C86EE6D323407D93E34FFFC787D64FE62C5973D_H
#ifndef INVOKABLECALL_4_T72FB1137599CE871685340E96EFDD317DB4831E6_H
#define INVOKABLECALL_4_T72FB1137599CE871685340E96EFDD317DB4831E6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct  InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`4<T1,T2,T3,T4> UnityEngine.Events.InvokableCall`4::Delegate
	UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6, ___Delegate_0)); }
	inline UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_4_T72FB1137599CE871685340E96EFDD317DB4831E6_H
#ifndef UNITYEVENT_1_T88E036FD5956DB491BCC160FA57EF4F9584042B9_H
#define UNITYEVENT_1_T88E036FD5956DB491BCC160FA57EF4F9584042B9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct  UnityEvent_1_t88E036FD5956DB491BCC160FA57EF4F9584042B9  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t88E036FD5956DB491BCC160FA57EF4F9584042B9, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T88E036FD5956DB491BCC160FA57EF4F9584042B9_H
#ifndef UNITYEVENT_2_T1324E90D5AF00DA0F61802033E51716D0D9CBED1_H
#define UNITYEVENT_2_T1324E90D5AF00DA0F61802033E51716D0D9CBED1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct  UnityEvent_2_t1324E90D5AF00DA0F61802033E51716D0D9CBED1  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_2_t1324E90D5AF00DA0F61802033E51716D0D9CBED1, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_2_T1324E90D5AF00DA0F61802033E51716D0D9CBED1_H
#ifndef UNITYEVENT_3_T2806FFBD49F1501D6C532F2520EFAB143233B6D9_H
#define UNITYEVENT_3_T2806FFBD49F1501D6C532F2520EFAB143233B6D9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>
struct  UnityEvent_3_t2806FFBD49F1501D6C532F2520EFAB143233B6D9  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_3_t2806FFBD49F1501D6C532F2520EFAB143233B6D9, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_3_T2806FFBD49F1501D6C532F2520EFAB143233B6D9_H
#ifndef UNITYEVENT_3_T695DB93DCFCA35084D787B62352792D5C4F564C9_H
#define UNITYEVENT_3_T695DB93DCFCA35084D787B62352792D5C4F564C9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct  UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_3_T695DB93DCFCA35084D787B62352792D5C4F564C9_H
#ifndef UNITYEVENT_4_T2145BBDEE01F7E33D8060C904609F2FFD8845A0A_H
#define UNITYEVENT_4_T2145BBDEE01F7E33D8060C904609F2FFD8845A0A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct  UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`4::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_4_T2145BBDEE01F7E33D8060C904609F2FFD8845A0A_H
#ifndef INTERVALTREENODE_TD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69_H
#define INTERVALTREENODE_TD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.IntervalTreeNode
struct  IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69 
{
public:
	// System.Int64 UnityEngine.IntervalTreeNode::center
	int64_t ___center_0;
	// System.Int32 UnityEngine.IntervalTreeNode::first
	int32_t ___first_1;
	// System.Int32 UnityEngine.IntervalTreeNode::last
	int32_t ___last_2;
	// System.Int32 UnityEngine.IntervalTreeNode::left
	int32_t ___left_3;
	// System.Int32 UnityEngine.IntervalTreeNode::right
	int32_t ___right_4;

public:
	inline static int32_t get_offset_of_center_0() { return static_cast<int32_t>(offsetof(IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69, ___center_0)); }
	inline int64_t get_center_0() const { return ___center_0; }
	inline int64_t* get_address_of_center_0() { return &___center_0; }
	inline void set_center_0(int64_t value)
	{
		___center_0 = value;
	}

	inline static int32_t get_offset_of_first_1() { return static_cast<int32_t>(offsetof(IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69, ___first_1)); }
	inline int32_t get_first_1() const { return ___first_1; }
	inline int32_t* get_address_of_first_1() { return &___first_1; }
	inline void set_first_1(int32_t value)
	{
		___first_1 = value;
	}

	inline static int32_t get_offset_of_last_2() { return static_cast<int32_t>(offsetof(IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69, ___last_2)); }
	inline int32_t get_last_2() const { return ___last_2; }
	inline int32_t* get_address_of_last_2() { return &___last_2; }
	inline void set_last_2(int32_t value)
	{
		___last_2 = value;
	}

	inline static int32_t get_offset_of_left_3() { return static_cast<int32_t>(offsetof(IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69, ___left_3)); }
	inline int32_t get_left_3() const { return ___left_3; }
	inline int32_t* get_address_of_left_3() { return &___left_3; }
	inline void set_left_3(int32_t value)
	{
		___left_3 = value;
	}

	inline static int32_t get_offset_of_right_4() { return static_cast<int32_t>(offsetof(IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69, ___right_4)); }
	inline int32_t get_right_4() const { return ___right_4; }
	inline int32_t* get_address_of_right_4() { return &___right_4; }
	inline void set_right_4(int32_t value)
	{
		___right_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERVALTREENODE_TD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69_H
#ifndef ENTRY_TDE1E79E3477D59FEACC86F8EF572A582208860CF_H
#define ENTRY_TDE1E79E3477D59FEACC86F8EF572A582208860CF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.IntervalTree`1_Entry<System.Object>
struct  Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF 
{
public:
	// System.Int64 UnityEngine.IntervalTree`1_Entry::intervalStart
	int64_t ___intervalStart_0;
	// System.Int64 UnityEngine.IntervalTree`1_Entry::intervalEnd
	int64_t ___intervalEnd_1;
	// T UnityEngine.IntervalTree`1_Entry::item
	RuntimeObject * ___item_2;

public:
	inline static int32_t get_offset_of_intervalStart_0() { return static_cast<int32_t>(offsetof(Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF, ___intervalStart_0)); }
	inline int64_t get_intervalStart_0() const { return ___intervalStart_0; }
	inline int64_t* get_address_of_intervalStart_0() { return &___intervalStart_0; }
	inline void set_intervalStart_0(int64_t value)
	{
		___intervalStart_0 = value;
	}

	inline static int32_t get_offset_of_intervalEnd_1() { return static_cast<int32_t>(offsetof(Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF, ___intervalEnd_1)); }
	inline int64_t get_intervalEnd_1() const { return ___intervalEnd_1; }
	inline int64_t* get_address_of_intervalEnd_1() { return &___intervalEnd_1; }
	inline void set_intervalEnd_1(int64_t value)
	{
		___intervalEnd_1 = value;
	}

	inline static int32_t get_offset_of_item_2() { return static_cast<int32_t>(offsetof(Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF, ___item_2)); }
	inline RuntimeObject * get_item_2() const { return ___item_2; }
	inline RuntimeObject ** get_address_of_item_2() { return &___item_2; }
	inline void set_item_2(RuntimeObject * value)
	{
		___item_2 = value;
		Il2CppCodeGenWriteBarrier((&___item_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTRY_TDE1E79E3477D59FEACC86F8EF572A582208860CF_H
#ifndef PROPERTYNAME_T75EB843FEA2EC372093479A35C24364D2DF98529_H
#define PROPERTYNAME_T75EB843FEA2EC372093479A35C24364D2DF98529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyName
struct  PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 
{
public:
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYNAME_T75EB843FEA2EC372093479A35C24364D2DF98529_H
#ifndef PARAMETEROVERRIDE_1_TECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6_H
#define PARAMETEROVERRIDE_1_TECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>
struct  ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6  : public ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEROVERRIDE_1_TECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6_H
#ifndef PARAMETEROVERRIDE_1_TCA59D4139538E8FC2941AC309044DBF9FA1E0450_H
#define PARAMETEROVERRIDE_1_TCA59D4139538E8FC2941AC309044DBF9FA1E0450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>
struct  ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450  : public ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEROVERRIDE_1_TCA59D4139538E8FC2941AC309044DBF9FA1E0450_H
#ifndef PARAMETEROVERRIDE_1_T66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C_H
#define PARAMETEROVERRIDE_1_T66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>
struct  ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C  : public ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEROVERRIDE_1_T66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C_H
#ifndef PARAMETEROVERRIDE_1_T7307FE515ABA95AF185F2BA4860246F5FE87B4CE_H
#define PARAMETEROVERRIDE_1_T7307FE515ABA95AF185F2BA4860246F5FE87B4CE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>
struct  ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE  : public ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	float ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE, ___value_1)); }
	inline float get_value_1() const { return ___value_1; }
	inline float* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(float value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEROVERRIDE_1_T7307FE515ABA95AF185F2BA4860246F5FE87B4CE_H
#ifndef POSTPROCESSEFFECTRENDERER_1_TF66E329F997B6E2EE53BE40C5CA9541F9D948461_H
#define POSTPROCESSEFFECTRENDERER_1_TF66E329F997B6E2EE53BE40C5CA9541F9D948461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<System.Object>
struct  PostProcessEffectRenderer_1_tF66E329F997B6E2EE53BE40C5CA9541F9D948461  : public PostProcessEffectRenderer_t4989C38AAABA92A01D597B3B6F25E8BDB63C7A2F
{
public:
	// T UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1::<settings>k__BackingField
	RuntimeObject * ___U3CsettingsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CsettingsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessEffectRenderer_1_tF66E329F997B6E2EE53BE40C5CA9541F9D948461, ___U3CsettingsU3Ek__BackingField_1)); }
	inline RuntimeObject * get_U3CsettingsU3Ek__BackingField_1() const { return ___U3CsettingsU3Ek__BackingField_1; }
	inline RuntimeObject ** get_address_of_U3CsettingsU3Ek__BackingField_1() { return &___U3CsettingsU3Ek__BackingField_1; }
	inline void set_U3CsettingsU3Ek__BackingField_1(RuntimeObject * value)
	{
		___U3CsettingsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsettingsU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSEFFECTRENDERER_1_TF66E329F997B6E2EE53BE40C5CA9541F9D948461_H
#ifndef SCENE_T942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_H
#define SCENE_T942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_H
#ifndef FLOATTWEEN_TF6BB24C266F36BD80E20C91AED453F7CE516919A_H
#define FLOATTWEEN_TF6BB24C266F36BD80E20C91AED453F7CE516919A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CoroutineTween.FloatTween
struct  FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A 
{
public:
	// UnityEngine.UI.CoroutineTween.FloatTween_FloatTweenCallback UnityEngine.UI.CoroutineTween.FloatTween::m_Target
	FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * ___m_Target_0;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_StartValue
	float ___m_StartValue_1;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_TargetValue
	float ___m_TargetValue_2;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_Duration
	float ___m_Duration_3;
	// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_4;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_Target_0)); }
	inline FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * get_m_Target_0() const { return ___m_Target_0; }
	inline FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_StartValue_1() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_StartValue_1)); }
	inline float get_m_StartValue_1() const { return ___m_StartValue_1; }
	inline float* get_address_of_m_StartValue_1() { return &___m_StartValue_1; }
	inline void set_m_StartValue_1(float value)
	{
		___m_StartValue_1 = value;
	}

	inline static int32_t get_offset_of_m_TargetValue_2() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_TargetValue_2)); }
	inline float get_m_TargetValue_2() const { return ___m_TargetValue_2; }
	inline float* get_address_of_m_TargetValue_2() { return &___m_TargetValue_2; }
	inline void set_m_TargetValue_2(float value)
	{
		___m_TargetValue_2 = value;
	}

	inline static int32_t get_offset_of_m_Duration_3() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_Duration_3)); }
	inline float get_m_Duration_3() const { return ___m_Duration_3; }
	inline float* get_address_of_m_Duration_3() { return &___m_Duration_3; }
	inline void set_m_Duration_3(float value)
	{
		___m_Duration_3 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_4() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_IgnoreTimeScale_4)); }
	inline bool get_m_IgnoreTimeScale_4() const { return ___m_IgnoreTimeScale_4; }
	inline bool* get_address_of_m_IgnoreTimeScale_4() { return &___m_IgnoreTimeScale_4; }
	inline void set_m_IgnoreTimeScale_4(bool value)
	{
		___m_IgnoreTimeScale_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshaled_pinvoke
{
	FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};
// Native definition for COM marshalling of UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshaled_com
{
	FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};
#endif // FLOATTWEEN_TF6BB24C266F36BD80E20C91AED453F7CE516919A_H
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#define VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#define INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#ifndef INVALIDCASTEXCEPTION_T91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_H
#define INVALIDCASTEXCEPTION_T91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidCastException
struct  InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCASTEXCEPTION_T91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_H
#define NOTIMPLEMENTEDEXCEPTION_T8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_H
#ifndef NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#define NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifndef BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#define BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#define RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifndef COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#define COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#ifndef INTEGRATEDSUBSYSTEM_TF67A736CD38F3A64A40687C90024FA7326AF7D86_H
#define INTEGRATEDSUBSYSTEM_TF67A736CD38F3A64A40687C90024FA7326AF7D86_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.IntegratedSubsystem
struct  IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Experimental.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Experimental.ISubsystemDescriptor UnityEngine.Experimental.IntegratedSubsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_subsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86, ___m_subsystemDescriptor_1)); }
	inline RuntimeObject* get_m_subsystemDescriptor_1() const { return ___m_subsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_1() { return &___m_subsystemDescriptor_1; }
	inline void set_m_subsystemDescriptor_1(RuntimeObject* value)
	{
		___m_subsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_subsystemDescriptor_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.IntegratedSubsystem
struct IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.IntegratedSubsystem
struct IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};
#endif // INTEGRATEDSUBSYSTEM_TF67A736CD38F3A64A40687C90024FA7326AF7D86_H
#ifndef INTEGRATEDSUBSYSTEMDESCRIPTOR_TD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_H
#define INTEGRATEDSUBSYSTEMDESCRIPTOR_TD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.IntegratedSubsystemDescriptor
struct  IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Experimental.IntegratedSubsystemDescriptor::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Experimental.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // INTEGRATEDSUBSYSTEMDESCRIPTOR_TD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_H
#ifndef HIDEFLAGS_T30B57DC00548E963A569318C8F4A4123E7447E37_H
#define HIDEFLAGS_T30B57DC00548E963A569318C8F4A4123E7447E37_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideFlags
struct  HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIDEFLAGS_T30B57DC00548E963A569318C8F4A4123E7447E37_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef PLAYABLEGRAPH_TEC38BBCA59BDD496F75037F220984D41339AB8BA_H
#define PLAYABLEGRAPH_TEC38BBCA59BDD496F75037F220984D41339AB8BA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEGRAPH_TEC38BBCA59BDD496F75037F220984D41339AB8BA_H
#ifndef PLAYABLEHANDLE_T9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_H
#define PLAYABLEHANDLE_T9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields, ___m_Null_2)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Null_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_H
#ifndef PARAMETEROVERRIDE_1_T23F21A3C4BDF3D75D33F5E24B8462A2A7376387E_H
#define PARAMETEROVERRIDE_1_T23F21A3C4BDF3D75D33F5E24B8462A2A7376387E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>
struct  ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E  : public ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E, ___value_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_value_1() const { return ___value_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEROVERRIDE_1_T23F21A3C4BDF3D75D33F5E24B8462A2A7376387E_H
#ifndef PARAMETEROVERRIDE_1_TED4B89A13ADA28A3E8CFEDF351B518B2F91E1004_H
#define PARAMETEROVERRIDE_1_TED4B89A13ADA28A3E8CFEDF351B518B2F91E1004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>
struct  ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004  : public ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004, ___value_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_value_1() const { return ___value_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEROVERRIDE_1_TED4B89A13ADA28A3E8CFEDF351B518B2F91E1004_H
#ifndef PARAMETEROVERRIDE_1_T222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0_H
#define PARAMETEROVERRIDE_1_T222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>
struct  ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0  : public ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0, ___value_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_value_1() const { return ___value_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEROVERRIDE_1_T222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0_H
#ifndef PARAMETEROVERRIDE_1_TA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F_H
#define PARAMETEROVERRIDE_1_TA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>
struct  ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F  : public ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F, ___value_1)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_value_1() const { return ___value_1; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEROVERRIDE_1_TA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F_H
#ifndef COLORTWEENMODE_TDCE018D37330F576ACCD00D16CAF91AE55315F2F_H
#define COLORTWEENMODE_TDCE018D37330F576ACCD00D16CAF91AE55315F2F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CoroutineTween.ColorTween_ColorTweenMode
struct  ColorTweenMode_tDCE018D37330F576ACCD00D16CAF91AE55315F2F 
{
public:
	// System.Int32 UnityEngine.UI.CoroutineTween.ColorTween_ColorTweenMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorTweenMode_tDCE018D37330F576ACCD00D16CAF91AE55315F2F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORTWEENMODE_TDCE018D37330F576ACCD00D16CAF91AE55315F2F_H
#ifndef U3CSTARTU3EC__ITERATOR0_T468FE95258205EFB6F39EECD7F7D00F74B696286_H
#define U3CSTARTU3EC__ITERATOR0_T468FE95258205EFB6F39EECD7F7D00F74B696286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>
struct  U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286  : public RuntimeObject
{
public:
	// T UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0::tweenInfo
	FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  ___tweenInfo_0;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0::<elapsedTime>__0
	float ___U3CelapsedTimeU3E__0_1;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0::<percentage>__1
	float ___U3CpercentageU3E__1_2;
	// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0::U24current
	RuntimeObject * ___U24current_3;
	// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0::U24disposing
	bool ___U24disposing_4;
	// System.Int32 UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0::U24PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_tweenInfo_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286, ___tweenInfo_0)); }
	inline FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  get_tweenInfo_0() const { return ___tweenInfo_0; }
	inline FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * get_address_of_tweenInfo_0() { return &___tweenInfo_0; }
	inline void set_tweenInfo_0(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  value)
	{
		___tweenInfo_0 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E__0_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286, ___U3CelapsedTimeU3E__0_1)); }
	inline float get_U3CelapsedTimeU3E__0_1() const { return ___U3CelapsedTimeU3E__0_1; }
	inline float* get_address_of_U3CelapsedTimeU3E__0_1() { return &___U3CelapsedTimeU3E__0_1; }
	inline void set_U3CelapsedTimeU3E__0_1(float value)
	{
		___U3CelapsedTimeU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CpercentageU3E__1_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286, ___U3CpercentageU3E__1_2)); }
	inline float get_U3CpercentageU3E__1_2() const { return ___U3CpercentageU3E__1_2; }
	inline float* get_address_of_U3CpercentageU3E__1_2() { return &___U3CpercentageU3E__1_2; }
	inline void set_U3CpercentageU3E__1_2(float value)
	{
		___U3CpercentageU3E__1_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTU3EC__ITERATOR0_T468FE95258205EFB6F39EECD7F7D00F74B696286_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef INTEGRATEDSUBSYSTEMDESCRIPTOR_1_T7D1472A1BC79BD25D18737293171056B0B896957_H
#define INTEGRATEDSUBSYSTEMDESCRIPTOR_1_T7D1472A1BC79BD25D18737293171056B0B896957_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.IntegratedSubsystemDescriptor`1<System.Object>
struct  IntegratedSubsystemDescriptor_1_t7D1472A1BC79BD25D18737293171056B0B896957  : public IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_t280E64AA13234D7EA8FE261ECC22D549B3640EBA_marshaled_pinvoke_define
#define IntegratedSubsystemDescriptor_1_t280E64AA13234D7EA8FE261ECC22D549B3640EBA_marshaled_pinvoke_define
struct IntegratedSubsystemDescriptor_1_t280E64AA13234D7EA8FE261ECC22D549B3640EBA_marshaled_pinvoke : public IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_marshaled_pinvoke
{
};
#endif
// Native definition for COM marshalling of UnityEngine.Experimental.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_t280E64AA13234D7EA8FE261ECC22D549B3640EBA_marshaled_com_define
#define IntegratedSubsystemDescriptor_1_t280E64AA13234D7EA8FE261ECC22D549B3640EBA_marshaled_com_define
struct IntegratedSubsystemDescriptor_1_t280E64AA13234D7EA8FE261ECC22D549B3640EBA_marshaled_com : public IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_marshaled_com
{
};
#endif
#endif // INTEGRATEDSUBSYSTEMDESCRIPTOR_1_T7D1472A1BC79BD25D18737293171056B0B896957_H
#ifndef INTEGRATEDSUBSYSTEM_1_T73613F32CADA1C0AD6BA0A43275D73052DCD5495_H
#define INTEGRATEDSUBSYSTEM_1_T73613F32CADA1C0AD6BA0A43275D73052DCD5495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.IntegratedSubsystem`1<System.Object>
struct  IntegratedSubsystem_1_t73613F32CADA1C0AD6BA0A43275D73052DCD5495  : public IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTEGRATEDSUBSYSTEM_1_T73613F32CADA1C0AD6BA0A43275D73052DCD5495_H
#ifndef EXPOSEDREFERENCE_1_TDC3BDC41AE934F311BA4F87224A01EAF45F95F29_H
#define EXPOSEDREFERENCE_1_TDC3BDC41AE934F311BA4F87224A01EAF45F95F29_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ExposedReference`1<System.Object>
struct  ExposedReference_1_tDC3BDC41AE934F311BA4F87224A01EAF45F95F29 
{
public:
	// UnityEngine.PropertyName UnityEngine.ExposedReference`1::exposedName
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___exposedName_0;
	// UnityEngine.Object UnityEngine.ExposedReference`1::defaultValue
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___defaultValue_1;

public:
	inline static int32_t get_offset_of_exposedName_0() { return static_cast<int32_t>(offsetof(ExposedReference_1_tDC3BDC41AE934F311BA4F87224A01EAF45F95F29, ___exposedName_0)); }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  get_exposedName_0() const { return ___exposedName_0; }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * get_address_of_exposedName_0() { return &___exposedName_0; }
	inline void set_exposedName_0(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  value)
	{
		___exposedName_0 = value;
	}

	inline static int32_t get_offset_of_defaultValue_1() { return static_cast<int32_t>(offsetof(ExposedReference_1_tDC3BDC41AE934F311BA4F87224A01EAF45F95F29, ___defaultValue_1)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_defaultValue_1() const { return ___defaultValue_1; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_defaultValue_1() { return &___defaultValue_1; }
	inline void set_defaultValue_1(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___defaultValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___defaultValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ExposedReference`1
#ifndef ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_pinvoke_define
#define ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_pinvoke_define
struct ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_pinvoke
{
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___exposedName_0;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke ___defaultValue_1;
};
#endif
// Native definition for COM marshalling of UnityEngine.ExposedReference`1
#ifndef ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_com_define
#define ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_com_define
struct ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_com
{
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___exposedName_0;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com* ___defaultValue_1;
};
#endif
#endif // EXPOSEDREFERENCE_1_TDC3BDC41AE934F311BA4F87224A01EAF45F95F29_H
#ifndef GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#define GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifndef PLAYABLE_T4ABB910C374FCAB6B926DA4D34A85857A59950D0_H
#define PLAYABLE_T4ABB910C374FCAB6B926DA4D34A85857A59950D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.Playable
struct  Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLE_T4ABB910C374FCAB6B926DA4D34A85857A59950D0_H
#ifndef SCRIPTPLAYABLE_1_TEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C_H
#define SCRIPTPLAYABLE_1_TEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.ScriptPlayable`1<System.Object>
struct  ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C_StaticFields
{
public:
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C_StaticFields, ___m_NullPlayable_1)); }
	inline ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTPLAYABLE_1_TEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C_H
#ifndef PARAMETEROVERRIDE_1_T2DBC76B300810F8C7D698F79A7B01750F5E2BA56_H
#define PARAMETEROVERRIDE_1_T2DBC76B300810F8C7D698F79A7B01750F5E2BA56_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32Enum>
struct  ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56  : public ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C
{
public:
	// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEROVERRIDE_1_T2DBC76B300810F8C7D698F79A7B01750F5E2BA56_H
#ifndef SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#define SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifndef COLORTWEEN_T4CBBF5875FA391053DB62E98D8D9603040413228_H
#define COLORTWEEN_T4CBBF5875FA391053DB62E98D8D9603040413228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CoroutineTween.ColorTween
struct  ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 
{
public:
	// UnityEngine.UI.CoroutineTween.ColorTween_ColorTweenCallback UnityEngine.UI.CoroutineTween.ColorTween::m_Target
	ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * ___m_Target_0;
	// UnityEngine.Color UnityEngine.UI.CoroutineTween.ColorTween::m_StartColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_StartColor_1;
	// UnityEngine.Color UnityEngine.UI.CoroutineTween.ColorTween::m_TargetColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_TargetColor_2;
	// UnityEngine.UI.CoroutineTween.ColorTween_ColorTweenMode UnityEngine.UI.CoroutineTween.ColorTween::m_TweenMode
	int32_t ___m_TweenMode_3;
	// System.Single UnityEngine.UI.CoroutineTween.ColorTween::m_Duration
	float ___m_Duration_4;
	// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_5;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_Target_0)); }
	inline ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * get_m_Target_0() const { return ___m_Target_0; }
	inline ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_StartColor_1() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_StartColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_StartColor_1() const { return ___m_StartColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_StartColor_1() { return &___m_StartColor_1; }
	inline void set_m_StartColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_StartColor_1 = value;
	}

	inline static int32_t get_offset_of_m_TargetColor_2() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_TargetColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_TargetColor_2() const { return ___m_TargetColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_TargetColor_2() { return &___m_TargetColor_2; }
	inline void set_m_TargetColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_TargetColor_2 = value;
	}

	inline static int32_t get_offset_of_m_TweenMode_3() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_TweenMode_3)); }
	inline int32_t get_m_TweenMode_3() const { return ___m_TweenMode_3; }
	inline int32_t* get_address_of_m_TweenMode_3() { return &___m_TweenMode_3; }
	inline void set_m_TweenMode_3(int32_t value)
	{
		___m_TweenMode_3 = value;
	}

	inline static int32_t get_offset_of_m_Duration_4() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_Duration_4)); }
	inline float get_m_Duration_4() const { return ___m_Duration_4; }
	inline float* get_address_of_m_Duration_4() { return &___m_Duration_4; }
	inline void set_m_Duration_4(float value)
	{
		___m_Duration_4 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_5() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_IgnoreTimeScale_5)); }
	inline bool get_m_IgnoreTimeScale_5() const { return ___m_IgnoreTimeScale_5; }
	inline bool* get_address_of_m_IgnoreTimeScale_5() { return &___m_IgnoreTimeScale_5; }
	inline void set_m_IgnoreTimeScale_5(bool value)
	{
		___m_IgnoreTimeScale_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshaled_pinvoke
{
	ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * ___m_Target_0;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_StartColor_1;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
};
// Native definition for COM marshalling of UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshaled_com
{
	ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * ___m_Target_0;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_StartColor_1;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
};
#endif // COLORTWEEN_T4CBBF5875FA391053DB62E98D8D9603040413228_H
#ifndef COMPARISON_1_TD9DBDF7B2E4774B4D35E113A76D75828A24641F4_H
#define COMPARISON_1_TD9DBDF7B2E4774B4D35E113A76D75828A24641F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Comparison`1<System.Object>
struct  Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARISON_1_TD9DBDF7B2E4774B4D35E113A76D75828A24641F4_H
#ifndef PREDICATE_1_T4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979_H
#define PREDICATE_1_T4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<System.Object>
struct  Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef UNITYACTION_1_TA99D005A9C291926F1FC4F9D3A8FABD18D895689_H
#define UNITYACTION_1_TA99D005A9C291926F1FC4F9D3A8FABD18D895689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Int32>>
struct  UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_TA99D005A9C291926F1FC4F9D3A8FABD18D895689_H
#ifndef UNITYACTION_1_T8AD8F8E44992547CC00157160617BE8482809363_H
#define UNITYACTION_1_T8AD8F8E44992547CC00157160617BE8482809363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Object>>
struct  UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T8AD8F8E44992547CC00157160617BE8482809363_H
#ifndef UNITYACTION_1_T7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4_H
#define UNITYACTION_1_T7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct  UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4_H
#ifndef UNITYACTION_1_T7B2376CCD306AEB0D24B3479F62CE812058041D0_H
#define UNITYACTION_1_T7B2376CCD306AEB0D24B3479F62CE812058041D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct  UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T7B2376CCD306AEB0D24B3479F62CE812058041D0_H
#ifndef UNITYACTION_1_T5070210D9B8F86C2EDBB6772A8295FAD8FC32821_H
#define UNITYACTION_1_T5070210D9B8F86C2EDBB6772A8295FAD8FC32821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct  UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T5070210D9B8F86C2EDBB6772A8295FAD8FC32821_H
#ifndef UNITYACTION_1_T68BCED570CE215DF78AAA225E29C0959286C1A0E_H
#define UNITYACTION_1_T68BCED570CE215DF78AAA225E29C0959286C1A0E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct  UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T68BCED570CE215DF78AAA225E29C0959286C1A0E_H
#ifndef UNITYACTION_1_T3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB_H
#define UNITYACTION_1_T3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct  UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB_H
#ifndef UNITYACTION_1_T330F97880F37E23D6D0C6618DD77F28AC9EF8FA9_H
#define UNITYACTION_1_T330F97880F37E23D6D0C6618DD77F28AC9EF8FA9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Object>
struct  UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T330F97880F37E23D6D0C6618DD77F28AC9EF8FA9_H
#ifndef UNITYACTION_1_TC29A4BDE80E6622E5794F177E3DAA65BB4342B44_H
#define UNITYACTION_1_TC29A4BDE80E6622E5794F177E3DAA65BB4342B44_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct  UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_TC29A4BDE80E6622E5794F177E3DAA65BB4342B44_H
#ifndef POSTPROCESSEFFECTSETTINGS_TF399FB819B12B3398DDDEF1AAA1FB0685C524042_H
#define POSTPROCESSEFFECTSETTINGS_TF399FB819B12B3398DDDEF1AAA1FB0685C524042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings
struct  PostProcessEffectSettings_tF399FB819B12B3398DDDEF1AAA1FB0685C524042  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings::active
	bool ___active_4;
	// UnityEngine.Rendering.PostProcessing.BoolParameter UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings::enabled
	BoolParameter_tEBE5D980C8D9609041E3D8D90F2CF2D92F62B0AE * ___enabled_5;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rendering.PostProcessing.ParameterOverride> UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings::parameters
	ReadOnlyCollection_1_t27F043E8DE5EED8464F76863AEE4EBD68561389B * ___parameters_6;

public:
	inline static int32_t get_offset_of_active_4() { return static_cast<int32_t>(offsetof(PostProcessEffectSettings_tF399FB819B12B3398DDDEF1AAA1FB0685C524042, ___active_4)); }
	inline bool get_active_4() const { return ___active_4; }
	inline bool* get_address_of_active_4() { return &___active_4; }
	inline void set_active_4(bool value)
	{
		___active_4 = value;
	}

	inline static int32_t get_offset_of_enabled_5() { return static_cast<int32_t>(offsetof(PostProcessEffectSettings_tF399FB819B12B3398DDDEF1AAA1FB0685C524042, ___enabled_5)); }
	inline BoolParameter_tEBE5D980C8D9609041E3D8D90F2CF2D92F62B0AE * get_enabled_5() const { return ___enabled_5; }
	inline BoolParameter_tEBE5D980C8D9609041E3D8D90F2CF2D92F62B0AE ** get_address_of_enabled_5() { return &___enabled_5; }
	inline void set_enabled_5(BoolParameter_tEBE5D980C8D9609041E3D8D90F2CF2D92F62B0AE * value)
	{
		___enabled_5 = value;
		Il2CppCodeGenWriteBarrier((&___enabled_5), value);
	}

	inline static int32_t get_offset_of_parameters_6() { return static_cast<int32_t>(offsetof(PostProcessEffectSettings_tF399FB819B12B3398DDDEF1AAA1FB0685C524042, ___parameters_6)); }
	inline ReadOnlyCollection_1_t27F043E8DE5EED8464F76863AEE4EBD68561389B * get_parameters_6() const { return ___parameters_6; }
	inline ReadOnlyCollection_1_t27F043E8DE5EED8464F76863AEE4EBD68561389B ** get_address_of_parameters_6() { return &___parameters_6; }
	inline void set_parameters_6(ReadOnlyCollection_1_t27F043E8DE5EED8464F76863AEE4EBD68561389B * value)
	{
		___parameters_6 = value;
		Il2CppCodeGenWriteBarrier((&___parameters_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSEFFECTSETTINGS_TF399FB819B12B3398DDDEF1AAA1FB0685C524042_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef U3CSTARTU3EC__ITERATOR0_TE6C906B4CE3463E1E9016DA76194239D06531E07_H
#define U3CSTARTU3EC__ITERATOR0_TE6C906B4CE3463E1E9016DA76194239D06531E07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>
struct  U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07  : public RuntimeObject
{
public:
	// T UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0::tweenInfo
	ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  ___tweenInfo_0;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0::<elapsedTime>__0
	float ___U3CelapsedTimeU3E__0_1;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0::<percentage>__1
	float ___U3CpercentageU3E__1_2;
	// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0::U24current
	RuntimeObject * ___U24current_3;
	// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0::U24disposing
	bool ___U24disposing_4;
	// System.Int32 UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0::U24PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_tweenInfo_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07, ___tweenInfo_0)); }
	inline ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  get_tweenInfo_0() const { return ___tweenInfo_0; }
	inline ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * get_address_of_tweenInfo_0() { return &___tweenInfo_0; }
	inline void set_tweenInfo_0(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  value)
	{
		___tweenInfo_0 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E__0_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07, ___U3CelapsedTimeU3E__0_1)); }
	inline float get_U3CelapsedTimeU3E__0_1() const { return ___U3CelapsedTimeU3E__0_1; }
	inline float* get_address_of_U3CelapsedTimeU3E__0_1() { return &___U3CelapsedTimeU3E__0_1; }
	inline void set_U3CelapsedTimeU3E__0_1(float value)
	{
		___U3CelapsedTimeU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CpercentageU3E__1_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07, ___U3CpercentageU3E__1_2)); }
	inline float get_U3CpercentageU3E__1_2() const { return ___U3CpercentageU3E__1_2; }
	inline float* get_address_of_U3CpercentageU3E__1_2() { return &___U3CpercentageU3E__1_2; }
	inline void set_U3CpercentageU3E__1_2(float value)
	{
		___U3CpercentageU3E__1_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTU3EC__ITERATOR0_TE6C906B4CE3463E1E9016DA76194239D06531E07_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * m_Items[1];

public:
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// T UnityEngine.ExposedReference`1<System.Object>::Resolve(UnityEngine.IExposedPropertyTable)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ExposedReference_1_Resolve_m6E6BDC354FC9A5BD0AE6F4B9806F69127C4B044E_gshared (ExposedReference_1_tDC3BDC41AE934F311BA4F87224A01EAF45F95F29 * __this, RuntimeObject* ___resolver0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.IntervalTreeNode>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m08B137C702A072664AD450924B16E03D0BA74EBC_gshared (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.IntervalTreeNode>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mCD2BB6E243437934958FCC95EC7548AE1C75A05B_gshared (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.IntervalTreeNode>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69  List_1_get_Item_m0DF586D5994204FCD3FA15694B29C72CD60B0DC5_gshared (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.IntervalTreeNode>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_mDB6E12D0FAE6E9856BB29FA6A7622969D36E9C3B_gshared (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.IntervalTreeNode>::set_Capacity(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_set_Capacity_m645868CE9C7BABBF251436FC092CDA20FBCE793B_gshared (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.IntervalTreeNode>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m2A39909C67ABA245ED6CA56451E7339AC57FFF3E_gshared (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F * __this, IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.IntervalTreeNode>::set_Item(System.Int32,!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_set_Item_mF9887A59F0C3EADF8AFB206F77CDA7023E5ECCE0_gshared (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F * __this, int32_t p0, IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.ScriptPlayable`1<System.Object>::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void ScriptPlayable_1__ctor_mE48F064F653E626EF44A1629FC97AB40C3896648_gshared (ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ScriptPlayable_1_GetHandle_m91905E1AA49E71057252168DD130DE0D1B7698EF_gshared (ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C * __this, const RuntimeMethod* method);
// T UnityEngine.Playables.PlayableHandle::GetObject<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PlayableHandle_GetObject_TisRuntimeObject_mD3D4D5F15ED728247693C75E83EB358B8B55BDFF_gshared (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// T UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetBehaviour()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ScriptPlayable_1_GetBehaviour_m1E2C5997E676EE48F0775633B1C92C46CBA3802E_gshared (ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.ScriptPlayable`1<System.Object>::Equals(UnityEngine.Playables.ScriptPlayable`1<T>)
extern "C" IL2CPP_METHOD_ATTR bool ScriptPlayable_1_Equals_mEC9B601B576756D27895555A2402771172AED97F_gshared (ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C * __this, ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C  ___other0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Queue_1__ctor_m57D20E9B6532A644845C835306D5BCBCD3163964_gshared (Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
extern "C" IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m12D1C0BBE742C2537335B7E2B71F7E42A421A6FD_gshared (Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_m6013DB8A542ACA15F662B6832ED389BB061EFEDE_gshared (Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m0CE0B6919A09EFFBB1EBA5B5DFEF50E4F8A89CFA_gshared (Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595 (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
extern "C" IL2CPP_METHOD_ATTR void UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075 (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * ___call0, const RuntimeMethod* method);
// System.Object System.Delegate::get_Target()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2 (Delegate_t * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo UnityEngineInternal.NetFxCoreExtensions::GetMethodInfo(System.Delegate)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * NetFxCoreExtensions_GetMethodInfo_m648EA8E13DAFFCBF92AA46F62AF5124386A905A0 (Delegate_t * ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR void UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  p0, const RuntimeMethod* method);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5 (RuntimeObject * ___obj0, String_t* ___functionName1, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___argumentTypes2, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.UnityEventBase::PrepareInvoke()
extern "C" IL2CPP_METHOD_ATTR List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
inline BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Events.InvokableCall::Invoke()
extern "C" IL2CPP_METHOD_ATTR void InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394 (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
inline int32_t List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9 (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.Void UnityEngine.Experimental.IntegratedSubsystemDescriptor::.ctor()
extern "C" IL2CPP_METHOD_ATTR void IntegratedSubsystemDescriptor__ctor_m5CD1B6E0483D72DD17C1E679932CA18A45749100 (IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.IntegratedSubsystem::.ctor()
extern "C" IL2CPP_METHOD_ATTR void IntegratedSubsystem__ctor_m1945F568128E53A31FDC3322B31BC06FF62195BF (IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86 * __this, const RuntimeMethod* method);
// T UnityEngine.ExposedReference`1<System.Object>::Resolve(UnityEngine.IExposedPropertyTable)
inline RuntimeObject * ExposedReference_1_Resolve_m6E6BDC354FC9A5BD0AE6F4B9806F69127C4B044E (ExposedReference_1_tDC3BDC41AE934F311BA4F87224A01EAF45F95F29 * __this, RuntimeObject* ___resolver0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (ExposedReference_1_tDC3BDC41AE934F311BA4F87224A01EAF45F95F29 *, RuntimeObject*, const RuntimeMethod*))ExposedReference_1_Resolve_m6E6BDC354FC9A5BD0AE6F4B9806F69127C4B044E_gshared)(__this, ___resolver0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.IntervalTreeNode>::.ctor()
inline void List_1__ctor_m08B137C702A072664AD450924B16E03D0BA74EBC (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F *, const RuntimeMethod*))List_1__ctor_m08B137C702A072664AD450924B16E03D0BA74EBC_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.IntervalTreeNode>::get_Count()
inline int32_t List_1_get_Count_mCD2BB6E243437934958FCC95EC7548AE1C75A05B (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F *, const RuntimeMethod*))List_1_get_Count_mCD2BB6E243437934958FCC95EC7548AE1C75A05B_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.IntervalTreeNode>::get_Item(System.Int32)
inline IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69  List_1_get_Item_m0DF586D5994204FCD3FA15694B29C72CD60B0DC5 (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69  (*) (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F *, int32_t, const RuntimeMethod*))List_1_get_Item_m0DF586D5994204FCD3FA15694B29C72CD60B0DC5_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.IntervalTreeNode>::Clear()
inline void List_1_Clear_mDB6E12D0FAE6E9856BB29FA6A7622969D36E9C3B (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F *, const RuntimeMethod*))List_1_Clear_mDB6E12D0FAE6E9856BB29FA6A7622969D36E9C3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.IntervalTreeNode>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_m645868CE9C7BABBF251436FC092CDA20FBCE793B (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F *, int32_t, const RuntimeMethod*))List_1_set_Capacity_m645868CE9C7BABBF251436FC092CDA20FBCE793B_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.IntervalTreeNode>::Add(!0)
inline void List_1_Add_m2A39909C67ABA245ED6CA56451E7339AC57FFF3E (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F * __this, IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69  p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F *, IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69 , const RuntimeMethod*))List_1_Add_m2A39909C67ABA245ED6CA56451E7339AC57FFF3E_gshared)(__this, p0, method);
}
// System.Int64 System.Math::Min(System.Int64,System.Int64)
extern "C" IL2CPP_METHOD_ATTR int64_t Math_Min_mA2FECF96DCE00528FBA2A3835BEB4B9B1E97CDD3 (int64_t p0, int64_t p1, const RuntimeMethod* method);
// System.Int64 System.Math::Max(System.Int64,System.Int64)
extern "C" IL2CPP_METHOD_ATTR int64_t Math_Max_m13FD4D7B921C359B34176CDF2A51FB2F96965E45 (int64_t p0, int64_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.IntervalTreeNode>::set_Item(System.Int32,!0)
inline void List_1_set_Item_mF9887A59F0C3EADF8AFB206F77CDA7023E5ECCE0 (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F * __this, int32_t p0, IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69  p1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F *, int32_t, IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69 , const RuntimeMethod*))List_1_set_Item_mF9887A59F0C3EADF8AFB206F77CDA7023E5ECCE0_gshared)(__this, p0, p1, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid()
extern "C" IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType()
extern "C" IL2CPP_METHOD_ATTR Type_t * PlayableHandle_GetPlayableType_m962BE384C093FF07EAF156DA373806C2D6EF1AD1 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void System.InvalidCastException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812 (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.ScriptPlayable`1<System.Object>::.ctor(UnityEngine.Playables.PlayableHandle)
inline void ScriptPlayable_1__ctor_mE48F064F653E626EF44A1629FC97AB40C3896648 (ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	((  void (*) (ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C *, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 , const RuntimeMethod*))ScriptPlayable_1__ctor_mE48F064F653E626EF44A1629FC97AB40C3896648_gshared)(__this, ___handle0, method);
}
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::get_Null()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1 (const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableGraph::CreatePlayableHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  PlayableGraph_CreatePlayableHandle_m76B85CFBF25E71838C5F32AB29BC4F26C891D92C (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableHandle::SetInputCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void PlayableHandle_SetInputCount_m49435B8578BD74EB205D70348E63D4F92FB4FF69 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableHandle::SetScriptInstance(System.Object)
extern "C" IL2CPP_METHOD_ATTR void PlayableHandle_SetScriptInstance_mFF8C477ADCE7BAF1F6300DE02CB537B999A0F740 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, RuntimeObject * ___scriptInstance0, const RuntimeMethod* method);
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C" IL2CPP_METHOD_ATTR ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * ScriptableObject_CreateInstance_mDC77B7257A5E276CB272D3475B9B473B23A7128D (Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * Object_Instantiate_m17AA3123A55239124BC54A907AEEE509034F0830 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___original0, const RuntimeMethod* method);
// UnityEngine.HideFlags UnityEngine.Object::get_hideFlags()
extern "C" IL2CPP_METHOD_ATTR int32_t Object_get_hideFlags_mCC5D0A1480AC0CDA190A63120B39C2C531428FC8 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C" IL2CPP_METHOD_ATTR void Object_set_hideFlags_mB0B45A19A5871EF407D7B09E0EB76003496BA4F0 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetHandle()
inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ScriptPlayable_1_GetHandle_m91905E1AA49E71057252168DD130DE0D1B7698EF (ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C * __this, const RuntimeMethod* method)
{
	return ((  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  (*) (ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C *, const RuntimeMethod*))ScriptPlayable_1_GetHandle_m91905E1AA49E71057252168DD130DE0D1B7698EF_gshared)(__this, method);
}
// T UnityEngine.Playables.PlayableHandle::GetObject<System.Object>()
inline RuntimeObject * PlayableHandle_GetObject_TisRuntimeObject_mD3D4D5F15ED728247693C75E83EB358B8B55BDFF (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, const RuntimeMethod*))PlayableHandle_GetObject_TisRuntimeObject_mD3D4D5F15ED728247693C75E83EB358B8B55BDFF_gshared)(__this, method);
}
// T UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetBehaviour()
inline RuntimeObject * ScriptPlayable_1_GetBehaviour_m1E2C5997E676EE48F0775633B1C92C46CBA3802E (ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C *, const RuntimeMethod*))ScriptPlayable_1_GetBehaviour_m1E2C5997E676EE48F0775633B1C92C46CBA3802E_gshared)(__this, method);
}
// System.Void UnityEngine.Playables.Playable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void Playable__ctor_m24C6ED455A921F585698BFFEC5CCED397205543E (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  Playable_GetHandle_m952F17BACFC90BEACD3CB9880E65E69B3271108A (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___x0, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.ScriptPlayable`1<System.Object>::Equals(UnityEngine.Playables.ScriptPlayable`1<T>)
inline bool ScriptPlayable_1_Equals_mEC9B601B576756D27895555A2402771172AED97F (ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C * __this, ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C *, ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C , const RuntimeMethod*))ScriptPlayable_1_Equals_mEC9B601B576756D27895555A2402771172AED97F_gshared)(__this, ___other0, method);
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride__ctor_mD26EB073FB5FEB4E4B7BD0B1B85BC2A340C3FDB5 (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * __this, const RuntimeMethod* method);
// System.Int32 System.Boolean::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737 (bool* __this, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A (int32_t* __this, const RuntimeMethod* method);
// System.Int32 System.Single::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0 (float* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Color::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Color_GetHashCode_m88317C719D2DAA18E293B3F5CD17B9FB80E26CF1 (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_m028AB6B14EBC6D668CFA45BF6EDEF17E2C44EA54 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_m6C42B4F413A489535D180E8A99BE0298AD078B0B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector4::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PostProcessEffectRenderer__ctor_m9D14BDBEBE8F6341D7A99527ADF6D2AF18FA831E (PostProcessEffectRenderer_t4989C38AAABA92A01D597B3B6F25E8BDB63C7A2F * __this, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
extern "C" IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m0E897C88355903220B1EC214832F5E815D7C13D1 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Transform>::.ctor()
inline void Queue_1__ctor_m1114B4B3A14520FABE413206AE14D21D88BEA3F8 (Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 *, const RuntimeMethod*))Queue_1__ctor_m57D20E9B6532A644845C835306D5BCBCD3163964_gshared)(__this, method);
}
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
extern "C" IL2CPP_METHOD_ATTR Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  SceneManager_GetActiveScene_mD583193D329EBF540D8AB8A062681B1C2AB5EA51 (const RuntimeMethod* method);
// UnityEngine.GameObject[] UnityEngine.SceneManagement.Scene::GetRootGameObjects()
extern "C" IL2CPP_METHOD_ATTR GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* Scene_GetRootGameObjects_mC87878438643AF527A7C017B2EC2D133E96A1FC1 (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Transform>::Enqueue(!0)
inline void Queue_1_Enqueue_m0AE12FFA5BD870C099227186990EA21D30A519F8 (Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 *, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, const RuntimeMethod*))Queue_1_Enqueue_m12D1C0BBE742C2537335B7E2B71F7E42A421A6FD_gshared)(__this, p0, method);
}
// !0 System.Collections.Generic.Queue`1<UnityEngine.Transform>::Dequeue()
inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Queue_1_Dequeue_m4255117298948764AA48104A50476CB3B1792460 (Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 * __this, const RuntimeMethod* method)
{
	return ((  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * (*) (Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 *, const RuntimeMethod*))Queue_1_Dequeue_m6013DB8A542ACA15F662B6832ED389BB061EFEDE_gshared)(__this, method);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mE98B6C5F644AE362EC1D58C10506327D6A5878FC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.Transform>::get_Count()
inline int32_t Queue_1_get_Count_mF0A3AC2F450CF4B0839855F9AE17BD42FF745780 (Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 *, const RuntimeMethod*))Queue_1_get_Count_m0CE0B6919A09EFFBB1EBA5B5DFEF50E4F8A89CFA_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4 (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::ValidTarget()
extern "C" IL2CPP_METHOD_ATTR bool ColorTween_ValidTarget_m847E9D6C8B97F1C9039BF80AD69EEFC74C989079 (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::get_ignoreTimeScale()
extern "C" IL2CPP_METHOD_ATTR bool ColorTween_get_ignoreTimeScale_mD27F5C7D70D340DBDFAE972BBE3857A26E29747A (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mA0AE7A144C88AE8AABB42DF17B0F3F0714BA06B2 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Single UnityEngine.UI.CoroutineTween.ColorTween::get_duration()
extern "C" IL2CPP_METHOD_ATTR float ColorTween_get_duration_mE4A9B4FFAB11CCF25EAACF5777991AB6749020B0 (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B (float p0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.CoroutineTween.ColorTween::TweenValue(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ColorTween_TweenValue_mF6B10FEA49EB758AD37D95A7DD577D6AA9C32110 (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, float ___floatPercentage0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::ValidTarget()
extern "C" IL2CPP_METHOD_ATTR bool FloatTween_ValidTarget_m921F88A58CCB09A4D55DBB714F3538677363FAE6 (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::get_ignoreTimeScale()
extern "C" IL2CPP_METHOD_ATTR bool FloatTween_get_ignoreTimeScale_mCA3DA664CF6F78735BF3ED6301900FB849B49C34 (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.UI.CoroutineTween.FloatTween::get_duration()
extern "C" IL2CPP_METHOD_ATTR float FloatTween_get_duration_mBC42C5053BCB1A1315430E3E21ECE1597BB0B314 (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.CoroutineTween.FloatTween::TweenValue(System.Single)
extern "C" IL2CPP_METHOD_ATTR void FloatTween_TweenValue_m4ADF9CF3356268D7AD1CFF358BA252F1E52226F3 (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, float ___floatPercentage0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * p0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
extern "C" IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m3CDD6C046CC660D4CD6583FCE97F88A9735FD5FA (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* p0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m65112AA15736B1DB789B0B10D10CF3811167D5AB_gshared (UnityEvent_1_t88E036FD5956DB491BCC160FA57EF4F9584042B9 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mAD5E74EA93DE244D67186E19FDA2338CB1562247_gshared (UnityEvent_1_t88E036FD5956DB491BCC160FA57EF4F9584042B9 * __this, UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * L_0 = ___call0;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_1 = ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m24B362875A9956F4B441B764DCB2F97865D2BFAE_gshared (UnityEvent_1_t88E036FD5956DB491BCC160FA57EF4F9584042B9 * __this, UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * L_0 = ___call0;
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * L_2 = ___call0;
		MethodInfo_t * L_3 = NetFxCoreExtensions_GetMethodInfo_m648EA8E13DAFFCBF92AA46F62AF5124386A905A0((Delegate_t *)L_2, /*hidden argument*/NULL);
		UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_mE864CF4CD0578B8D425C65CB10D95458D88678C8_gshared (UnityEvent_1_t88E036FD5956DB491BCC160FA57EF4F9584042B9 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_mE864CF4CD0578B8D425C65CB10D95458D88678C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_0021;
	}

IL_0021:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_mA4866EC2CC70252F64EA7E500740D7631CF12B03_gshared (UnityEvent_1_t88E036FD5956DB491BCC160FA57EF4F9584042B9 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E * L_2 = (InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m768151D84C9E59E25748F26E31A72DD89BFE8C62_gshared (UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 * L_0 = ___action0;
		InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E * L_1 = (InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E *, UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_tC29A4BDE80E6622E5794F177E3DAA65BB4342B44 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m1E9071DF098AC25832A55B6928EBC3924CD4819A_gshared (UnityEvent_1_t88E036FD5956DB491BCC160FA57EF4F9584042B9 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_m1E9071DF098AC25832A55B6928EBC3924CD4819A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E * V_2 = NULL;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_3 = NULL;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_4 = NULL;
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0091;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E *)((InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E * L_4 = V_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E * L_5 = V_2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = ___arg00;
		VirtActionInvoker1< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Invoke(T1) */, (InvokableCall_1_t470687C56312E855046B6CC5CDC84075DFEB954E *)L_5, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_6);
		goto IL_008c;
	}

IL_002f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_7 = V_0;
		int32_t L_8 = V_1;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_9 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_7, (int32_t)L_8, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_3 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_9, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_11 = V_3;
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_004e:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_12 = V_0;
		int32_t L_13 = V_1;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_14 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_12, (int32_t)L_13, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_14;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_4(L_16);
	}

IL_006f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = ___arg00;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = L_18;
		RuntimeObject * L_20 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_19);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_21 = V_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_21, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_22);
	}

IL_008b:
	{
	}

IL_008c:
	{
		int32_t L_23 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_24 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_25 = V_0;
		int32_t L_26 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_25, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_mD47EAB7355B86A1355D92383DD43BD7247A9DB74_gshared (UnityEvent_2_t1324E90D5AF00DA0F61802033E51716D0D9CBED1 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_2_FindMethod_Impl_m03311CACE68316DC88479DFD2AF9AA0A88A615A3_gshared (UnityEvent_2_t1324E90D5AF00DA0F61802033E51716D0D9CBED1 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_2_FindMethod_Impl_m03311CACE68316DC88479DFD2AF9AA0A88A615A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		MethodInfo_t * L_9 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_6, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_9;
		goto IL_002e;
	}

IL_002e:
	{
		MethodInfo_t * L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_2_GetDelegate_m4005C11561312B45709572CA1BB4D0EA630D0534_gshared (UnityEvent_2_t1324E90D5AF00DA0F61802033E51716D0D9CBED1 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * L_2 = (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::Invoke(T0,T1)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_mD905BCAB5C22629BF8F3B7CF869C02E3C31ED4F4_gshared (UnityEvent_2_t1324E90D5AF00DA0F61802033E51716D0D9CBED1 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_2_Invoke_mD905BCAB5C22629BF8F3B7CF869C02E3C31ED4F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * V_2 = NULL;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_3 = NULL;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_4 = NULL;
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_00a0;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E *)((InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)));
		InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * L_4 = V_2;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * L_5 = V_2;
		RuntimeObject * L_6 = ___arg00;
		RuntimeObject * L_7 = ___arg11;
		((  void (*) (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E *)L_5, (RuntimeObject *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		goto IL_009b;
	}

IL_0030:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_8 = V_0;
		int32_t L_9 = V_1;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_10 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_8, (int32_t)L_9, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_3 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_10, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_11 = V_3;
		if (!L_11)
		{
			goto IL_004f;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_12 = V_3;
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_12, /*hidden argument*/NULL);
		goto IL_009a;
	}

IL_004f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_13 = V_0;
		int32_t L_14 = V_1;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_15 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_13, (int32_t)L_14, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_15;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		if (L_16)
		{
			goto IL_0070;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_m_InvokeArray_4(L_17);
	}

IL_0070:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		RuntimeObject * L_19 = ___arg00;
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_19);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		RuntimeObject * L_21 = ___arg11;
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_21);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_22 = V_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_22, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_23);
	}

IL_009a:
	{
	}

IL_009b:
	{
		int32_t L_24 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00a0:
	{
		int32_t L_25 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_26 = V_0;
		int32_t L_27 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_26, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_m548CD03D315CD41D7A6EF3242515CAF0D6C158C3_gshared (UnityEvent_3_t2806FFBD49F1501D6C532F2520EFAB143233B6D9 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_3_FindMethod_Impl_mDEE1409662BC040478ADF5E0ABF95B8E381D32C4_gshared (UnityEvent_3_t2806FFBD49F1501D6C532F2520EFAB143233B6D9 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_3_FindMethod_Impl_mDEE1409662BC040478ADF5E0ABF95B8E381D32C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_9 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_6;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_10, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_9, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_12;
		goto IL_003b;
	}

IL_003b:
	{
		MethodInfo_t * L_13 = V_0;
		return L_13;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_3_GetDelegate_m86F79543DFE31A25A4BBA5B165DF42922D30619B_gshared (UnityEvent_3_t2806FFBD49F1501D6C532F2520EFAB143233B6D9 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED * L_2 = (InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::Invoke(T0,T1,T2)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_3_Invoke_mFBD41665482064D8F8909DB9828D3946C57EEA1E_gshared (UnityEvent_3_t2806FFBD49F1501D6C532F2520EFAB143233B6D9 * __this, RuntimeObject * ___arg00, int32_t ___arg11, int32_t ___arg22, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_3_Invoke_mFBD41665482064D8F8909DB9828D3946C57EEA1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED * V_2 = NULL;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_3 = NULL;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_4 = NULL;
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_00af;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED *)((InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED * L_4 = V_2;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED * L_5 = V_2;
		RuntimeObject * L_6 = ___arg00;
		int32_t L_7 = ___arg11;
		int32_t L_8 = ___arg22;
		((  void (*) (InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED *, RuntimeObject *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((InvokableCall_3_t6A8BFB842DE22C189B46EBAB57685EB9778BE9ED *)L_5, (RuntimeObject *)L_6, (int32_t)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		goto IL_00aa;
	}

IL_0031:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_9 = V_0;
		int32_t L_10 = V_1;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_11 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_9, (int32_t)L_10, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_3 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_11, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_12 = V_3;
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_13 = V_3;
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_13, /*hidden argument*/NULL);
		goto IL_00a9;
	}

IL_0050:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_14 = V_0;
		int32_t L_15 = V_1;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_16 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_16;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		if (L_17)
		{
			goto IL_0071;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_m_InvokeArray_4(L_18);
	}

IL_0071:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		RuntimeObject * L_20 = ___arg00;
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_21 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		int32_t L_22 = ___arg11;
		int32_t L_23 = L_22;
		RuntimeObject * L_24 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_23);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_24);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_25 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		int32_t L_26 = ___arg22;
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8), &L_27);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_28);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_29 = V_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_30 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_29, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_30);
	}

IL_00a9:
	{
	}

IL_00aa:
	{
		int32_t L_31 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_00af:
	{
		int32_t L_32 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_33 = V_0;
		int32_t L_34 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_33, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		if ((((int32_t)L_32) < ((int32_t)L_34)))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_mF7A53B951222BC66BE6F471036270FC66C36FAA2_gshared (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_3_FindMethod_Impl_mF15A2B2F6BFE33613B6675FD2500E144CEF40FFA_gshared (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_3_FindMethod_Impl_mF15A2B2F6BFE33613B6675FD2500E144CEF40FFA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_9 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_6;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_10, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_9, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_12;
		goto IL_003b;
	}

IL_003b:
	{
		MethodInfo_t * L_13 = V_0;
		return L_13;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_3_GetDelegate_mDD941B02CC78310DE703586880CD8C926CF5EC2C_gshared (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * L_2 = (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_3_Invoke_m012D72FFB78BAC1A48A2B8C027CC180D96E963DA_gshared (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_3_Invoke_m012D72FFB78BAC1A48A2B8C027CC180D96E963DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * V_2 = NULL;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_3 = NULL;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_4 = NULL;
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_00af;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *)((InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * L_4 = V_2;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * L_5 = V_2;
		RuntimeObject * L_6 = ___arg00;
		RuntimeObject * L_7 = ___arg11;
		RuntimeObject * L_8 = ___arg22;
		((  void (*) (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *)L_5, (RuntimeObject *)L_6, (RuntimeObject *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		goto IL_00aa;
	}

IL_0031:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_9 = V_0;
		int32_t L_10 = V_1;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_11 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_9, (int32_t)L_10, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_3 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_11, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_12 = V_3;
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_13 = V_3;
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_13, /*hidden argument*/NULL);
		goto IL_00a9;
	}

IL_0050:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_14 = V_0;
		int32_t L_15 = V_1;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_16 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_16;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		if (L_17)
		{
			goto IL_0071;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_m_InvokeArray_4(L_18);
	}

IL_0071:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		RuntimeObject * L_20 = ___arg00;
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_21 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		RuntimeObject * L_22 = ___arg11;
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_22);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		RuntimeObject * L_24 = ___arg22;
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_24);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_25 = V_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_4();
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_25, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_26);
	}

IL_00a9:
	{
	}

IL_00aa:
	{
		int32_t L_27 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_00af:
	{
		int32_t L_28 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_29 = V_0;
		int32_t L_30 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_29, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_4__ctor_m04FBFD537FBAF349F05C24B6EB9360FF08685819_gshared (UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_4_FindMethod_Impl_m74BBF94AAC7B6B09A4BC3E4A923CBFE4781D08A1_gshared (UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_4_FindMethod_Impl_m74BBF94AAC7B6B09A4BC3E4A923CBFE4781D08A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)4);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_9 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_6;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_10, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_12 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_9;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_13 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 3)) };
		Type_t * L_14 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_13, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Type_t *)L_14);
		MethodInfo_t * L_15 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_12, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_15;
		goto IL_0048;
	}

IL_0048:
	{
		MethodInfo_t * L_16 = V_0;
		return L_16;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_4_GetDelegate_mAD2A7239ECF210269A5974AE66F1CFDB13977F54_gshared (UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 * L_2 = (InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.IntegratedSubsystemDescriptor`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void IntegratedSubsystemDescriptor_1__ctor_m93D6742782915290E68A79A36A9A15527A4D9FB2_gshared (IntegratedSubsystemDescriptor_1_t7D1472A1BC79BD25D18737293171056B0B896957 * __this, const RuntimeMethod* method)
{
	{
		IntegratedSubsystemDescriptor__ctor_m5CD1B6E0483D72DD17C1E679932CA18A45749100((IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0 *)__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.IntegratedSubsystem`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void IntegratedSubsystem_1__ctor_m6025BEAB0E711B2D2C0996BF096DF5772BEB882B_gshared (IntegratedSubsystem_1_t73613F32CADA1C0AD6BA0A43275D73052DCD5495 * __this, const RuntimeMethod* method)
{
	{
		IntegratedSubsystem__ctor_m1945F568128E53A31FDC3322B31BC06FF62195BF((IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86 *)__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T UnityEngine.ExposedReference`1<System.Object>::Resolve(UnityEngine.IExposedPropertyTable)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ExposedReference_1_Resolve_m6E6BDC354FC9A5BD0AE6F4B9806F69127C4B044E_gshared (ExposedReference_1_tDC3BDC41AE934F311BA4F87224A01EAF45F95F29 * __this, RuntimeObject* ___resolver0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExposedReference_1_Resolve_m6E6BDC354FC9A5BD0AE6F4B9806F69127C4B044E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	{
		RuntimeObject* L_0 = ___resolver0;
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject* L_1 = ___resolver0;
		PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_2 = (PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 )__this->get_exposedName_0();
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_3 = InterfaceFuncInvoker2< Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *, PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 , bool* >::Invoke(0 /* UnityEngine.Object UnityEngine.IExposedPropertyTable::GetReferenceValue(UnityEngine.PropertyName,System.Boolean&) */, IExposedPropertyTable_tBA6A5A41F6283C34744CA6EE8B7BE2F0679CF885_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, (PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 )L_2, (bool*)(bool*)(&V_0));
		V_1 = (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_5 = V_1;
		V_2 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
		goto IL_0045;
	}

IL_002e:
	{
	}

IL_002f:
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_6 = (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)__this->get_defaultValue_1();
		V_2 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
		goto IL_0045;
	}

IL_0045:
	{
		RuntimeObject * L_7 = V_2;
		return L_7;
	}
}
extern "C"  RuntimeObject * ExposedReference_1_Resolve_m6E6BDC354FC9A5BD0AE6F4B9806F69127C4B044E_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___resolver0, const RuntimeMethod* method)
{
	ExposedReference_1_tDC3BDC41AE934F311BA4F87224A01EAF45F95F29 * _thisAdjusted = reinterpret_cast<ExposedReference_1_tDC3BDC41AE934F311BA4F87224A01EAF45F95F29 *>(__this + 1);
	return ExposedReference_1_Resolve_m6E6BDC354FC9A5BD0AE6F4B9806F69127C4B044E(_thisAdjusted, ___resolver0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.IntervalTree`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void IntervalTree_1__ctor_m3324DCC055DD6BDF0F14AF2922111167BFEA53F4_gshared (IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalTree_1__ctor_m3324DCC055DD6BDF0F14AF2922111167BFEA53F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B * L_0 = (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_m_Entries_3(L_0);
		List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F * L_1 = (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F *)il2cpp_codegen_object_new(List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F_il2cpp_TypeInfo_var);
		List_1__ctor_m08B137C702A072664AD450924B16E03D0BA74EBC(L_1, /*hidden argument*/List_1__ctor_m08B137C702A072664AD450924B16E03D0BA74EBC_RuntimeMethod_var);
		__this->set_m_Nodes_4(L_1);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.IntervalTree`1<System.Object>::get_dirty()
extern "C" IL2CPP_METHOD_ATTR bool IntervalTree_1_get_dirty_m53FDACBD0F2B2ECB4038F3E5622F4EF580559305_gshared (IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = (bool)__this->get_U3CdirtyU3Ek__BackingField_5();
		V_0 = (bool)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.IntervalTree`1<System.Object>::set_dirty(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void IntervalTree_1_set_dirty_m467B9E3E67CC12C80BD2A257A0F74910EBB32C8B_gshared (IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CdirtyU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void UnityEngine.IntervalTree`1<System.Object>::Add(T)
extern "C" IL2CPP_METHOD_ATTR void IntervalTree_1_Add_m8C031D356903E7BDDE63D2FD44DA8D7D777BD015_gshared (IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalTree_1_Add_m8C031D356903E7BDDE63D2FD44DA8D7D777BD015_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___item0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		goto IL_005c;
	}

IL_0011:
	{
		List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B * L_1 = (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)__this->get_m_Entries_3();
		il2cpp_codegen_initobj((&V_0), sizeof(Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF ));
		int64_t L_2 = InterfaceFuncInvoker0< int64_t >::Invoke(0 /* System.Int64 UnityEngine.IInterval::get_intervalStart() */, IInterval_tCD6A4E1393CEA83D7B3F7441687D838BFEE52842_il2cpp_TypeInfo_var, (RuntimeObject*)(___item0));
		(&V_0)->set_intervalStart_0(L_2);
		int64_t L_3 = InterfaceFuncInvoker0< int64_t >::Invoke(1 /* System.Int64 UnityEngine.IInterval::get_intervalEnd() */, IInterval_tCD6A4E1393CEA83D7B3F7441687D838BFEE52842_il2cpp_TypeInfo_var, (RuntimeObject*)(___item0));
		(&V_0)->set_intervalEnd_1(L_3);
		RuntimeObject * L_4 = ___item0;
		(&V_0)->set_item_2(L_4);
		Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  L_5 = V_0;
		((  void (*) (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *, Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)L_1, (Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		((  void (*) (IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
	}

IL_005c:
	{
		return;
	}
}
// System.Void UnityEngine.IntervalTree`1<System.Object>::IntersectsWith(System.Int64,System.Int32,System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void IntervalTree_1_IntersectsWith_mE08C7D3E7429BCFCF8FBD33F53D2BEDA5DF85D22_gshared (IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 * __this, int64_t ___value0, int32_t ___bitFlag1, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___results2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalTree_1_IntersectsWith_mE08C7D3E7429BCFCF8FBD33F53D2BEDA5DF85D22_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B * L_0 = (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)__this->get_m_Entries_3();
		int32_t L_1 = ((  int32_t (*) (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		goto IL_0056;
	}

IL_0016:
	{
		bool L_2 = ((  bool (*) (IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		((  void (*) (IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((  void (*) (IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
	}

IL_0030:
	{
		List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F * L_3 = (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F *)__this->get_m_Nodes_4();
		int32_t L_4 = List_1_get_Count_mCD2BB6E243437934958FCC95EC7548AE1C75A05B((List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F *)L_3, /*hidden argument*/List_1_get_Count_mCD2BB6E243437934958FCC95EC7548AE1C75A05B_RuntimeMethod_var);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F * L_5 = (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F *)__this->get_m_Nodes_4();
		IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69  L_6 = List_1_get_Item_m0DF586D5994204FCD3FA15694B29C72CD60B0DC5((List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F *)L_5, (int32_t)0, /*hidden argument*/List_1_get_Item_m0DF586D5994204FCD3FA15694B29C72CD60B0DC5_RuntimeMethod_var);
		int64_t L_7 = ___value0;
		int32_t L_8 = ___bitFlag1;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_9 = ___results2;
		((  void (*) (IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 *, IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69 , int64_t, int32_t, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 *)__this, (IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69 )L_6, (int64_t)L_7, (int32_t)L_8, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_0056:
	{
		return;
	}
}
// System.Void UnityEngine.IntervalTree`1<System.Object>::UpdateIntervals()
extern "C" IL2CPP_METHOD_ATTR void IntervalTree_1_UpdateIntervals_mB8DC60E99312E1912F74EF6CD271793316614920_gshared (IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalTree_1_UpdateIntervals_mB8DC60E99312E1912F74EF6CD271793316614920_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int64_t V_3 = 0;
	int64_t V_4 = 0;
	Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		V_0 = (bool)0;
		V_1 = (int32_t)0;
		goto IL_009a;
	}

IL_000a:
	{
		List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B * L_0 = (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)__this->get_m_Entries_3();
		int32_t L_1 = V_1;
		Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  L_2 = ((  Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  (*) (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		V_2 = (Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF )L_2;
		RuntimeObject ** L_3 = (RuntimeObject **)(&V_2)->get_address_of_item_2();
		int64_t L_4 = InterfaceFuncInvoker0< int64_t >::Invoke(0 /* System.Int64 UnityEngine.IInterval::get_intervalStart() */, IInterval_tCD6A4E1393CEA83D7B3F7441687D838BFEE52842_il2cpp_TypeInfo_var, (RuntimeObject*)(*L_3));
		V_3 = (int64_t)L_4;
		RuntimeObject ** L_5 = (RuntimeObject **)(&V_2)->get_address_of_item_2();
		int64_t L_6 = InterfaceFuncInvoker0< int64_t >::Invoke(1 /* System.Int64 UnityEngine.IInterval::get_intervalEnd() */, IInterval_tCD6A4E1393CEA83D7B3F7441687D838BFEE52842_il2cpp_TypeInfo_var, (RuntimeObject*)(*L_5));
		V_4 = (int64_t)L_6;
		bool L_7 = V_0;
		int64_t L_8 = (int64_t)(&V_2)->get_intervalStart_0();
		int64_t L_9 = V_3;
		V_0 = (bool)((int32_t)((int32_t)L_7|(int32_t)((((int32_t)((((int64_t)L_8) == ((int64_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0)));
		bool L_10 = V_0;
		int64_t L_11 = (int64_t)(&V_2)->get_intervalEnd_1();
		int64_t L_12 = V_4;
		V_0 = (bool)((int32_t)((int32_t)L_10|(int32_t)((((int32_t)((((int64_t)L_11) == ((int64_t)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0)));
		List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B * L_13 = (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)__this->get_m_Entries_3();
		int32_t L_14 = V_1;
		il2cpp_codegen_initobj((&V_5), sizeof(Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF ));
		int64_t L_15 = V_3;
		(&V_5)->set_intervalStart_0(L_15);
		int64_t L_16 = V_4;
		(&V_5)->set_intervalEnd_1(L_16);
		RuntimeObject * L_17 = (RuntimeObject *)(&V_2)->get_item_2();
		(&V_5)->set_item_2(L_17);
		Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  L_18 = V_5;
		((  void (*) (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *, int32_t, Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)L_13, (int32_t)L_14, (Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF )L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		int32_t L_19 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_009a:
	{
		int32_t L_20 = V_1;
		List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B * L_21 = (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)__this->get_m_Entries_3();
		int32_t L_22 = ((  int32_t (*) (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_000a;
		}
	}
	{
		bool L_23 = ((  bool (*) (IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		bool L_24 = V_0;
		((  void (*) (IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 *)__this, (bool)((int32_t)((int32_t)L_23|(int32_t)L_24)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void UnityEngine.IntervalTree`1<System.Object>::Query(UnityEngine.IntervalTreeNode,System.Int64,System.Int32,System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void IntervalTree_1_Query_m8B2EEF36525510FB48594D9282138D367713B84C_gshared (IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 * __this, IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69  ___node0, int64_t ___value1, int32_t ___bitflag2, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___results3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalTree_1_Query_m8B2EEF36525510FB48594D9282138D367713B84C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)(&___node0)->get_first_1();
		V_0 = (int32_t)L_0;
		goto IL_005e;
	}

IL_000e:
	{
		List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B * L_1 = (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)__this->get_m_Entries_3();
		int32_t L_2 = V_0;
		Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  L_3 = ((  Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  (*) (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		V_1 = (Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF )L_3;
		int64_t L_4 = ___value1;
		int64_t L_5 = (int64_t)(&V_1)->get_intervalStart_0();
		if ((((int64_t)L_4) < ((int64_t)L_5)))
		{
			goto IL_0059;
		}
	}
	{
		int64_t L_6 = ___value1;
		int64_t L_7 = (int64_t)(&V_1)->get_intervalEnd_1();
		if ((((int64_t)L_6) >= ((int64_t)L_7)))
		{
			goto IL_0059;
		}
	}
	{
		RuntimeObject ** L_8 = (RuntimeObject **)(&V_1)->get_address_of_item_2();
		int32_t L_9 = ___bitflag2;
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void UnityEngine.IInterval::set_intervalBit(System.Int32) */, IInterval_tCD6A4E1393CEA83D7B3F7441687D838BFEE52842_il2cpp_TypeInfo_var, (RuntimeObject*)(*L_8), (int32_t)L_9);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_10 = ___results3;
		RuntimeObject * L_11 = (RuntimeObject *)(&V_1)->get_item_2();
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
	}

IL_0059:
	{
		int32_t L_12 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_005e:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = (int32_t)(&___node0)->get_last_2();
		if ((((int32_t)L_13) <= ((int32_t)L_14)))
		{
			goto IL_000e;
		}
	}
	{
		int64_t L_15 = (int64_t)(&___node0)->get_center_0();
		if ((!(((uint64_t)L_15) == ((uint64_t)((int64_t)std::numeric_limits<int64_t>::max())))))
		{
			goto IL_0085;
		}
	}
	{
		goto IL_00f1;
	}

IL_0085:
	{
		int32_t L_16 = (int32_t)(&___node0)->get_left_3();
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_00bb;
		}
	}
	{
		int64_t L_17 = ___value1;
		int64_t L_18 = (int64_t)(&___node0)->get_center_0();
		if ((((int64_t)L_17) >= ((int64_t)L_18)))
		{
			goto IL_00bb;
		}
	}
	{
		List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F * L_19 = (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F *)__this->get_m_Nodes_4();
		int32_t L_20 = (int32_t)(&___node0)->get_left_3();
		IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69  L_21 = List_1_get_Item_m0DF586D5994204FCD3FA15694B29C72CD60B0DC5((List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F *)L_19, (int32_t)L_20, /*hidden argument*/List_1_get_Item_m0DF586D5994204FCD3FA15694B29C72CD60B0DC5_RuntimeMethod_var);
		int64_t L_22 = ___value1;
		int32_t L_23 = ___bitflag2;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_24 = ___results3;
		((  void (*) (IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 *, IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69 , int64_t, int32_t, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 *)__this, (IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69 )L_21, (int64_t)L_22, (int32_t)L_23, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_00bb:
	{
		int32_t L_25 = (int32_t)(&___node0)->get_right_4();
		if ((((int32_t)L_25) == ((int32_t)(-1))))
		{
			goto IL_00f1;
		}
	}
	{
		int64_t L_26 = ___value1;
		int64_t L_27 = (int64_t)(&___node0)->get_center_0();
		if ((((int64_t)L_26) <= ((int64_t)L_27)))
		{
			goto IL_00f1;
		}
	}
	{
		List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F * L_28 = (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F *)__this->get_m_Nodes_4();
		int32_t L_29 = (int32_t)(&___node0)->get_right_4();
		IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69  L_30 = List_1_get_Item_m0DF586D5994204FCD3FA15694B29C72CD60B0DC5((List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F *)L_28, (int32_t)L_29, /*hidden argument*/List_1_get_Item_m0DF586D5994204FCD3FA15694B29C72CD60B0DC5_RuntimeMethod_var);
		int64_t L_31 = ___value1;
		int32_t L_32 = ___bitflag2;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_33 = ___results3;
		((  void (*) (IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 *, IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69 , int64_t, int32_t, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 *)__this, (IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69 )L_30, (int64_t)L_31, (int32_t)L_32, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_33, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_00f1:
	{
		return;
	}
}
// System.Void UnityEngine.IntervalTree`1<System.Object>::Rebuild()
extern "C" IL2CPP_METHOD_ATTR void IntervalTree_1_Rebuild_m397F3A143DAEFDD3DB57CF26E31E23A6023FAB19_gshared (IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalTree_1_Rebuild_m397F3A143DAEFDD3DB57CF26E31E23A6023FAB19_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F * L_0 = (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F *)__this->get_m_Nodes_4();
		List_1_Clear_mDB6E12D0FAE6E9856BB29FA6A7622969D36E9C3B((List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F *)L_0, /*hidden argument*/List_1_Clear_mDB6E12D0FAE6E9856BB29FA6A7622969D36E9C3B_RuntimeMethod_var);
		List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F * L_1 = (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F *)__this->get_m_Nodes_4();
		List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B * L_2 = (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)__this->get_m_Entries_3();
		int32_t L_3 = ((  int32_t (*) (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		List_1_set_Capacity_m645868CE9C7BABBF251436FC092CDA20FBCE793B((List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F *)L_1, (int32_t)L_3, /*hidden argument*/List_1_set_Capacity_m645868CE9C7BABBF251436FC092CDA20FBCE793B_RuntimeMethod_var);
		List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B * L_4 = (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)__this->get_m_Entries_3();
		int32_t L_5 = ((  int32_t (*) (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((  int32_t (*) (IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 *)__this, (int32_t)0, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		return;
	}
}
// System.Int32 UnityEngine.IntervalTree`1<System.Object>::Rebuild(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t IntervalTree_1_Rebuild_m7249EC2371A2FB513FD8CE089913EC9D963FEA20_gshared (IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 * __this, int32_t ___start0, int32_t ___end1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalTree_1_Rebuild_m7249EC2371A2FB513FD8CE089913EC9D963FEA20_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	int64_t V_5 = 0;
	int32_t V_6 = 0;
	Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  V_7;
	memset(&V_7, 0, sizeof(V_7));
	int64_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  V_11;
	memset(&V_11, 0, sizeof(V_11));
	Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  V_12;
	memset(&V_12, 0, sizeof(V_12));
	Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  V_13;
	memset(&V_13, 0, sizeof(V_13));
	Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  V_14;
	memset(&V_14, 0, sizeof(V_14));
	Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  V_15;
	memset(&V_15, 0, sizeof(V_15));
	Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  V_16;
	memset(&V_16, 0, sizeof(V_16));
	Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  V_17;
	memset(&V_17, 0, sizeof(V_17));
	Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  V_18;
	memset(&V_18, 0, sizeof(V_18));
	int32_t V_19 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69 ));
		int32_t L_0 = ___end1;
		int32_t L_1 = ___start0;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), (int32_t)1));
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0071;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69 ));
		(&V_2)->set_center_0(((int64_t)std::numeric_limits<int64_t>::max()));
		int32_t L_3 = ___start0;
		(&V_2)->set_first_1(L_3);
		int32_t L_4 = ___end1;
		(&V_2)->set_last_2(L_4);
		(&V_2)->set_left_3((-1));
		(&V_2)->set_right_4((-1));
		IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69  L_5 = V_2;
		V_0 = (IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69 )L_5;
		List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F * L_6 = (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F *)__this->get_m_Nodes_4();
		IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69  L_7 = V_0;
		List_1_Add_m2A39909C67ABA245ED6CA56451E7339AC57FFF3E((List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F *)L_6, (IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69 )L_7, /*hidden argument*/List_1_Add_m2A39909C67ABA245ED6CA56451E7339AC57FFF3E_RuntimeMethod_var);
		List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F * L_8 = (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F *)__this->get_m_Nodes_4();
		int32_t L_9 = List_1_get_Count_mCD2BB6E243437934958FCC95EC7548AE1C75A05B((List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F *)L_8, /*hidden argument*/List_1_get_Count_mCD2BB6E243437934958FCC95EC7548AE1C75A05B_RuntimeMethod_var);
		V_3 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
		goto IL_02f1;
	}

IL_0071:
	{
		V_4 = (int64_t)((int64_t)std::numeric_limits<int64_t>::max());
		V_5 = (int64_t)((int64_t)std::numeric_limits<int64_t>::min());
		int32_t L_10 = ___start0;
		V_6 = (int32_t)L_10;
		goto IL_00c6;
	}

IL_008f:
	{
		List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B * L_11 = (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)__this->get_m_Entries_3();
		int32_t L_12 = V_6;
		Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  L_13 = ((  Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  (*) (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		V_7 = (Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF )L_13;
		int64_t L_14 = V_4;
		int64_t L_15 = (int64_t)(&V_7)->get_intervalStart_0();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		int64_t L_16 = Math_Min_mA2FECF96DCE00528FBA2A3835BEB4B9B1E97CDD3((int64_t)L_14, (int64_t)L_15, /*hidden argument*/NULL);
		V_4 = (int64_t)L_16;
		int64_t L_17 = V_5;
		int64_t L_18 = (int64_t)(&V_7)->get_intervalEnd_1();
		int64_t L_19 = Math_Max_m13FD4D7B921C359B34176CDF2A51FB2F96965E45((int64_t)L_17, (int64_t)L_18, /*hidden argument*/NULL);
		V_5 = (int64_t)L_19;
		int32_t L_20 = V_6;
		V_6 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_00c6:
	{
		int32_t L_21 = V_6;
		int32_t L_22 = ___end1;
		if ((((int32_t)L_21) <= ((int32_t)L_22)))
		{
			goto IL_008f;
		}
	}
	{
		int64_t L_23 = V_5;
		int64_t L_24 = V_4;
		V_8 = (int64_t)((int64_t)((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_23, (int64_t)L_24))/(int64_t)(((int64_t)((int64_t)2)))));
		int64_t L_25 = V_8;
		(&V_0)->set_center_0(L_25);
		int32_t L_26 = ___start0;
		V_9 = (int32_t)L_26;
		int32_t L_27 = ___end1;
		V_10 = (int32_t)L_27;
	}

IL_00e7:
	{
		goto IL_00f4;
	}

IL_00ee:
	{
		int32_t L_28 = V_9;
		V_9 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00f4:
	{
		int32_t L_29 = V_9;
		int32_t L_30 = ___end1;
		if ((((int32_t)L_29) > ((int32_t)L_30)))
		{
			goto IL_0119;
		}
	}
	{
		List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B * L_31 = (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)__this->get_m_Entries_3();
		int32_t L_32 = V_9;
		Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  L_33 = ((  Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  (*) (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)L_31, (int32_t)L_32, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		V_11 = (Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF )L_33;
		int64_t L_34 = (int64_t)(&V_11)->get_intervalEnd_1();
		int64_t L_35 = V_8;
		if ((((int64_t)L_34) < ((int64_t)L_35)))
		{
			goto IL_00ee;
		}
	}

IL_0119:
	{
		goto IL_0124;
	}

IL_011e:
	{
		int32_t L_36 = V_10;
		V_10 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)1));
	}

IL_0124:
	{
		int32_t L_37 = V_10;
		int32_t L_38 = ___start0;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0149;
		}
	}
	{
		List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B * L_39 = (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)__this->get_m_Entries_3();
		int32_t L_40 = V_10;
		Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  L_41 = ((  Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  (*) (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)L_39, (int32_t)L_40, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		V_12 = (Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF )L_41;
		int64_t L_42 = (int64_t)(&V_12)->get_intervalEnd_1();
		int64_t L_43 = V_8;
		if ((((int64_t)L_42) >= ((int64_t)L_43)))
		{
			goto IL_011e;
		}
	}

IL_0149:
	{
		int32_t L_44 = V_9;
		int32_t L_45 = V_10;
		if ((((int32_t)L_44) <= ((int32_t)L_45)))
		{
			goto IL_0157;
		}
	}
	{
		goto IL_0199;
	}

IL_0157:
	{
		List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B * L_46 = (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)__this->get_m_Entries_3();
		int32_t L_47 = V_9;
		Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  L_48 = ((  Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  (*) (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)L_46, (int32_t)L_47, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		V_13 = (Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF )L_48;
		List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B * L_49 = (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)__this->get_m_Entries_3();
		int32_t L_50 = V_10;
		Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  L_51 = ((  Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  (*) (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)L_49, (int32_t)L_50, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		V_14 = (Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF )L_51;
		List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B * L_52 = (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)__this->get_m_Entries_3();
		int32_t L_53 = V_10;
		Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  L_54 = V_13;
		((  void (*) (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *, int32_t, Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)L_52, (int32_t)L_53, (Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF )L_54, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B * L_55 = (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)__this->get_m_Entries_3();
		int32_t L_56 = V_9;
		Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  L_57 = V_14;
		((  void (*) (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *, int32_t, Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)L_55, (int32_t)L_56, (Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF )L_57, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		goto IL_00e7;
	}

IL_0199:
	{
		int32_t L_58 = V_9;
		(&V_0)->set_first_1(L_58);
		int32_t L_59 = ___end1;
		V_10 = (int32_t)L_59;
	}

IL_01a5:
	{
		goto IL_01b2;
	}

IL_01ac:
	{
		int32_t L_60 = V_9;
		V_9 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
	}

IL_01b2:
	{
		int32_t L_61 = V_9;
		int32_t L_62 = ___end1;
		if ((((int32_t)L_61) > ((int32_t)L_62)))
		{
			goto IL_01d7;
		}
	}
	{
		List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B * L_63 = (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)__this->get_m_Entries_3();
		int32_t L_64 = V_9;
		Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  L_65 = ((  Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  (*) (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)L_63, (int32_t)L_64, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		V_15 = (Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF )L_65;
		int64_t L_66 = (int64_t)(&V_15)->get_intervalStart_0();
		int64_t L_67 = V_8;
		if ((((int64_t)L_66) <= ((int64_t)L_67)))
		{
			goto IL_01ac;
		}
	}

IL_01d7:
	{
		goto IL_01e2;
	}

IL_01dc:
	{
		int32_t L_68 = V_10;
		V_10 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_68, (int32_t)1));
	}

IL_01e2:
	{
		int32_t L_69 = V_10;
		int32_t L_70 = ___start0;
		if ((((int32_t)L_69) < ((int32_t)L_70)))
		{
			goto IL_0207;
		}
	}
	{
		List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B * L_71 = (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)__this->get_m_Entries_3();
		int32_t L_72 = V_10;
		Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  L_73 = ((  Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  (*) (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)L_71, (int32_t)L_72, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		V_16 = (Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF )L_73;
		int64_t L_74 = (int64_t)(&V_16)->get_intervalStart_0();
		int64_t L_75 = V_8;
		if ((((int64_t)L_74) > ((int64_t)L_75)))
		{
			goto IL_01dc;
		}
	}

IL_0207:
	{
		int32_t L_76 = V_9;
		int32_t L_77 = V_10;
		if ((((int32_t)L_76) <= ((int32_t)L_77)))
		{
			goto IL_0215;
		}
	}
	{
		goto IL_0257;
	}

IL_0215:
	{
		List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B * L_78 = (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)__this->get_m_Entries_3();
		int32_t L_79 = V_9;
		Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  L_80 = ((  Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  (*) (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)L_78, (int32_t)L_79, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		V_17 = (Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF )L_80;
		List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B * L_81 = (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)__this->get_m_Entries_3();
		int32_t L_82 = V_10;
		Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  L_83 = ((  Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  (*) (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)L_81, (int32_t)L_82, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		V_18 = (Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF )L_83;
		List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B * L_84 = (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)__this->get_m_Entries_3();
		int32_t L_85 = V_10;
		Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  L_86 = V_17;
		((  void (*) (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *, int32_t, Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)L_84, (int32_t)L_85, (Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF )L_86, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B * L_87 = (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)__this->get_m_Entries_3();
		int32_t L_88 = V_9;
		Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF  L_89 = V_18;
		((  void (*) (List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *, int32_t, Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t4244A14D92E202B5A89AA072D92952ECBF5B8B1B *)L_87, (int32_t)L_88, (Entry_tDE1E79E3477D59FEACC86F8EF572A582208860CF )L_89, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		goto IL_01a5;
	}

IL_0257:
	{
		int32_t L_90 = V_10;
		(&V_0)->set_last_2(L_90);
		List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F * L_91 = (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F *)__this->get_m_Nodes_4();
		il2cpp_codegen_initobj((&V_2), sizeof(IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69 ));
		IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69  L_92 = V_2;
		List_1_Add_m2A39909C67ABA245ED6CA56451E7339AC57FFF3E((List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F *)L_91, (IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69 )L_92, /*hidden argument*/List_1_Add_m2A39909C67ABA245ED6CA56451E7339AC57FFF3E_RuntimeMethod_var);
		List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F * L_93 = (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F *)__this->get_m_Nodes_4();
		int32_t L_94 = List_1_get_Count_mCD2BB6E243437934958FCC95EC7548AE1C75A05B((List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F *)L_93, /*hidden argument*/List_1_get_Count_mCD2BB6E243437934958FCC95EC7548AE1C75A05B_RuntimeMethod_var);
		V_19 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_94, (int32_t)1));
		(&V_0)->set_left_3((-1));
		(&V_0)->set_right_4((-1));
		int32_t L_95 = ___start0;
		int32_t L_96 = (int32_t)(&V_0)->get_first_1();
		if ((((int32_t)L_95) >= ((int32_t)L_96)))
		{
			goto IL_02b7;
		}
	}
	{
		int32_t L_97 = ___start0;
		int32_t L_98 = (int32_t)(&V_0)->get_first_1();
		int32_t L_99 = ((  int32_t (*) (IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 *)__this, (int32_t)L_97, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_98, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		(&V_0)->set_left_3(L_99);
	}

IL_02b7:
	{
		int32_t L_100 = ___end1;
		int32_t L_101 = (int32_t)(&V_0)->get_last_2();
		if ((((int32_t)L_100) <= ((int32_t)L_101)))
		{
			goto IL_02db;
		}
	}
	{
		int32_t L_102 = (int32_t)(&V_0)->get_last_2();
		int32_t L_103 = ___end1;
		int32_t L_104 = ((  int32_t (*) (IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((IntervalTree_1_tC5BBA69ADB08BB2363A7F9CDDA18E2DA9DBB5C81 *)__this, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_102, (int32_t)1)), (int32_t)L_103, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		(&V_0)->set_right_4(L_104);
	}

IL_02db:
	{
		List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F * L_105 = (List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F *)__this->get_m_Nodes_4();
		int32_t L_106 = V_19;
		IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69  L_107 = V_0;
		List_1_set_Item_mF9887A59F0C3EADF8AFB206F77CDA7023E5ECCE0((List_1_tC8317187490E4FED230DE4FC55D5B0A43153AA3F *)L_105, (int32_t)L_106, (IntervalTreeNode_tD46EF8D3E512DEB0BEB3C92FBDBCA550D4BA9E69 )L_107, /*hidden argument*/List_1_set_Item_mF9887A59F0C3EADF8AFB206F77CDA7023E5ECCE0_RuntimeMethod_var);
		int32_t L_108 = V_19;
		V_3 = (int32_t)L_108;
		goto IL_02f1;
	}

IL_02f1:
	{
		int32_t L_109 = V_3;
		return L_109;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Playables.ScriptPlayable`1<System.Object>::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void ScriptPlayable_1__ctor_mE48F064F653E626EF44A1629FC97AB40C3896648_gshared (ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptPlayable_1__ctor_mE48F064F653E626EF44A1629FC97AB40C3896648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_1, /*hidden argument*/NULL);
		Type_t * L_3 = PlayableHandle_GetPlayableType_m962BE384C093FF07EAF156DA373806C2D6EF1AD1((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		bool L_4 = VirtFuncInvoker1< bool, Type_t * >::Invoke(106 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_2, (Type_t *)L_3);
		if (L_4)
		{
			goto IL_004a;
		}
	}
	{
		Type_t * L_5 = PlayableHandle_GetPlayableType_m962BE384C093FF07EAF156DA373806C2D6EF1AD1((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_6, /*hidden argument*/NULL);
		String_t* L_8 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A((String_t*)_stringLiteral6E7F1D4313DB18F6DB79C6CEABD99B7C7F59D3FB, (RuntimeObject *)L_5, (RuntimeObject *)L_7, /*hidden argument*/NULL);
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_9 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_9, (String_t*)L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, ScriptPlayable_1__ctor_mE48F064F653E626EF44A1629FC97AB40C3896648_RuntimeMethod_var);
	}

IL_004a:
	{
	}

IL_004b:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_10 = ___handle0;
		__this->set_m_Handle_0(L_10);
		return;
	}
}
extern "C"  void ScriptPlayable_1__ctor_mE48F064F653E626EF44A1629FC97AB40C3896648_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C * _thisAdjusted = reinterpret_cast<ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C *>(__this + 1);
	ScriptPlayable_1__ctor_mE48F064F653E626EF44A1629FC97AB40C3896648(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<System.Object>::get_Null()
extern "C" IL2CPP_METHOD_ATTR ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C  ScriptPlayable_1_get_Null_mAFC901E9F464A16A22EE4BDD5470DE0E294271EC_gshared (const RuntimeMethod* method)
{
	ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C  L_0 = ((ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_m_NullPlayable_1();
		V_0 = (ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C )L_0;
		goto IL_000c;
	}

IL_000c:
	{
		ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<System.Object>::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C  ScriptPlayable_1_Create_m4F781155CDFCC71153CAF5A6105F6E0BE935EB37_gshared (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, int32_t ___inputCount1, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset(&V_0, 0, sizeof(V_0));
	ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_0 = ___graph0;
		int32_t L_1 = ___inputCount1;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_2 = ((  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  (*) (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA , RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA )L_0, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)NULL, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 2))), (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_2;
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_3 = V_0;
		ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C  L_4;
		memset(&L_4, 0, sizeof(L_4));
		ScriptPlayable_1__ctor_mE48F064F653E626EF44A1629FC97AB40C3896648((&L_4), (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_1 = (ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C )L_4;
		goto IL_001b;
	}

IL_001b:
	{
		ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C  L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<System.Object>::Create(UnityEngine.Playables.PlayableGraph,T,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C  ScriptPlayable_1_Create_mB14A0CD24A86BE1A7B76EEB74E60D80D55AB5D1B_gshared (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, RuntimeObject * ___template1, int32_t ___inputCount2, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset(&V_0, 0, sizeof(V_0));
	ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_0 = ___graph0;
		RuntimeObject * L_1 = ___template1;
		int32_t L_2 = ___inputCount2;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_3 = ((  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  (*) (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA , RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA )L_0, (RuntimeObject *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_3;
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_4 = V_0;
		ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C  L_5;
		memset(&L_5, 0, sizeof(L_5));
		ScriptPlayable_1__ctor_mE48F064F653E626EF44A1629FC97AB40C3896648((&L_5), (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_1 = (ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C )L_5;
		goto IL_0016;
	}

IL_0016:
	{
		ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C  L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1<System.Object>::CreateHandle(UnityEngine.Playables.PlayableGraph,T,System.Int32)
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ScriptPlayable_1_CreateHandle_mF3A8AFE758710C0BCF9D74BF6BC7EA16D90C262A_gshared (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, RuntimeObject * ___template1, int32_t ___inputCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptPlayable_1_CreateHandle_mF3A8AFE758710C0BCF9D74BF6BC7EA16D90C262A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_1;
	memset(&V_1, 0, sizeof(V_1));
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		V_0 = (RuntimeObject *)NULL;
		RuntimeObject * L_0 = ___template1;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		V_0 = (RuntimeObject *)L_1;
		goto IL_0029;
	}

IL_001b:
	{
		RuntimeObject * L_2 = ___template1;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		V_0 = (RuntimeObject *)L_3;
	}

IL_0029:
	{
		RuntimeObject * L_4 = V_0;
		if (L_4)
		{
			goto IL_0059;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_5 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_5, /*hidden argument*/NULL);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_6);
		String_t* L_8 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE((String_t*)_stringLiteral03610397B10FD1D4F9813C1618E587023F172685, (String_t*)L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_9 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		V_1 = (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_9;
		goto IL_008f;
	}

IL_0059:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_10 = PlayableGraph_CreatePlayableHandle_m76B85CFBF25E71838C5F32AB29BC4F26C891D92C((PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *)(PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *)(&___graph0), /*hidden argument*/NULL);
		V_2 = (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_10;
		bool L_11 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&V_2), /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0078;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_12 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		V_1 = (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_12;
		goto IL_008f;
	}

IL_0078:
	{
		int32_t L_13 = ___inputCount2;
		PlayableHandle_SetInputCount_m49435B8578BD74EB205D70348E63D4F92FB4FF69((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&V_2), (int32_t)L_13, /*hidden argument*/NULL);
		RuntimeObject * L_14 = V_0;
		PlayableHandle_SetScriptInstance_mFF8C477ADCE7BAF1F6300DE02CB537B999A0F740((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&V_2), (RuntimeObject *)L_14, /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_15 = V_2;
		V_1 = (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_15;
		goto IL_008f;
	}

IL_008f:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_16 = V_1;
		return L_16;
	}
}
// System.Object UnityEngine.Playables.ScriptPlayable`1<System.Object>::CreateScriptInstance()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ScriptPlayable_1_CreateScriptInstance_mD1FED4EC532337B9139DEECE32E0633FA7C5A180_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptPlayable_1_CreateScriptInstance_mD1FED4EC532337B9139DEECE32E0633FA7C5A180_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		V_0 = (RuntimeObject*)NULL;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		bool L_4 = VirtFuncInvoker1< bool, Type_t * >::Invoke(106 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_1, (Type_t *)L_3);
		if (!L_4)
		{
			goto IL_004a;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_5 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_5, /*hidden argument*/NULL);
		ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * L_7 = ScriptableObject_CreateInstance_mDC77B7257A5E276CB272D3475B9B473B23A7128D((Type_t *)L_6, /*hidden argument*/NULL);
		V_0 = (RuntimeObject*)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 2))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 2)));
		goto IL_0055;
	}

IL_004a:
	{
		RuntimeObject * L_8 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		V_0 = (RuntimeObject*)L_8;
	}

IL_0055:
	{
		RuntimeObject* L_9 = V_0;
		V_1 = (RuntimeObject *)L_9;
		goto IL_005c;
	}

IL_005c:
	{
		RuntimeObject * L_10 = V_1;
		return L_10;
	}
}
// System.Object UnityEngine.Playables.ScriptPlayable`1<System.Object>::CloneScriptInstance(UnityEngine.Playables.IPlayableBehaviour)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ScriptPlayable_1_CloneScriptInstance_m1A625CA1BB813C13370613C09BE72E7B68836296_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptPlayable_1_CloneScriptInstance_m1A625CA1BB813C13370613C09BE72E7B68836296_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		V_0 = (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)IsInst((RuntimeObject*)L_0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var));
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9)->methodPointer)((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		V_1 = (RuntimeObject *)L_4;
		goto IL_0040;
	}

IL_0020:
	{
		RuntimeObject* L_5 = ___source0;
		V_2 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_5, ICloneable_tB0EF2757D90DF969033D641822566814815EB134_il2cpp_TypeInfo_var));
		RuntimeObject* L_6 = V_2;
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_7 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		RuntimeObject * L_8 = ((  RuntimeObject * (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10)->methodPointer)((RuntimeObject*)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_1 = (RuntimeObject *)L_8;
		goto IL_0040;
	}

IL_0039:
	{
		V_1 = (RuntimeObject *)NULL;
		goto IL_0040;
	}

IL_0040:
	{
		RuntimeObject * L_9 = V_1;
		return L_9;
	}
}
// System.Object UnityEngine.Playables.ScriptPlayable`1<System.Object>::CloneScriptInstanceFromEngineObject(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ScriptPlayable_1_CloneScriptInstanceFromEngineObject_m54480F28193A91630B99395F7D0D8E0BCEBF2686_gshared (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptPlayable_1_CloneScriptInstanceFromEngineObject_m54480F28193A91630B99395F7D0D8E0BCEBF2686_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_0 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_1 = Object_Instantiate_m17AA3123A55239124BC54A907AEEE509034F0830((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, /*hidden argument*/NULL);
		V_0 = (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_1;
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_2 = V_0;
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_4 = V_0;
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_5 = (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_4;
		int32_t L_6 = Object_get_hideFlags_mCC5D0A1480AC0CDA190A63120B39C2C531428FC8((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_5, /*hidden argument*/NULL);
		Object_set_hideFlags_mB0B45A19A5871EF407D7B09E0EB76003496BA4F0((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_5, (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)52))), /*hidden argument*/NULL);
	}

IL_0025:
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_7 = V_0;
		V_1 = (RuntimeObject *)L_7;
		goto IL_002c;
	}

IL_002c:
	{
		RuntimeObject * L_8 = V_1;
		return L_8;
	}
}
// System.Object UnityEngine.Playables.ScriptPlayable`1<System.Object>::CloneScriptInstanceFromIClonable(System.ICloneable)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ScriptPlayable_1_CloneScriptInstanceFromIClonable_mD834410040DDFC50A7BCA39928E7835D9ECCD5A5_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptPlayable_1_CloneScriptInstanceFromIClonable_mD834410040DDFC50A7BCA39928E7835D9ECCD5A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		RuntimeObject * L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.ICloneable::Clone() */, ICloneable_tB0EF2757D90DF969033D641822566814815EB134_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		V_0 = (RuntimeObject *)L_1;
		goto IL_000d;
	}

IL_000d:
	{
		RuntimeObject * L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ScriptPlayable_1_GetHandle_m91905E1AA49E71057252168DD130DE0D1B7698EF_gshared (ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )__this->get_m_Handle_0();
		V_0 = (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ScriptPlayable_1_GetHandle_m91905E1AA49E71057252168DD130DE0D1B7698EF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C * _thisAdjusted = reinterpret_cast<ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C *>(__this + 1);
	return ScriptPlayable_1_GetHandle_m91905E1AA49E71057252168DD130DE0D1B7698EF(_thisAdjusted, method);
}
// T UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetBehaviour()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ScriptPlayable_1_GetBehaviour_m1E2C5997E676EE48F0775633B1C92C46CBA3802E_gshared (ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_0 = (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)__this->get_address_of_m_Handle_0();
		RuntimeObject * L_1 = PlayableHandle_GetObject_TisRuntimeObject_mD3D4D5F15ED728247693C75E83EB358B8B55BDFF((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		V_0 = (RuntimeObject *)L_1;
		goto IL_0012;
	}

IL_0012:
	{
		RuntimeObject * L_2 = V_0;
		return L_2;
	}
}
extern "C"  RuntimeObject * ScriptPlayable_1_GetBehaviour_m1E2C5997E676EE48F0775633B1C92C46CBA3802E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C * _thisAdjusted = reinterpret_cast<ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C *>(__this + 1);
	return ScriptPlayable_1_GetBehaviour_m1E2C5997E676EE48F0775633B1C92C46CBA3802E(_thisAdjusted, method);
}
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<System.Object>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<T>)
extern "C" IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ScriptPlayable_1_op_Implicit_m11133FAA80C75A3975BC5A32D9A6517CDB086FA8_gshared (ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C  ___playable0, const RuntimeMethod* method)
{
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = ScriptPlayable_1_GetHandle_m91905E1AA49E71057252168DD130DE0D1B7698EF((ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C *)(ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C *)(&___playable0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Playable__ctor_m24C6ED455A921F585698BFFEC5CCED397205543E((&L_1), (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_0, /*hidden argument*/NULL);
		V_0 = (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 )L_1;
		goto IL_0013;
	}

IL_0013:
	{
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<System.Object>::op_Explicit(UnityEngine.Playables.Playable)
extern "C" IL2CPP_METHOD_ATTR ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C  ScriptPlayable_1_op_Explicit_m8164D46EB091E8DC3F521E6A747A5FCCE5C5D9DF_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, const RuntimeMethod* method)
{
	ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = Playable_GetHandle_m952F17BACFC90BEACD3CB9880E65E69B3271108A((Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 *)(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 *)(&___playable0), /*hidden argument*/NULL);
		ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C  L_1;
		memset(&L_1, 0, sizeof(L_1));
		ScriptPlayable_1__ctor_mE48F064F653E626EF44A1629FC97AB40C3896648((&L_1), (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C )L_1;
		goto IL_0013;
	}

IL_0013:
	{
		ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C  L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Playables.ScriptPlayable`1<System.Object>::Equals(UnityEngine.Playables.ScriptPlayable`1<T>)
extern "C" IL2CPP_METHOD_ATTR bool ScriptPlayable_1_Equals_mEC9B601B576756D27895555A2402771172AED97F_gshared (ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C * __this, ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptPlayable_1_Equals_mEC9B601B576756D27895555A2402771172AED97F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = ScriptPlayable_1_GetHandle_m91905E1AA49E71057252168DD130DE0D1B7698EF((ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C *)(ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = ScriptPlayable_1_GetHandle_m91905E1AA49E71057252168DD130DE0D1B7698EF((ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C *)(ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C *)(&___other0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		bool L_2 = PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_0, (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool ScriptPlayable_1_Equals_mEC9B601B576756D27895555A2402771172AED97F_AdjustorThunk (RuntimeObject * __this, ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C  ___other0, const RuntimeMethod* method)
{
	ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C * _thisAdjusted = reinterpret_cast<ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C *>(__this + 1);
	return ScriptPlayable_1_Equals_mEC9B601B576756D27895555A2402771172AED97F(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Playables.ScriptPlayable`1<System.Object>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ScriptPlayable_1__cctor_mBD14994A6A539555759436490FCDCF3217A000DA_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptPlayable_1__cctor_mBD14994A6A539555759436490FCDCF3217A000DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C  L_1;
		memset(&L_1, 0, sizeof(L_1));
		ScriptPlayable_1__ctor_mE48F064F653E626EF44A1629FC97AB40C3896648((&L_1), (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((ScriptPlayable_1_tEAB1DC87CB3840DD8A22CDCA4E4293C7A902769C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_m_NullPlayable_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_mAA346EC004EB953B23D401F904E1DCD1F8A95E1C_gshared (ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		((  void (*) (ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 *, bool, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 *)__this, (bool)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_mB0A7025F06D521DEB8121B1D4FD220045FD86BEA_gshared (ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		((  void (*) (ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 *, bool, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 *)__this, (bool)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::.ctor(T,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_mE15DED1F238A0659C132DC0ACC73551693DEF1EE_gshared (ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 * __this, bool ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		ParameterOverride__ctor_mD26EB073FB5FEB4E4B7BD0B1B85BC2A340C3FDB5((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this, /*hidden argument*/NULL);
		bool L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m02C13B6B828EC708D614DE705E9F91F9405F5238_gshared (ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___from0, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___from0;
		bool L_1 = ((  bool (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_2 = ___to1;
		bool L_3 = ((  bool (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		VirtActionInvoker3< bool, bool, float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::Interp(T,T,System.Single) */, (ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 *)__this, (bool)L_1, (bool)L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::Interp(T,T,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m59B8F7EBE8A8DDD4A84614A2DAEE476123FC5C5A_gshared (ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 * __this, bool ___from0, bool ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 * G_B2_0 = NULL;
	ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 * G_B1_0 = NULL;
	bool G_B3_0 = false;
	ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 *)(__this));
			goto IL_000c;
		}
	}
	{
		bool L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		bool L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 *)(G_B2_0));
	}

IL_000d:
	{
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::Override(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m4C57ADC19DA020AD10665020EE6EF7B9240729D1_gshared (ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 * __this, bool ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0((bool)1);
		bool L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m96E4B4EB713B522F5DA852C117406975FCEC9D65_gshared (ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___parameter0;
		bool L_1 = ((  bool (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::GetHash()
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_mD0FC7126DA202593B67D437DD0C7027CE94E0F67_gshared (ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 * __this, const RuntimeMethod* method)
{
	{
		bool* L_0 = (bool*)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->get_address_of_overrideState_0();
		int32_t L_1 = Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737((bool*)(bool*)L_0, /*hidden argument*/NULL);
		bool* L_2 = (bool*)__this->get_address_of_value_1();
		int32_t L_3 = Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737((bool*)(bool*)L_2, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)17), (int32_t)((int32_t)23))), (int32_t)L_1)), (int32_t)((int32_t)23))), (int32_t)L_3));
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Boolean>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
extern "C" IL2CPP_METHOD_ATTR bool ParameterOverride_1_op_Implicit_m1269D07F55F12D0915DD698417D9958DE10AFA21_gshared (ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_tECB2AD0C0B446C9F4AA4B66E0D73CAC2BBA01CC6 * L_0 = ___prop0;
		bool L_1 = (bool)L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m8E047C5B80F13D2E54ACA4935DBB59B585ACC107_gshared (ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		((  void (*) (ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 *)__this, (int32_t)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m2CF1B0C43A06FE0CD2F7F69D8518EFA991CD2C93_gshared (ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		((  void (*) (ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 *)__this, (int32_t)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>::.ctor(T,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_mB65A414F7B3CA9558B9BF10DED47DE3CA1A8DE49_gshared (ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 * __this, int32_t ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		ParameterOverride__ctor_mD26EB073FB5FEB4E4B7BD0B1B85BC2A340C3FDB5((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m81F4AE487590BA9AE699DA1034633F94F3257174_gshared (ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___from0, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___from0;
		int32_t L_1 = ((  int32_t (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_2 = ___to1;
		int32_t L_3 = ((  int32_t (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		VirtActionInvoker3< int32_t, int32_t, float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>::Interp(T,T,System.Single) */, (ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 *)__this, (int32_t)L_1, (int32_t)L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>::Interp(T,T,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m66534A9EA7E5D3CE81A4432B4236430668F6DCC9_gshared (ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 * __this, int32_t ___from0, int32_t ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 * G_B2_0 = NULL;
	ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 *)(__this));
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		int32_t L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 *)(G_B2_0));
	}

IL_000d:
	{
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>::Override(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m0A62741580F6CEE167988B0B252A928561A6B679_gshared (ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 * __this, int32_t ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0((bool)1);
		int32_t L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m676825DF9C6F48119C83EBC361B48C3316B39346_gshared (ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___parameter0;
		int32_t L_1 = ((  int32_t (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>::GetHash()
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_m2A973317E9D8DF4F153D436BBF1293236F1BBB29_gshared (ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 * __this, const RuntimeMethod* method)
{
	{
		bool* L_0 = (bool*)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->get_address_of_overrideState_0();
		int32_t L_1 = Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737((bool*)(bool*)L_0, /*hidden argument*/NULL);
		int32_t* L_2 = (int32_t*)__this->get_address_of_value_1();
		int32_t L_3 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)(int32_t*)L_2, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)17), (int32_t)((int32_t)23))), (int32_t)L_1)), (int32_t)((int32_t)23))), (int32_t)L_3));
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_op_Implicit_m7E2967C6BB9316039A80BDDE7ED48436F5A7D2CA_gshared (ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_tCA59D4139538E8FC2941AC309044DBF9FA1E0450 * L_0 = ___prop0;
		int32_t L_1 = (int32_t)L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32Enum>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m16A64756F4E1854F9ED4CDC64030FC1090168227_gshared (ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		((  void (*) (ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 *)__this, (int32_t)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32Enum>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m4B3427E32572FB74B20CADE488A9BE187DF8C1C1_gshared (ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		((  void (*) (ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 *)__this, (int32_t)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32Enum>::.ctor(T,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m9FCE9F943178F50D3BA6AD6306093AC892D2AD6C_gshared (ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 * __this, int32_t ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		ParameterOverride__ctor_mD26EB073FB5FEB4E4B7BD0B1B85BC2A340C3FDB5((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32Enum>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m79F2C2119345B7A4BA49BAF57D4BACDB5CEA6F2E_gshared (ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___from0, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___from0;
		int32_t L_1 = ((  int32_t (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_2 = ___to1;
		int32_t L_3 = ((  int32_t (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		VirtActionInvoker3< int32_t, int32_t, float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32Enum>::Interp(T,T,System.Single) */, (ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 *)__this, (int32_t)L_1, (int32_t)L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32Enum>::Interp(T,T,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m83C31D5ABE907A59CF7B2CCBD75712B88508ECCA_gshared (ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 * __this, int32_t ___from0, int32_t ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 * G_B2_0 = NULL;
	ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 *)(__this));
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		int32_t L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 *)(G_B2_0));
	}

IL_000d:
	{
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32Enum>::Override(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m61C46CCB244EA41F308166A0A737A36C2B63293F_gshared (ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 * __this, int32_t ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0((bool)1);
		int32_t L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32Enum>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m324FEBBF43CC3D9536ABAFB69B5E7B0E23A4F7CE_gshared (ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___parameter0;
		int32_t L_1 = ((  int32_t (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32Enum>::GetHash()
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_mA2CB37B92AC94BA586CD5B2C927E76D68190FDA4_gshared (ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 * __this, const RuntimeMethod* method)
{
	{
		bool* L_0 = (bool*)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->get_address_of_overrideState_0();
		int32_t L_1 = Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737((bool*)(bool*)L_0, /*hidden argument*/NULL);
		int32_t* L_2 = (int32_t*)__this->get_address_of_value_1();
		Il2CppFakeBox<int32_t> L_3(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3), L_2);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(&L_3));
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)17), (int32_t)((int32_t)23))), (int32_t)L_1)), (int32_t)((int32_t)23))), (int32_t)L_4));
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Int32Enum>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_op_Implicit_mD4EA59DC6E07A72F8237455B78B9E10BC0BDE6DD_gshared (ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_t2DBC76B300810F8C7D698F79A7B01750F5E2BA56 * L_0 = ___prop0;
		int32_t L_1 = (int32_t)L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_mAE41CCE5AD56DD153CD6736D273FF31CD5CEB91C_gshared (ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_0 = V_0;
		((  void (*) (ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C *, RuntimeObject *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C *)__this, (RuntimeObject *)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_mF41BA475111965CFD64598F3CC08841974EA45B5_gshared (ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		((  void (*) (ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C *, RuntimeObject *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C *)__this, (RuntimeObject *)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::.ctor(T,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_mB783969AB2631B0ACA42E70FFEC983BF6D3C16A3_gshared (ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C * __this, RuntimeObject * ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		ParameterOverride__ctor_mD26EB073FB5FEB4E4B7BD0B1B85BC2A340C3FDB5((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m3552435CAB29115A327A8B38BD94B390943F2EE1_gshared (ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___from0, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___from0;
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_2 = ___to1;
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::Interp(T,T,System.Single) */, (ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C *)__this, (RuntimeObject *)L_1, (RuntimeObject *)L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::Interp(T,T,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_mD17579C3EC593D9C2FD25F552393347469476115_gshared (ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C * __this, RuntimeObject * ___from0, RuntimeObject * ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C * G_B2_0 = NULL;
	ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C * G_B1_0 = NULL;
	RuntimeObject * G_B3_0 = NULL;
	ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C *)(__this));
			goto IL_000c;
		}
	}
	{
		RuntimeObject * L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		RuntimeObject * L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C *)(G_B2_0));
	}

IL_000d:
	{
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::Override(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m13A07BF1A7E39EAD38DD9823CE7372A5FF5648B3_gshared (ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C * __this, RuntimeObject * ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0((bool)1);
		RuntimeObject * L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m6AFC66A7560BC2326FBDAF67233E33D67B022688_gshared (ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___parameter0;
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::GetHash()
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_m845A37FC5E34DEB2F3195AAEDD6C489DF2DE8DB8_gshared (ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C * __this, const RuntimeMethod* method)
{
	{
		bool* L_0 = (bool*)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->get_address_of_overrideState_0();
		int32_t L_1 = Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737((bool*)(bool*)L_0, /*hidden argument*/NULL);
		RuntimeObject ** L_2 = (RuntimeObject **)__this->get_address_of_value_1();
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*L_2));
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)17), (int32_t)((int32_t)23))), (int32_t)L_1)), (int32_t)((int32_t)23))), (int32_t)L_3));
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Object>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ParameterOverride_1_op_Implicit_m9A02D2527CB4A9047399A7358633FB9478B48E04_gshared (ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_t66EFC0CF7C9081B4132F0F5C5F6E2D10727A5D2C * L_0 = ___prop0;
		RuntimeObject * L_1 = (RuntimeObject *)L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m6C1FFA885D90B7708A867B296A7C39978AEEEBD5_gshared (ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		float L_0 = V_0;
		((  void (*) (ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE *, float, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE *)__this, (float)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m4F30F9846612DD6A9D5ECAB22C9FE045907B5E0C_gshared (ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		((  void (*) (ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE *, float, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE *)__this, (float)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>::.ctor(T,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m0B958EA3CBB3175BFD89CC3F634E4E67DC81D5AF_gshared (ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE * __this, float ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		ParameterOverride__ctor_mD26EB073FB5FEB4E4B7BD0B1B85BC2A340C3FDB5((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this, /*hidden argument*/NULL);
		float L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m49EB00104BBE9395BB42026DB32853F1C6C0BA24_gshared (ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___from0, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___from0;
		float L_1 = ((  float (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_2 = ___to1;
		float L_3 = ((  float (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		VirtActionInvoker3< float, float, float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>::Interp(T,T,System.Single) */, (ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE *)__this, (float)L_1, (float)L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>::Interp(T,T,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_mE696D86FF50566CD687ECCC3ACF6BACC586C6A38_gshared (ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE * __this, float ___from0, float ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE * G_B2_0 = NULL;
	ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE *)(__this));
			goto IL_000c;
		}
	}
	{
		float L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		float L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE *)(G_B2_0));
	}

IL_000d:
	{
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>::Override(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m08BA419802CB4AB9C75A2C500F0CA8210A0A53D0_gshared (ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE * __this, float ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0((bool)1);
		float L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_mDDE042AD314273B20C25FC851968E407509E9140_gshared (ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___parameter0;
		float L_1 = ((  float (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>::GetHash()
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_m3E00660AD72A0FB3ACEAB5846A103AB32195A952_gshared (ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE * __this, const RuntimeMethod* method)
{
	{
		bool* L_0 = (bool*)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->get_address_of_overrideState_0();
		int32_t L_1 = Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737((bool*)(bool*)L_0, /*hidden argument*/NULL);
		float* L_2 = (float*)__this->get_address_of_value_1();
		int32_t L_3 = Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0((float*)(float*)L_2, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)17), (int32_t)((int32_t)23))), (int32_t)L_1)), (int32_t)((int32_t)23))), (int32_t)L_3));
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<System.Single>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
extern "C" IL2CPP_METHOD_ATTR float ParameterOverride_1_op_Implicit_m67F993680878E3092D8F528CA054A4BB22BBE50C_gshared (ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_t7307FE515ABA95AF185F2BA4860246F5FE87B4CE * L_0 = ___prop0;
		float L_1 = (float)L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m19481E4591A0F4267054F5D631D87A5312E7DCAB_gshared (ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E * __this, const RuntimeMethod* method)
{
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 ));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = V_0;
		((  void (*) (ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E *)__this, (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_mED6B2C6E9DD528F84C49E911EED5CC9C4CF6EB42_gshared (ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, const RuntimeMethod* method)
{
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = ___value0;
		((  void (*) (ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E *)__this, (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>::.ctor(T,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m5CCA25516545DBD38C239B15E922D96223904022_gshared (ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		ParameterOverride__ctor_mD26EB073FB5FEB4E4B7BD0B1B85BC2A340C3FDB5((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m3962CCBE9FBC71F233BF90E7033A5D55094F6014_gshared (ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___from0, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___from0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1 = ((  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_2 = ___to1;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_3 = ((  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		VirtActionInvoker3< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 , Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 , float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>::Interp(T,T,System.Single) */, (ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E *)__this, (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 )L_1, (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 )L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>::Interp(T,T,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m7DD9A43E41490E8F501B0574B30FE5A9C5FA17E8_gshared (ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___from0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E * G_B2_0 = NULL;
	ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E * G_B1_0 = NULL;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E *)(__this));
			goto IL_000c;
		}
	}
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E *)(G_B2_0));
	}

IL_000d:
	{
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>::Override(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_mC4118013014EBA7EE55691B6C127C167C680AABA_gshared (ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0((bool)1);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m9E776D4ED0CBCCD4404AF7A07B9983D58F347791_gshared (ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___parameter0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1 = ((  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>::GetHash()
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_m73D3D89078413E5D4F88D7DA9B6BD3D3AA544511_gshared (ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E * __this, const RuntimeMethod* method)
{
	{
		bool* L_0 = (bool*)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->get_address_of_overrideState_0();
		int32_t L_1 = Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737((bool*)(bool*)L_0, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * L_2 = (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *)__this->get_address_of_value_1();
		int32_t L_3 = Color_GetHashCode_m88317C719D2DAA18E293B3F5CD17B9FB80E26CF1((Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *)(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *)L_2, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)17), (int32_t)((int32_t)23))), (int32_t)L_1)), (int32_t)((int32_t)23))), (int32_t)L_3));
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Color>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ParameterOverride_1_op_Implicit_m6B1AFE960A15A5AF75CB1261D3FEDB434D9F7084_gshared (ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_t23F21A3C4BDF3D75D33F5E24B8462A2A7376387E * L_0 = ___prop0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1 = (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 )L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_mB89ADF64EEDFC7EB62C2825CB76F7287CEE66A6C_gshared (ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 * __this, const RuntimeMethod* method)
{
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D ));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = V_0;
		((  void (*) (ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 *)__this, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m08170D6772D4B5CC02BB384D1077D137FDA53400_gshared (ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		((  void (*) (ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 *)__this, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::.ctor(T,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_mF158AFF8BFB6A550316F4EBC1B87D04DA0844400_gshared (ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		ParameterOverride__ctor_mD26EB073FB5FEB4E4B7BD0B1B85BC2A340C3FDB5((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_mB0643E5CD3185445FB5FFBDA2F6FC04F964AB5C0_gshared (ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___from0, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___from0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ((  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_2 = ___to1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = ((  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		VirtActionInvoker3< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::Interp(T,T,System.Single) */, (ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 *)__this, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_1, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::Interp(T,T,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_mAE24FD4599ACFEC7401D39FD0A700DB811BD4917_gshared (ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___from0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 * G_B2_0 = NULL;
	ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 * G_B1_0 = NULL;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 *)(__this));
			goto IL_000c;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 *)(G_B2_0));
	}

IL_000d:
	{
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::Override(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m81AD71E57CAA9D9D50FC8638BB1E912B3CAA1528_gshared (ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0((bool)1);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_mFFDCD899567244F8C163AF9DD40C698D68D8A2C7_gshared (ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___parameter0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ((  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::GetHash()
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_mE7CCDB17C769CD850BFAC1618EDC8DB437B42894_gshared (ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 * __this, const RuntimeMethod* method)
{
	{
		bool* L_0 = (bool*)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->get_address_of_overrideState_0();
		int32_t L_1 = Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737((bool*)(bool*)L_0, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_2 = (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)__this->get_address_of_value_1();
		int32_t L_3 = Vector2_GetHashCode_m028AB6B14EBC6D668CFA45BF6EDEF17E2C44EA54((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_2, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)17), (int32_t)((int32_t)23))), (int32_t)L_1)), (int32_t)((int32_t)23))), (int32_t)L_3));
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector2>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ParameterOverride_1_op_Implicit_m98B21094BBB9F286E6886204F14333CDA9E9FC30_gshared (ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_tED4B89A13ADA28A3E8CFEDF351B518B2F91E1004 * L_0 = ___prop0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m21CC957C6A31818500B7779C682F6FAE34B22322_gshared (ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 ));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = V_0;
		((  void (*) (ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 *)__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m54AA95AE858C2CB17F9A3FF82B008655EACEC63A_gshared (ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		((  void (*) (ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 *)__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::.ctor(T,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m3BB354E4F907C38174529F59CB85DBED66823F9E_gshared (ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		ParameterOverride__ctor_mD26EB073FB5FEB4E4B7BD0B1B85BC2A340C3FDB5((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m5F331D329561D492C695658404865DE68A7CE4AC_gshared (ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___from0, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___from0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ((  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_2 = ___to1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ((  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		VirtActionInvoker3< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::Interp(T,T,System.Single) */, (ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 *)__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_1, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::Interp(T,T,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m334BC661A344965880F27F6BF149BAE44EA90350_gshared (ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___from0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 * G_B2_0 = NULL;
	ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 * G_B1_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 *)(__this));
			goto IL_000c;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 *)(G_B2_0));
	}

IL_000d:
	{
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::Override(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m49BAC5BA999B9D04ADD0540B7D8A7BAB2A17FAA0_gshared (ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0((bool)1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m113295C949A96F3207A718663C4022411E0E43FA_gshared (ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___parameter0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ((  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::GetHash()
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_m01D9940D366941C8DE032C0B8391ED1BBEFD3D18_gshared (ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 * __this, const RuntimeMethod* method)
{
	{
		bool* L_0 = (bool*)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->get_address_of_overrideState_0();
		int32_t L_1 = Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737((bool*)(bool*)L_0, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_2 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)__this->get_address_of_value_1();
		int32_t L_3 = Vector3_GetHashCode_m6C42B4F413A489535D180E8A99BE0298AD078B0B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_2, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)17), (int32_t)((int32_t)23))), (int32_t)L_1)), (int32_t)((int32_t)23))), (int32_t)L_3));
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector3>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ParameterOverride_1_op_Implicit_m8D22AB569629A8D290498EB151AC70F461257FD0_gshared (ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_t222B0712F02C58DA0EEDD88C09B3E6FD5E9763B0 * L_0 = ___prop0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_mBFE125F89E91DEAD9A85984002F97A2148AE9CC7_gshared (ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F * __this, const RuntimeMethod* method)
{
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E ));
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = V_0;
		((  void (*) (ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F *, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F *)__this, (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::.ctor(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_m4969141957C3FED60911C67677EB31F7AF22DDF3_gshared (ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___value0, const RuntimeMethod* method)
{
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = ___value0;
		((  void (*) (ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F *, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F *)__this, (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::.ctor(T,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1__ctor_mD70BEAB4E2242DE2E93D301E7A26D1AC78BA493B_gshared (ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		ParameterOverride__ctor_mD26EB073FB5FEB4E4B7BD0B1B85BC2A340C3FDB5((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = ___value0;
		__this->set_value_1(L_0);
		bool L_1 = ___overrideState1;
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::Interp(UnityEngine.Rendering.PostProcessing.ParameterOverride,UnityEngine.Rendering.PostProcessing.ParameterOverride,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m6D9FAC01A3884DB1E4E2849F4375C560C1A181EF_gshared (ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___from0, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___from0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_1 = ((  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_2 = ___to1;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_3 = ((  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		VirtActionInvoker3< Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E , Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E , float >::Invoke(9 /* System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::Interp(T,T,System.Single) */, (ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F *)__this, (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_1, (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_3, (float)L_4);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::Interp(T,T,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Interp_m52D6439644BFEB0D5D2FCF62D3C335E295F185B8_gshared (ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___from0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___to1, float ___t2, const RuntimeMethod* method)
{
	ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F * G_B2_0 = NULL;
	ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F * G_B1_0 = NULL;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F * G_B3_1 = NULL;
	{
		float L_0 = ___t2;
		G_B1_0 = ((ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F *)(__this));
			goto IL_000c;
		}
	}
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F *)(G_B2_0));
	}

IL_000d:
	{
		G_B3_1->set_value_1(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::Override(T)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_Override_m5A37D0F8D4BDC6857A9F96BA5DC8B254894E9CE5_gshared (ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___x0, const RuntimeMethod* method)
{
	{
		((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->set_overrideState_0((bool)1);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = ___x0;
		__this->set_value_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::SetValue(UnityEngine.Rendering.PostProcessing.ParameterOverride)
extern "C" IL2CPP_METHOD_ATTR void ParameterOverride_1_SetValue_m923196CB99E6C8B1462EC7B43468A231DFEF1977_gshared (ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F * __this, ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * ___parameter0, const RuntimeMethod* method)
{
	{
		ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C * L_0 = ___parameter0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_1 = ((  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  (*) (ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_value_1(L_1);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::GetHash()
extern "C" IL2CPP_METHOD_ATTR int32_t ParameterOverride_1_GetHash_mCB0AF2F2C557D514221D7B5CF18411EB155C2FB3_gshared (ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F * __this, const RuntimeMethod* method)
{
	{
		bool* L_0 = (bool*)((ParameterOverride_t2CDE93BD17EF3E2BF3D449A8360002FB60D4F25C *)__this)->get_address_of_overrideState_0();
		int32_t L_1 = Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737((bool*)(bool*)L_0, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * L_2 = (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)__this->get_address_of_value_1();
		int32_t L_3 = Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)L_2, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)17), (int32_t)((int32_t)23))), (int32_t)L_1)), (int32_t)((int32_t)23))), (int32_t)L_3));
	}
}
// T UnityEngine.Rendering.PostProcessing.ParameterOverride`1<UnityEngine.Vector4>::op_Implicit(UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>)
extern "C" IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ParameterOverride_1_op_Implicit_mA88BE6123907CB7EE146907849CC80A1E2118F87_gshared (ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F * ___prop0, const RuntimeMethod* method)
{
	{
		ParameterOverride_1_tA725C89A0A7CBF68BEB3E1B19D91328AFAF9710F * L_0 = ___prop0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_1 = (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_0->get_value_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<System.Object>::get_settings()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PostProcessEffectRenderer_1_get_settings_m729BC10053C01644300F4D04E7FF04AFFACAE8EA_gshared (PostProcessEffectRenderer_1_tF66E329F997B6E2EE53BE40C5CA9541F9D948461 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CsettingsU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<System.Object>::set_settings(T)
extern "C" IL2CPP_METHOD_ATTR void PostProcessEffectRenderer_1_set_settings_m04D632CBF17639C4566443FCE03FB43A2E22192B_gshared (PostProcessEffectRenderer_1_tF66E329F997B6E2EE53BE40C5CA9541F9D948461 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CsettingsU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<System.Object>::SetSettings(UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings)
extern "C" IL2CPP_METHOD_ATTR void PostProcessEffectRenderer_1_SetSettings_m40FC75E10A70B45B72290287DFCC2E3A21CD8823_gshared (PostProcessEffectRenderer_1_tF66E329F997B6E2EE53BE40C5CA9541F9D948461 * __this, PostProcessEffectSettings_tF399FB819B12B3398DDDEF1AAA1FB0685C524042 * ___settings0, const RuntimeMethod* method)
{
	{
		PostProcessEffectSettings_tF399FB819B12B3398DDDEF1AAA1FB0685C524042 * L_0 = ___settings0;
		((  void (*) (PostProcessEffectRenderer_1_tF66E329F997B6E2EE53BE40C5CA9541F9D948461 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((PostProcessEffectRenderer_1_tF66E329F997B6E2EE53BE40C5CA9541F9D948461 *)__this, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PostProcessEffectRenderer_1__ctor_mDC05EE60688A226C857EEF907D1E86086A09D884_gshared (PostProcessEffectRenderer_1_tF66E329F997B6E2EE53BE40C5CA9541F9D948461 * __this, const RuntimeMethod* method)
{
	{
		PostProcessEffectRenderer__ctor_m9D14BDBEBE8F6341D7A99527ADF6D2AF18FA831E((PostProcessEffectRenderer_t4989C38AAABA92A01D597B3B6F25E8BDB63C7A2F *)__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1<System.Object>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CGetAllSceneObjectsU3Ed__79_1__ctor_mE44B38CADE5DA35350972525EA9C6568D2FBEC43_gshared (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1 = Environment_get_CurrentManagedThreadId_m0E897C88355903220B1EC214832F5E815D7C13D1(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1<System.Object>::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CGetAllSceneObjectsU3Ed__79_1_System_IDisposable_Dispose_m1765A43C962651EF463FF39B5F1EBFEAC09C4AB0_gshared (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)__this->get_U3CU3E1__state_0();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		((  void (*) (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		IL2CPP_RESET_LEAVE(0x1A);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CGetAllSceneObjectsU3Ed__79_1_MoveNext_mD7DFF0365B734C2E877BC04AAD255067A4B0BD1F_gshared (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetAllSceneObjectsU3Ed__79_1_MoveNext_mD7DFF0365B734C2E877BC04AAD255067A4B0BD1F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* V_2 = NULL;
	Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  V_3;
	memset(&V_3, 0, sizeof(V_3));
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_6 = NULL;
	RuntimeObject * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = (int32_t)__this->get_U3CU3E1__state_0();
			V_1 = (int32_t)L_0;
			int32_t L_1 = V_1;
			switch (L_1)
			{
				case 0:
				{
					goto IL_0020;
				}
				case 1:
				{
					goto IL_009f;
				}
				case 2:
				{
					goto IL_013a;
				}
			}
		}

IL_0019:
		{
			V_0 = (bool)0;
			goto IL_0178;
		}

IL_0020:
		{
			__this->set_U3CU3E1__state_0((-1));
			Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 * L_2 = (Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 *)il2cpp_codegen_object_new(Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663_il2cpp_TypeInfo_var);
			Queue_1__ctor_m1114B4B3A14520FABE413206AE14D21D88BEA3F8(L_2, /*hidden argument*/Queue_1__ctor_m1114B4B3A14520FABE413206AE14D21D88BEA3F8_RuntimeMethod_var);
			__this->set_U3CqueueU3E5__2_3(L_2);
			Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  L_3 = SceneManager_GetActiveScene_mD583193D329EBF540D8AB8A062681B1C2AB5EA51(/*hidden argument*/NULL);
			V_3 = (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 )L_3;
			GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_4 = Scene_GetRootGameObjects_mC87878438643AF527A7C017B2EC2D133E96A1FC1((Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 *)(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 *)(&V_3), /*hidden argument*/NULL);
			V_2 = (GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520*)L_4;
			GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_5 = V_2;
			__this->set_U3CU3E7__wrap2_4(L_5);
			__this->set_U3CU3E7__wrap3_5(0);
			goto IL_00b4;
		}

IL_0050:
		{
			GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_6 = (GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520*)__this->get_U3CU3E7__wrap2_4();
			int32_t L_7 = (int32_t)__this->get_U3CU3E7__wrap3_5();
			int32_t L_8 = L_7;
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
			V_4 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_9;
			Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 * L_10 = (Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 *)__this->get_U3CqueueU3E5__2_3();
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = V_4;
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_11, /*hidden argument*/NULL);
			Queue_1_Enqueue_m0AE12FFA5BD870C099227186990EA21D30A519F8((Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 *)L_10, (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_12, /*hidden argument*/Queue_1_Enqueue_m0AE12FFA5BD870C099227186990EA21D30A519F8_RuntimeMethod_var);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = V_4;
			RuntimeObject * L_14 = ((  RuntimeObject * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
			V_5 = (RuntimeObject *)L_14;
			RuntimeObject * L_15 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_16 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_15, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_00a6;
			}
		}

IL_0089:
		{
			RuntimeObject * L_17 = V_5;
			__this->set_U3CU3E2__current_1(L_17);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0178;
		}

IL_009f:
		{
			__this->set_U3CU3E1__state_0((-1));
		}

IL_00a6:
		{
			int32_t L_18 = (int32_t)__this->get_U3CU3E7__wrap3_5();
			__this->set_U3CU3E7__wrap3_5(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
		}

IL_00b4:
		{
			int32_t L_19 = (int32_t)__this->get_U3CU3E7__wrap3_5();
			GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_20 = (GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520*)__this->get_U3CU3E7__wrap2_4();
			if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
			{
				goto IL_0050;
			}
		}

IL_00c4:
		{
			__this->set_U3CU3E7__wrap2_4((GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520*)NULL);
			goto IL_015c;
		}

IL_00d0:
		{
			Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 * L_21 = (Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 *)__this->get_U3CqueueU3E5__2_3();
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = Queue_1_Dequeue_m4255117298948764AA48104A50476CB3B1792460((Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 *)L_21, /*hidden argument*/Queue_1_Dequeue_m4255117298948764AA48104A50476CB3B1792460_RuntimeMethod_var);
			RuntimeObject* L_23 = Transform_GetEnumerator_mE98B6C5F644AE362EC1D58C10506327D6A5878FC((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_22, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap4_6(L_23);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0142;
		}

IL_00f0:
		{
			RuntimeObject* L_24 = (RuntimeObject*)__this->get_U3CU3E7__wrap4_6();
			RuntimeObject * L_25 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_24);
			V_6 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)Castclass((RuntimeObject*)L_25, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var));
			Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 * L_26 = (Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 *)__this->get_U3CqueueU3E5__2_3();
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = V_6;
			Queue_1_Enqueue_m0AE12FFA5BD870C099227186990EA21D30A519F8((Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 *)L_26, (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_27, /*hidden argument*/Queue_1_Enqueue_m0AE12FFA5BD870C099227186990EA21D30A519F8_RuntimeMethod_var);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = V_6;
			RuntimeObject * L_29 = ((  RuntimeObject * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_28, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
			V_7 = (RuntimeObject *)L_29;
			RuntimeObject * L_30 = V_7;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_31 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_30, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (!L_31)
			{
				goto IL_0142;
			}
		}

IL_0127:
		{
			RuntimeObject * L_32 = V_7;
			__this->set_U3CU3E2__current_1(L_32);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_0178;
		}

IL_013a:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0142:
		{
			RuntimeObject* L_33 = (RuntimeObject*)__this->get_U3CU3E7__wrap4_6();
			bool L_34 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_33);
			if (L_34)
			{
				goto IL_00f0;
			}
		}

IL_014f:
		{
			((  void (*) (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
			__this->set_U3CU3E7__wrap4_6((RuntimeObject*)NULL);
		}

IL_015c:
		{
			Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 * L_35 = (Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 *)__this->get_U3CqueueU3E5__2_3();
			int32_t L_36 = Queue_1_get_Count_mF0A3AC2F450CF4B0839855F9AE17BD42FF745780((Queue_1_t0D858737B1ED3CBA3DA87A5C9ADF196B66D0D663 *)L_35, /*hidden argument*/Queue_1_get_Count_mF0A3AC2F450CF4B0839855F9AE17BD42FF745780_RuntimeMethod_var);
			if ((((int32_t)L_36) > ((int32_t)0)))
			{
				goto IL_00d0;
			}
		}

IL_016d:
		{
			V_0 = (bool)0;
			goto IL_0178;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0171;
	}

FAULT_0171:
	{ // begin fault (depth: 1)
		((  void (*) (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		IL2CPP_END_FINALLY(369)
	} // end fault
	IL2CPP_CLEANUP(369)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0178:
	{
		bool L_37 = V_0;
		return L_37;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1<System.Object>::<>m__Finally1()
extern "C" IL2CPP_METHOD_ATTR void U3CGetAllSceneObjectsU3Ed__79_1_U3CU3Em__Finally1_mD32F8554130A68103A6C7B99B92FD89D9F0CF03B_gshared (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetAllSceneObjectsU3Ed__79_1_U3CU3Em__Finally1_mD32F8554130A68103A6C7B99B92FD89D9F0CF03B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_U3CU3E7__wrap4_6();
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
	}

IL_001c:
	{
		return;
	}
}
// T UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1<System.Object>::System.Collections.Generic.IEnumerator<T>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CGetAllSceneObjectsU3Ed__79_1_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_mF9602F247B976DA71C335A69996957FE3B7DD243_gshared (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1<System.Object>::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CGetAllSceneObjectsU3Ed__79_1_System_Collections_IEnumerator_Reset_m1C2A1DCB706F27B08B11159413FA1E892C5349C3_gshared (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetAllSceneObjectsU3Ed__79_1_System_Collections_IEnumerator_Reset_m1C2A1DCB706F27B08B11159413FA1E892C5349C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CGetAllSceneObjectsU3Ed__79_1_System_Collections_IEnumerator_Reset_m1C2A1DCB706F27B08B11159413FA1E892C5349C3_RuntimeMethod_var);
	}
}
// System.Object UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CGetAllSceneObjectsU3Ed__79_1_System_Collections_IEnumerator_get_Current_m193D3BC827E4C921D26998AA1833511923023D18_gshared (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllSceneObjectsU3Ed__79_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mAB111CD4F2ED4EDE5D5F91113D12AB6C9341ADB1_gshared (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 * __this, const RuntimeMethod* method)
{
	U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)__this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->get_U3CU3El__initialThreadId_2();
		int32_t L_2 = Environment_get_CurrentManagedThreadId_m0E897C88355903220B1EC214832F5E815D7C13D1(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 *)__this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 * L_3 = (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5));
		((  void (*) (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(L_3, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		V_0 = (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 *)L_3;
	}

IL_0029:
	{
		U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 * L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator UnityEngine.Rendering.PostProcessing.RuntimeUtilities_<GetAllSceneObjects>d__79`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllSceneObjectsU3Ed__79_1_System_Collections_IEnumerable_GetEnumerator_mB6507A4C5D8F92BA5E4F39B295ACE433D49DF989_gshared (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((U3CGetAllSceneObjectsU3Ed__79_1_t8D3D860F6E4735B97CB68958A32FC432E9CE1893 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1__ctor_m33E5E40D7589452C6622EA42AB645EFFD91317FD_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_m_List_0(L_0);
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_1 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		__this->set_m_Dictionary_1(L_1);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_Add_mE6FB99A734735AF9DCDA7D0434A7C293DA91CACE_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		RuntimeObject * L_1 = ___item0;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_2 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_3 = ___item0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_4 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_5 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_2, (RuntimeObject *)L_3, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::AddUnique(T)
extern "C" IL2CPP_METHOD_ATTR bool IndexedSet_1_AddUnique_m2B371DACC4401E3CD2A8CD2918FD2F2D841E3DE1_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_0 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		bool L_2 = ((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0045;
	}

IL_0019:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_3 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		RuntimeObject * L_4 = ___item0;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_5 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_6 = ___item0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_7 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_8 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_5, (RuntimeObject *)L_6, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		V_0 = (bool)1;
		goto IL_0045;
	}

IL_0045:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" IL2CPP_METHOD_ATTR bool IndexedSet_1_Remove_mA046116692D1086C5D4D27B22D62E4B873BFEC72_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = (int32_t)(-1);
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_0 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		bool L_2 = ((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0, (RuntimeObject *)L_1, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_002b;
	}

IL_001d:
	{
		int32_t L_3 = V_0;
		((  void (*) (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		V_1 = (bool)1;
		goto IL_002b;
	}

IL_002b:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IndexedSet_1_GetEnumerator_mF4C9F11991CEDD2323438C82F6EA51984A818B86_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_GetEnumerator_mF4C9F11991CEDD2323438C82F6EA51984A818B86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, IndexedSet_1_GetEnumerator_mF4C9F11991CEDD2323438C82F6EA51984A818B86_RuntimeMethod_var);
	}
}
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m4152E88062B65E51FC32FFC79B1DD8B578BA0E14_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_0 = (RuntimeObject*)L_0;
		goto IL_000d;
	}

IL_000d:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_Clear_m5B4F2E776B9F4FA13EC83D6F24D995FDD6F20026_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_1 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" IL2CPP_METHOD_ATTR bool IndexedSet_1_Contains_m817CE7F84886FC85A53177240C1D28EE23F079DC_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_0 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		bool L_2 = ((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		V_0 = (bool)L_2;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_CopyTo_m6D6DDEFA60C24E6FDE7F623056962571404EE890_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		return;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t IndexedSet_1_get_Count_m6DE3F4B2BFAF739DBCA72BFE6529BCEB7B46BEA1_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_1 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (int32_t)L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" IL2CPP_METHOD_ATTR bool IndexedSet_1_get_IsReadOnly_mF101420B30D2359D25D2290584FEC59191CD2859_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0008;
	}

IL_0008:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" IL2CPP_METHOD_ATTR int32_t IndexedSet_1_IndexOf_mA96032B59D36E8E466F5835BD779A45E51060B3E_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = (int32_t)(-1);
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_0 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0, (RuntimeObject *)L_1, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		int32_t L_2 = V_0;
		V_1 = (int32_t)L_2;
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_Insert_m81066D7E0A93E43F2CA764C332EA1D424D2A5BBB_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, int32_t ___index0, RuntimeObject * ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_Insert_m81066D7E0A93E43F2CA764C332EA1D424D2A5BBB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_0, (String_t*)_stringLiteralDFADDFA065E9D92CFE8B8F06444DD5652DFC1D58, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, IndexedSet_1_Insert_m81066D7E0A93E43F2CA764C332EA1D424D2A5BBB_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_RemoveAt_m0016F09042F2FE56FA1D2D2355832BB16E96D445_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_1 = ___index0;
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		V_0 = (RuntimeObject *)L_2;
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_3 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_4 = V_0;
		((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		int32_t L_5 = ___index0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_6 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_7 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1))))))
		{
			goto IL_003f;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_8 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_9 = ___index0;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
		goto IL_0082;
	}

IL_003f:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_10 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_11 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1));
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_12 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_13 = V_1;
		RuntimeObject * L_14 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_12, (int32_t)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		V_2 = (RuntimeObject *)L_14;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_15 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_16 = ___index0;
		RuntimeObject * L_17 = V_2;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_15, (int32_t)L_16, (RuntimeObject *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_18 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_19 = V_2;
		int32_t L_20 = ___index0;
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_18, (RuntimeObject *)L_19, (int32_t)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_21 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_22 = V_1;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_21, (int32_t)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
	}

IL_0082:
	{
		return;
	}
}
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * IndexedSet_1_get_Item_m991C6F46119564DEA93A09893812CBD5F5DBD2CE_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_1 = ___index0;
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		V_0 = (RuntimeObject *)L_2;
		goto IL_0013;
	}

IL_0013:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_set_Item_mB1E26F0231DAEC2791CD3699932813E830576811_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_1 = ___index0;
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		V_0 = (RuntimeObject *)L_2;
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_3 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_4 = V_0;
		((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_5 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_6 = ___index0;
		RuntimeObject * L_7 = ___value1;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_5, (int32_t)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_8 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_9 = V_0;
		int32_t L_10 = ___index0;
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_8, (RuntimeObject *)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_RemoveAll_mAE4ADE1DF64CADF07B55057DC73FB3506D955A68_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___match0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		V_0 = (int32_t)0;
		goto IL_0034;
	}

IL_0008:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_1 = V_0;
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		V_1 = (RuntimeObject *)L_2;
		Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * L_3 = ___match0;
		RuntimeObject * L_4 = V_1;
		bool L_5 = ((  bool (*) (Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)((Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject * L_6 = V_1;
		((  bool (*) (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20)->methodPointer)((IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 *)__this, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20));
		goto IL_0033;
	}

IL_002f:
	{
		int32_t L_7 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0033:
	{
	}

IL_0034:
	{
		int32_t L_8 = V_0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_9 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_10 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_Sort_m57091341D45A2A66567F0AD15AA31A06094F4F92_gshared (IndexedSet_1_t2CE060D26DA6E479DAB6AC2BD97AD3A7065B65F5 * __this, Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 * ___sortLayoutFunction0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 * L_1 = ___sortLayoutFunction0;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		V_0 = (int32_t)0;
		goto IL_0034;
	}

IL_0014:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_3 = V_0;
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		V_1 = (RuntimeObject *)L_4;
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_5 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_6 = V_1;
		int32_t L_7 = V_0;
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_5, (RuntimeObject *)L_6, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		int32_t L_8 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0034:
	{
		int32_t L_9 = V_0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_10 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_11 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0__ctor_m7C7663DF2836474A845DD182E23E6A3DD3D6BCEC_gshared (U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CStartU3Ec__Iterator0_MoveNext_m17A6A3B6131EFE960C4DA7784DDE816250347E99_gshared (U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_MoveNext_m17A6A3B6131EFE960C4DA7784DDE816250347E99_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	float G_B7_0 = 0.0f;
	U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 * G_B7_1 = NULL;
	float G_B6_0 = 0.0f;
	U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 * G_B6_1 = NULL;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 * G_B8_2 = NULL;
	{
		int32_t L_0 = (int32_t)__this->get_U24PC_5();
		V_0 = (uint32_t)L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00d5;
			}
		}
	}
	{
		goto IL_010f;
	}

IL_0021:
	{
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_2 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_0();
		bool L_3 = ColorTween_ValidTarget_m847E9D6C8B97F1C9039BF80AD69EEFC74C989079((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003d;
		}
	}
	{
		goto IL_010f;
	}

IL_003d:
	{
		__this->set_U3CelapsedTimeU3E__0_1((0.0f));
		goto IL_00d6;
	}

IL_004d:
	{
		float L_4 = (float)__this->get_U3CelapsedTimeU3E__0_1();
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_5 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_0();
		bool L_6 = ColorTween_get_ignoreTimeScale_mD27F5C7D70D340DBDFAE972BBE3857A26E29747A((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_5, /*hidden argument*/NULL);
		G_B6_0 = L_4;
		G_B6_1 = ((U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 *)(__this));
		if (!L_6)
		{
			G_B7_0 = L_4;
			G_B7_1 = ((U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 *)(__this));
			goto IL_0075;
		}
	}
	{
		float L_7 = Time_get_unscaledDeltaTime_mA0AE7A144C88AE8AABB42DF17B0F3F0714BA06B2(/*hidden argument*/NULL);
		G_B8_0 = L_7;
		G_B8_1 = G_B6_0;
		G_B8_2 = ((U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 *)(G_B6_1));
		goto IL_007a;
	}

IL_0075:
	{
		float L_8 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		G_B8_0 = L_8;
		G_B8_1 = G_B7_0;
		G_B8_2 = ((U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 *)(G_B7_1));
	}

IL_007a:
	{
		G_B8_2->set_U3CelapsedTimeU3E__0_1(((float)il2cpp_codegen_add((float)G_B8_1, (float)G_B8_0)));
		float L_9 = (float)__this->get_U3CelapsedTimeU3E__0_1();
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_10 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_0();
		float L_11 = ColorTween_get_duration_mE4A9B4FFAB11CCF25EAACF5777991AB6749020B0((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B((float)((float)((float)L_9/(float)L_11)), /*hidden argument*/NULL);
		__this->set_U3CpercentageU3E__1_2(L_12);
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_13 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_0();
		float L_14 = (float)__this->get_U3CpercentageU3E__1_2();
		ColorTween_TweenValue_mF6B10FEA49EB758AD37D95A7DD577D6AA9C32110((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_13, (float)L_14, /*hidden argument*/NULL);
		__this->set_U24current_3(NULL);
		bool L_15 = (bool)__this->get_U24disposing_4();
		if (L_15)
		{
			goto IL_00d0;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_00d0:
	{
		goto IL_0111;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		float L_16 = (float)__this->get_U3CelapsedTimeU3E__0_1();
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_17 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_0();
		float L_18 = ColorTween_get_duration_mE4A9B4FFAB11CCF25EAACF5777991AB6749020B0((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_17, /*hidden argument*/NULL);
		if ((((float)L_16) < ((float)L_18)))
		{
			goto IL_004d;
		}
	}
	{
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_19 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_0();
		ColorTween_TweenValue_mF6B10FEA49EB758AD37D95A7DD577D6AA9C32110((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_19, (float)(1.0f), /*hidden argument*/NULL);
		__this->set_U24PC_5((-1));
	}

IL_010f:
	{
		return (bool)0;
	}

IL_0111:
	{
		return (bool)1;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m10DD8AC5B8A3A0C73F0A8D9699C5D5220FECC227_gshared (U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_3();
		V_0 = (RuntimeObject *)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m680D4804588601644224E48606E6D66465689171_gshared (U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_3();
		V_0 = (RuntimeObject *)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Dispose_mF26FE6FE2B6669E490946F8EF355DC0CCAC860F7_gshared (U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Reset_m439E251EE39AF2851415914D8F11867A65D9E63F_gshared (U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_Reset_m439E251EE39AF2851415914D8F11867A65D9E63F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CStartU3Ec__Iterator0_Reset_m439E251EE39AF2851415914D8F11867A65D9E63F_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0__ctor_m8B54A1BBDA9AFF06C9286D672F19BDB1001C320D_gshared (U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CStartU3Ec__Iterator0_MoveNext_mB6BE65FBF43A13162E304F0F012BAA539F3D0C9F_gshared (U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_MoveNext_mB6BE65FBF43A13162E304F0F012BAA539F3D0C9F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	float G_B7_0 = 0.0f;
	U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 * G_B7_1 = NULL;
	float G_B6_0 = 0.0f;
	U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 * G_B6_1 = NULL;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 * G_B8_2 = NULL;
	{
		int32_t L_0 = (int32_t)__this->get_U24PC_5();
		V_0 = (uint32_t)L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00d5;
			}
		}
	}
	{
		goto IL_010f;
	}

IL_0021:
	{
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_2 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_0();
		bool L_3 = FloatTween_ValidTarget_m921F88A58CCB09A4D55DBB714F3538677363FAE6((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003d;
		}
	}
	{
		goto IL_010f;
	}

IL_003d:
	{
		__this->set_U3CelapsedTimeU3E__0_1((0.0f));
		goto IL_00d6;
	}

IL_004d:
	{
		float L_4 = (float)__this->get_U3CelapsedTimeU3E__0_1();
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_5 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_0();
		bool L_6 = FloatTween_get_ignoreTimeScale_mCA3DA664CF6F78735BF3ED6301900FB849B49C34((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_5, /*hidden argument*/NULL);
		G_B6_0 = L_4;
		G_B6_1 = ((U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 *)(__this));
		if (!L_6)
		{
			G_B7_0 = L_4;
			G_B7_1 = ((U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 *)(__this));
			goto IL_0075;
		}
	}
	{
		float L_7 = Time_get_unscaledDeltaTime_mA0AE7A144C88AE8AABB42DF17B0F3F0714BA06B2(/*hidden argument*/NULL);
		G_B8_0 = L_7;
		G_B8_1 = G_B6_0;
		G_B8_2 = ((U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 *)(G_B6_1));
		goto IL_007a;
	}

IL_0075:
	{
		float L_8 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		G_B8_0 = L_8;
		G_B8_1 = G_B7_0;
		G_B8_2 = ((U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 *)(G_B7_1));
	}

IL_007a:
	{
		G_B8_2->set_U3CelapsedTimeU3E__0_1(((float)il2cpp_codegen_add((float)G_B8_1, (float)G_B8_0)));
		float L_9 = (float)__this->get_U3CelapsedTimeU3E__0_1();
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_10 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_0();
		float L_11 = FloatTween_get_duration_mBC42C5053BCB1A1315430E3E21ECE1597BB0B314((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B((float)((float)((float)L_9/(float)L_11)), /*hidden argument*/NULL);
		__this->set_U3CpercentageU3E__1_2(L_12);
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_13 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_0();
		float L_14 = (float)__this->get_U3CpercentageU3E__1_2();
		FloatTween_TweenValue_m4ADF9CF3356268D7AD1CFF358BA252F1E52226F3((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_13, (float)L_14, /*hidden argument*/NULL);
		__this->set_U24current_3(NULL);
		bool L_15 = (bool)__this->get_U24disposing_4();
		if (L_15)
		{
			goto IL_00d0;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_00d0:
	{
		goto IL_0111;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		float L_16 = (float)__this->get_U3CelapsedTimeU3E__0_1();
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_17 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_0();
		float L_18 = FloatTween_get_duration_mBC42C5053BCB1A1315430E3E21ECE1597BB0B314((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_17, /*hidden argument*/NULL);
		if ((((float)L_16) < ((float)L_18)))
		{
			goto IL_004d;
		}
	}
	{
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_19 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_0();
		FloatTween_TweenValue_m4ADF9CF3356268D7AD1CFF358BA252F1E52226F3((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_19, (float)(1.0f), /*hidden argument*/NULL);
		__this->set_U24PC_5((-1));
	}

IL_010f:
	{
		return (bool)0;
	}

IL_0111:
	{
		return (bool)1;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m528DCE76B49785C679B66AAB4D42407B127A9B38_gshared (U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_3();
		V_0 = (RuntimeObject *)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m38831D13E816549A5D51699B9594609F833670F9_gshared (U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_3();
		V_0 = (RuntimeObject *)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Dispose_m5D0C71B726544207A28FAE9F57B9D7401512C3C8_gshared (U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Reset_m7703121C2007A9FF4EC664BC758BC00DF683B629_gshared (U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_Reset_m7703121C2007A9FF4EC664BC758BC00DF683B629_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CStartU3Ec__Iterator0_Reset_m7703121C2007A9FF4EC664BC758BC00DF683B629_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_m2D6244FBF370723CF73C376DC4D2E44D3EEEE290_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::Start(T)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m756F514128966B0D57875B80DB12696B2DB60B97_gshared (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  ___tweenInfo0, const RuntimeMethod* method)
{
	U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 * L_0 = (U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_0 = (U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 *)L_0;
		U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 * L_1 = V_0;
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  L_2 = ___tweenInfo0;
		L_1->set_tweenInfo_0(L_2);
		U3CStartU3Ec__Iterator0_tE6C906B4CE3463E1E9016DA76194239D06531E07 * L_3 = V_0;
		V_1 = (RuntimeObject*)L_3;
		goto IL_0014;
	}

IL_0014:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::Init(UnityEngine.MonoBehaviour)
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1_Init_mA29C09ADC3EB6959A0F1572D48D84170443B670E_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * ___coroutineContainer0, const RuntimeMethod* method)
{
	{
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_0 = ___coroutineContainer0;
		__this->set_m_CoroutineContainer_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::StartTween(T)
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_mE0CB96AF945209ABC26F2AA9899CB9794A64D92D_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenRunner_1_StartTween_mE0CB96AF945209ABC26F2AA9899CB9794A64D92D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_0 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568((RuntimeObject *)_stringLiteralA413973124713A2B7B3570CE8D97C7151C8628A9, /*hidden argument*/NULL);
		goto IL_0073;
	}

IL_0022:
	{
		((  void (*) (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_2 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2, /*hidden argument*/NULL);
		bool L_4 = GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0055;
		}
	}
	{
		ColorTween_TweenValue_mF6B10FEA49EB758AD37D95A7DD577D6AA9C32110((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(&___info0), (float)(1.0f), /*hidden argument*/NULL);
		goto IL_0073;
	}

IL_0055:
	{
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  L_5 = ___info0;
		RuntimeObject* L_6 = ((  RuntimeObject* (*) (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_Tween_1(L_6);
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_7 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_8 = (RuntimeObject*)__this->get_m_Tween_1();
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_7, (RuntimeObject*)L_8, /*hidden argument*/NULL);
	}

IL_0073:
	{
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::StopTween()
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m861C40714D7A8C4B7EF8A7CC781B06C600877A5F_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_m_Tween_1();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_1 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_m_Tween_1();
		MonoBehaviour_StopCoroutine_m3CDD6C046CC660D4CD6583FCE97F88A9735FD5FA((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_1, (RuntimeObject*)L_2, /*hidden argument*/NULL);
		__this->set_m_Tween_1((RuntimeObject*)NULL);
	}

IL_0026:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_m63EA04E5FC2204138452DCD5D7C9A7918B7AD5E6_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::Start(T)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m2CFC7722714F904EC8123AA4B7DCB974E466FD83_gshared (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  ___tweenInfo0, const RuntimeMethod* method)
{
	U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 * L_0 = (U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_0 = (U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 *)L_0;
		U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 * L_1 = V_0;
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  L_2 = ___tweenInfo0;
		L_1->set_tweenInfo_0(L_2);
		U3CStartU3Ec__Iterator0_t468FE95258205EFB6F39EECD7F7D00F74B696286 * L_3 = V_0;
		V_1 = (RuntimeObject*)L_3;
		goto IL_0014;
	}

IL_0014:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::Init(UnityEngine.MonoBehaviour)
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1_Init_m39096EAEB1B5BFC0E2FEDF4A946593353F8981CC_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * ___coroutineContainer0, const RuntimeMethod* method)
{
	{
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_0 = ___coroutineContainer0;
		__this->set_m_CoroutineContainer_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::StartTween(T)
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_m8637A776CD96BAB0EDC8A8FA7479127E2BEC92C4_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenRunner_1_StartTween_m8637A776CD96BAB0EDC8A8FA7479127E2BEC92C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_0 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568((RuntimeObject *)_stringLiteralA413973124713A2B7B3570CE8D97C7151C8628A9, /*hidden argument*/NULL);
		goto IL_0073;
	}

IL_0022:
	{
		((  void (*) (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_2 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2, /*hidden argument*/NULL);
		bool L_4 = GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0055;
		}
	}
	{
		FloatTween_TweenValue_m4ADF9CF3356268D7AD1CFF358BA252F1E52226F3((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(&___info0), (float)(1.0f), /*hidden argument*/NULL);
		goto IL_0073;
	}

IL_0055:
	{
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  L_5 = ___info0;
		RuntimeObject* L_6 = ((  RuntimeObject* (*) (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_Tween_1(L_6);
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_7 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_8 = (RuntimeObject*)__this->get_m_Tween_1();
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_7, (RuntimeObject*)L_8, /*hidden argument*/NULL);
	}

IL_0073:
	{
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::StopTween()
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m9EDE8CC585AD166D4520BE8B374CA2169CDD0E8E_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_m_Tween_1();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_1 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_m_Tween_1();
		MonoBehaviour_StopCoroutine_m3CDD6C046CC660D4CD6583FCE97F88A9735FD5FA((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_1, (RuntimeObject*)L_2, /*hidden argument*/NULL);
		__this->set_m_Tween_1((RuntimeObject*)NULL);
	}

IL_0026:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::Clear(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Clear_mD973571E32F104549B24EC4C48FE9C290C6223BB_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = ___l0;
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<System.Int32>::Get()
extern "C" IL2CPP_METHOD_ATTR List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ListPool_1_Get_mAFB1F76A280309F30C0897B1FBABCC37A783344C_gshared (const RuntimeMethod* method)
{
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A * L_0 = ((ListPool_1_tFA23B363858EAC800B614A18D05C359F72028407_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_1 = ((  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * (*) (ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::Release(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Release_m34FF8B9650A82F8B5ECF477604AEF059FB85A153_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A * L_0 = ((ListPool_1_tFA23B363858EAC800B614A18D05C359F72028407_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_1 = ___toRelease0;
		((  void (*) (ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A *, List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A *)L_0, (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ListPool_1__cctor_mF27548A30BD87F6F4CE445FC8E518043FB0B295E_gshared (const RuntimeMethod* method)
{
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 * L_0 = ((ListPool_1_tFA23B363858EAC800B614A18D05C359F72028407_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 * L_1 = (UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_1, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_tFA23B363858EAC800B614A18D05C359F72028407_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_1);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 * L_2 = ((ListPool_1_tFA23B363858EAC800B614A18D05C359F72028407_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A * L_3 = (ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_tC08E18CA4686E07104774795FF479D68B6B2889A *, UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 *, UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_3, (UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 *)G_B2_0, (UnityAction_1_tA99D005A9C291926F1FC4F9D3A8FABD18D895689 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tFA23B363858EAC800B614A18D05C359F72028407_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.ListPool`1<System.Object>::Clear(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Clear_m740111DCF3FFCAA14F5FB747FAAF0ED39C11D126_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = ___l0;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<System.Object>::Get()
extern "C" IL2CPP_METHOD_ATTR List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ListPool_1_Get_m4C328048C1479EE1450837A0CF1BF5F18FF77C88_gshared (const RuntimeMethod* method)
{
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B * L_0 = ((ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = ((  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * (*) (ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Object>::Release(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Release_m2F58A45DA9F2BBE95A654A426FF72F0CA75D5B7E_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B * L_0 = ((ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = ___toRelease0;
		((  void (*) (ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B *)L_0, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Object>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ListPool_1__cctor_mF042EAEBF32922CBFC61DBE6E1DA0BF06A9DBC26_gshared (const RuntimeMethod* method)
{
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * L_0 = ((ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * L_1 = (UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_1, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_1);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * L_2 = ((ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B * L_3 = (ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_tDADAC46065A7A2E2176ACF5FA7C3142B1AF9517B *, UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 *, UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_3, (UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 *)G_B2_0, (UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Clear(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Clear_m9F04DC60F78A36A41D42EEDD9688FDD685667DB6_gshared (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * L_0 = ___l0;
		((  void (*) (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Get()
extern "C" IL2CPP_METHOD_ATTR List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * ListPool_1_Get_m1549C4AC8324D6BBB9CAA80B70EE13A6AC0617B7_gshared (const RuntimeMethod* method)
{
	List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07 * L_0 = ((ListPool_1_tBA324F10FC7E73FB9F71457FFE143CD03160D463_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * L_1 = ((  List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * (*) (ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Release(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Release_m52E37BEE7C08F871746F8E3B28556641EC754324_gshared (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07 * L_0 = ((ListPool_1_tBA324F10FC7E73FB9F71457FFE143CD03160D463_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * L_1 = ___toRelease0;
		((  void (*) (ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07 *, List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07 *)L_0, (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ListPool_1__cctor_m7AEC73CEB51505546BA51E71698753674FE8781B_gshared (const RuntimeMethod* method)
{
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 * L_0 = ((ListPool_1_tBA324F10FC7E73FB9F71457FFE143CD03160D463_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 * L_1 = (UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_1, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_tBA324F10FC7E73FB9F71457FFE143CD03160D463_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_1);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 * L_2 = ((ListPool_1_tBA324F10FC7E73FB9F71457FFE143CD03160D463_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07 * L_3 = (ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t6E42C9408E003E775EC7139A3F1EFC1346440D07 *, UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 *, UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_3, (UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 *)G_B2_0, (UnityAction_1_t7F49A8FC841AC905861BD019CAAAE81F5DE4EEF4 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tBA324F10FC7E73FB9F71457FFE143CD03160D463_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Clear(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Clear_m2208C1BA3B3E3790C5EE59E69407637C41F10844_gshared (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * L_0 = ___l0;
		((  void (*) (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Get()
extern "C" IL2CPP_METHOD_ATTR List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * ListPool_1_Get_m3D24B0F028698E7FA9EAB826563501BFF986BBFD_gshared (const RuntimeMethod* method)
{
	List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5 * L_0 = ((ListPool_1_tAFD0E4E019381064EBBF5E8710B0F1E0B85EBB56_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * L_1 = ((  List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * (*) (ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Release(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Release_m4FBBEE3FE54B6B374CD3F3CA7586029E579FAD6C_gshared (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5 * L_0 = ((ListPool_1_tAFD0E4E019381064EBBF5E8710B0F1E0B85EBB56_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * L_1 = ___toRelease0;
		((  void (*) (ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5 *, List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5 *)L_0, (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ListPool_1__cctor_m96D7F2BB0CC611C7E4C5828B2E10AE50192A4FCE_gshared (const RuntimeMethod* method)
{
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 * L_0 = ((ListPool_1_tAFD0E4E019381064EBBF5E8710B0F1E0B85EBB56_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 * L_1 = (UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_1, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_tAFD0E4E019381064EBBF5E8710B0F1E0B85EBB56_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_1);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 * L_2 = ((ListPool_1_tAFD0E4E019381064EBBF5E8710B0F1E0B85EBB56_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5 * L_3 = (ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_tB641A4FECBF1E01BBA0C252F01EDE98D41033CF5 *, UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 *, UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_3, (UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 *)G_B2_0, (UnityAction_1_t7B2376CCD306AEB0D24B3479F62CE812058041D0 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tAFD0E4E019381064EBBF5E8710B0F1E0B85EBB56_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Clear(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Clear_m6432D570E705BF537C4FB85407A31C9AAD6A99E6_gshared (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___l0, const RuntimeMethod* method)
{
	{
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_0 = ___l0;
		((  void (*) (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Get()
extern "C" IL2CPP_METHOD_ATTR List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ListPool_1_Get_m4322F57FCB5B11C10CAEDE17A609B9E29401797F_gshared (const RuntimeMethod* method)
{
	List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49 * L_0 = ((ListPool_1_tAB2044BEC36628D346141AEA4743A824A6FB688C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_1 = ((  List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * (*) (ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Release(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Release_m3339B7710487E883FD2DB198643084787D08BBDD_gshared (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49 * L_0 = ((ListPool_1_tAB2044BEC36628D346141AEA4743A824A6FB688C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_1 = ___toRelease0;
		((  void (*) (ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49 *, List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49 *)L_0, (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ListPool_1__cctor_m361000F7CAFBC65FFD4FC5D55BA85108853E0376_gshared (const RuntimeMethod* method)
{
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 * L_0 = ((ListPool_1_tAB2044BEC36628D346141AEA4743A824A6FB688C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 * L_1 = (UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_1, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_tAB2044BEC36628D346141AEA4743A824A6FB688C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_1);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 * L_2 = ((ListPool_1_tAB2044BEC36628D346141AEA4743A824A6FB688C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49 * L_3 = (ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t77D90EC466D5DC3CD8703898D0D3206B7D320D49 *, UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 *, UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_3, (UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 *)G_B2_0, (UnityAction_1_t5070210D9B8F86C2EDBB6772A8295FAD8FC32821 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tAB2044BEC36628D346141AEA4743A824A6FB688C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Clear(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Clear_m8B0E6BEA4C6F4445E8F5BADD3C577054A3445893_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_0 = ___l0;
		((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Get()
extern "C" IL2CPP_METHOD_ATTR List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ListPool_1_Get_m0DA6F4FA9B55233F3BCC582E1B5D1B82048B72DC_gshared (const RuntimeMethod* method)
{
	List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2 * L_0 = ((ListPool_1_tC0119DB1C2EC9C29F424EC953509E2CDC3995059_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_1 = ((  List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * (*) (ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Release(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Release_m427896919DD66BB0E8CF7274C8AE76036D36D3BD_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2 * L_0 = ((ListPool_1_tC0119DB1C2EC9C29F424EC953509E2CDC3995059_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_1 = ___toRelease0;
		((  void (*) (ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2 *, List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2 *)L_0, (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ListPool_1__cctor_m4BEC87EBA6EA67DFC457FDB45282F75A64C6C347_gshared (const RuntimeMethod* method)
{
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E * L_0 = ((ListPool_1_tC0119DB1C2EC9C29F424EC953509E2CDC3995059_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E * L_1 = (UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_1, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_tC0119DB1C2EC9C29F424EC953509E2CDC3995059_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_1);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E * L_2 = ((ListPool_1_tC0119DB1C2EC9C29F424EC953509E2CDC3995059_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2 * L_3 = (ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t9CC17CF511664D2F103A4C4F73C9BD8820B88DF2 *, UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E *, UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_3, (UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E *)G_B2_0, (UnityAction_1_t68BCED570CE215DF78AAA225E29C0959286C1A0E *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tC0119DB1C2EC9C29F424EC953509E2CDC3995059_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Clear(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Clear_m0CCFC711C25B7AAC542D2ABBA0E1B4BFE8D037EA_gshared (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * ___l0, const RuntimeMethod* method)
{
	{
		List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * L_0 = ___l0;
		((  void (*) (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Get()
extern "C" IL2CPP_METHOD_ATTR List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * ListPool_1_Get_mECE6D9ED10FB4EEF28A6BE1F9B445CEE4312A937_gshared (const RuntimeMethod* method)
{
	List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39 * L_0 = ((ListPool_1_tD0E00B3B8CFB855678B750B02E1ACEB57D4FC67A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * L_1 = ((  List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * (*) (ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Release(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Release_m1252D062655820C50CAC05E08676836EBC1A7BA0_gshared (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * ___toRelease0, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39 * L_0 = ((ListPool_1_tD0E00B3B8CFB855678B750B02E1ACEB57D4FC67A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * L_1 = ___toRelease0;
		((  void (*) (ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39 *, List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39 *)L_0, (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ListPool_1__cctor_mFC21D520E6A974F00E7D85540B0973269E58626A_gshared (const RuntimeMethod* method)
{
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB * L_0 = ((ListPool_1_tD0E00B3B8CFB855678B750B02E1ACEB57D4FC67A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB * L_1 = (UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_1, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_tD0E00B3B8CFB855678B750B02E1ACEB57D4FC67A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_1);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB * L_2 = ((ListPool_1_tD0E00B3B8CFB855678B750B02E1ACEB57D4FC67A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39 * L_3 = (ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t89359398AF2898F35015A1938357AD5AC70B2C39 *, UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB *, UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_3, (UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB *)G_B2_0, (UnityAction_1_t3C41FEE79AC7F1373BDB9F3C424BB5EEC7365BEB *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tD0E00B3B8CFB855678B750B02E1ACEB57D4FC67A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_mE14E9596DD21AFBA47727BDC5226C7F24FA234C7_gshared (ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___actionOnGet0, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___actionOnRelease1, const RuntimeMethod* method)
{
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_0 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_m_Stack_0(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_1 = ___actionOnGet0;
		__this->set_m_ActionOnGet_1(L_1);
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_2 = ___actionOnRelease1;
		__this->set_m_ActionOnRelease_2(L_2);
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_countAll_m2336F21CA9AFFCBF50463DD1836B14E663836D58_gshared (ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_U3CcountAllU3Ek__BackingField_3();
		V_0 = (int32_t)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ObjectPool_1_set_countAll_mF68D62D98B4F6AFACAC85C02E4DB858DA7196F64_gshared (ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CcountAllU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_countActive_m12221F42D2CD25F418A1746CFEE20C65A630B6F1_gshared (ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ((  int32_t (*) (ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		int32_t L_1 = ((  int32_t (*) (ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_0014;
	}

IL_0014:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_countInactive_mF6EBCB20814CAE2E818F846689640BF4485E810F_gshared (ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_0 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		int32_t L_1 = ((  int32_t (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (int32_t)L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ObjectPool_1_Get_m82BA8AF24CE96731493EC3C52B1218DB2C3C934F_gshared (ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_0 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		int32_t L_1 = ((  int32_t (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (RuntimeObject *)L_2;
		int32_t L_3 = ((  int32_t (*) (ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		((  void (*) (ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD *)__this, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		goto IL_003a;
	}

IL_002c:
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_4 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		RuntimeObject * L_5 = ((  RuntimeObject * (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		V_0 = (RuntimeObject *)L_5;
	}

IL_003a:
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_6 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnGet_1();
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_7 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnGet_1();
		RuntimeObject * L_8 = V_0;
		((  void (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_0051:
	{
		RuntimeObject * L_9 = V_0;
		V_1 = (RuntimeObject *)L_9;
		goto IL_0058;
	}

IL_0058:
	{
		RuntimeObject * L_10 = V_1;
		return L_10;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" IL2CPP_METHOD_ATTR void ObjectPool_1_Release_mEF76D0678288FA4D4D8D81C57B3FEBF7AE87BD74_gshared (ObjectPool_1_t642A3D701C6162F913D9252AB3E5BEB96161F6BD * __this, RuntimeObject * ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectPool_1_Release_mEF76D0678288FA4D4D8D81C57B3FEBF7AE87BD74_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_0 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		int32_t L_1 = ((  int32_t (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_2 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		RuntimeObject * L_4 = ___element0;
		bool L_5 = il2cpp_codegen_object_reference_equals((RuntimeObject *)L_3, (RuntimeObject *)L_4);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral04231B44477132B3DBEFE7768A921AE5A13A00FC, /*hidden argument*/NULL);
	}

IL_003c:
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_6 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnRelease_2();
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_7 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnRelease_2();
		RuntimeObject * L_8 = ___element0;
		((  void (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_0053:
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_9 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		RuntimeObject * L_10 = ___element0;
		((  void (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_9, (RuntimeObject *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
