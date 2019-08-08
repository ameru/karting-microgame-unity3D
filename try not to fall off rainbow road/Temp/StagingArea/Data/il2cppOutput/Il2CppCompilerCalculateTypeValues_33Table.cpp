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


// KartGame.KartSystems.IInput
struct IInput_tDFE766F75D4F97B4B0D2D32E42CA1FCF96DD5739;
// KartGame.KartSystems.IKartInfo
struct IKartInfo_t923B32B13F02ADA54723C6FFE51039A51FFA1951;
// KartGame.KartSystems.KartAnimation/Wheel
struct Wheel_t4BD1834607089B767AF0641E2940B773B1B18FCC;
// KartGame.Timeline.DirectorTrigger/TimelineEvent[]
struct TimelineEventU5BU5D_tA25980076E0D499392A384AABFB6B33F1DCEAEA0;
// KartGame.Track.Checkpoint
struct Checkpoint_tEF6DB15A19FDB2044EBE9233D96BC397D3CFF5FE;
// KartGame.Track.IRacer
struct IRacer_t75C577ED10BEE125737096075E25F17983C1BBC1;
// KartGame.Track.TrackManager
struct TrackManager_t6EC4EEEF36A3FA97AC88846631E345185F5B0D64;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<KartGame.KartSystems.IKartModifier>
struct List_1_tD06E9F79C539DCD9C982255B171BEAEEABB00664;
// System.Func`2<UnityEngine.Object,System.Boolean>
struct Func_2_tBEACEEB4BB02E5890864D7A859D49C0350CD795F;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Animator
struct Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A;
// UnityEngine.AudioClip
struct AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Playables.PlayableDirector
struct PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_tE9BB282384F0196211AD1A480477254188211F57;
// UnityEngine.Rigidbody
struct Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;




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
#ifndef TIMELINEEVENT_T44793B726D5842DE4985C95776914720A7240A3D_H
#define TIMELINEEVENT_T44793B726D5842DE4985C95776914720A7240A3D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KartGame.Timeline.DirectorTrigger_TimelineEvent
struct  TimelineEvent_t44793B726D5842DE4985C95776914720A7240A3D  : public RuntimeObject
{
public:
	// System.Single KartGame.Timeline.DirectorTrigger_TimelineEvent::time
	float ___time_0;
	// UnityEngine.Events.UnityEvent KartGame.Timeline.DirectorTrigger_TimelineEvent::timedEvent
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___timedEvent_1;
	// System.Boolean KartGame.Timeline.DirectorTrigger_TimelineEvent::m_Triggered
	bool ___m_Triggered_2;

public:
	inline static int32_t get_offset_of_time_0() { return static_cast<int32_t>(offsetof(TimelineEvent_t44793B726D5842DE4985C95776914720A7240A3D, ___time_0)); }
	inline float get_time_0() const { return ___time_0; }
	inline float* get_address_of_time_0() { return &___time_0; }
	inline void set_time_0(float value)
	{
		___time_0 = value;
	}

	inline static int32_t get_offset_of_timedEvent_1() { return static_cast<int32_t>(offsetof(TimelineEvent_t44793B726D5842DE4985C95776914720A7240A3D, ___timedEvent_1)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_timedEvent_1() const { return ___timedEvent_1; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_timedEvent_1() { return &___timedEvent_1; }
	inline void set_timedEvent_1(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___timedEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&___timedEvent_1), value);
	}

	inline static int32_t get_offset_of_m_Triggered_2() { return static_cast<int32_t>(offsetof(TimelineEvent_t44793B726D5842DE4985C95776914720A7240A3D, ___m_Triggered_2)); }
	inline bool get_m_Triggered_2() const { return ___m_Triggered_2; }
	inline bool* get_address_of_m_Triggered_2() { return &___m_Triggered_2; }
	inline void set_m_Triggered_2(bool value)
	{
		___m_Triggered_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMELINEEVENT_T44793B726D5842DE4985C95776914720A7240A3D_H
#ifndef U3CU3EC_TF9613F8A7E0499DEAB63B5FD746BF0B168EC3A4F_H
#define U3CU3EC_TF9613F8A7E0499DEAB63B5FD746BF0B168EC3A4F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KartGame.Track.TrackManager_<>c
struct  U3CU3Ec_tF9613F8A7E0499DEAB63B5FD746BF0B168EC3A4F  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tF9613F8A7E0499DEAB63B5FD746BF0B168EC3A4F_StaticFields
{
public:
	// KartGame.Track.TrackManager_<>c KartGame.Track.TrackManager_<>c::<>9
	U3CU3Ec_tF9613F8A7E0499DEAB63B5FD746BF0B168EC3A4F * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Object,System.Boolean> KartGame.Track.TrackManager_<>c::<>9__23_0
	Func_2_tBEACEEB4BB02E5890864D7A859D49C0350CD795F * ___U3CU3E9__23_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF9613F8A7E0499DEAB63B5FD746BF0B168EC3A4F_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tF9613F8A7E0499DEAB63B5FD746BF0B168EC3A4F * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tF9613F8A7E0499DEAB63B5FD746BF0B168EC3A4F ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tF9613F8A7E0499DEAB63B5FD746BF0B168EC3A4F * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__23_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF9613F8A7E0499DEAB63B5FD746BF0B168EC3A4F_StaticFields, ___U3CU3E9__23_0_1)); }
	inline Func_2_tBEACEEB4BB02E5890864D7A859D49C0350CD795F * get_U3CU3E9__23_0_1() const { return ___U3CU3E9__23_0_1; }
	inline Func_2_tBEACEEB4BB02E5890864D7A859D49C0350CD795F ** get_address_of_U3CU3E9__23_0_1() { return &___U3CU3E9__23_0_1; }
	inline void set_U3CU3E9__23_0_1(Func_2_tBEACEEB4BB02E5890864D7A859D49C0350CD795F * value)
	{
		___U3CU3E9__23_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__23_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_TF9613F8A7E0499DEAB63B5FD746BF0B168EC3A4F_H
#ifndef U3CCALLWHENRACESTARTSU3ED__27_T5C7345ECD99271493CBDC53A7EAEBA36B597C577_H
#define U3CCALLWHENRACESTARTSU3ED__27_T5C7345ECD99271493CBDC53A7EAEBA36B597C577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KartGame.Track.TrackManager_<CallWhenRaceStarts>d__27
struct  U3CCallWhenRaceStartsU3Ed__27_t5C7345ECD99271493CBDC53A7EAEBA36B597C577  : public RuntimeObject
{
public:
	// System.Int32 KartGame.Track.TrackManager_<CallWhenRaceStarts>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object KartGame.Track.TrackManager_<CallWhenRaceStarts>d__27::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// KartGame.Track.TrackManager KartGame.Track.TrackManager_<CallWhenRaceStarts>d__27::<>4__this
	TrackManager_t6EC4EEEF36A3FA97AC88846631E345185F5B0D64 * ___U3CU3E4__this_2;
	// KartGame.Track.IRacer KartGame.Track.TrackManager_<CallWhenRaceStarts>d__27::racer
	RuntimeObject* ___racer_3;
	// KartGame.Track.Checkpoint KartGame.Track.TrackManager_<CallWhenRaceStarts>d__27::checkpoint
	Checkpoint_tEF6DB15A19FDB2044EBE9233D96BC397D3CFF5FE * ___checkpoint_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCallWhenRaceStartsU3Ed__27_t5C7345ECD99271493CBDC53A7EAEBA36B597C577, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCallWhenRaceStartsU3Ed__27_t5C7345ECD99271493CBDC53A7EAEBA36B597C577, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCallWhenRaceStartsU3Ed__27_t5C7345ECD99271493CBDC53A7EAEBA36B597C577, ___U3CU3E4__this_2)); }
	inline TrackManager_t6EC4EEEF36A3FA97AC88846631E345185F5B0D64 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TrackManager_t6EC4EEEF36A3FA97AC88846631E345185F5B0D64 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TrackManager_t6EC4EEEF36A3FA97AC88846631E345185F5B0D64 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_racer_3() { return static_cast<int32_t>(offsetof(U3CCallWhenRaceStartsU3Ed__27_t5C7345ECD99271493CBDC53A7EAEBA36B597C577, ___racer_3)); }
	inline RuntimeObject* get_racer_3() const { return ___racer_3; }
	inline RuntimeObject** get_address_of_racer_3() { return &___racer_3; }
	inline void set_racer_3(RuntimeObject* value)
	{
		___racer_3 = value;
		Il2CppCodeGenWriteBarrier((&___racer_3), value);
	}

	inline static int32_t get_offset_of_checkpoint_4() { return static_cast<int32_t>(offsetof(U3CCallWhenRaceStartsU3Ed__27_t5C7345ECD99271493CBDC53A7EAEBA36B597C577, ___checkpoint_4)); }
	inline Checkpoint_tEF6DB15A19FDB2044EBE9233D96BC397D3CFF5FE * get_checkpoint_4() const { return ___checkpoint_4; }
	inline Checkpoint_tEF6DB15A19FDB2044EBE9233D96BC397D3CFF5FE ** get_address_of_checkpoint_4() { return &___checkpoint_4; }
	inline void set_checkpoint_4(Checkpoint_tEF6DB15A19FDB2044EBE9233D96BC397D3CFF5FE * value)
	{
		___checkpoint_4 = value;
		Il2CppCodeGenWriteBarrier((&___checkpoint_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCALLWHENRACESTARTSU3ED__27_T5C7345ECD99271493CBDC53A7EAEBA36B597C577_H
#ifndef TRACKRECORD_TCEC2ED8FB51EBBCB6921634FF63F759C58FD4296_H
#define TRACKRECORD_TCEC2ED8FB51EBBCB6921634FF63F759C58FD4296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KartGame.Track.TrackRecord
struct  TrackRecord_tCEC2ED8FB51EBBCB6921634FF63F759C58FD4296  : public RuntimeObject
{
public:
	// System.String KartGame.Track.TrackRecord::trackName
	String_t* ___trackName_0;
	// System.Int32 KartGame.Track.TrackRecord::laps
	int32_t ___laps_1;
	// System.Single KartGame.Track.TrackRecord::time
	float ___time_2;
	// System.String KartGame.Track.TrackRecord::name
	String_t* ___name_3;

public:
	inline static int32_t get_offset_of_trackName_0() { return static_cast<int32_t>(offsetof(TrackRecord_tCEC2ED8FB51EBBCB6921634FF63F759C58FD4296, ___trackName_0)); }
	inline String_t* get_trackName_0() const { return ___trackName_0; }
	inline String_t** get_address_of_trackName_0() { return &___trackName_0; }
	inline void set_trackName_0(String_t* value)
	{
		___trackName_0 = value;
		Il2CppCodeGenWriteBarrier((&___trackName_0), value);
	}

	inline static int32_t get_offset_of_laps_1() { return static_cast<int32_t>(offsetof(TrackRecord_tCEC2ED8FB51EBBCB6921634FF63F759C58FD4296, ___laps_1)); }
	inline int32_t get_laps_1() const { return ___laps_1; }
	inline int32_t* get_address_of_laps_1() { return &___laps_1; }
	inline void set_laps_1(int32_t value)
	{
		___laps_1 = value;
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(TrackRecord_tCEC2ED8FB51EBBCB6921634FF63F759C58FD4296, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(TrackRecord_tCEC2ED8FB51EBBCB6921634FF63F759C58FD4296, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKRECORD_TCEC2ED8FB51EBBCB6921634FF63F759C58FD4296_H
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
#ifndef DEFAULTKARTMODIFIER_T380A181798124C421EE2117B1983F19C32C6A877_H
#define DEFAULTKARTMODIFIER_T380A181798124C421EE2117B1983F19C32C6A877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KartGame.KartSystems.DefaultKartModifier
struct  DefaultKartModifier_t380A181798124C421EE2117B1983F19C32C6A877 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DefaultKartModifier_t380A181798124C421EE2117B1983F19C32C6A877__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTKARTMODIFIER_T380A181798124C421EE2117B1983F19C32C6A877_H
#ifndef STROKE_T77C3F378E54FF34288C62A2F232137A206F6C34C_H
#define STROKE_T77C3F378E54FF34288C62A2F232137A206F6C34C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KartGame.KartSystems.EngineAudio_Stroke
struct  Stroke_t77C3F378E54FF34288C62A2F232137A206F6C34C 
{
public:
	// UnityEngine.AudioClip KartGame.KartSystems.EngineAudio_Stroke::clip
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip_0;
	// System.Single KartGame.KartSystems.EngineAudio_Stroke::gain
	float ___gain_1;
	// System.Single[] KartGame.KartSystems.EngineAudio_Stroke::buffer
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___buffer_2;
	// System.Int32 KartGame.KartSystems.EngineAudio_Stroke::position
	int32_t ___position_3;

public:
	inline static int32_t get_offset_of_clip_0() { return static_cast<int32_t>(offsetof(Stroke_t77C3F378E54FF34288C62A2F232137A206F6C34C, ___clip_0)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_clip_0() const { return ___clip_0; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_clip_0() { return &___clip_0; }
	inline void set_clip_0(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___clip_0 = value;
		Il2CppCodeGenWriteBarrier((&___clip_0), value);
	}

	inline static int32_t get_offset_of_gain_1() { return static_cast<int32_t>(offsetof(Stroke_t77C3F378E54FF34288C62A2F232137A206F6C34C, ___gain_1)); }
	inline float get_gain_1() const { return ___gain_1; }
	inline float* get_address_of_gain_1() { return &___gain_1; }
	inline void set_gain_1(float value)
	{
		___gain_1 = value;
	}

	inline static int32_t get_offset_of_buffer_2() { return static_cast<int32_t>(offsetof(Stroke_t77C3F378E54FF34288C62A2F232137A206F6C34C, ___buffer_2)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_buffer_2() const { return ___buffer_2; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_buffer_2() { return &___buffer_2; }
	inline void set_buffer_2(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___buffer_2 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_2), value);
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(Stroke_t77C3F378E54FF34288C62A2F232137A206F6C34C, ___position_3)); }
	inline int32_t get_position_3() const { return ___position_3; }
	inline int32_t* get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(int32_t value)
	{
		___position_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of KartGame.KartSystems.EngineAudio/Stroke
struct Stroke_t77C3F378E54FF34288C62A2F232137A206F6C34C_marshaled_pinvoke
{
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip_0;
	float ___gain_1;
	float* ___buffer_2;
	int32_t ___position_3;
};
// Native definition for COM marshalling of KartGame.KartSystems.EngineAudio/Stroke
struct Stroke_t77C3F378E54FF34288C62A2F232137A206F6C34C_marshaled_com
{
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip_0;
	float ___gain_1;
	float* ___buffer_2;
	int32_t ___position_3;
};
#endif // STROKE_T77C3F378E54FF34288C62A2F232137A206F6C34C_H
#ifndef KARTSTATS_T81AA5D3F8D42473FE31BB544F05C5FDAA3112D15_H
#define KARTSTATS_T81AA5D3F8D42473FE31BB544F05C5FDAA3112D15_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KartGame.KartSystems.KartStats
struct  KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15 
{
public:
	// System.Single KartGame.KartSystems.KartStats::acceleration
	float ___acceleration_0;
	// System.Single KartGame.KartSystems.KartStats::braking
	float ___braking_1;
	// System.Single KartGame.KartSystems.KartStats::coastingDrag
	float ___coastingDrag_2;
	// System.Single KartGame.KartSystems.KartStats::gravity
	float ___gravity_3;
	// System.Single KartGame.KartSystems.KartStats::grip
	float ___grip_4;
	// System.Single KartGame.KartSystems.KartStats::hopHeight
	float ___hopHeight_5;
	// System.Single KartGame.KartSystems.KartStats::reverseAcceleration
	float ___reverseAcceleration_6;
	// System.Single KartGame.KartSystems.KartStats::reverseSpeed
	float ___reverseSpeed_7;
	// System.Single KartGame.KartSystems.KartStats::topSpeed
	float ___topSpeed_8;
	// System.Single KartGame.KartSystems.KartStats::turnSpeed
	float ___turnSpeed_9;
	// System.Single KartGame.KartSystems.KartStats::weight
	float ___weight_10;

public:
	inline static int32_t get_offset_of_acceleration_0() { return static_cast<int32_t>(offsetof(KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15, ___acceleration_0)); }
	inline float get_acceleration_0() const { return ___acceleration_0; }
	inline float* get_address_of_acceleration_0() { return &___acceleration_0; }
	inline void set_acceleration_0(float value)
	{
		___acceleration_0 = value;
	}

	inline static int32_t get_offset_of_braking_1() { return static_cast<int32_t>(offsetof(KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15, ___braking_1)); }
	inline float get_braking_1() const { return ___braking_1; }
	inline float* get_address_of_braking_1() { return &___braking_1; }
	inline void set_braking_1(float value)
	{
		___braking_1 = value;
	}

	inline static int32_t get_offset_of_coastingDrag_2() { return static_cast<int32_t>(offsetof(KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15, ___coastingDrag_2)); }
	inline float get_coastingDrag_2() const { return ___coastingDrag_2; }
	inline float* get_address_of_coastingDrag_2() { return &___coastingDrag_2; }
	inline void set_coastingDrag_2(float value)
	{
		___coastingDrag_2 = value;
	}

	inline static int32_t get_offset_of_gravity_3() { return static_cast<int32_t>(offsetof(KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15, ___gravity_3)); }
	inline float get_gravity_3() const { return ___gravity_3; }
	inline float* get_address_of_gravity_3() { return &___gravity_3; }
	inline void set_gravity_3(float value)
	{
		___gravity_3 = value;
	}

	inline static int32_t get_offset_of_grip_4() { return static_cast<int32_t>(offsetof(KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15, ___grip_4)); }
	inline float get_grip_4() const { return ___grip_4; }
	inline float* get_address_of_grip_4() { return &___grip_4; }
	inline void set_grip_4(float value)
	{
		___grip_4 = value;
	}

	inline static int32_t get_offset_of_hopHeight_5() { return static_cast<int32_t>(offsetof(KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15, ___hopHeight_5)); }
	inline float get_hopHeight_5() const { return ___hopHeight_5; }
	inline float* get_address_of_hopHeight_5() { return &___hopHeight_5; }
	inline void set_hopHeight_5(float value)
	{
		___hopHeight_5 = value;
	}

	inline static int32_t get_offset_of_reverseAcceleration_6() { return static_cast<int32_t>(offsetof(KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15, ___reverseAcceleration_6)); }
	inline float get_reverseAcceleration_6() const { return ___reverseAcceleration_6; }
	inline float* get_address_of_reverseAcceleration_6() { return &___reverseAcceleration_6; }
	inline void set_reverseAcceleration_6(float value)
	{
		___reverseAcceleration_6 = value;
	}

	inline static int32_t get_offset_of_reverseSpeed_7() { return static_cast<int32_t>(offsetof(KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15, ___reverseSpeed_7)); }
	inline float get_reverseSpeed_7() const { return ___reverseSpeed_7; }
	inline float* get_address_of_reverseSpeed_7() { return &___reverseSpeed_7; }
	inline void set_reverseSpeed_7(float value)
	{
		___reverseSpeed_7 = value;
	}

	inline static int32_t get_offset_of_topSpeed_8() { return static_cast<int32_t>(offsetof(KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15, ___topSpeed_8)); }
	inline float get_topSpeed_8() const { return ___topSpeed_8; }
	inline float* get_address_of_topSpeed_8() { return &___topSpeed_8; }
	inline void set_topSpeed_8(float value)
	{
		___topSpeed_8 = value;
	}

	inline static int32_t get_offset_of_turnSpeed_9() { return static_cast<int32_t>(offsetof(KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15, ___turnSpeed_9)); }
	inline float get_turnSpeed_9() const { return ___turnSpeed_9; }
	inline float* get_address_of_turnSpeed_9() { return &___turnSpeed_9; }
	inline void set_turnSpeed_9(float value)
	{
		___turnSpeed_9 = value;
	}

	inline static int32_t get_offset_of_weight_10() { return static_cast<int32_t>(offsetof(KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15, ___weight_10)); }
	inline float get_weight_10() const { return ___weight_10; }
	inline float* get_address_of_weight_10() { return &___weight_10; }
	inline void set_weight_10(float value)
	{
		___weight_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KARTSTATS_T81AA5D3F8D42473FE31BB544F05C5FDAA3112D15_H
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
#ifndef LAYERMASK_TBB9173D8B6939D476E67E849280AC9F4EC4D93B0_H
#define LAYERMASK_TBB9173D8B6939D476E67E849280AC9F4EC4D93B0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_TBB9173D8B6939D476E67E849280AC9F4EC4D93B0_H
#ifndef QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#define QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
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
#ifndef ADDATIVEKARTMODIFIER_T805B13C64CF0A93C859D540A6B2B01A34C2F1966_H
#define ADDATIVEKARTMODIFIER_T805B13C64CF0A93C859D540A6B2B01A34C2F1966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KartGame.KartSystems.AddativeKartModifier
struct  AddativeKartModifier_t805B13C64CF0A93C859D540A6B2B01A34C2F1966  : public RuntimeObject
{
public:
	// KartGame.KartSystems.KartStats KartGame.KartSystems.AddativeKartModifier::modifiers
	KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15  ___modifiers_0;

public:
	inline static int32_t get_offset_of_modifiers_0() { return static_cast<int32_t>(offsetof(AddativeKartModifier_t805B13C64CF0A93C859D540A6B2B01A34C2F1966, ___modifiers_0)); }
	inline KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15  get_modifiers_0() const { return ___modifiers_0; }
	inline KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15 * get_address_of_modifiers_0() { return &___modifiers_0; }
	inline void set_modifiers_0(KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15  value)
	{
		___modifiers_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDATIVEKARTMODIFIER_T805B13C64CF0A93C859D540A6B2B01A34C2F1966_H
#ifndef GROUNDINFO_TD6CDE6BD1837D983F2B17CF476A5777A1AB5DB0E_H
#define GROUNDINFO_TD6CDE6BD1837D983F2B17CF476A5777A1AB5DB0E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KartGame.KartSystems.GroundInfo
struct  GroundInfo_tD6CDE6BD1837D983F2B17CF476A5777A1AB5DB0E 
{
public:
	// System.Boolean KartGame.KartSystems.GroundInfo::isCapsuleTouching
	bool ___isCapsuleTouching_0;
	// System.Boolean KartGame.KartSystems.GroundInfo::isGrounded
	bool ___isGrounded_1;
	// System.Boolean KartGame.KartSystems.GroundInfo::isCloseToGround
	bool ___isCloseToGround_2;
	// UnityEngine.Vector3 KartGame.KartSystems.GroundInfo::normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normal_3;

public:
	inline static int32_t get_offset_of_isCapsuleTouching_0() { return static_cast<int32_t>(offsetof(GroundInfo_tD6CDE6BD1837D983F2B17CF476A5777A1AB5DB0E, ___isCapsuleTouching_0)); }
	inline bool get_isCapsuleTouching_0() const { return ___isCapsuleTouching_0; }
	inline bool* get_address_of_isCapsuleTouching_0() { return &___isCapsuleTouching_0; }
	inline void set_isCapsuleTouching_0(bool value)
	{
		___isCapsuleTouching_0 = value;
	}

	inline static int32_t get_offset_of_isGrounded_1() { return static_cast<int32_t>(offsetof(GroundInfo_tD6CDE6BD1837D983F2B17CF476A5777A1AB5DB0E, ___isGrounded_1)); }
	inline bool get_isGrounded_1() const { return ___isGrounded_1; }
	inline bool* get_address_of_isGrounded_1() { return &___isGrounded_1; }
	inline void set_isGrounded_1(bool value)
	{
		___isGrounded_1 = value;
	}

	inline static int32_t get_offset_of_isCloseToGround_2() { return static_cast<int32_t>(offsetof(GroundInfo_tD6CDE6BD1837D983F2B17CF476A5777A1AB5DB0E, ___isCloseToGround_2)); }
	inline bool get_isCloseToGround_2() const { return ___isCloseToGround_2; }
	inline bool* get_address_of_isCloseToGround_2() { return &___isCloseToGround_2; }
	inline void set_isCloseToGround_2(bool value)
	{
		___isCloseToGround_2 = value;
	}

	inline static int32_t get_offset_of_normal_3() { return static_cast<int32_t>(offsetof(GroundInfo_tD6CDE6BD1837D983F2B17CF476A5777A1AB5DB0E, ___normal_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_normal_3() const { return ___normal_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_normal_3() { return &___normal_3; }
	inline void set_normal_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___normal_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of KartGame.KartSystems.GroundInfo
struct GroundInfo_tD6CDE6BD1837D983F2B17CF476A5777A1AB5DB0E_marshaled_pinvoke
{
	int32_t ___isCapsuleTouching_0;
	int32_t ___isGrounded_1;
	int32_t ___isCloseToGround_2;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normal_3;
};
// Native definition for COM marshalling of KartGame.KartSystems.GroundInfo
struct GroundInfo_tD6CDE6BD1837D983F2B17CF476A5777A1AB5DB0E_marshaled_com
{
	int32_t ___isCapsuleTouching_0;
	int32_t ___isGrounded_1;
	int32_t ___isCloseToGround_2;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normal_3;
};
#endif // GROUNDINFO_TD6CDE6BD1837D983F2B17CF476A5777A1AB5DB0E_H
#ifndef WHEEL_T4BD1834607089B767AF0641E2940B773B1B18FCC_H
#define WHEEL_T4BD1834607089B767AF0641E2940B773B1B18FCC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KartGame.KartSystems.KartAnimation_Wheel
struct  Wheel_t4BD1834607089B767AF0641E2940B773B1B18FCC  : public RuntimeObject
{
public:
	// UnityEngine.Transform KartGame.KartSystems.KartAnimation_Wheel::wheelTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___wheelTransform_0;
	// UnityEngine.Vector3 KartGame.KartSystems.KartAnimation_Wheel::axelAxis
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___axelAxis_1;
	// UnityEngine.Vector3 KartGame.KartSystems.KartAnimation_Wheel::steeringAxis
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___steeringAxis_2;
	// UnityEngine.Vector3 KartGame.KartSystems.KartAnimation_Wheel::m_NormalizedAxelAxis
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_NormalizedAxelAxis_3;
	// UnityEngine.Vector3 KartGame.KartSystems.KartAnimation_Wheel::m_NormalizedSteeringAxis
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_NormalizedSteeringAxis_4;
	// UnityEngine.Quaternion KartGame.KartSystems.KartAnimation_Wheel::m_SteerlessLocalRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_SteerlessLocalRotation_5;

public:
	inline static int32_t get_offset_of_wheelTransform_0() { return static_cast<int32_t>(offsetof(Wheel_t4BD1834607089B767AF0641E2940B773B1B18FCC, ___wheelTransform_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_wheelTransform_0() const { return ___wheelTransform_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_wheelTransform_0() { return &___wheelTransform_0; }
	inline void set_wheelTransform_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___wheelTransform_0 = value;
		Il2CppCodeGenWriteBarrier((&___wheelTransform_0), value);
	}

	inline static int32_t get_offset_of_axelAxis_1() { return static_cast<int32_t>(offsetof(Wheel_t4BD1834607089B767AF0641E2940B773B1B18FCC, ___axelAxis_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_axelAxis_1() const { return ___axelAxis_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_axelAxis_1() { return &___axelAxis_1; }
	inline void set_axelAxis_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___axelAxis_1 = value;
	}

	inline static int32_t get_offset_of_steeringAxis_2() { return static_cast<int32_t>(offsetof(Wheel_t4BD1834607089B767AF0641E2940B773B1B18FCC, ___steeringAxis_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_steeringAxis_2() const { return ___steeringAxis_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_steeringAxis_2() { return &___steeringAxis_2; }
	inline void set_steeringAxis_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___steeringAxis_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedAxelAxis_3() { return static_cast<int32_t>(offsetof(Wheel_t4BD1834607089B767AF0641E2940B773B1B18FCC, ___m_NormalizedAxelAxis_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_NormalizedAxelAxis_3() const { return ___m_NormalizedAxelAxis_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_NormalizedAxelAxis_3() { return &___m_NormalizedAxelAxis_3; }
	inline void set_m_NormalizedAxelAxis_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_NormalizedAxelAxis_3 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedSteeringAxis_4() { return static_cast<int32_t>(offsetof(Wheel_t4BD1834607089B767AF0641E2940B773B1B18FCC, ___m_NormalizedSteeringAxis_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_NormalizedSteeringAxis_4() const { return ___m_NormalizedSteeringAxis_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_NormalizedSteeringAxis_4() { return &___m_NormalizedSteeringAxis_4; }
	inline void set_m_NormalizedSteeringAxis_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_NormalizedSteeringAxis_4 = value;
	}

	inline static int32_t get_offset_of_m_SteerlessLocalRotation_5() { return static_cast<int32_t>(offsetof(Wheel_t4BD1834607089B767AF0641E2940B773B1B18FCC, ___m_SteerlessLocalRotation_5)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_m_SteerlessLocalRotation_5() const { return ___m_SteerlessLocalRotation_5; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_m_SteerlessLocalRotation_5() { return &___m_SteerlessLocalRotation_5; }
	inline void set_m_SteerlessLocalRotation_5(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___m_SteerlessLocalRotation_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WHEEL_T4BD1834607089B767AF0641E2940B773B1B18FCC_H
#ifndef DRIFTSTATE_T3DD619E91C3390533C1EE7E712B78C404546ED1F_H
#define DRIFTSTATE_T3DD619E91C3390533C1EE7E712B78C404546ED1F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KartGame.KartSystems.KartMovement_DriftState
struct  DriftState_t3DD619E91C3390533C1EE7E712B78C404546ED1F 
{
public:
	// System.Int32 KartGame.KartSystems.KartMovement_DriftState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DriftState_t3DD619E91C3390533C1EE7E712B78C404546ED1F, ___value___2)); }
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
#endif // DRIFTSTATE_T3DD619E91C3390533C1EE7E712B78C404546ED1F_H
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
#ifndef ADDATIVEKARTMODIFIERASSET_T7DB36026E8F0AE8761CAF8E8480006238CD79E59_H
#define ADDATIVEKARTMODIFIERASSET_T7DB36026E8F0AE8761CAF8E8480006238CD79E59_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KartGame.KartSystems.AddativeKartModifierAsset
struct  AddativeKartModifierAsset_t7DB36026E8F0AE8761CAF8E8480006238CD79E59  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// KartGame.KartSystems.KartStats KartGame.KartSystems.AddativeKartModifierAsset::statAdditions
	KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15  ___statAdditions_4;

public:
	inline static int32_t get_offset_of_statAdditions_4() { return static_cast<int32_t>(offsetof(AddativeKartModifierAsset_t7DB36026E8F0AE8761CAF8E8480006238CD79E59, ___statAdditions_4)); }
	inline KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15  get_statAdditions_4() const { return ___statAdditions_4; }
	inline KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15 * get_address_of_statAdditions_4() { return &___statAdditions_4; }
	inline void set_statAdditions_4(KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15  value)
	{
		___statAdditions_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDATIVEKARTMODIFIERASSET_T7DB36026E8F0AE8761CAF8E8480006238CD79E59_H
#ifndef MULTIPLICATIVEKARTMODIFIERASSET_T1284DA6BC482FF7CE884E4AA0341D139D7E4324D_H
#define MULTIPLICATIVEKARTMODIFIERASSET_T1284DA6BC482FF7CE884E4AA0341D139D7E4324D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KartGame.KartSystems.MultiplicativeKartModifierAsset
struct  MultiplicativeKartModifierAsset_t1284DA6BC482FF7CE884E4AA0341D139D7E4324D  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// KartGame.KartSystems.KartStats KartGame.KartSystems.MultiplicativeKartModifierAsset::statMultipliers
	KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15  ___statMultipliers_4;

public:
	inline static int32_t get_offset_of_statMultipliers_4() { return static_cast<int32_t>(offsetof(MultiplicativeKartModifierAsset_t1284DA6BC482FF7CE884E4AA0341D139D7E4324D, ___statMultipliers_4)); }
	inline KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15  get_statMultipliers_4() const { return ___statMultipliers_4; }
	inline KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15 * get_address_of_statMultipliers_4() { return &___statMultipliers_4; }
	inline void set_statMultipliers_4(KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15  value)
	{
		___statMultipliers_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTIPLICATIVEKARTMODIFIERASSET_T1284DA6BC482FF7CE884E4AA0341D139D7E4324D_H
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
#ifndef ENGINEAUDIO_T308D2FFEAEF3E4F022442FA9989046199A49FE1A_H
#define ENGINEAUDIO_T308D2FFEAEF3E4F022442FA9989046199A49FE1A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KartGame.KartSystems.EngineAudio
struct  EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Object KartGame.KartSystems.EngineAudio::kartInfo
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___kartInfo_4;
	// System.Single KartGame.KartSystems.EngineAudio::RPM
	float ___RPM_5;
	// System.Single KartGame.KartSystems.EngineAudio::minRPM
	float ___minRPM_6;
	// System.Single KartGame.KartSystems.EngineAudio::maxRPM
	float ___maxRPM_7;
	// System.Single KartGame.KartSystems.EngineAudio::lumpyCamFactor
	float ___lumpyCamFactor_8;
	// System.Single KartGame.KartSystems.EngineAudio::minVolume
	float ___minVolume_9;
	// System.Single KartGame.KartSystems.EngineAudio::maxVolume
	float ___maxVolume_10;
	// System.Single KartGame.KartSystems.EngineAudio::strokeDamping
	float ___strokeDamping_11;
	// KartGame.KartSystems.EngineAudio_Stroke KartGame.KartSystems.EngineAudio::intake
	Stroke_t77C3F378E54FF34288C62A2F232137A206F6C34C  ___intake_12;
	// KartGame.KartSystems.EngineAudio_Stroke KartGame.KartSystems.EngineAudio::compression
	Stroke_t77C3F378E54FF34288C62A2F232137A206F6C34C  ___compression_13;
	// KartGame.KartSystems.EngineAudio_Stroke KartGame.KartSystems.EngineAudio::combustion
	Stroke_t77C3F378E54FF34288C62A2F232137A206F6C34C  ___combustion_14;
	// KartGame.KartSystems.EngineAudio_Stroke KartGame.KartSystems.EngineAudio::exhaust
	Stroke_t77C3F378E54FF34288C62A2F232137A206F6C34C  ___exhaust_15;
	// System.Boolean KartGame.KartSystems.EngineAudio::usePow
	bool ___usePow_16;
	// KartGame.KartSystems.IKartInfo KartGame.KartSystems.EngineAudio::m_KartInfo
	RuntimeObject* ___m_KartInfo_17;
	// System.Single KartGame.KartSystems.EngineAudio::m_NextStrokeTime
	float ___m_NextStrokeTime_18;
	// System.Single KartGame.KartSystems.EngineAudio::m_Time
	float ___m_Time_19;
	// System.Single KartGame.KartSystems.EngineAudio::m_SecondsPerSample
	float ___m_SecondsPerSample_20;
	// System.Int32 KartGame.KartSystems.EngineAudio::m_Stroke
	int32_t ___m_Stroke_21;
	// System.Single[] KartGame.KartSystems.EngineAudio::m_RandomBuffer
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___m_RandomBuffer_22;
	// System.Single KartGame.KartSystems.EngineAudio::m_DeltaRPM
	float ___m_DeltaRPM_23;
	// System.Single KartGame.KartSystems.EngineAudio::m_LastRPM
	float ___m_LastRPM_24;
	// System.Single KartGame.KartSystems.EngineAudio::m_LastSampleL
	float ___m_LastSampleL_25;
	// System.Single KartGame.KartSystems.EngineAudio::m_LastSampleR
	float ___m_LastSampleR_26;
	// System.Single KartGame.KartSystems.EngineAudio::m_Damper
	float ___m_Damper_27;
	// System.Single KartGame.KartSystems.EngineAudio::m_Volume
	float ___m_Volume_28;

public:
	inline static int32_t get_offset_of_kartInfo_4() { return static_cast<int32_t>(offsetof(EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A, ___kartInfo_4)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_kartInfo_4() const { return ___kartInfo_4; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_kartInfo_4() { return &___kartInfo_4; }
	inline void set_kartInfo_4(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___kartInfo_4 = value;
		Il2CppCodeGenWriteBarrier((&___kartInfo_4), value);
	}

	inline static int32_t get_offset_of_RPM_5() { return static_cast<int32_t>(offsetof(EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A, ___RPM_5)); }
	inline float get_RPM_5() const { return ___RPM_5; }
	inline float* get_address_of_RPM_5() { return &___RPM_5; }
	inline void set_RPM_5(float value)
	{
		___RPM_5 = value;
	}

	inline static int32_t get_offset_of_minRPM_6() { return static_cast<int32_t>(offsetof(EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A, ___minRPM_6)); }
	inline float get_minRPM_6() const { return ___minRPM_6; }
	inline float* get_address_of_minRPM_6() { return &___minRPM_6; }
	inline void set_minRPM_6(float value)
	{
		___minRPM_6 = value;
	}

	inline static int32_t get_offset_of_maxRPM_7() { return static_cast<int32_t>(offsetof(EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A, ___maxRPM_7)); }
	inline float get_maxRPM_7() const { return ___maxRPM_7; }
	inline float* get_address_of_maxRPM_7() { return &___maxRPM_7; }
	inline void set_maxRPM_7(float value)
	{
		___maxRPM_7 = value;
	}

	inline static int32_t get_offset_of_lumpyCamFactor_8() { return static_cast<int32_t>(offsetof(EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A, ___lumpyCamFactor_8)); }
	inline float get_lumpyCamFactor_8() const { return ___lumpyCamFactor_8; }
	inline float* get_address_of_lumpyCamFactor_8() { return &___lumpyCamFactor_8; }
	inline void set_lumpyCamFactor_8(float value)
	{
		___lumpyCamFactor_8 = value;
	}

	inline static int32_t get_offset_of_minVolume_9() { return static_cast<int32_t>(offsetof(EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A, ___minVolume_9)); }
	inline float get_minVolume_9() const { return ___minVolume_9; }
	inline float* get_address_of_minVolume_9() { return &___minVolume_9; }
	inline void set_minVolume_9(float value)
	{
		___minVolume_9 = value;
	}

	inline static int32_t get_offset_of_maxVolume_10() { return static_cast<int32_t>(offsetof(EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A, ___maxVolume_10)); }
	inline float get_maxVolume_10() const { return ___maxVolume_10; }
	inline float* get_address_of_maxVolume_10() { return &___maxVolume_10; }
	inline void set_maxVolume_10(float value)
	{
		___maxVolume_10 = value;
	}

	inline static int32_t get_offset_of_strokeDamping_11() { return static_cast<int32_t>(offsetof(EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A, ___strokeDamping_11)); }
	inline float get_strokeDamping_11() const { return ___strokeDamping_11; }
	inline float* get_address_of_strokeDamping_11() { return &___strokeDamping_11; }
	inline void set_strokeDamping_11(float value)
	{
		___strokeDamping_11 = value;
	}

	inline static int32_t get_offset_of_intake_12() { return static_cast<int32_t>(offsetof(EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A, ___intake_12)); }
	inline Stroke_t77C3F378E54FF34288C62A2F232137A206F6C34C  get_intake_12() const { return ___intake_12; }
	inline Stroke_t77C3F378E54FF34288C62A2F232137A206F6C34C * get_address_of_intake_12() { return &___intake_12; }
	inline void set_intake_12(Stroke_t77C3F378E54FF34288C62A2F232137A206F6C34C  value)
	{
		___intake_12 = value;
	}

	inline static int32_t get_offset_of_compression_13() { return static_cast<int32_t>(offsetof(EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A, ___compression_13)); }
	inline Stroke_t77C3F378E54FF34288C62A2F232137A206F6C34C  get_compression_13() const { return ___compression_13; }
	inline Stroke_t77C3F378E54FF34288C62A2F232137A206F6C34C * get_address_of_compression_13() { return &___compression_13; }
	inline void set_compression_13(Stroke_t77C3F378E54FF34288C62A2F232137A206F6C34C  value)
	{
		___compression_13 = value;
	}

	inline static int32_t get_offset_of_combustion_14() { return static_cast<int32_t>(offsetof(EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A, ___combustion_14)); }
	inline Stroke_t77C3F378E54FF34288C62A2F232137A206F6C34C  get_combustion_14() const { return ___combustion_14; }
	inline Stroke_t77C3F378E54FF34288C62A2F232137A206F6C34C * get_address_of_combustion_14() { return &___combustion_14; }
	inline void set_combustion_14(Stroke_t77C3F378E54FF34288C62A2F232137A206F6C34C  value)
	{
		___combustion_14 = value;
	}

	inline static int32_t get_offset_of_exhaust_15() { return static_cast<int32_t>(offsetof(EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A, ___exhaust_15)); }
	inline Stroke_t77C3F378E54FF34288C62A2F232137A206F6C34C  get_exhaust_15() const { return ___exhaust_15; }
	inline Stroke_t77C3F378E54FF34288C62A2F232137A206F6C34C * get_address_of_exhaust_15() { return &___exhaust_15; }
	inline void set_exhaust_15(Stroke_t77C3F378E54FF34288C62A2F232137A206F6C34C  value)
	{
		___exhaust_15 = value;
	}

	inline static int32_t get_offset_of_usePow_16() { return static_cast<int32_t>(offsetof(EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A, ___usePow_16)); }
	inline bool get_usePow_16() const { return ___usePow_16; }
	inline bool* get_address_of_usePow_16() { return &___usePow_16; }
	inline void set_usePow_16(bool value)
	{
		___usePow_16 = value;
	}

	inline static int32_t get_offset_of_m_KartInfo_17() { return static_cast<int32_t>(offsetof(EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A, ___m_KartInfo_17)); }
	inline RuntimeObject* get_m_KartInfo_17() const { return ___m_KartInfo_17; }
	inline RuntimeObject** get_address_of_m_KartInfo_17() { return &___m_KartInfo_17; }
	inline void set_m_KartInfo_17(RuntimeObject* value)
	{
		___m_KartInfo_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_KartInfo_17), value);
	}

	inline static int32_t get_offset_of_m_NextStrokeTime_18() { return static_cast<int32_t>(offsetof(EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A, ___m_NextStrokeTime_18)); }
	inline float get_m_NextStrokeTime_18() const { return ___m_NextStrokeTime_18; }
	inline float* get_address_of_m_NextStrokeTime_18() { return &___m_NextStrokeTime_18; }
	inline void set_m_NextStrokeTime_18(float value)
	{
		___m_NextStrokeTime_18 = value;
	}

	inline static int32_t get_offset_of_m_Time_19() { return static_cast<int32_t>(offsetof(EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A, ___m_Time_19)); }
	inline float get_m_Time_19() const { return ___m_Time_19; }
	inline float* get_address_of_m_Time_19() { return &___m_Time_19; }
	inline void set_m_Time_19(float value)
	{
		___m_Time_19 = value;
	}

	inline static int32_t get_offset_of_m_SecondsPerSample_20() { return static_cast<int32_t>(offsetof(EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A, ___m_SecondsPerSample_20)); }
	inline float get_m_SecondsPerSample_20() const { return ___m_SecondsPerSample_20; }
	inline float* get_address_of_m_SecondsPerSample_20() { return &___m_SecondsPerSample_20; }
	inline void set_m_SecondsPerSample_20(float value)
	{
		___m_SecondsPerSample_20 = value;
	}

	inline static int32_t get_offset_of_m_Stroke_21() { return static_cast<int32_t>(offsetof(EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A, ___m_Stroke_21)); }
	inline int32_t get_m_Stroke_21() const { return ___m_Stroke_21; }
	inline int32_t* get_address_of_m_Stroke_21() { return &___m_Stroke_21; }
	inline void set_m_Stroke_21(int32_t value)
	{
		___m_Stroke_21 = value;
	}

	inline static int32_t get_offset_of_m_RandomBuffer_22() { return static_cast<int32_t>(offsetof(EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A, ___m_RandomBuffer_22)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_m_RandomBuffer_22() const { return ___m_RandomBuffer_22; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_m_RandomBuffer_22() { return &___m_RandomBuffer_22; }
	inline void set_m_RandomBuffer_22(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___m_RandomBuffer_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_RandomBuffer_22), value);
	}

	inline static int32_t get_offset_of_m_DeltaRPM_23() { return static_cast<int32_t>(offsetof(EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A, ___m_DeltaRPM_23)); }
	inline float get_m_DeltaRPM_23() const { return ___m_DeltaRPM_23; }
	inline float* get_address_of_m_DeltaRPM_23() { return &___m_DeltaRPM_23; }
	inline void set_m_DeltaRPM_23(float value)
	{
		___m_DeltaRPM_23 = value;
	}

	inline static int32_t get_offset_of_m_LastRPM_24() { return static_cast<int32_t>(offsetof(EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A, ___m_LastRPM_24)); }
	inline float get_m_LastRPM_24() const { return ___m_LastRPM_24; }
	inline float* get_address_of_m_LastRPM_24() { return &___m_LastRPM_24; }
	inline void set_m_LastRPM_24(float value)
	{
		___m_LastRPM_24 = value;
	}

	inline static int32_t get_offset_of_m_LastSampleL_25() { return static_cast<int32_t>(offsetof(EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A, ___m_LastSampleL_25)); }
	inline float get_m_LastSampleL_25() const { return ___m_LastSampleL_25; }
	inline float* get_address_of_m_LastSampleL_25() { return &___m_LastSampleL_25; }
	inline void set_m_LastSampleL_25(float value)
	{
		___m_LastSampleL_25 = value;
	}

	inline static int32_t get_offset_of_m_LastSampleR_26() { return static_cast<int32_t>(offsetof(EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A, ___m_LastSampleR_26)); }
	inline float get_m_LastSampleR_26() const { return ___m_LastSampleR_26; }
	inline float* get_address_of_m_LastSampleR_26() { return &___m_LastSampleR_26; }
	inline void set_m_LastSampleR_26(float value)
	{
		___m_LastSampleR_26 = value;
	}

	inline static int32_t get_offset_of_m_Damper_27() { return static_cast<int32_t>(offsetof(EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A, ___m_Damper_27)); }
	inline float get_m_Damper_27() const { return ___m_Damper_27; }
	inline float* get_address_of_m_Damper_27() { return &___m_Damper_27; }
	inline void set_m_Damper_27(float value)
	{
		___m_Damper_27 = value;
	}

	inline static int32_t get_offset_of_m_Volume_28() { return static_cast<int32_t>(offsetof(EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A, ___m_Volume_28)); }
	inline float get_m_Volume_28() const { return ___m_Volume_28; }
	inline float* get_address_of_m_Volume_28() { return &___m_Volume_28; }
	inline void set_m_Volume_28(float value)
	{
		___m_Volume_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENGINEAUDIO_T308D2FFEAEF3E4F022442FA9989046199A49FE1A_H
#ifndef GAMEPADINPUT_T6E73CA7F5C3712CEB708D0E0BB9559B5D903398C_H
#define GAMEPADINPUT_T6E73CA7F5C3712CEB708D0E0BB9559B5D903398C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KartGame.KartSystems.GamepadInput
struct  GamepadInput_t6E73CA7F5C3712CEB708D0E0BB9559B5D903398C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single KartGame.KartSystems.GamepadInput::m_Acceleration
	float ___m_Acceleration_4;
	// System.Single KartGame.KartSystems.GamepadInput::m_Steering
	float ___m_Steering_5;
	// System.Boolean KartGame.KartSystems.GamepadInput::m_HopPressed
	bool ___m_HopPressed_6;
	// System.Boolean KartGame.KartSystems.GamepadInput::m_HopHeld
	bool ___m_HopHeld_7;
	// System.Boolean KartGame.KartSystems.GamepadInput::m_BoostPressed
	bool ___m_BoostPressed_8;
	// System.Boolean KartGame.KartSystems.GamepadInput::m_FirePressed
	bool ___m_FirePressed_9;
	// System.Boolean KartGame.KartSystems.GamepadInput::m_FixedUpdateHappened
	bool ___m_FixedUpdateHappened_10;

public:
	inline static int32_t get_offset_of_m_Acceleration_4() { return static_cast<int32_t>(offsetof(GamepadInput_t6E73CA7F5C3712CEB708D0E0BB9559B5D903398C, ___m_Acceleration_4)); }
	inline float get_m_Acceleration_4() const { return ___m_Acceleration_4; }
	inline float* get_address_of_m_Acceleration_4() { return &___m_Acceleration_4; }
	inline void set_m_Acceleration_4(float value)
	{
		___m_Acceleration_4 = value;
	}

	inline static int32_t get_offset_of_m_Steering_5() { return static_cast<int32_t>(offsetof(GamepadInput_t6E73CA7F5C3712CEB708D0E0BB9559B5D903398C, ___m_Steering_5)); }
	inline float get_m_Steering_5() const { return ___m_Steering_5; }
	inline float* get_address_of_m_Steering_5() { return &___m_Steering_5; }
	inline void set_m_Steering_5(float value)
	{
		___m_Steering_5 = value;
	}

	inline static int32_t get_offset_of_m_HopPressed_6() { return static_cast<int32_t>(offsetof(GamepadInput_t6E73CA7F5C3712CEB708D0E0BB9559B5D903398C, ___m_HopPressed_6)); }
	inline bool get_m_HopPressed_6() const { return ___m_HopPressed_6; }
	inline bool* get_address_of_m_HopPressed_6() { return &___m_HopPressed_6; }
	inline void set_m_HopPressed_6(bool value)
	{
		___m_HopPressed_6 = value;
	}

	inline static int32_t get_offset_of_m_HopHeld_7() { return static_cast<int32_t>(offsetof(GamepadInput_t6E73CA7F5C3712CEB708D0E0BB9559B5D903398C, ___m_HopHeld_7)); }
	inline bool get_m_HopHeld_7() const { return ___m_HopHeld_7; }
	inline bool* get_address_of_m_HopHeld_7() { return &___m_HopHeld_7; }
	inline void set_m_HopHeld_7(bool value)
	{
		___m_HopHeld_7 = value;
	}

	inline static int32_t get_offset_of_m_BoostPressed_8() { return static_cast<int32_t>(offsetof(GamepadInput_t6E73CA7F5C3712CEB708D0E0BB9559B5D903398C, ___m_BoostPressed_8)); }
	inline bool get_m_BoostPressed_8() const { return ___m_BoostPressed_8; }
	inline bool* get_address_of_m_BoostPressed_8() { return &___m_BoostPressed_8; }
	inline void set_m_BoostPressed_8(bool value)
	{
		___m_BoostPressed_8 = value;
	}

	inline static int32_t get_offset_of_m_FirePressed_9() { return static_cast<int32_t>(offsetof(GamepadInput_t6E73CA7F5C3712CEB708D0E0BB9559B5D903398C, ___m_FirePressed_9)); }
	inline bool get_m_FirePressed_9() const { return ___m_FirePressed_9; }
	inline bool* get_address_of_m_FirePressed_9() { return &___m_FirePressed_9; }
	inline void set_m_FirePressed_9(bool value)
	{
		___m_FirePressed_9 = value;
	}

	inline static int32_t get_offset_of_m_FixedUpdateHappened_10() { return static_cast<int32_t>(offsetof(GamepadInput_t6E73CA7F5C3712CEB708D0E0BB9559B5D903398C, ___m_FixedUpdateHappened_10)); }
	inline bool get_m_FixedUpdateHappened_10() const { return ___m_FixedUpdateHappened_10; }
	inline bool* get_address_of_m_FixedUpdateHappened_10() { return &___m_FixedUpdateHappened_10; }
	inline void set_m_FixedUpdateHappened_10(bool value)
	{
		___m_FixedUpdateHappened_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEPADINPUT_T6E73CA7F5C3712CEB708D0E0BB9559B5D903398C_H
#ifndef KARTANIMATION_T2A802B69509A97C0F25A1BF643E948A2433A5AA9_H
#define KARTANIMATION_T2A802B69509A97C0F25A1BF643E948A2433A5AA9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KartGame.KartSystems.KartAnimation
struct  KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Object KartGame.KartSystems.KartAnimation::input
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___input_4;
	// UnityEngine.Animator KartGame.KartSystems.KartAnimation::playerAnimator
	Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___playerAnimator_5;
	// UnityEngine.Object KartGame.KartSystems.KartAnimation::kartMovement
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___kartMovement_6;
	// System.Single KartGame.KartSystems.KartAnimation::steeringAnimationDamping
	float ___steeringAnimationDamping_7;
	// UnityEngine.Transform KartGame.KartSystems.KartAnimation::steeringWheel
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___steeringWheel_8;
	// System.Single KartGame.KartSystems.KartAnimation::maxSteeringWheelAngle
	float ___maxSteeringWheelAngle_9;
	// UnityEngine.Vector3 KartGame.KartSystems.KartAnimation::steeringWheelRotationAxis
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___steeringWheelRotationAxis_10;
	// System.Single KartGame.KartSystems.KartAnimation::frontWheelRadius
	float ___frontWheelRadius_11;
	// System.Single KartGame.KartSystems.KartAnimation::rearWheelRadius
	float ___rearWheelRadius_12;
	// System.Single KartGame.KartSystems.KartAnimation::maxSteeringAngle
	float ___maxSteeringAngle_13;
	// KartGame.KartSystems.KartAnimation_Wheel KartGame.KartSystems.KartAnimation::frontLeftWheel
	Wheel_t4BD1834607089B767AF0641E2940B773B1B18FCC * ___frontLeftWheel_14;
	// KartGame.KartSystems.KartAnimation_Wheel KartGame.KartSystems.KartAnimation::frontRightWheel
	Wheel_t4BD1834607089B767AF0641E2940B773B1B18FCC * ___frontRightWheel_15;
	// KartGame.KartSystems.KartAnimation_Wheel KartGame.KartSystems.KartAnimation::rearLeftWheel
	Wheel_t4BD1834607089B767AF0641E2940B773B1B18FCC * ___rearLeftWheel_16;
	// KartGame.KartSystems.KartAnimation_Wheel KartGame.KartSystems.KartAnimation::rearRightWheel
	Wheel_t4BD1834607089B767AF0641E2940B773B1B18FCC * ___rearRightWheel_17;
	// KartGame.KartSystems.IInput KartGame.KartSystems.KartAnimation::m_Input
	RuntimeObject* ___m_Input_18;
	// KartGame.KartSystems.IKartInfo KartGame.KartSystems.KartAnimation::m_KartMovement
	RuntimeObject* ___m_KartMovement_19;
	// UnityEngine.Quaternion KartGame.KartSystems.KartAnimation::m_DefaultSteeringWheelLocalRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_DefaultSteeringWheelLocalRotation_20;
	// UnityEngine.Vector3 KartGame.KartSystems.KartAnimation::m_NormalizedSteeringWheelRotationAxis
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_NormalizedSteeringWheelRotationAxis_21;
	// System.Single KartGame.KartSystems.KartAnimation::m_InverseFrontWheelRadius
	float ___m_InverseFrontWheelRadius_22;
	// System.Single KartGame.KartSystems.KartAnimation::m_InverseRearWheelRadius
	float ___m_InverseRearWheelRadius_23;
	// System.Single KartGame.KartSystems.KartAnimation::m_SmoothedSteeringInput
	float ___m_SmoothedSteeringInput_24;

public:
	inline static int32_t get_offset_of_input_4() { return static_cast<int32_t>(offsetof(KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9, ___input_4)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_input_4() const { return ___input_4; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_input_4() { return &___input_4; }
	inline void set_input_4(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___input_4 = value;
		Il2CppCodeGenWriteBarrier((&___input_4), value);
	}

	inline static int32_t get_offset_of_playerAnimator_5() { return static_cast<int32_t>(offsetof(KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9, ___playerAnimator_5)); }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * get_playerAnimator_5() const { return ___playerAnimator_5; }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A ** get_address_of_playerAnimator_5() { return &___playerAnimator_5; }
	inline void set_playerAnimator_5(Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * value)
	{
		___playerAnimator_5 = value;
		Il2CppCodeGenWriteBarrier((&___playerAnimator_5), value);
	}

	inline static int32_t get_offset_of_kartMovement_6() { return static_cast<int32_t>(offsetof(KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9, ___kartMovement_6)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_kartMovement_6() const { return ___kartMovement_6; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_kartMovement_6() { return &___kartMovement_6; }
	inline void set_kartMovement_6(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___kartMovement_6 = value;
		Il2CppCodeGenWriteBarrier((&___kartMovement_6), value);
	}

	inline static int32_t get_offset_of_steeringAnimationDamping_7() { return static_cast<int32_t>(offsetof(KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9, ___steeringAnimationDamping_7)); }
	inline float get_steeringAnimationDamping_7() const { return ___steeringAnimationDamping_7; }
	inline float* get_address_of_steeringAnimationDamping_7() { return &___steeringAnimationDamping_7; }
	inline void set_steeringAnimationDamping_7(float value)
	{
		___steeringAnimationDamping_7 = value;
	}

	inline static int32_t get_offset_of_steeringWheel_8() { return static_cast<int32_t>(offsetof(KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9, ___steeringWheel_8)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_steeringWheel_8() const { return ___steeringWheel_8; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_steeringWheel_8() { return &___steeringWheel_8; }
	inline void set_steeringWheel_8(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___steeringWheel_8 = value;
		Il2CppCodeGenWriteBarrier((&___steeringWheel_8), value);
	}

	inline static int32_t get_offset_of_maxSteeringWheelAngle_9() { return static_cast<int32_t>(offsetof(KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9, ___maxSteeringWheelAngle_9)); }
	inline float get_maxSteeringWheelAngle_9() const { return ___maxSteeringWheelAngle_9; }
	inline float* get_address_of_maxSteeringWheelAngle_9() { return &___maxSteeringWheelAngle_9; }
	inline void set_maxSteeringWheelAngle_9(float value)
	{
		___maxSteeringWheelAngle_9 = value;
	}

	inline static int32_t get_offset_of_steeringWheelRotationAxis_10() { return static_cast<int32_t>(offsetof(KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9, ___steeringWheelRotationAxis_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_steeringWheelRotationAxis_10() const { return ___steeringWheelRotationAxis_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_steeringWheelRotationAxis_10() { return &___steeringWheelRotationAxis_10; }
	inline void set_steeringWheelRotationAxis_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___steeringWheelRotationAxis_10 = value;
	}

	inline static int32_t get_offset_of_frontWheelRadius_11() { return static_cast<int32_t>(offsetof(KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9, ___frontWheelRadius_11)); }
	inline float get_frontWheelRadius_11() const { return ___frontWheelRadius_11; }
	inline float* get_address_of_frontWheelRadius_11() { return &___frontWheelRadius_11; }
	inline void set_frontWheelRadius_11(float value)
	{
		___frontWheelRadius_11 = value;
	}

	inline static int32_t get_offset_of_rearWheelRadius_12() { return static_cast<int32_t>(offsetof(KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9, ___rearWheelRadius_12)); }
	inline float get_rearWheelRadius_12() const { return ___rearWheelRadius_12; }
	inline float* get_address_of_rearWheelRadius_12() { return &___rearWheelRadius_12; }
	inline void set_rearWheelRadius_12(float value)
	{
		___rearWheelRadius_12 = value;
	}

	inline static int32_t get_offset_of_maxSteeringAngle_13() { return static_cast<int32_t>(offsetof(KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9, ___maxSteeringAngle_13)); }
	inline float get_maxSteeringAngle_13() const { return ___maxSteeringAngle_13; }
	inline float* get_address_of_maxSteeringAngle_13() { return &___maxSteeringAngle_13; }
	inline void set_maxSteeringAngle_13(float value)
	{
		___maxSteeringAngle_13 = value;
	}

	inline static int32_t get_offset_of_frontLeftWheel_14() { return static_cast<int32_t>(offsetof(KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9, ___frontLeftWheel_14)); }
	inline Wheel_t4BD1834607089B767AF0641E2940B773B1B18FCC * get_frontLeftWheel_14() const { return ___frontLeftWheel_14; }
	inline Wheel_t4BD1834607089B767AF0641E2940B773B1B18FCC ** get_address_of_frontLeftWheel_14() { return &___frontLeftWheel_14; }
	inline void set_frontLeftWheel_14(Wheel_t4BD1834607089B767AF0641E2940B773B1B18FCC * value)
	{
		___frontLeftWheel_14 = value;
		Il2CppCodeGenWriteBarrier((&___frontLeftWheel_14), value);
	}

	inline static int32_t get_offset_of_frontRightWheel_15() { return static_cast<int32_t>(offsetof(KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9, ___frontRightWheel_15)); }
	inline Wheel_t4BD1834607089B767AF0641E2940B773B1B18FCC * get_frontRightWheel_15() const { return ___frontRightWheel_15; }
	inline Wheel_t4BD1834607089B767AF0641E2940B773B1B18FCC ** get_address_of_frontRightWheel_15() { return &___frontRightWheel_15; }
	inline void set_frontRightWheel_15(Wheel_t4BD1834607089B767AF0641E2940B773B1B18FCC * value)
	{
		___frontRightWheel_15 = value;
		Il2CppCodeGenWriteBarrier((&___frontRightWheel_15), value);
	}

	inline static int32_t get_offset_of_rearLeftWheel_16() { return static_cast<int32_t>(offsetof(KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9, ___rearLeftWheel_16)); }
	inline Wheel_t4BD1834607089B767AF0641E2940B773B1B18FCC * get_rearLeftWheel_16() const { return ___rearLeftWheel_16; }
	inline Wheel_t4BD1834607089B767AF0641E2940B773B1B18FCC ** get_address_of_rearLeftWheel_16() { return &___rearLeftWheel_16; }
	inline void set_rearLeftWheel_16(Wheel_t4BD1834607089B767AF0641E2940B773B1B18FCC * value)
	{
		___rearLeftWheel_16 = value;
		Il2CppCodeGenWriteBarrier((&___rearLeftWheel_16), value);
	}

	inline static int32_t get_offset_of_rearRightWheel_17() { return static_cast<int32_t>(offsetof(KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9, ___rearRightWheel_17)); }
	inline Wheel_t4BD1834607089B767AF0641E2940B773B1B18FCC * get_rearRightWheel_17() const { return ___rearRightWheel_17; }
	inline Wheel_t4BD1834607089B767AF0641E2940B773B1B18FCC ** get_address_of_rearRightWheel_17() { return &___rearRightWheel_17; }
	inline void set_rearRightWheel_17(Wheel_t4BD1834607089B767AF0641E2940B773B1B18FCC * value)
	{
		___rearRightWheel_17 = value;
		Il2CppCodeGenWriteBarrier((&___rearRightWheel_17), value);
	}

	inline static int32_t get_offset_of_m_Input_18() { return static_cast<int32_t>(offsetof(KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9, ___m_Input_18)); }
	inline RuntimeObject* get_m_Input_18() const { return ___m_Input_18; }
	inline RuntimeObject** get_address_of_m_Input_18() { return &___m_Input_18; }
	inline void set_m_Input_18(RuntimeObject* value)
	{
		___m_Input_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_Input_18), value);
	}

	inline static int32_t get_offset_of_m_KartMovement_19() { return static_cast<int32_t>(offsetof(KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9, ___m_KartMovement_19)); }
	inline RuntimeObject* get_m_KartMovement_19() const { return ___m_KartMovement_19; }
	inline RuntimeObject** get_address_of_m_KartMovement_19() { return &___m_KartMovement_19; }
	inline void set_m_KartMovement_19(RuntimeObject* value)
	{
		___m_KartMovement_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_KartMovement_19), value);
	}

	inline static int32_t get_offset_of_m_DefaultSteeringWheelLocalRotation_20() { return static_cast<int32_t>(offsetof(KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9, ___m_DefaultSteeringWheelLocalRotation_20)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_m_DefaultSteeringWheelLocalRotation_20() const { return ___m_DefaultSteeringWheelLocalRotation_20; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_m_DefaultSteeringWheelLocalRotation_20() { return &___m_DefaultSteeringWheelLocalRotation_20; }
	inline void set_m_DefaultSteeringWheelLocalRotation_20(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___m_DefaultSteeringWheelLocalRotation_20 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedSteeringWheelRotationAxis_21() { return static_cast<int32_t>(offsetof(KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9, ___m_NormalizedSteeringWheelRotationAxis_21)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_NormalizedSteeringWheelRotationAxis_21() const { return ___m_NormalizedSteeringWheelRotationAxis_21; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_NormalizedSteeringWheelRotationAxis_21() { return &___m_NormalizedSteeringWheelRotationAxis_21; }
	inline void set_m_NormalizedSteeringWheelRotationAxis_21(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_NormalizedSteeringWheelRotationAxis_21 = value;
	}

	inline static int32_t get_offset_of_m_InverseFrontWheelRadius_22() { return static_cast<int32_t>(offsetof(KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9, ___m_InverseFrontWheelRadius_22)); }
	inline float get_m_InverseFrontWheelRadius_22() const { return ___m_InverseFrontWheelRadius_22; }
	inline float* get_address_of_m_InverseFrontWheelRadius_22() { return &___m_InverseFrontWheelRadius_22; }
	inline void set_m_InverseFrontWheelRadius_22(float value)
	{
		___m_InverseFrontWheelRadius_22 = value;
	}

	inline static int32_t get_offset_of_m_InverseRearWheelRadius_23() { return static_cast<int32_t>(offsetof(KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9, ___m_InverseRearWheelRadius_23)); }
	inline float get_m_InverseRearWheelRadius_23() const { return ___m_InverseRearWheelRadius_23; }
	inline float* get_address_of_m_InverseRearWheelRadius_23() { return &___m_InverseRearWheelRadius_23; }
	inline void set_m_InverseRearWheelRadius_23(float value)
	{
		___m_InverseRearWheelRadius_23 = value;
	}

	inline static int32_t get_offset_of_m_SmoothedSteeringInput_24() { return static_cast<int32_t>(offsetof(KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9, ___m_SmoothedSteeringInput_24)); }
	inline float get_m_SmoothedSteeringInput_24() const { return ___m_SmoothedSteeringInput_24; }
	inline float* get_address_of_m_SmoothedSteeringInput_24() { return &___m_SmoothedSteeringInput_24; }
	inline void set_m_SmoothedSteeringInput_24(float value)
	{
		___m_SmoothedSteeringInput_24 = value;
	}
};

struct KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9_StaticFields
{
public:
	// System.Int32 KartGame.KartSystems.KartAnimation::k_HashSteering
	int32_t ___k_HashSteering_25;
	// System.Int32 KartGame.KartSystems.KartAnimation::k_HashGrounded
	int32_t ___k_HashGrounded_26;

public:
	inline static int32_t get_offset_of_k_HashSteering_25() { return static_cast<int32_t>(offsetof(KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9_StaticFields, ___k_HashSteering_25)); }
	inline int32_t get_k_HashSteering_25() const { return ___k_HashSteering_25; }
	inline int32_t* get_address_of_k_HashSteering_25() { return &___k_HashSteering_25; }
	inline void set_k_HashSteering_25(int32_t value)
	{
		___k_HashSteering_25 = value;
	}

	inline static int32_t get_offset_of_k_HashGrounded_26() { return static_cast<int32_t>(offsetof(KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9_StaticFields, ___k_HashGrounded_26)); }
	inline int32_t get_k_HashGrounded_26() const { return ___k_HashGrounded_26; }
	inline int32_t* get_address_of_k_HashGrounded_26() { return &___k_HashGrounded_26; }
	inline void set_k_HashGrounded_26(int32_t value)
	{
		___k_HashGrounded_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KARTANIMATION_T2A802B69509A97C0F25A1BF643E948A2433A5AA9_H
#ifndef KARTMOVEMENT_T5660BDAE960ABEFEFA27365B1E3E41049CFC93AA_H
#define KARTMOVEMENT_T5660BDAE960ABEFEFA27365B1E3E41049CFC93AA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KartGame.KartSystems.KartMovement
struct  KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Object KartGame.KartSystems.KartMovement::kart
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___kart_4;
	// UnityEngine.Object KartGame.KartSystems.KartMovement::driver
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___driver_5;
	// UnityEngine.Object KartGame.KartSystems.KartMovement::airborneModifier
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___airborneModifier_6;
	// UnityEngine.Object KartGame.KartSystems.KartMovement::input
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___input_7;
	// UnityEngine.Transform KartGame.KartSystems.KartMovement::frontGroundRaycast
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___frontGroundRaycast_8;
	// UnityEngine.Transform KartGame.KartSystems.KartMovement::rightGroundRaycast
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___rightGroundRaycast_9;
	// UnityEngine.Transform KartGame.KartSystems.KartMovement::leftGroundRaycast
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___leftGroundRaycast_10;
	// UnityEngine.Transform KartGame.KartSystems.KartMovement::rearGroundRaycast
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___rearGroundRaycast_11;
	// KartGame.KartSystems.KartStats KartGame.KartSystems.KartMovement::defaultStats
	KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15  ___defaultStats_12;
	// UnityEngine.LayerMask KartGame.KartSystems.KartMovement::groundLayers
	LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___groundLayers_13;
	// UnityEngine.LayerMask KartGame.KartSystems.KartMovement::allCollidingLayers
	LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___allCollidingLayers_14;
	// System.Single KartGame.KartSystems.KartMovement::airborneOrientationSpeed
	float ___airborneOrientationSpeed_15;
	// System.Single KartGame.KartSystems.KartMovement::minDriftingSteering
	float ___minDriftingSteering_16;
	// System.Single KartGame.KartSystems.KartMovement::rotationCorrectionSpeed
	float ___rotationCorrectionSpeed_17;
	// System.Single KartGame.KartSystems.KartMovement::minDriftStartAngle
	float ___minDriftStartAngle_18;
	// System.Single KartGame.KartSystems.KartMovement::maxDriftStartAngle
	float ___maxDriftStartAngle_19;
	// System.Single KartGame.KartSystems.KartMovement::kartToKartBump
	float ___kartToKartBump_20;
	// UnityEngine.Events.UnityEvent KartGame.KartSystems.KartMovement::OnBecomeAirborne
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___OnBecomeAirborne_21;
	// UnityEngine.Events.UnityEvent KartGame.KartSystems.KartMovement::OnBecomeGrounded
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___OnBecomeGrounded_22;
	// UnityEngine.Events.UnityEvent KartGame.KartSystems.KartMovement::OnHop
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___OnHop_23;
	// UnityEngine.Events.UnityEvent KartGame.KartSystems.KartMovement::OnDriftStarted
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___OnDriftStarted_24;
	// UnityEngine.Events.UnityEvent KartGame.KartSystems.KartMovement::OnDriftStopped
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___OnDriftStopped_25;
	// UnityEngine.Events.UnityEvent KartGame.KartSystems.KartMovement::OnKartCollision
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___OnKartCollision_26;
	// KartGame.KartSystems.IInput KartGame.KartSystems.KartMovement::m_Input
	RuntimeObject* ___m_Input_27;
	// UnityEngine.Vector3 KartGame.KartSystems.KartMovement::m_RigidbodyPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_RigidbodyPosition_28;
	// UnityEngine.Vector3 KartGame.KartSystems.KartMovement::m_Velocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Velocity_29;
	// UnityEngine.Vector3 KartGame.KartSystems.KartMovement::m_Movement
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Movement_30;
	// System.Boolean KartGame.KartSystems.KartMovement::m_IsGrounded
	bool ___m_IsGrounded_31;
	// KartGame.KartSystems.GroundInfo KartGame.KartSystems.KartMovement::m_CurrentGroundInfo
	GroundInfo_tD6CDE6BD1837D983F2B17CF476A5777A1AB5DB0E  ___m_CurrentGroundInfo_32;
	// UnityEngine.Rigidbody KartGame.KartSystems.KartMovement::m_Rigidbody
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___m_Rigidbody_33;
	// UnityEngine.CapsuleCollider KartGame.KartSystems.KartMovement::m_Capsule
	CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * ___m_Capsule_34;
	// KartGame.Track.IRacer KartGame.KartSystems.KartMovement::m_Racer
	RuntimeObject* ___m_Racer_35;
	// System.Collections.Generic.List`1<KartGame.KartSystems.IKartModifier> KartGame.KartSystems.KartMovement::m_CurrentModifiers
	List_1_tD06E9F79C539DCD9C982255B171BEAEEABB00664 * ___m_CurrentModifiers_36;
	// System.Collections.Generic.List`1<KartGame.KartSystems.IKartModifier> KartGame.KartSystems.KartMovement::m_TempModifiers
	List_1_tD06E9F79C539DCD9C982255B171BEAEEABB00664 * ___m_TempModifiers_37;
	// KartGame.KartSystems.KartStats KartGame.KartSystems.KartMovement::m_ModifiedStats
	KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15  ___m_ModifiedStats_38;
	// UnityEngine.RaycastHit[] KartGame.KartSystems.KartMovement::m_RaycastHitBuffer
	RaycastHitU5BU5D_tE9BB282384F0196211AD1A480477254188211F57* ___m_RaycastHitBuffer_39;
	// UnityEngine.Collider[] KartGame.KartSystems.KartMovement::m_ColliderBuffer
	ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* ___m_ColliderBuffer_40;
	// UnityEngine.Quaternion KartGame.KartSystems.KartMovement::m_DriftOffset
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_DriftOffset_41;
	// KartGame.KartSystems.KartMovement_DriftState KartGame.KartSystems.KartMovement::m_DriftState
	int32_t ___m_DriftState_42;
	// System.Boolean KartGame.KartSystems.KartMovement::m_HasControl
	bool ___m_HasControl_43;
	// System.Single KartGame.KartSystems.KartMovement::m_SteeringInput
	float ___m_SteeringInput_44;
	// System.Single KartGame.KartSystems.KartMovement::m_AccelerationInput
	float ___m_AccelerationInput_45;
	// System.Boolean KartGame.KartSystems.KartMovement::m_HopPressed
	bool ___m_HopPressed_46;
	// System.Boolean KartGame.KartSystems.KartMovement::m_HopHeld
	bool ___m_HopHeld_47;
	// UnityEngine.Vector3 KartGame.KartSystems.KartMovement::m_RepositionPositionDelta
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_RepositionPositionDelta_48;
	// UnityEngine.Quaternion KartGame.KartSystems.KartMovement::m_RepositionRotationDelta
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_RepositionRotationDelta_49;

public:
	inline static int32_t get_offset_of_kart_4() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___kart_4)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_kart_4() const { return ___kart_4; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_kart_4() { return &___kart_4; }
	inline void set_kart_4(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___kart_4 = value;
		Il2CppCodeGenWriteBarrier((&___kart_4), value);
	}

	inline static int32_t get_offset_of_driver_5() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___driver_5)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_driver_5() const { return ___driver_5; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_driver_5() { return &___driver_5; }
	inline void set_driver_5(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___driver_5 = value;
		Il2CppCodeGenWriteBarrier((&___driver_5), value);
	}

	inline static int32_t get_offset_of_airborneModifier_6() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___airborneModifier_6)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_airborneModifier_6() const { return ___airborneModifier_6; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_airborneModifier_6() { return &___airborneModifier_6; }
	inline void set_airborneModifier_6(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___airborneModifier_6 = value;
		Il2CppCodeGenWriteBarrier((&___airborneModifier_6), value);
	}

	inline static int32_t get_offset_of_input_7() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___input_7)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_input_7() const { return ___input_7; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_input_7() { return &___input_7; }
	inline void set_input_7(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___input_7 = value;
		Il2CppCodeGenWriteBarrier((&___input_7), value);
	}

	inline static int32_t get_offset_of_frontGroundRaycast_8() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___frontGroundRaycast_8)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_frontGroundRaycast_8() const { return ___frontGroundRaycast_8; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_frontGroundRaycast_8() { return &___frontGroundRaycast_8; }
	inline void set_frontGroundRaycast_8(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___frontGroundRaycast_8 = value;
		Il2CppCodeGenWriteBarrier((&___frontGroundRaycast_8), value);
	}

	inline static int32_t get_offset_of_rightGroundRaycast_9() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___rightGroundRaycast_9)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_rightGroundRaycast_9() const { return ___rightGroundRaycast_9; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_rightGroundRaycast_9() { return &___rightGroundRaycast_9; }
	inline void set_rightGroundRaycast_9(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___rightGroundRaycast_9 = value;
		Il2CppCodeGenWriteBarrier((&___rightGroundRaycast_9), value);
	}

	inline static int32_t get_offset_of_leftGroundRaycast_10() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___leftGroundRaycast_10)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_leftGroundRaycast_10() const { return ___leftGroundRaycast_10; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_leftGroundRaycast_10() { return &___leftGroundRaycast_10; }
	inline void set_leftGroundRaycast_10(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___leftGroundRaycast_10 = value;
		Il2CppCodeGenWriteBarrier((&___leftGroundRaycast_10), value);
	}

	inline static int32_t get_offset_of_rearGroundRaycast_11() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___rearGroundRaycast_11)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_rearGroundRaycast_11() const { return ___rearGroundRaycast_11; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_rearGroundRaycast_11() { return &___rearGroundRaycast_11; }
	inline void set_rearGroundRaycast_11(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___rearGroundRaycast_11 = value;
		Il2CppCodeGenWriteBarrier((&___rearGroundRaycast_11), value);
	}

	inline static int32_t get_offset_of_defaultStats_12() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___defaultStats_12)); }
	inline KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15  get_defaultStats_12() const { return ___defaultStats_12; }
	inline KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15 * get_address_of_defaultStats_12() { return &___defaultStats_12; }
	inline void set_defaultStats_12(KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15  value)
	{
		___defaultStats_12 = value;
	}

	inline static int32_t get_offset_of_groundLayers_13() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___groundLayers_13)); }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  get_groundLayers_13() const { return ___groundLayers_13; }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * get_address_of_groundLayers_13() { return &___groundLayers_13; }
	inline void set_groundLayers_13(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		___groundLayers_13 = value;
	}

	inline static int32_t get_offset_of_allCollidingLayers_14() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___allCollidingLayers_14)); }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  get_allCollidingLayers_14() const { return ___allCollidingLayers_14; }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * get_address_of_allCollidingLayers_14() { return &___allCollidingLayers_14; }
	inline void set_allCollidingLayers_14(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		___allCollidingLayers_14 = value;
	}

	inline static int32_t get_offset_of_airborneOrientationSpeed_15() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___airborneOrientationSpeed_15)); }
	inline float get_airborneOrientationSpeed_15() const { return ___airborneOrientationSpeed_15; }
	inline float* get_address_of_airborneOrientationSpeed_15() { return &___airborneOrientationSpeed_15; }
	inline void set_airborneOrientationSpeed_15(float value)
	{
		___airborneOrientationSpeed_15 = value;
	}

	inline static int32_t get_offset_of_minDriftingSteering_16() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___minDriftingSteering_16)); }
	inline float get_minDriftingSteering_16() const { return ___minDriftingSteering_16; }
	inline float* get_address_of_minDriftingSteering_16() { return &___minDriftingSteering_16; }
	inline void set_minDriftingSteering_16(float value)
	{
		___minDriftingSteering_16 = value;
	}

	inline static int32_t get_offset_of_rotationCorrectionSpeed_17() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___rotationCorrectionSpeed_17)); }
	inline float get_rotationCorrectionSpeed_17() const { return ___rotationCorrectionSpeed_17; }
	inline float* get_address_of_rotationCorrectionSpeed_17() { return &___rotationCorrectionSpeed_17; }
	inline void set_rotationCorrectionSpeed_17(float value)
	{
		___rotationCorrectionSpeed_17 = value;
	}

	inline static int32_t get_offset_of_minDriftStartAngle_18() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___minDriftStartAngle_18)); }
	inline float get_minDriftStartAngle_18() const { return ___minDriftStartAngle_18; }
	inline float* get_address_of_minDriftStartAngle_18() { return &___minDriftStartAngle_18; }
	inline void set_minDriftStartAngle_18(float value)
	{
		___minDriftStartAngle_18 = value;
	}

	inline static int32_t get_offset_of_maxDriftStartAngle_19() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___maxDriftStartAngle_19)); }
	inline float get_maxDriftStartAngle_19() const { return ___maxDriftStartAngle_19; }
	inline float* get_address_of_maxDriftStartAngle_19() { return &___maxDriftStartAngle_19; }
	inline void set_maxDriftStartAngle_19(float value)
	{
		___maxDriftStartAngle_19 = value;
	}

	inline static int32_t get_offset_of_kartToKartBump_20() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___kartToKartBump_20)); }
	inline float get_kartToKartBump_20() const { return ___kartToKartBump_20; }
	inline float* get_address_of_kartToKartBump_20() { return &___kartToKartBump_20; }
	inline void set_kartToKartBump_20(float value)
	{
		___kartToKartBump_20 = value;
	}

	inline static int32_t get_offset_of_OnBecomeAirborne_21() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___OnBecomeAirborne_21)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_OnBecomeAirborne_21() const { return ___OnBecomeAirborne_21; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_OnBecomeAirborne_21() { return &___OnBecomeAirborne_21; }
	inline void set_OnBecomeAirborne_21(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___OnBecomeAirborne_21 = value;
		Il2CppCodeGenWriteBarrier((&___OnBecomeAirborne_21), value);
	}

	inline static int32_t get_offset_of_OnBecomeGrounded_22() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___OnBecomeGrounded_22)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_OnBecomeGrounded_22() const { return ___OnBecomeGrounded_22; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_OnBecomeGrounded_22() { return &___OnBecomeGrounded_22; }
	inline void set_OnBecomeGrounded_22(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___OnBecomeGrounded_22 = value;
		Il2CppCodeGenWriteBarrier((&___OnBecomeGrounded_22), value);
	}

	inline static int32_t get_offset_of_OnHop_23() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___OnHop_23)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_OnHop_23() const { return ___OnHop_23; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_OnHop_23() { return &___OnHop_23; }
	inline void set_OnHop_23(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___OnHop_23 = value;
		Il2CppCodeGenWriteBarrier((&___OnHop_23), value);
	}

	inline static int32_t get_offset_of_OnDriftStarted_24() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___OnDriftStarted_24)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_OnDriftStarted_24() const { return ___OnDriftStarted_24; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_OnDriftStarted_24() { return &___OnDriftStarted_24; }
	inline void set_OnDriftStarted_24(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___OnDriftStarted_24 = value;
		Il2CppCodeGenWriteBarrier((&___OnDriftStarted_24), value);
	}

	inline static int32_t get_offset_of_OnDriftStopped_25() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___OnDriftStopped_25)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_OnDriftStopped_25() const { return ___OnDriftStopped_25; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_OnDriftStopped_25() { return &___OnDriftStopped_25; }
	inline void set_OnDriftStopped_25(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___OnDriftStopped_25 = value;
		Il2CppCodeGenWriteBarrier((&___OnDriftStopped_25), value);
	}

	inline static int32_t get_offset_of_OnKartCollision_26() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___OnKartCollision_26)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_OnKartCollision_26() const { return ___OnKartCollision_26; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_OnKartCollision_26() { return &___OnKartCollision_26; }
	inline void set_OnKartCollision_26(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___OnKartCollision_26 = value;
		Il2CppCodeGenWriteBarrier((&___OnKartCollision_26), value);
	}

	inline static int32_t get_offset_of_m_Input_27() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___m_Input_27)); }
	inline RuntimeObject* get_m_Input_27() const { return ___m_Input_27; }
	inline RuntimeObject** get_address_of_m_Input_27() { return &___m_Input_27; }
	inline void set_m_Input_27(RuntimeObject* value)
	{
		___m_Input_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Input_27), value);
	}

	inline static int32_t get_offset_of_m_RigidbodyPosition_28() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___m_RigidbodyPosition_28)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_RigidbodyPosition_28() const { return ___m_RigidbodyPosition_28; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_RigidbodyPosition_28() { return &___m_RigidbodyPosition_28; }
	inline void set_m_RigidbodyPosition_28(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_RigidbodyPosition_28 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_29() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___m_Velocity_29)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Velocity_29() const { return ___m_Velocity_29; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Velocity_29() { return &___m_Velocity_29; }
	inline void set_m_Velocity_29(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Velocity_29 = value;
	}

	inline static int32_t get_offset_of_m_Movement_30() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___m_Movement_30)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Movement_30() const { return ___m_Movement_30; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Movement_30() { return &___m_Movement_30; }
	inline void set_m_Movement_30(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Movement_30 = value;
	}

	inline static int32_t get_offset_of_m_IsGrounded_31() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___m_IsGrounded_31)); }
	inline bool get_m_IsGrounded_31() const { return ___m_IsGrounded_31; }
	inline bool* get_address_of_m_IsGrounded_31() { return &___m_IsGrounded_31; }
	inline void set_m_IsGrounded_31(bool value)
	{
		___m_IsGrounded_31 = value;
	}

	inline static int32_t get_offset_of_m_CurrentGroundInfo_32() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___m_CurrentGroundInfo_32)); }
	inline GroundInfo_tD6CDE6BD1837D983F2B17CF476A5777A1AB5DB0E  get_m_CurrentGroundInfo_32() const { return ___m_CurrentGroundInfo_32; }
	inline GroundInfo_tD6CDE6BD1837D983F2B17CF476A5777A1AB5DB0E * get_address_of_m_CurrentGroundInfo_32() { return &___m_CurrentGroundInfo_32; }
	inline void set_m_CurrentGroundInfo_32(GroundInfo_tD6CDE6BD1837D983F2B17CF476A5777A1AB5DB0E  value)
	{
		___m_CurrentGroundInfo_32 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_33() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___m_Rigidbody_33)); }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * get_m_Rigidbody_33() const { return ___m_Rigidbody_33; }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 ** get_address_of_m_Rigidbody_33() { return &___m_Rigidbody_33; }
	inline void set_m_Rigidbody_33(Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * value)
	{
		___m_Rigidbody_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rigidbody_33), value);
	}

	inline static int32_t get_offset_of_m_Capsule_34() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___m_Capsule_34)); }
	inline CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * get_m_Capsule_34() const { return ___m_Capsule_34; }
	inline CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 ** get_address_of_m_Capsule_34() { return &___m_Capsule_34; }
	inline void set_m_Capsule_34(CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * value)
	{
		___m_Capsule_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_Capsule_34), value);
	}

	inline static int32_t get_offset_of_m_Racer_35() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___m_Racer_35)); }
	inline RuntimeObject* get_m_Racer_35() const { return ___m_Racer_35; }
	inline RuntimeObject** get_address_of_m_Racer_35() { return &___m_Racer_35; }
	inline void set_m_Racer_35(RuntimeObject* value)
	{
		___m_Racer_35 = value;
		Il2CppCodeGenWriteBarrier((&___m_Racer_35), value);
	}

	inline static int32_t get_offset_of_m_CurrentModifiers_36() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___m_CurrentModifiers_36)); }
	inline List_1_tD06E9F79C539DCD9C982255B171BEAEEABB00664 * get_m_CurrentModifiers_36() const { return ___m_CurrentModifiers_36; }
	inline List_1_tD06E9F79C539DCD9C982255B171BEAEEABB00664 ** get_address_of_m_CurrentModifiers_36() { return &___m_CurrentModifiers_36; }
	inline void set_m_CurrentModifiers_36(List_1_tD06E9F79C539DCD9C982255B171BEAEEABB00664 * value)
	{
		___m_CurrentModifiers_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentModifiers_36), value);
	}

	inline static int32_t get_offset_of_m_TempModifiers_37() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___m_TempModifiers_37)); }
	inline List_1_tD06E9F79C539DCD9C982255B171BEAEEABB00664 * get_m_TempModifiers_37() const { return ___m_TempModifiers_37; }
	inline List_1_tD06E9F79C539DCD9C982255B171BEAEEABB00664 ** get_address_of_m_TempModifiers_37() { return &___m_TempModifiers_37; }
	inline void set_m_TempModifiers_37(List_1_tD06E9F79C539DCD9C982255B171BEAEEABB00664 * value)
	{
		___m_TempModifiers_37 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempModifiers_37), value);
	}

	inline static int32_t get_offset_of_m_ModifiedStats_38() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___m_ModifiedStats_38)); }
	inline KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15  get_m_ModifiedStats_38() const { return ___m_ModifiedStats_38; }
	inline KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15 * get_address_of_m_ModifiedStats_38() { return &___m_ModifiedStats_38; }
	inline void set_m_ModifiedStats_38(KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15  value)
	{
		___m_ModifiedStats_38 = value;
	}

	inline static int32_t get_offset_of_m_RaycastHitBuffer_39() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___m_RaycastHitBuffer_39)); }
	inline RaycastHitU5BU5D_tE9BB282384F0196211AD1A480477254188211F57* get_m_RaycastHitBuffer_39() const { return ___m_RaycastHitBuffer_39; }
	inline RaycastHitU5BU5D_tE9BB282384F0196211AD1A480477254188211F57** get_address_of_m_RaycastHitBuffer_39() { return &___m_RaycastHitBuffer_39; }
	inline void set_m_RaycastHitBuffer_39(RaycastHitU5BU5D_tE9BB282384F0196211AD1A480477254188211F57* value)
	{
		___m_RaycastHitBuffer_39 = value;
		Il2CppCodeGenWriteBarrier((&___m_RaycastHitBuffer_39), value);
	}

	inline static int32_t get_offset_of_m_ColliderBuffer_40() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___m_ColliderBuffer_40)); }
	inline ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* get_m_ColliderBuffer_40() const { return ___m_ColliderBuffer_40; }
	inline ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252** get_address_of_m_ColliderBuffer_40() { return &___m_ColliderBuffer_40; }
	inline void set_m_ColliderBuffer_40(ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* value)
	{
		___m_ColliderBuffer_40 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColliderBuffer_40), value);
	}

	inline static int32_t get_offset_of_m_DriftOffset_41() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___m_DriftOffset_41)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_m_DriftOffset_41() const { return ___m_DriftOffset_41; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_m_DriftOffset_41() { return &___m_DriftOffset_41; }
	inline void set_m_DriftOffset_41(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___m_DriftOffset_41 = value;
	}

	inline static int32_t get_offset_of_m_DriftState_42() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___m_DriftState_42)); }
	inline int32_t get_m_DriftState_42() const { return ___m_DriftState_42; }
	inline int32_t* get_address_of_m_DriftState_42() { return &___m_DriftState_42; }
	inline void set_m_DriftState_42(int32_t value)
	{
		___m_DriftState_42 = value;
	}

	inline static int32_t get_offset_of_m_HasControl_43() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___m_HasControl_43)); }
	inline bool get_m_HasControl_43() const { return ___m_HasControl_43; }
	inline bool* get_address_of_m_HasControl_43() { return &___m_HasControl_43; }
	inline void set_m_HasControl_43(bool value)
	{
		___m_HasControl_43 = value;
	}

	inline static int32_t get_offset_of_m_SteeringInput_44() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___m_SteeringInput_44)); }
	inline float get_m_SteeringInput_44() const { return ___m_SteeringInput_44; }
	inline float* get_address_of_m_SteeringInput_44() { return &___m_SteeringInput_44; }
	inline void set_m_SteeringInput_44(float value)
	{
		___m_SteeringInput_44 = value;
	}

	inline static int32_t get_offset_of_m_AccelerationInput_45() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___m_AccelerationInput_45)); }
	inline float get_m_AccelerationInput_45() const { return ___m_AccelerationInput_45; }
	inline float* get_address_of_m_AccelerationInput_45() { return &___m_AccelerationInput_45; }
	inline void set_m_AccelerationInput_45(float value)
	{
		___m_AccelerationInput_45 = value;
	}

	inline static int32_t get_offset_of_m_HopPressed_46() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___m_HopPressed_46)); }
	inline bool get_m_HopPressed_46() const { return ___m_HopPressed_46; }
	inline bool* get_address_of_m_HopPressed_46() { return &___m_HopPressed_46; }
	inline void set_m_HopPressed_46(bool value)
	{
		___m_HopPressed_46 = value;
	}

	inline static int32_t get_offset_of_m_HopHeld_47() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___m_HopHeld_47)); }
	inline bool get_m_HopHeld_47() const { return ___m_HopHeld_47; }
	inline bool* get_address_of_m_HopHeld_47() { return &___m_HopHeld_47; }
	inline void set_m_HopHeld_47(bool value)
	{
		___m_HopHeld_47 = value;
	}

	inline static int32_t get_offset_of_m_RepositionPositionDelta_48() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___m_RepositionPositionDelta_48)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_RepositionPositionDelta_48() const { return ___m_RepositionPositionDelta_48; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_RepositionPositionDelta_48() { return &___m_RepositionPositionDelta_48; }
	inline void set_m_RepositionPositionDelta_48(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_RepositionPositionDelta_48 = value;
	}

	inline static int32_t get_offset_of_m_RepositionRotationDelta_49() { return static_cast<int32_t>(offsetof(KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA, ___m_RepositionRotationDelta_49)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_m_RepositionRotationDelta_49() const { return ___m_RepositionRotationDelta_49; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_m_RepositionRotationDelta_49() { return &___m_RepositionRotationDelta_49; }
	inline void set_m_RepositionRotationDelta_49(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___m_RepositionRotationDelta_49 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KARTMOVEMENT_T5660BDAE960ABEFEFA27365B1E3E41049CFC93AA_H
#ifndef KEYBOARDINPUT_TA497AE5689F73E12A8D31045D23BD9BEE534DBE6_H
#define KEYBOARDINPUT_TA497AE5689F73E12A8D31045D23BD9BEE534DBE6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KartGame.KartSystems.KeyboardInput
struct  KeyboardInput_tA497AE5689F73E12A8D31045D23BD9BEE534DBE6  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single KartGame.KartSystems.KeyboardInput::m_Acceleration
	float ___m_Acceleration_4;
	// System.Single KartGame.KartSystems.KeyboardInput::m_Steering
	float ___m_Steering_5;
	// System.Boolean KartGame.KartSystems.KeyboardInput::m_HopPressed
	bool ___m_HopPressed_6;
	// System.Boolean KartGame.KartSystems.KeyboardInput::m_HopHeld
	bool ___m_HopHeld_7;
	// System.Boolean KartGame.KartSystems.KeyboardInput::m_BoostPressed
	bool ___m_BoostPressed_8;
	// System.Boolean KartGame.KartSystems.KeyboardInput::m_FirePressed
	bool ___m_FirePressed_9;
	// System.Boolean KartGame.KartSystems.KeyboardInput::m_FixedUpdateHappened
	bool ___m_FixedUpdateHappened_10;

public:
	inline static int32_t get_offset_of_m_Acceleration_4() { return static_cast<int32_t>(offsetof(KeyboardInput_tA497AE5689F73E12A8D31045D23BD9BEE534DBE6, ___m_Acceleration_4)); }
	inline float get_m_Acceleration_4() const { return ___m_Acceleration_4; }
	inline float* get_address_of_m_Acceleration_4() { return &___m_Acceleration_4; }
	inline void set_m_Acceleration_4(float value)
	{
		___m_Acceleration_4 = value;
	}

	inline static int32_t get_offset_of_m_Steering_5() { return static_cast<int32_t>(offsetof(KeyboardInput_tA497AE5689F73E12A8D31045D23BD9BEE534DBE6, ___m_Steering_5)); }
	inline float get_m_Steering_5() const { return ___m_Steering_5; }
	inline float* get_address_of_m_Steering_5() { return &___m_Steering_5; }
	inline void set_m_Steering_5(float value)
	{
		___m_Steering_5 = value;
	}

	inline static int32_t get_offset_of_m_HopPressed_6() { return static_cast<int32_t>(offsetof(KeyboardInput_tA497AE5689F73E12A8D31045D23BD9BEE534DBE6, ___m_HopPressed_6)); }
	inline bool get_m_HopPressed_6() const { return ___m_HopPressed_6; }
	inline bool* get_address_of_m_HopPressed_6() { return &___m_HopPressed_6; }
	inline void set_m_HopPressed_6(bool value)
	{
		___m_HopPressed_6 = value;
	}

	inline static int32_t get_offset_of_m_HopHeld_7() { return static_cast<int32_t>(offsetof(KeyboardInput_tA497AE5689F73E12A8D31045D23BD9BEE534DBE6, ___m_HopHeld_7)); }
	inline bool get_m_HopHeld_7() const { return ___m_HopHeld_7; }
	inline bool* get_address_of_m_HopHeld_7() { return &___m_HopHeld_7; }
	inline void set_m_HopHeld_7(bool value)
	{
		___m_HopHeld_7 = value;
	}

	inline static int32_t get_offset_of_m_BoostPressed_8() { return static_cast<int32_t>(offsetof(KeyboardInput_tA497AE5689F73E12A8D31045D23BD9BEE534DBE6, ___m_BoostPressed_8)); }
	inline bool get_m_BoostPressed_8() const { return ___m_BoostPressed_8; }
	inline bool* get_address_of_m_BoostPressed_8() { return &___m_BoostPressed_8; }
	inline void set_m_BoostPressed_8(bool value)
	{
		___m_BoostPressed_8 = value;
	}

	inline static int32_t get_offset_of_m_FirePressed_9() { return static_cast<int32_t>(offsetof(KeyboardInput_tA497AE5689F73E12A8D31045D23BD9BEE534DBE6, ___m_FirePressed_9)); }
	inline bool get_m_FirePressed_9() const { return ___m_FirePressed_9; }
	inline bool* get_address_of_m_FirePressed_9() { return &___m_FirePressed_9; }
	inline void set_m_FirePressed_9(bool value)
	{
		___m_FirePressed_9 = value;
	}

	inline static int32_t get_offset_of_m_FixedUpdateHappened_10() { return static_cast<int32_t>(offsetof(KeyboardInput_tA497AE5689F73E12A8D31045D23BD9BEE534DBE6, ___m_FixedUpdateHappened_10)); }
	inline bool get_m_FixedUpdateHappened_10() const { return ___m_FixedUpdateHappened_10; }
	inline bool* get_address_of_m_FixedUpdateHappened_10() { return &___m_FixedUpdateHappened_10; }
	inline void set_m_FixedUpdateHappened_10(bool value)
	{
		___m_FixedUpdateHappened_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYBOARDINPUT_TA497AE5689F73E12A8D31045D23BD9BEE534DBE6_H
#ifndef MULTIPLICATIVEKARTMODIFIER_TFD9852DB48CFF7826B4A3E34C5EB33430F87085D_H
#define MULTIPLICATIVEKARTMODIFIER_TFD9852DB48CFF7826B4A3E34C5EB33430F87085D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KartGame.KartSystems.MultiplicativeKartModifier
struct  MultiplicativeKartModifier_tFD9852DB48CFF7826B4A3E34C5EB33430F87085D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// KartGame.KartSystems.KartStats KartGame.KartSystems.MultiplicativeKartModifier::modifiers
	KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15  ___modifiers_4;

public:
	inline static int32_t get_offset_of_modifiers_4() { return static_cast<int32_t>(offsetof(MultiplicativeKartModifier_tFD9852DB48CFF7826B4A3E34C5EB33430F87085D, ___modifiers_4)); }
	inline KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15  get_modifiers_4() const { return ___modifiers_4; }
	inline KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15 * get_address_of_modifiers_4() { return &___modifiers_4; }
	inline void set_modifiers_4(KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15  value)
	{
		___modifiers_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTIPLICATIVEKARTMODIFIER_TFD9852DB48CFF7826B4A3E34C5EB33430F87085D_H
#ifndef WALLCOLLIDER_T560C275854D5FD6390B94BC0FCE2EA2DD5C60146_H
#define WALLCOLLIDER_T560C275854D5FD6390B94BC0FCE2EA2DD5C60146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KartGame.KartSystems.WallCollider
struct  WallCollider_t560C275854D5FD6390B94BC0FCE2EA2DD5C60146  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single KartGame.KartSystems.WallCollider::bounciness
	float ___bounciness_4;

public:
	inline static int32_t get_offset_of_bounciness_4() { return static_cast<int32_t>(offsetof(WallCollider_t560C275854D5FD6390B94BC0FCE2EA2DD5C60146, ___bounciness_4)); }
	inline float get_bounciness_4() const { return ___bounciness_4; }
	inline float* get_address_of_bounciness_4() { return &___bounciness_4; }
	inline void set_bounciness_4(float value)
	{
		___bounciness_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WALLCOLLIDER_T560C275854D5FD6390B94BC0FCE2EA2DD5C60146_H
#ifndef DIRECTORTRIGGER_T74FC46CC1F3520D4BD3BC7A540E2C2BCB911298E_H
#define DIRECTORTRIGGER_T74FC46CC1F3520D4BD3BC7A540E2C2BCB911298E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KartGame.Timeline.DirectorTrigger
struct  DirectorTrigger_t74FC46CC1F3520D4BD3BC7A540E2C2BCB911298E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Playables.PlayableDirector KartGame.Timeline.DirectorTrigger::director
	PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * ___director_4;
	// KartGame.Timeline.DirectorTrigger_TimelineEvent[] KartGame.Timeline.DirectorTrigger::events
	TimelineEventU5BU5D_tA25980076E0D499392A384AABFB6B33F1DCEAEA0* ___events_5;
	// System.Boolean KartGame.Timeline.DirectorTrigger::m_StartTimer
	bool ___m_StartTimer_6;
	// System.Single KartGame.Timeline.DirectorTrigger::m_Timer
	float ___m_Timer_7;

public:
	inline static int32_t get_offset_of_director_4() { return static_cast<int32_t>(offsetof(DirectorTrigger_t74FC46CC1F3520D4BD3BC7A540E2C2BCB911298E, ___director_4)); }
	inline PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * get_director_4() const { return ___director_4; }
	inline PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 ** get_address_of_director_4() { return &___director_4; }
	inline void set_director_4(PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * value)
	{
		___director_4 = value;
		Il2CppCodeGenWriteBarrier((&___director_4), value);
	}

	inline static int32_t get_offset_of_events_5() { return static_cast<int32_t>(offsetof(DirectorTrigger_t74FC46CC1F3520D4BD3BC7A540E2C2BCB911298E, ___events_5)); }
	inline TimelineEventU5BU5D_tA25980076E0D499392A384AABFB6B33F1DCEAEA0* get_events_5() const { return ___events_5; }
	inline TimelineEventU5BU5D_tA25980076E0D499392A384AABFB6B33F1DCEAEA0** get_address_of_events_5() { return &___events_5; }
	inline void set_events_5(TimelineEventU5BU5D_tA25980076E0D499392A384AABFB6B33F1DCEAEA0* value)
	{
		___events_5 = value;
		Il2CppCodeGenWriteBarrier((&___events_5), value);
	}

	inline static int32_t get_offset_of_m_StartTimer_6() { return static_cast<int32_t>(offsetof(DirectorTrigger_t74FC46CC1F3520D4BD3BC7A540E2C2BCB911298E, ___m_StartTimer_6)); }
	inline bool get_m_StartTimer_6() const { return ___m_StartTimer_6; }
	inline bool* get_address_of_m_StartTimer_6() { return &___m_StartTimer_6; }
	inline void set_m_StartTimer_6(bool value)
	{
		___m_StartTimer_6 = value;
	}

	inline static int32_t get_offset_of_m_Timer_7() { return static_cast<int32_t>(offsetof(DirectorTrigger_t74FC46CC1F3520D4BD3BC7A540E2C2BCB911298E, ___m_Timer_7)); }
	inline float get_m_Timer_7() const { return ___m_Timer_7; }
	inline float* get_address_of_m_Timer_7() { return &___m_Timer_7; }
	inline void set_m_Timer_7(float value)
	{
		___m_Timer_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORTRIGGER_T74FC46CC1F3520D4BD3BC7A540E2C2BCB911298E_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3300 = { sizeof (U3CU3Ec_tF9613F8A7E0499DEAB63B5FD746BF0B168EC3A4F), -1, sizeof(U3CU3Ec_tF9613F8A7E0499DEAB63B5FD746BF0B168EC3A4F_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3300[2] = 
{
	U3CU3Ec_tF9613F8A7E0499DEAB63B5FD746BF0B168EC3A4F_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_tF9613F8A7E0499DEAB63B5FD746BF0B168EC3A4F_StaticFields::get_offset_of_U3CU3E9__23_0_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3301 = { sizeof (U3CCallWhenRaceStartsU3Ed__27_t5C7345ECD99271493CBDC53A7EAEBA36B597C577), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3301[5] = 
{
	U3CCallWhenRaceStartsU3Ed__27_t5C7345ECD99271493CBDC53A7EAEBA36B597C577::get_offset_of_U3CU3E1__state_0(),
	U3CCallWhenRaceStartsU3Ed__27_t5C7345ECD99271493CBDC53A7EAEBA36B597C577::get_offset_of_U3CU3E2__current_1(),
	U3CCallWhenRaceStartsU3Ed__27_t5C7345ECD99271493CBDC53A7EAEBA36B597C577::get_offset_of_U3CU3E4__this_2(),
	U3CCallWhenRaceStartsU3Ed__27_t5C7345ECD99271493CBDC53A7EAEBA36B597C577::get_offset_of_racer_3(),
	U3CCallWhenRaceStartsU3Ed__27_t5C7345ECD99271493CBDC53A7EAEBA36B597C577::get_offset_of_checkpoint_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3302 = { sizeof (TrackRecord_tCEC2ED8FB51EBBCB6921634FF63F759C58FD4296), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3302[7] = 
{
	TrackRecord_tCEC2ED8FB51EBBCB6921634FF63F759C58FD4296::get_offset_of_trackName_0(),
	TrackRecord_tCEC2ED8FB51EBBCB6921634FF63F759C58FD4296::get_offset_of_laps_1(),
	TrackRecord_tCEC2ED8FB51EBBCB6921634FF63F759C58FD4296::get_offset_of_time_2(),
	TrackRecord_tCEC2ED8FB51EBBCB6921634FF63F759C58FD4296::get_offset_of_name_3(),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3303 = { sizeof (DirectorTrigger_t74FC46CC1F3520D4BD3BC7A540E2C2BCB911298E), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3303[4] = 
{
	DirectorTrigger_t74FC46CC1F3520D4BD3BC7A540E2C2BCB911298E::get_offset_of_director_4(),
	DirectorTrigger_t74FC46CC1F3520D4BD3BC7A540E2C2BCB911298E::get_offset_of_events_5(),
	DirectorTrigger_t74FC46CC1F3520D4BD3BC7A540E2C2BCB911298E::get_offset_of_m_StartTimer_6(),
	DirectorTrigger_t74FC46CC1F3520D4BD3BC7A540E2C2BCB911298E::get_offset_of_m_Timer_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3304 = { sizeof (TimelineEvent_t44793B726D5842DE4985C95776914720A7240A3D), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3304[3] = 
{
	TimelineEvent_t44793B726D5842DE4985C95776914720A7240A3D::get_offset_of_time_0(),
	TimelineEvent_t44793B726D5842DE4985C95776914720A7240A3D::get_offset_of_timedEvent_1(),
	TimelineEvent_t44793B726D5842DE4985C95776914720A7240A3D::get_offset_of_m_Triggered_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3305 = { sizeof (GamepadInput_t6E73CA7F5C3712CEB708D0E0BB9559B5D903398C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3305[7] = 
{
	GamepadInput_t6E73CA7F5C3712CEB708D0E0BB9559B5D903398C::get_offset_of_m_Acceleration_4(),
	GamepadInput_t6E73CA7F5C3712CEB708D0E0BB9559B5D903398C::get_offset_of_m_Steering_5(),
	GamepadInput_t6E73CA7F5C3712CEB708D0E0BB9559B5D903398C::get_offset_of_m_HopPressed_6(),
	GamepadInput_t6E73CA7F5C3712CEB708D0E0BB9559B5D903398C::get_offset_of_m_HopHeld_7(),
	GamepadInput_t6E73CA7F5C3712CEB708D0E0BB9559B5D903398C::get_offset_of_m_BoostPressed_8(),
	GamepadInput_t6E73CA7F5C3712CEB708D0E0BB9559B5D903398C::get_offset_of_m_FirePressed_9(),
	GamepadInput_t6E73CA7F5C3712CEB708D0E0BB9559B5D903398C::get_offset_of_m_FixedUpdateHappened_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3306 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3307 = { sizeof (KeyboardInput_tA497AE5689F73E12A8D31045D23BD9BEE534DBE6), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3307[7] = 
{
	KeyboardInput_tA497AE5689F73E12A8D31045D23BD9BEE534DBE6::get_offset_of_m_Acceleration_4(),
	KeyboardInput_tA497AE5689F73E12A8D31045D23BD9BEE534DBE6::get_offset_of_m_Steering_5(),
	KeyboardInput_tA497AE5689F73E12A8D31045D23BD9BEE534DBE6::get_offset_of_m_HopPressed_6(),
	KeyboardInput_tA497AE5689F73E12A8D31045D23BD9BEE534DBE6::get_offset_of_m_HopHeld_7(),
	KeyboardInput_tA497AE5689F73E12A8D31045D23BD9BEE534DBE6::get_offset_of_m_BoostPressed_8(),
	KeyboardInput_tA497AE5689F73E12A8D31045D23BD9BEE534DBE6::get_offset_of_m_FirePressed_9(),
	KeyboardInput_tA497AE5689F73E12A8D31045D23BD9BEE534DBE6::get_offset_of_m_FixedUpdateHappened_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3308 = { sizeof (KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9), -1, sizeof(KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3308[23] = 
{
	KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9::get_offset_of_input_4(),
	KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9::get_offset_of_playerAnimator_5(),
	KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9::get_offset_of_kartMovement_6(),
	KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9::get_offset_of_steeringAnimationDamping_7(),
	KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9::get_offset_of_steeringWheel_8(),
	KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9::get_offset_of_maxSteeringWheelAngle_9(),
	KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9::get_offset_of_steeringWheelRotationAxis_10(),
	KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9::get_offset_of_frontWheelRadius_11(),
	KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9::get_offset_of_rearWheelRadius_12(),
	KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9::get_offset_of_maxSteeringAngle_13(),
	KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9::get_offset_of_frontLeftWheel_14(),
	KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9::get_offset_of_frontRightWheel_15(),
	KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9::get_offset_of_rearLeftWheel_16(),
	KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9::get_offset_of_rearRightWheel_17(),
	KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9::get_offset_of_m_Input_18(),
	KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9::get_offset_of_m_KartMovement_19(),
	KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9::get_offset_of_m_DefaultSteeringWheelLocalRotation_20(),
	KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9::get_offset_of_m_NormalizedSteeringWheelRotationAxis_21(),
	KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9::get_offset_of_m_InverseFrontWheelRadius_22(),
	KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9::get_offset_of_m_InverseRearWheelRadius_23(),
	KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9::get_offset_of_m_SmoothedSteeringInput_24(),
	KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9_StaticFields::get_offset_of_k_HashSteering_25(),
	KartAnimation_t2A802B69509A97C0F25A1BF643E948A2433A5AA9_StaticFields::get_offset_of_k_HashGrounded_26(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3309 = { sizeof (Wheel_t4BD1834607089B767AF0641E2940B773B1B18FCC), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3309[6] = 
{
	Wheel_t4BD1834607089B767AF0641E2940B773B1B18FCC::get_offset_of_wheelTransform_0(),
	Wheel_t4BD1834607089B767AF0641E2940B773B1B18FCC::get_offset_of_axelAxis_1(),
	Wheel_t4BD1834607089B767AF0641E2940B773B1B18FCC::get_offset_of_steeringAxis_2(),
	Wheel_t4BD1834607089B767AF0641E2940B773B1B18FCC::get_offset_of_m_NormalizedAxelAxis_3(),
	Wheel_t4BD1834607089B767AF0641E2940B773B1B18FCC::get_offset_of_m_NormalizedSteeringAxis_4(),
	Wheel_t4BD1834607089B767AF0641E2940B773B1B18FCC::get_offset_of_m_SteerlessLocalRotation_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3310 = { sizeof (EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3310[25] = 
{
	EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A::get_offset_of_kartInfo_4(),
	EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A::get_offset_of_RPM_5(),
	EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A::get_offset_of_minRPM_6(),
	EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A::get_offset_of_maxRPM_7(),
	EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A::get_offset_of_lumpyCamFactor_8(),
	EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A::get_offset_of_minVolume_9(),
	EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A::get_offset_of_maxVolume_10(),
	EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A::get_offset_of_strokeDamping_11(),
	EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A::get_offset_of_intake_12(),
	EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A::get_offset_of_compression_13(),
	EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A::get_offset_of_combustion_14(),
	EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A::get_offset_of_exhaust_15(),
	EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A::get_offset_of_usePow_16(),
	EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A::get_offset_of_m_KartInfo_17(),
	EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A::get_offset_of_m_NextStrokeTime_18(),
	EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A::get_offset_of_m_Time_19(),
	EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A::get_offset_of_m_SecondsPerSample_20(),
	EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A::get_offset_of_m_Stroke_21(),
	EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A::get_offset_of_m_RandomBuffer_22(),
	EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A::get_offset_of_m_DeltaRPM_23(),
	EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A::get_offset_of_m_LastRPM_24(),
	EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A::get_offset_of_m_LastSampleL_25(),
	EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A::get_offset_of_m_LastSampleR_26(),
	EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A::get_offset_of_m_Damper_27(),
	EngineAudio_t308D2FFEAEF3E4F022442FA9989046199A49FE1A::get_offset_of_m_Volume_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3311 = { sizeof (Stroke_t77C3F378E54FF34288C62A2F232137A206F6C34C)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3311[4] = 
{
	Stroke_t77C3F378E54FF34288C62A2F232137A206F6C34C::get_offset_of_clip_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Stroke_t77C3F378E54FF34288C62A2F232137A206F6C34C::get_offset_of_gain_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Stroke_t77C3F378E54FF34288C62A2F232137A206F6C34C::get_offset_of_buffer_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Stroke_t77C3F378E54FF34288C62A2F232137A206F6C34C::get_offset_of_position_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3312 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3313 = { sizeof (WallCollider_t560C275854D5FD6390B94BC0FCE2EA2DD5C60146), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3313[1] = 
{
	WallCollider_t560C275854D5FD6390B94BC0FCE2EA2DD5C60146::get_offset_of_bounciness_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3314 = { sizeof (AddativeKartModifier_t805B13C64CF0A93C859D540A6B2B01A34C2F1966), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3314[1] = 
{
	AddativeKartModifier_t805B13C64CF0A93C859D540A6B2B01A34C2F1966::get_offset_of_modifiers_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3315 = { sizeof (AddativeKartModifierAsset_t7DB36026E8F0AE8761CAF8E8480006238CD79E59), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3315[1] = 
{
	AddativeKartModifierAsset_t7DB36026E8F0AE8761CAF8E8480006238CD79E59::get_offset_of_statAdditions_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3316 = { sizeof (DefaultKartModifier_t380A181798124C421EE2117B1983F19C32C6A877)+ sizeof (RuntimeObject), sizeof(DefaultKartModifier_t380A181798124C421EE2117B1983F19C32C6A877 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3317 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3318 = { sizeof (MultiplicativeKartModifier_tFD9852DB48CFF7826B4A3E34C5EB33430F87085D), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3318[1] = 
{
	MultiplicativeKartModifier_tFD9852DB48CFF7826B4A3E34C5EB33430F87085D::get_offset_of_modifiers_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3319 = { sizeof (MultiplicativeKartModifierAsset_t1284DA6BC482FF7CE884E4AA0341D139D7E4324D), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3319[1] = 
{
	MultiplicativeKartModifierAsset_t1284DA6BC482FF7CE884E4AA0341D139D7E4324D::get_offset_of_statMultipliers_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3320 = { sizeof (GroundInfo_tD6CDE6BD1837D983F2B17CF476A5777A1AB5DB0E)+ sizeof (RuntimeObject), sizeof(GroundInfo_tD6CDE6BD1837D983F2B17CF476A5777A1AB5DB0E_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3320[4] = 
{
	GroundInfo_tD6CDE6BD1837D983F2B17CF476A5777A1AB5DB0E::get_offset_of_isCapsuleTouching_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GroundInfo_tD6CDE6BD1837D983F2B17CF476A5777A1AB5DB0E::get_offset_of_isGrounded_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GroundInfo_tD6CDE6BD1837D983F2B17CF476A5777A1AB5DB0E::get_offset_of_isCloseToGround_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GroundInfo_tD6CDE6BD1837D983F2B17CF476A5777A1AB5DB0E::get_offset_of_normal_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3321 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3322 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3323 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3324 = { sizeof (KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3324[50] = 
{
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_kart_4(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_driver_5(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_airborneModifier_6(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_input_7(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_frontGroundRaycast_8(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_rightGroundRaycast_9(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_leftGroundRaycast_10(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_rearGroundRaycast_11(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_defaultStats_12(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_groundLayers_13(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_allCollidingLayers_14(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_airborneOrientationSpeed_15(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_minDriftingSteering_16(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_rotationCorrectionSpeed_17(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_minDriftStartAngle_18(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_maxDriftStartAngle_19(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_kartToKartBump_20(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_OnBecomeAirborne_21(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_OnBecomeGrounded_22(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_OnHop_23(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_OnDriftStarted_24(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_OnDriftStopped_25(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_OnKartCollision_26(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_m_Input_27(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_m_RigidbodyPosition_28(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_m_Velocity_29(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_m_Movement_30(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_m_IsGrounded_31(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_m_CurrentGroundInfo_32(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_m_Rigidbody_33(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_m_Capsule_34(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_m_Racer_35(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_m_CurrentModifiers_36(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_m_TempModifiers_37(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_m_ModifiedStats_38(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_m_RaycastHitBuffer_39(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_m_ColliderBuffer_40(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_m_DriftOffset_41(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_m_DriftState_42(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_m_HasControl_43(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_m_SteeringInput_44(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_m_AccelerationInput_45(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_m_HopPressed_46(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_m_HopHeld_47(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_m_RepositionPositionDelta_48(),
	KartMovement_t5660BDAE960ABEFEFA27365B1E3E41049CFC93AA::get_offset_of_m_RepositionRotationDelta_49(),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3325 = { sizeof (DriftState_t3DD619E91C3390533C1EE7E712B78C404546ED1F)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3325[4] = 
{
	DriftState_t3DD619E91C3390533C1EE7E712B78C404546ED1F::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3326 = { sizeof (KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15)+ sizeof (RuntimeObject), sizeof(KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3326[11] = 
{
	KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15::get_offset_of_acceleration_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15::get_offset_of_braking_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15::get_offset_of_coastingDrag_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15::get_offset_of_gravity_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15::get_offset_of_grip_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15::get_offset_of_hopHeight_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15::get_offset_of_reverseAcceleration_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15::get_offset_of_reverseSpeed_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15::get_offset_of_topSpeed_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15::get_offset_of_turnSpeed_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	KartStats_t81AA5D3F8D42473FE31BB544F05C5FDAA3112D15::get_offset_of_weight_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
