void RegisterAllStrippedInternalCalls()
{
	//Start Registrations for type : UnityEngine.Animation

		//System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
		void Register_UnityEngine_Animation_PlayDefaultAnimation();
		Register_UnityEngine_Animation_PlayDefaultAnimation();

		//System.Int32 UnityEngine.Animation::GetStateCount()
		void Register_UnityEngine_Animation_GetStateCount();
		Register_UnityEngine_Animation_GetStateCount();

		//System.Void UnityEngine.Animation::INTERNAL_CALL_Stop(UnityEngine.Animation)
		void Register_UnityEngine_Animation_INTERNAL_CALL_Stop();
		Register_UnityEngine_Animation_INTERNAL_CALL_Stop();

		//UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
		void Register_UnityEngine_Animation_GetStateAtIndex();
		Register_UnityEngine_Animation_GetStateAtIndex();

	//End Registrations for type : UnityEngine.Animation

	//Start Registrations for type : UnityEngine.AnimationClip

		//System.Boolean UnityEngine.AnimationClip::get_empty()
		void Register_UnityEngine_AnimationClip_get_empty();
		Register_UnityEngine_AnimationClip_get_empty();

		//System.Boolean UnityEngine.AnimationClip::get_hasGenericRootTransform()
		void Register_UnityEngine_AnimationClip_get_hasGenericRootTransform();
		Register_UnityEngine_AnimationClip_get_hasGenericRootTransform();

		//System.Boolean UnityEngine.AnimationClip::get_hasMotionCurves()
		void Register_UnityEngine_AnimationClip_get_hasMotionCurves();
		Register_UnityEngine_AnimationClip_get_hasMotionCurves();

		//System.Boolean UnityEngine.AnimationClip::get_hasRootCurves()
		void Register_UnityEngine_AnimationClip_get_hasRootCurves();
		Register_UnityEngine_AnimationClip_get_hasRootCurves();

		//System.Boolean UnityEngine.AnimationClip::get_hasRootMotion()
		void Register_UnityEngine_AnimationClip_get_hasRootMotion();
		Register_UnityEngine_AnimationClip_get_hasRootMotion();

		//System.Boolean UnityEngine.AnimationClip::get_legacy()
		void Register_UnityEngine_AnimationClip_get_legacy();
		Register_UnityEngine_AnimationClip_get_legacy();

		//System.Single UnityEngine.AnimationClip::get_frameRate()
		void Register_UnityEngine_AnimationClip_get_frameRate();
		Register_UnityEngine_AnimationClip_get_frameRate();

		//System.Single UnityEngine.AnimationClip::get_length()
		void Register_UnityEngine_AnimationClip_get_length();
		Register_UnityEngine_AnimationClip_get_length();

		//System.Void UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)
		void Register_UnityEngine_AnimationClip_Internal_CreateAnimationClip();
		Register_UnityEngine_AnimationClip_Internal_CreateAnimationClip();

		//System.Void UnityEngine.AnimationClip::set_legacy(System.Boolean)
		void Register_UnityEngine_AnimationClip_set_legacy();
		Register_UnityEngine_AnimationClip_set_legacy();

	//End Registrations for type : UnityEngine.AnimationClip

	//Start Registrations for type : UnityEngine.AnimationCurve

		//System.Boolean UnityEngine.AnimationCurve::Internal_Equals(System.IntPtr)
		void Register_UnityEngine_AnimationCurve_Internal_Equals();
		Register_UnityEngine_AnimationCurve_Internal_Equals();

		//System.Int32 UnityEngine.AnimationCurve::AddKey_Internal_Injected(UnityEngine.Keyframe&)
		void Register_UnityEngine_AnimationCurve_AddKey_Internal_Injected();
		Register_UnityEngine_AnimationCurve_AddKey_Internal_Injected();

		//System.Int32 UnityEngine.AnimationCurve::get_length()
		void Register_UnityEngine_AnimationCurve_get_length();
		Register_UnityEngine_AnimationCurve_get_length();

		//System.IntPtr UnityEngine.AnimationCurve::Internal_Create(UnityEngine.Keyframe[])
		void Register_UnityEngine_AnimationCurve_Internal_Create();
		Register_UnityEngine_AnimationCurve_Internal_Create();

		//System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
		void Register_UnityEngine_AnimationCurve_Evaluate();
		Register_UnityEngine_AnimationCurve_Evaluate();

		//System.Void UnityEngine.AnimationCurve::GetKey_Injected(System.Int32,UnityEngine.Keyframe&)
		void Register_UnityEngine_AnimationCurve_GetKey_Injected();
		Register_UnityEngine_AnimationCurve_GetKey_Injected();

		//System.Void UnityEngine.AnimationCurve::Internal_Destroy(System.IntPtr)
		void Register_UnityEngine_AnimationCurve_Internal_Destroy();
		Register_UnityEngine_AnimationCurve_Internal_Destroy();

		//System.Void UnityEngine.AnimationCurve::SetKeys(UnityEngine.Keyframe[])
		void Register_UnityEngine_AnimationCurve_SetKeys();
		Register_UnityEngine_AnimationCurve_SetKeys();

		//UnityEngine.Keyframe[] UnityEngine.AnimationCurve::GetKeys()
		void Register_UnityEngine_AnimationCurve_GetKeys();
		Register_UnityEngine_AnimationCurve_GetKeys();

	//End Registrations for type : UnityEngine.AnimationCurve

	//Start Registrations for type : UnityEngine.Animations.AnimationClipPlayable

		//System.Boolean UnityEngine.Animations.AnimationClipPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.AnimationClip,UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Animations_AnimationClipPlayable_CreateHandleInternal_Injected();
		Register_UnityEngine_Animations_AnimationClipPlayable_CreateHandleInternal_Injected();

		//System.Void UnityEngine.Animations.AnimationClipPlayable::SetApplyFootIKInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
		void Register_UnityEngine_Animations_AnimationClipPlayable_SetApplyFootIKInternal();
		Register_UnityEngine_Animations_AnimationClipPlayable_SetApplyFootIKInternal();

		//System.Void UnityEngine.Animations.AnimationClipPlayable::SetRemoveStartOffsetInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
		void Register_UnityEngine_Animations_AnimationClipPlayable_SetRemoveStartOffsetInternal();
		Register_UnityEngine_Animations_AnimationClipPlayable_SetRemoveStartOffsetInternal();

	//End Registrations for type : UnityEngine.Animations.AnimationClipPlayable

	//Start Registrations for type : UnityEngine.Animations.AnimationLayerMixerPlayable

		//System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Animations_AnimationLayerMixerPlayable_CreateHandleInternal_Injected();
		Register_UnityEngine_Animations_AnimationLayerMixerPlayable_CreateHandleInternal_Injected();

		//System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::SetLayerMaskFromAvatarMaskInternal(UnityEngine.Playables.PlayableHandle&,System.UInt32,UnityEngine.AvatarMask)
		void Register_UnityEngine_Animations_AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMaskInternal();
		Register_UnityEngine_Animations_AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMaskInternal();

	//End Registrations for type : UnityEngine.Animations.AnimationLayerMixerPlayable

	//Start Registrations for type : UnityEngine.Animations.AnimationMixerPlayable

		//System.Boolean UnityEngine.Animations.AnimationMixerPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,System.Int32,System.Boolean,UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Animations_AnimationMixerPlayable_CreateHandleInternal_Injected();
		Register_UnityEngine_Animations_AnimationMixerPlayable_CreateHandleInternal_Injected();

	//End Registrations for type : UnityEngine.Animations.AnimationMixerPlayable

	//Start Registrations for type : UnityEngine.Animations.AnimationMotionXToDeltaPlayable

		//System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Animations_AnimationMotionXToDeltaPlayable_CreateHandleInternal_Injected();
		Register_UnityEngine_Animations_AnimationMotionXToDeltaPlayable_CreateHandleInternal_Injected();

		//System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::IsAbsoluteMotionInternal(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Animations_AnimationMotionXToDeltaPlayable_IsAbsoluteMotionInternal();
		Register_UnityEngine_Animations_AnimationMotionXToDeltaPlayable_IsAbsoluteMotionInternal();

		//System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::SetAbsoluteMotionInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
		void Register_UnityEngine_Animations_AnimationMotionXToDeltaPlayable_SetAbsoluteMotionInternal();
		Register_UnityEngine_Animations_AnimationMotionXToDeltaPlayable_SetAbsoluteMotionInternal();

	//End Registrations for type : UnityEngine.Animations.AnimationMotionXToDeltaPlayable

	//Start Registrations for type : UnityEngine.Animations.AnimationOffsetPlayable

		//System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Animations_AnimationOffsetPlayable_CreateHandleInternal_Injected();
		Register_UnityEngine_Animations_AnimationOffsetPlayable_CreateHandleInternal_Injected();

		//System.Void UnityEngine.Animations.AnimationOffsetPlayable::GetPositionInternal_Injected(UnityEngine.Playables.PlayableHandle&,UnityEngine.Vector3&)
		void Register_UnityEngine_Animations_AnimationOffsetPlayable_GetPositionInternal_Injected();
		Register_UnityEngine_Animations_AnimationOffsetPlayable_GetPositionInternal_Injected();

		//System.Void UnityEngine.Animations.AnimationOffsetPlayable::GetRotationInternal_Injected(UnityEngine.Playables.PlayableHandle&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Animations_AnimationOffsetPlayable_GetRotationInternal_Injected();
		Register_UnityEngine_Animations_AnimationOffsetPlayable_GetRotationInternal_Injected();

	//End Registrations for type : UnityEngine.Animations.AnimationOffsetPlayable

	//Start Registrations for type : UnityEngine.Animations.AnimationPlayableExtensions

		//System.Void UnityEngine.Animations.AnimationPlayableExtensions::SetAnimatedPropertiesInternal(UnityEngine.Playables.PlayableHandle&,UnityEngine.AnimationClip)
		void Register_UnityEngine_Animations_AnimationPlayableExtensions_SetAnimatedPropertiesInternal();
		Register_UnityEngine_Animations_AnimationPlayableExtensions_SetAnimatedPropertiesInternal();

	//End Registrations for type : UnityEngine.Animations.AnimationPlayableExtensions

	//Start Registrations for type : UnityEngine.Animations.AnimationPlayableGraphExtensions

		//System.Boolean UnityEngine.Animations.AnimationPlayableGraphExtensions::InternalCreateAnimationOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)
		void Register_UnityEngine_Animations_AnimationPlayableGraphExtensions_InternalCreateAnimationOutput();
		Register_UnityEngine_Animations_AnimationPlayableGraphExtensions_InternalCreateAnimationOutput();

	//End Registrations for type : UnityEngine.Animations.AnimationPlayableGraphExtensions

	//Start Registrations for type : UnityEngine.Animations.AnimationPlayableOutput

		//System.Void UnityEngine.Animations.AnimationPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Animator)
		void Register_UnityEngine_Animations_AnimationPlayableOutput_InternalSetTarget();
		Register_UnityEngine_Animations_AnimationPlayableOutput_InternalSetTarget();

		//UnityEngine.Animator UnityEngine.Animations.AnimationPlayableOutput::InternalGetTarget(UnityEngine.Playables.PlayableOutputHandle&)
		void Register_UnityEngine_Animations_AnimationPlayableOutput_InternalGetTarget();
		Register_UnityEngine_Animations_AnimationPlayableOutput_InternalGetTarget();

	//End Registrations for type : UnityEngine.Animations.AnimationPlayableOutput

	//Start Registrations for type : UnityEngine.Animations.AnimationRemoveScalePlayable

		//System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Animations_AnimationRemoveScalePlayable_CreateHandleInternal_Injected();
		Register_UnityEngine_Animations_AnimationRemoveScalePlayable_CreateHandleInternal_Injected();

	//End Registrations for type : UnityEngine.Animations.AnimationRemoveScalePlayable

	//Start Registrations for type : UnityEngine.Animator

		//System.Boolean UnityEngine.Animator::IsInTransition(System.Int32)
		void Register_UnityEngine_Animator_IsInTransition();
		Register_UnityEngine_Animator_IsInTransition();

		//System.Boolean UnityEngine.Animator::get_hasBoundPlayables()
		void Register_UnityEngine_Animator_get_hasBoundPlayables();
		Register_UnityEngine_Animator_get_hasBoundPlayables();

		//System.Boolean UnityEngine.Animator::get_hasRootMotion()
		void Register_UnityEngine_Animator_get_hasRootMotion();
		Register_UnityEngine_Animator_get_hasRootMotion();

		//System.Int32 UnityEngine.Animator::GetAnimatorClipInfoCount(System.Int32,System.Boolean)
		void Register_UnityEngine_Animator_GetAnimatorClipInfoCount();
		Register_UnityEngine_Animator_GetAnimatorClipInfoCount();

		//System.Int32 UnityEngine.Animator::StringToHash(System.String)
		void Register_UnityEngine_Animator_StringToHash();
		Register_UnityEngine_Animator_StringToHash();

		//System.Int32 UnityEngine.Animator::get_layerCount()
		void Register_UnityEngine_Animator_get_layerCount();
		Register_UnityEngine_Animator_get_layerCount();

		//System.Void UnityEngine.Animator::GetAnimatorClipInfoInternal(System.Int32,System.Boolean,System.Object)
		void Register_UnityEngine_Animator_GetAnimatorClipInfoInternal();
		Register_UnityEngine_Animator_GetAnimatorClipInfoInternal();

		//System.Void UnityEngine.Animator::GetAnimatorStateInfo(System.Int32,UnityEngine.StateInfoIndex,UnityEngine.AnimatorStateInfo&)
		void Register_UnityEngine_Animator_GetAnimatorStateInfo();
		Register_UnityEngine_Animator_GetAnimatorStateInfo();

		//System.Void UnityEngine.Animator::ResetTriggerString(System.String)
		void Register_UnityEngine_Animator_ResetTriggerString();
		Register_UnityEngine_Animator_ResetTriggerString();

		//System.Void UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)
		void Register_UnityEngine_Animator_SetBoolID();
		Register_UnityEngine_Animator_SetBoolID();

		//System.Void UnityEngine.Animator::SetFloatID(System.Int32,System.Single)
		void Register_UnityEngine_Animator_SetFloatID();
		Register_UnityEngine_Animator_SetFloatID();

		//System.Void UnityEngine.Animator::SetTriggerString(System.String)
		void Register_UnityEngine_Animator_SetTriggerString();
		Register_UnityEngine_Animator_SetTriggerString();

		//UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
		void Register_UnityEngine_Animator_get_runtimeAnimatorController();
		Register_UnityEngine_Animator_get_runtimeAnimatorController();

	//End Registrations for type : UnityEngine.Animator

	//Start Registrations for type : UnityEngine.AnimatorClipInfo

		//UnityEngine.AnimationClip UnityEngine.AnimatorClipInfo::InstanceIDToAnimationClipPPtr(System.Int32)
		void Register_UnityEngine_AnimatorClipInfo_InstanceIDToAnimationClipPPtr();
		Register_UnityEngine_AnimatorClipInfo_InstanceIDToAnimationClipPPtr();

	//End Registrations for type : UnityEngine.AnimatorClipInfo

	//Start Registrations for type : UnityEngine.Application

		//System.Boolean UnityEngine.Application::get_isPlaying()
		void Register_UnityEngine_Application_get_isPlaying();
		Register_UnityEngine_Application_get_isPlaying();

		//System.String UnityEngine.Application::get_absoluteURL()
		void Register_UnityEngine_Application_get_absoluteURL();
		Register_UnityEngine_Application_get_absoluteURL();

		//System.String UnityEngine.Application::get_persistentDataPath()
		void Register_UnityEngine_Application_get_persistentDataPath();
		Register_UnityEngine_Application_get_persistentDataPath();

		//UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
		void Register_UnityEngine_Application_get_platform();
		Register_UnityEngine_Application_get_platform();

	//End Registrations for type : UnityEngine.Application

	//Start Registrations for type : UnityEngine.AsyncOperation

		//System.Void UnityEngine.AsyncOperation::InternalDestroy(System.IntPtr)
		void Register_UnityEngine_AsyncOperation_InternalDestroy();
		Register_UnityEngine_AsyncOperation_InternalDestroy();

	//End Registrations for type : UnityEngine.AsyncOperation

	//Start Registrations for type : UnityEngine.Audio.AudioClipPlayable

		//System.Boolean UnityEngine.Audio.AudioClipPlayable::GetIsChannelPlayingInternal(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Audio_AudioClipPlayable_GetIsChannelPlayingInternal();
		Register_UnityEngine_Audio_AudioClipPlayable_GetIsChannelPlayingInternal();

		//System.Boolean UnityEngine.Audio.AudioClipPlayable::GetLoopedInternal(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Audio_AudioClipPlayable_GetLoopedInternal();
		Register_UnityEngine_Audio_AudioClipPlayable_GetLoopedInternal();

		//System.Boolean UnityEngine.Audio.AudioClipPlayable::InternalCreateAudioClipPlayable(UnityEngine.Playables.PlayableGraph&,UnityEngine.AudioClip,System.Boolean,UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Audio_AudioClipPlayable_InternalCreateAudioClipPlayable();
		Register_UnityEngine_Audio_AudioClipPlayable_InternalCreateAudioClipPlayable();

		//System.Double UnityEngine.Audio.AudioClipPlayable::GetPauseDelayInternal(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Audio_AudioClipPlayable_GetPauseDelayInternal();
		Register_UnityEngine_Audio_AudioClipPlayable_GetPauseDelayInternal();

		//System.Double UnityEngine.Audio.AudioClipPlayable::GetStartDelayInternal(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Audio_AudioClipPlayable_GetStartDelayInternal();
		Register_UnityEngine_Audio_AudioClipPlayable_GetStartDelayInternal();

		//System.Void UnityEngine.Audio.AudioClipPlayable::SetPauseDelayInternal(UnityEngine.Playables.PlayableHandle&,System.Double)
		void Register_UnityEngine_Audio_AudioClipPlayable_SetPauseDelayInternal();
		Register_UnityEngine_Audio_AudioClipPlayable_SetPauseDelayInternal();

		//System.Void UnityEngine.Audio.AudioClipPlayable::SetStartDelayInternal(UnityEngine.Playables.PlayableHandle&,System.Double)
		void Register_UnityEngine_Audio_AudioClipPlayable_SetStartDelayInternal();
		Register_UnityEngine_Audio_AudioClipPlayable_SetStartDelayInternal();

		//UnityEngine.AudioClip UnityEngine.Audio.AudioClipPlayable::GetClipInternal(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Audio_AudioClipPlayable_GetClipInternal();
		Register_UnityEngine_Audio_AudioClipPlayable_GetClipInternal();

	//End Registrations for type : UnityEngine.Audio.AudioClipPlayable

	//Start Registrations for type : UnityEngine.Audio.AudioMixerPlayable

		//System.Boolean UnityEngine.Audio.AudioMixerPlayable::CreateAudioMixerPlayableInternal(UnityEngine.Playables.PlayableGraph&,System.Int32,System.Boolean,UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Audio_AudioMixerPlayable_CreateAudioMixerPlayableInternal();
		Register_UnityEngine_Audio_AudioMixerPlayable_CreateAudioMixerPlayableInternal();

	//End Registrations for type : UnityEngine.Audio.AudioMixerPlayable

	//Start Registrations for type : UnityEngine.Audio.AudioPlayableGraphExtensions

		//System.Boolean UnityEngine.Audio.AudioPlayableGraphExtensions::InternalCreateAudioOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)
		void Register_UnityEngine_Audio_AudioPlayableGraphExtensions_InternalCreateAudioOutput();
		Register_UnityEngine_Audio_AudioPlayableGraphExtensions_InternalCreateAudioOutput();

	//End Registrations for type : UnityEngine.Audio.AudioPlayableGraphExtensions

	//Start Registrations for type : UnityEngine.Audio.AudioPlayableOutput

		//System.Boolean UnityEngine.Audio.AudioPlayableOutput::InternalGetEvaluateOnSeek(UnityEngine.Playables.PlayableOutputHandle&)
		void Register_UnityEngine_Audio_AudioPlayableOutput_InternalGetEvaluateOnSeek();
		Register_UnityEngine_Audio_AudioPlayableOutput_InternalGetEvaluateOnSeek();

		//System.Void UnityEngine.Audio.AudioPlayableOutput::InternalSetEvaluateOnSeek(UnityEngine.Playables.PlayableOutputHandle&,System.Boolean)
		void Register_UnityEngine_Audio_AudioPlayableOutput_InternalSetEvaluateOnSeek();
		Register_UnityEngine_Audio_AudioPlayableOutput_InternalSetEvaluateOnSeek();

		//System.Void UnityEngine.Audio.AudioPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.AudioSource)
		void Register_UnityEngine_Audio_AudioPlayableOutput_InternalSetTarget();
		Register_UnityEngine_Audio_AudioPlayableOutput_InternalSetTarget();

		//UnityEngine.AudioSource UnityEngine.Audio.AudioPlayableOutput::InternalGetTarget(UnityEngine.Playables.PlayableOutputHandle&)
		void Register_UnityEngine_Audio_AudioPlayableOutput_InternalGetTarget();
		Register_UnityEngine_Audio_AudioPlayableOutput_InternalGetTarget();

	//End Registrations for type : UnityEngine.Audio.AudioPlayableOutput

	//Start Registrations for type : UnityEngine.AudioClip

		//System.Boolean UnityEngine.AudioClip::GetData(System.Single[],System.Int32)
		void Register_UnityEngine_AudioClip_GetData();
		Register_UnityEngine_AudioClip_GetData();

		//System.Boolean UnityEngine.AudioClip::get_ambisonic()
		void Register_UnityEngine_AudioClip_get_ambisonic();
		Register_UnityEngine_AudioClip_get_ambisonic();

		//System.Int32 UnityEngine.AudioClip::get_frequency()
		void Register_UnityEngine_AudioClip_get_frequency();
		Register_UnityEngine_AudioClip_get_frequency();

		//System.Int32 UnityEngine.AudioClip::get_samples()
		void Register_UnityEngine_AudioClip_get_samples();
		Register_UnityEngine_AudioClip_get_samples();

		//System.Single UnityEngine.AudioClip::get_length()
		void Register_UnityEngine_AudioClip_get_length();
		Register_UnityEngine_AudioClip_get_length();

	//End Registrations for type : UnityEngine.AudioClip

	//Start Registrations for type : UnityEngine.AudioExtensionManager

		//UnityEngine.Object UnityEngine.AudioExtensionManager::GetAudioListener()
		void Register_UnityEngine_AudioExtensionManager_GetAudioListener();
		Register_UnityEngine_AudioExtensionManager_GetAudioListener();

	//End Registrations for type : UnityEngine.AudioExtensionManager

	//Start Registrations for type : UnityEngine.AudioListener

		//System.Int32 UnityEngine.AudioListener::GetNumExtensionProperties()
		void Register_UnityEngine_AudioListener_GetNumExtensionProperties();
		Register_UnityEngine_AudioListener_GetNumExtensionProperties();

		//System.Single UnityEngine.AudioListener::ReadExtensionPropertyValue(System.Int32)
		void Register_UnityEngine_AudioListener_ReadExtensionPropertyValue();
		Register_UnityEngine_AudioListener_ReadExtensionPropertyValue();

		//System.Void UnityEngine.AudioListener::INTERNAL_CALL_ClearExtensionProperties(UnityEngine.AudioListener,UnityEngine.PropertyName&)
		void Register_UnityEngine_AudioListener_INTERNAL_CALL_ClearExtensionProperties();
		Register_UnityEngine_AudioListener_INTERNAL_CALL_ClearExtensionProperties();

		//System.Void UnityEngine.AudioListener::INTERNAL_CALL_ReadExtensionName(UnityEngine.AudioListener,System.Int32,UnityEngine.PropertyName&)
		void Register_UnityEngine_AudioListener_INTERNAL_CALL_ReadExtensionName();
		Register_UnityEngine_AudioListener_INTERNAL_CALL_ReadExtensionName();

		//System.Void UnityEngine.AudioListener::INTERNAL_CALL_ReadExtensionPropertyName(UnityEngine.AudioListener,System.Int32,UnityEngine.PropertyName&)
		void Register_UnityEngine_AudioListener_INTERNAL_CALL_ReadExtensionPropertyName();
		Register_UnityEngine_AudioListener_INTERNAL_CALL_ReadExtensionPropertyName();

	//End Registrations for type : UnityEngine.AudioListener

	//Start Registrations for type : UnityEngine.AudioSettings

		//System.Int32 UnityEngine.AudioSettings::get_outputSampleRate()
		void Register_UnityEngine_AudioSettings_get_outputSampleRate();
		Register_UnityEngine_AudioSettings_get_outputSampleRate();

		//System.String UnityEngine.AudioSettings::GetAmbisonicDecoderPluginName()
		void Register_UnityEngine_AudioSettings_GetAmbisonicDecoderPluginName();
		Register_UnityEngine_AudioSettings_GetAmbisonicDecoderPluginName();

		//System.String UnityEngine.AudioSettings::GetSpatializerPluginName()
		void Register_UnityEngine_AudioSettings_GetSpatializerPluginName();
		Register_UnityEngine_AudioSettings_GetSpatializerPluginName();

	//End Registrations for type : UnityEngine.AudioSettings

	//Start Registrations for type : UnityEngine.AudioSource

		//System.Boolean UnityEngine.AudioSource::get_isPlaying()
		void Register_UnityEngine_AudioSource_get_isPlaying();
		Register_UnityEngine_AudioSource_get_isPlaying();

		//System.Boolean UnityEngine.AudioSource::get_spatializeInternal()
		void Register_UnityEngine_AudioSource_get_spatializeInternal();
		Register_UnityEngine_AudioSource_get_spatializeInternal();

		//System.Int32 UnityEngine.AudioSource::GetNumExtensionProperties()
		void Register_UnityEngine_AudioSource_GetNumExtensionProperties();
		Register_UnityEngine_AudioSource_GetNumExtensionProperties();

		//System.Single UnityEngine.AudioSource::ReadExtensionPropertyValue(System.Int32)
		void Register_UnityEngine_AudioSource_ReadExtensionPropertyValue();
		Register_UnityEngine_AudioSource_ReadExtensionPropertyValue();

		//System.Void UnityEngine.AudioSource::INTERNAL_CALL_ClearExtensionProperties(UnityEngine.AudioSource,UnityEngine.PropertyName&)
		void Register_UnityEngine_AudioSource_INTERNAL_CALL_ClearExtensionProperties();
		Register_UnityEngine_AudioSource_INTERNAL_CALL_ClearExtensionProperties();

		//System.Void UnityEngine.AudioSource::INTERNAL_CALL_ReadExtensionName(UnityEngine.AudioSource,System.Int32,UnityEngine.PropertyName&)
		void Register_UnityEngine_AudioSource_INTERNAL_CALL_ReadExtensionName();
		Register_UnityEngine_AudioSource_INTERNAL_CALL_ReadExtensionName();

		//System.Void UnityEngine.AudioSource::INTERNAL_CALL_ReadExtensionPropertyName(UnityEngine.AudioSource,System.Int32,UnityEngine.PropertyName&)
		void Register_UnityEngine_AudioSource_INTERNAL_CALL_ReadExtensionPropertyName();
		Register_UnityEngine_AudioSource_INTERNAL_CALL_ReadExtensionPropertyName();

		//System.Void UnityEngine.AudioSource::Play(System.UInt64)
		void Register_UnityEngine_AudioSource_Play();
		Register_UnityEngine_AudioSource_Play();

		//System.Void UnityEngine.AudioSource::Stop()
		void Register_UnityEngine_AudioSource_Stop();
		Register_UnityEngine_AudioSource_Stop();

		//UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
		void Register_UnityEngine_AudioSource_get_clip();
		Register_UnityEngine_AudioSource_get_clip();

	//End Registrations for type : UnityEngine.AudioSource

	//Start Registrations for type : UnityEngine.Behaviour

		//System.Boolean UnityEngine.Behaviour::get_enabled()
		void Register_UnityEngine_Behaviour_get_enabled();
		Register_UnityEngine_Behaviour_get_enabled();

		//System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
		void Register_UnityEngine_Behaviour_get_isActiveAndEnabled();
		Register_UnityEngine_Behaviour_get_isActiveAndEnabled();

		//System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
		void Register_UnityEngine_Behaviour_set_enabled();
		Register_UnityEngine_Behaviour_set_enabled();

	//End Registrations for type : UnityEngine.Behaviour

	//Start Registrations for type : UnityEngine.BoxCollider

		//System.Void UnityEngine.BoxCollider::get_center_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_BoxCollider_get_center_Injected();
		Register_UnityEngine_BoxCollider_get_center_Injected();

		//System.Void UnityEngine.BoxCollider::get_size_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_BoxCollider_get_size_Injected();
		Register_UnityEngine_BoxCollider_get_size_Injected();

	//End Registrations for type : UnityEngine.BoxCollider

	//Start Registrations for type : UnityEngine.Camera

		//System.Boolean UnityEngine.Camera::get_allowHDR()
		void Register_UnityEngine_Camera_get_allowHDR();
		Register_UnityEngine_Camera_get_allowHDR();

		//System.Boolean UnityEngine.Camera::get_orthographic()
		void Register_UnityEngine_Camera_get_orthographic();
		Register_UnityEngine_Camera_get_orthographic();

		//System.Boolean UnityEngine.Camera::get_stereoEnabled()
		void Register_UnityEngine_Camera_get_stereoEnabled();
		Register_UnityEngine_Camera_get_stereoEnabled();

		//System.Boolean UnityEngine.Camera::get_usePhysicalProperties()
		void Register_UnityEngine_Camera_get_usePhysicalProperties();
		Register_UnityEngine_Camera_get_usePhysicalProperties();

		//System.Int32 UnityEngine.Camera::GetAllCamerasCount()
		void Register_UnityEngine_Camera_GetAllCamerasCount();
		Register_UnityEngine_Camera_GetAllCamerasCount();

		//System.Int32 UnityEngine.Camera::GetAllCamerasImpl(UnityEngine.Camera[])
		void Register_UnityEngine_Camera_GetAllCamerasImpl();
		Register_UnityEngine_Camera_GetAllCamerasImpl();

		//System.Int32 UnityEngine.Camera::get_cullingMask()
		void Register_UnityEngine_Camera_get_cullingMask();
		Register_UnityEngine_Camera_get_cullingMask();

		//System.Int32 UnityEngine.Camera::get_eventMask()
		void Register_UnityEngine_Camera_get_eventMask();
		Register_UnityEngine_Camera_get_eventMask();

		//System.Int32 UnityEngine.Camera::get_pixelHeight()
		void Register_UnityEngine_Camera_get_pixelHeight();
		Register_UnityEngine_Camera_get_pixelHeight();

		//System.Int32 UnityEngine.Camera::get_pixelWidth()
		void Register_UnityEngine_Camera_get_pixelWidth();
		Register_UnityEngine_Camera_get_pixelWidth();

		//System.Int32 UnityEngine.Camera::get_targetDisplay()
		void Register_UnityEngine_Camera_get_targetDisplay();
		Register_UnityEngine_Camera_get_targetDisplay();

		//System.Single UnityEngine.Camera::get_aspect()
		void Register_UnityEngine_Camera_get_aspect();
		Register_UnityEngine_Camera_get_aspect();

		//System.Single UnityEngine.Camera::get_depth()
		void Register_UnityEngine_Camera_get_depth();
		Register_UnityEngine_Camera_get_depth();

		//System.Single UnityEngine.Camera::get_farClipPlane()
		void Register_UnityEngine_Camera_get_farClipPlane();
		Register_UnityEngine_Camera_get_farClipPlane();

		//System.Single UnityEngine.Camera::get_fieldOfView()
		void Register_UnityEngine_Camera_get_fieldOfView();
		Register_UnityEngine_Camera_get_fieldOfView();

		//System.Single UnityEngine.Camera::get_nearClipPlane()
		void Register_UnityEngine_Camera_get_nearClipPlane();
		Register_UnityEngine_Camera_get_nearClipPlane();

		//System.Single UnityEngine.Camera::get_orthographicSize()
		void Register_UnityEngine_Camera_get_orthographicSize();
		Register_UnityEngine_Camera_get_orthographicSize();

		//System.Void UnityEngine.Camera::AddCommandBufferImpl(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer)
		void Register_UnityEngine_Camera_AddCommandBufferImpl();
		Register_UnityEngine_Camera_AddCommandBufferImpl();

		//System.Void UnityEngine.Camera::CopyStereoDeviceProjectionMatrixToNonJittered(UnityEngine.Camera/StereoscopicEye)
		void Register_UnityEngine_Camera_CopyStereoDeviceProjectionMatrixToNonJittered();
		Register_UnityEngine_Camera_CopyStereoDeviceProjectionMatrixToNonJittered();

		//System.Void UnityEngine.Camera::GetStereoNonJitteredProjectionMatrix_Injected(UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_GetStereoNonJitteredProjectionMatrix_Injected();
		Register_UnityEngine_Camera_GetStereoNonJitteredProjectionMatrix_Injected();

		//System.Void UnityEngine.Camera::RemoveCommandBufferImpl(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer)
		void Register_UnityEngine_Camera_RemoveCommandBufferImpl();
		Register_UnityEngine_Camera_RemoveCommandBufferImpl();

		//System.Void UnityEngine.Camera::ResetProjectionMatrix()
		void Register_UnityEngine_Camera_ResetProjectionMatrix();
		Register_UnityEngine_Camera_ResetProjectionMatrix();

		//System.Void UnityEngine.Camera::ResetStereoProjectionMatrices()
		void Register_UnityEngine_Camera_ResetStereoProjectionMatrices();
		Register_UnityEngine_Camera_ResetStereoProjectionMatrices();

		//System.Void UnityEngine.Camera::ScreenPointToRay_Injected(UnityEngine.Vector2&,UnityEngine.Camera/MonoOrStereoscopicEye,UnityEngine.Ray&)
		void Register_UnityEngine_Camera_ScreenPointToRay_Injected();
		Register_UnityEngine_Camera_ScreenPointToRay_Injected();

		//System.Void UnityEngine.Camera::ScreenToViewportPoint_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Camera_ScreenToViewportPoint_Injected();
		Register_UnityEngine_Camera_ScreenToViewportPoint_Injected();

		//System.Void UnityEngine.Camera::SetStereoProjectionMatrix_Injected(UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_SetStereoProjectionMatrix_Injected();
		Register_UnityEngine_Camera_SetStereoProjectionMatrix_Injected();

		//System.Void UnityEngine.Camera::WorldToScreenPoint_Injected(UnityEngine.Vector3&,UnityEngine.Camera/MonoOrStereoscopicEye,UnityEngine.Vector3&)
		void Register_UnityEngine_Camera_WorldToScreenPoint_Injected();
		Register_UnityEngine_Camera_WorldToScreenPoint_Injected();

		//System.Void UnityEngine.Camera::get_lensShift_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Camera_get_lensShift_Injected();
		Register_UnityEngine_Camera_get_lensShift_Injected();

		//System.Void UnityEngine.Camera::get_pixelRect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_Camera_get_pixelRect_Injected();
		Register_UnityEngine_Camera_get_pixelRect_Injected();

		//System.Void UnityEngine.Camera::get_projectionMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_get_projectionMatrix_Injected();
		Register_UnityEngine_Camera_get_projectionMatrix_Injected();

		//System.Void UnityEngine.Camera::get_sensorSize_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Camera_get_sensorSize_Injected();
		Register_UnityEngine_Camera_get_sensorSize_Injected();

		//System.Void UnityEngine.Camera::get_worldToCameraMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_get_worldToCameraMatrix_Injected();
		Register_UnityEngine_Camera_get_worldToCameraMatrix_Injected();

		//System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
		void Register_UnityEngine_Camera_set_depthTextureMode();
		Register_UnityEngine_Camera_set_depthTextureMode();

		//System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
		void Register_UnityEngine_Camera_set_farClipPlane();
		Register_UnityEngine_Camera_set_farClipPlane();

		//System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
		void Register_UnityEngine_Camera_set_fieldOfView();
		Register_UnityEngine_Camera_set_fieldOfView();

		//System.Void UnityEngine.Camera::set_forceIntoRenderTexture(System.Boolean)
		void Register_UnityEngine_Camera_set_forceIntoRenderTexture();
		Register_UnityEngine_Camera_set_forceIntoRenderTexture();

		//System.Void UnityEngine.Camera::set_lensShift_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Camera_set_lensShift_Injected();
		Register_UnityEngine_Camera_set_lensShift_Injected();

		//System.Void UnityEngine.Camera::set_nearClipPlane(System.Single)
		void Register_UnityEngine_Camera_set_nearClipPlane();
		Register_UnityEngine_Camera_set_nearClipPlane();

		//System.Void UnityEngine.Camera::set_nonJitteredProjectionMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_set_nonJitteredProjectionMatrix_Injected();
		Register_UnityEngine_Camera_set_nonJitteredProjectionMatrix_Injected();

		//System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
		void Register_UnityEngine_Camera_set_orthographicSize();
		Register_UnityEngine_Camera_set_orthographicSize();

		//System.Void UnityEngine.Camera::set_projectionMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_set_projectionMatrix_Injected();
		Register_UnityEngine_Camera_set_projectionMatrix_Injected();

		//System.Void UnityEngine.Camera::set_useJitteredProjectionMatrixForTransparentRendering(System.Boolean)
		void Register_UnityEngine_Camera_set_useJitteredProjectionMatrixForTransparentRendering();
		Register_UnityEngine_Camera_set_useJitteredProjectionMatrixForTransparentRendering();

		//System.Void UnityEngine.Camera::set_usePhysicalProperties(System.Boolean)
		void Register_UnityEngine_Camera_set_usePhysicalProperties();
		Register_UnityEngine_Camera_set_usePhysicalProperties();

		//UnityEngine.Camera UnityEngine.Camera::get_main()
		void Register_UnityEngine_Camera_get_main();
		Register_UnityEngine_Camera_get_main();

		//UnityEngine.Camera/MonoOrStereoscopicEye UnityEngine.Camera::get_stereoActiveEye()
		void Register_UnityEngine_Camera_get_stereoActiveEye();
		Register_UnityEngine_Camera_get_stereoActiveEye();

		//UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
		void Register_UnityEngine_Camera_get_clearFlags();
		Register_UnityEngine_Camera_get_clearFlags();

		//UnityEngine.CameraType UnityEngine.Camera::get_cameraType()
		void Register_UnityEngine_Camera_get_cameraType();
		Register_UnityEngine_Camera_get_cameraType();

		//UnityEngine.DepthTextureMode UnityEngine.Camera::get_depthTextureMode()
		void Register_UnityEngine_Camera_get_depthTextureMode();
		Register_UnityEngine_Camera_get_depthTextureMode();

		//UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D_Injected(UnityEngine.Ray&,System.Single,System.Int32)
		void Register_UnityEngine_Camera_RaycastTry2D_Injected();
		Register_UnityEngine_Camera_RaycastTry2D_Injected();

		//UnityEngine.GameObject UnityEngine.Camera::RaycastTry_Injected(UnityEngine.Ray&,System.Single,System.Int32)
		void Register_UnityEngine_Camera_RaycastTry_Injected();
		Register_UnityEngine_Camera_RaycastTry_Injected();

		//UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
		void Register_UnityEngine_Camera_get_targetTexture();
		Register_UnityEngine_Camera_get_targetTexture();

		//UnityEngine.RenderingPath UnityEngine.Camera::get_actualRenderingPath()
		void Register_UnityEngine_Camera_get_actualRenderingPath();
		Register_UnityEngine_Camera_get_actualRenderingPath();

		//UnityEngine.StereoTargetEyeMask UnityEngine.Camera::get_stereoTargetEye()
		void Register_UnityEngine_Camera_get_stereoTargetEye();
		Register_UnityEngine_Camera_get_stereoTargetEye();

	//End Registrations for type : UnityEngine.Camera

	//Start Registrations for type : UnityEngine.Canvas

		//System.Boolean UnityEngine.Canvas::get_isRootCanvas()
		void Register_UnityEngine_Canvas_get_isRootCanvas();
		Register_UnityEngine_Canvas_get_isRootCanvas();

		//System.Boolean UnityEngine.Canvas::get_overrideSorting()
		void Register_UnityEngine_Canvas_get_overrideSorting();
		Register_UnityEngine_Canvas_get_overrideSorting();

		//System.Boolean UnityEngine.Canvas::get_pixelPerfect()
		void Register_UnityEngine_Canvas_get_pixelPerfect();
		Register_UnityEngine_Canvas_get_pixelPerfect();

		//System.Int32 UnityEngine.Canvas::get_renderOrder()
		void Register_UnityEngine_Canvas_get_renderOrder();
		Register_UnityEngine_Canvas_get_renderOrder();

		//System.Int32 UnityEngine.Canvas::get_sortingLayerID()
		void Register_UnityEngine_Canvas_get_sortingLayerID();
		Register_UnityEngine_Canvas_get_sortingLayerID();

		//System.Int32 UnityEngine.Canvas::get_sortingOrder()
		void Register_UnityEngine_Canvas_get_sortingOrder();
		Register_UnityEngine_Canvas_get_sortingOrder();

		//System.Int32 UnityEngine.Canvas::get_targetDisplay()
		void Register_UnityEngine_Canvas_get_targetDisplay();
		Register_UnityEngine_Canvas_get_targetDisplay();

		//System.Single UnityEngine.Canvas::get_referencePixelsPerUnit()
		void Register_UnityEngine_Canvas_get_referencePixelsPerUnit();
		Register_UnityEngine_Canvas_get_referencePixelsPerUnit();

		//System.Single UnityEngine.Canvas::get_scaleFactor()
		void Register_UnityEngine_Canvas_get_scaleFactor();
		Register_UnityEngine_Canvas_get_scaleFactor();

		//System.Void UnityEngine.Canvas::set_additionalShaderChannels(UnityEngine.AdditionalCanvasShaderChannels)
		void Register_UnityEngine_Canvas_set_additionalShaderChannels();
		Register_UnityEngine_Canvas_set_additionalShaderChannels();

		//System.Void UnityEngine.Canvas::set_overrideSorting(System.Boolean)
		void Register_UnityEngine_Canvas_set_overrideSorting();
		Register_UnityEngine_Canvas_set_overrideSorting();

		//System.Void UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)
		void Register_UnityEngine_Canvas_set_referencePixelsPerUnit();
		Register_UnityEngine_Canvas_set_referencePixelsPerUnit();

		//System.Void UnityEngine.Canvas::set_renderMode(UnityEngine.RenderMode)
		void Register_UnityEngine_Canvas_set_renderMode();
		Register_UnityEngine_Canvas_set_renderMode();

		//System.Void UnityEngine.Canvas::set_scaleFactor(System.Single)
		void Register_UnityEngine_Canvas_set_scaleFactor();
		Register_UnityEngine_Canvas_set_scaleFactor();

		//System.Void UnityEngine.Canvas::set_sortingLayerID(System.Int32)
		void Register_UnityEngine_Canvas_set_sortingLayerID();
		Register_UnityEngine_Canvas_set_sortingLayerID();

		//System.Void UnityEngine.Canvas::set_sortingOrder(System.Int32)
		void Register_UnityEngine_Canvas_set_sortingOrder();
		Register_UnityEngine_Canvas_set_sortingOrder();

		//UnityEngine.AdditionalCanvasShaderChannels UnityEngine.Canvas::get_additionalShaderChannels()
		void Register_UnityEngine_Canvas_get_additionalShaderChannels();
		Register_UnityEngine_Canvas_get_additionalShaderChannels();

		//UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
		void Register_UnityEngine_Canvas_get_worldCamera();
		Register_UnityEngine_Canvas_get_worldCamera();

		//UnityEngine.Canvas UnityEngine.Canvas::get_rootCanvas()
		void Register_UnityEngine_Canvas_get_rootCanvas();
		Register_UnityEngine_Canvas_get_rootCanvas();

		//UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasMaterial()
		void Register_UnityEngine_Canvas_GetDefaultCanvasMaterial();
		Register_UnityEngine_Canvas_GetDefaultCanvasMaterial();

		//UnityEngine.Material UnityEngine.Canvas::GetETC1SupportedCanvasMaterial()
		void Register_UnityEngine_Canvas_GetETC1SupportedCanvasMaterial();
		Register_UnityEngine_Canvas_GetETC1SupportedCanvasMaterial();

		//UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
		void Register_UnityEngine_Canvas_get_renderMode();
		Register_UnityEngine_Canvas_get_renderMode();

	//End Registrations for type : UnityEngine.Canvas

	//Start Registrations for type : UnityEngine.CanvasGroup

		//System.Boolean UnityEngine.CanvasGroup::get_blocksRaycasts()
		void Register_UnityEngine_CanvasGroup_get_blocksRaycasts();
		Register_UnityEngine_CanvasGroup_get_blocksRaycasts();

		//System.Boolean UnityEngine.CanvasGroup::get_ignoreParentGroups()
		void Register_UnityEngine_CanvasGroup_get_ignoreParentGroups();
		Register_UnityEngine_CanvasGroup_get_ignoreParentGroups();

		//System.Boolean UnityEngine.CanvasGroup::get_interactable()
		void Register_UnityEngine_CanvasGroup_get_interactable();
		Register_UnityEngine_CanvasGroup_get_interactable();

		//System.Single UnityEngine.CanvasGroup::get_alpha()
		void Register_UnityEngine_CanvasGroup_get_alpha();
		Register_UnityEngine_CanvasGroup_get_alpha();

		//System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
		void Register_UnityEngine_CanvasGroup_set_alpha();
		Register_UnityEngine_CanvasGroup_set_alpha();

	//End Registrations for type : UnityEngine.CanvasGroup

	//Start Registrations for type : UnityEngine.CanvasRenderer

		//System.Boolean UnityEngine.CanvasRenderer::get_cull()
		void Register_UnityEngine_CanvasRenderer_get_cull();
		Register_UnityEngine_CanvasRenderer_get_cull();

		//System.Boolean UnityEngine.CanvasRenderer::get_hasMoved()
		void Register_UnityEngine_CanvasRenderer_get_hasMoved();
		Register_UnityEngine_CanvasRenderer_get_hasMoved();

		//System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
		void Register_UnityEngine_CanvasRenderer_get_absoluteDepth();
		Register_UnityEngine_CanvasRenderer_get_absoluteDepth();

		//System.Int32 UnityEngine.CanvasRenderer::get_materialCount()
		void Register_UnityEngine_CanvasRenderer_get_materialCount();
		Register_UnityEngine_CanvasRenderer_get_materialCount();

		//System.Void UnityEngine.CanvasRenderer::Clear()
		void Register_UnityEngine_CanvasRenderer_Clear();
		Register_UnityEngine_CanvasRenderer_Clear();

		//System.Void UnityEngine.CanvasRenderer::CreateUIVertexStreamInternal(System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object)
		void Register_UnityEngine_CanvasRenderer_CreateUIVertexStreamInternal();
		Register_UnityEngine_CanvasRenderer_CreateUIVertexStreamInternal();

		//System.Void UnityEngine.CanvasRenderer::DisableRectClipping()
		void Register_UnityEngine_CanvasRenderer_DisableRectClipping();
		Register_UnityEngine_CanvasRenderer_DisableRectClipping();

		//System.Void UnityEngine.CanvasRenderer::EnableRectClipping_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_CanvasRenderer_EnableRectClipping_Injected();
		Register_UnityEngine_CanvasRenderer_EnableRectClipping_Injected();

		//System.Void UnityEngine.CanvasRenderer::GetColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_CanvasRenderer_GetColor_Injected();
		Register_UnityEngine_CanvasRenderer_GetColor_Injected();

		//System.Void UnityEngine.CanvasRenderer::SetAlphaTexture(UnityEngine.Texture)
		void Register_UnityEngine_CanvasRenderer_SetAlphaTexture();
		Register_UnityEngine_CanvasRenderer_SetAlphaTexture();

		//System.Void UnityEngine.CanvasRenderer::SetColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_CanvasRenderer_SetColor_Injected();
		Register_UnityEngine_CanvasRenderer_SetColor_Injected();

		//System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,System.Int32)
		void Register_UnityEngine_CanvasRenderer_SetMaterial();
		Register_UnityEngine_CanvasRenderer_SetMaterial();

		//System.Void UnityEngine.CanvasRenderer::SetMesh(UnityEngine.Mesh)
		void Register_UnityEngine_CanvasRenderer_SetMesh();
		Register_UnityEngine_CanvasRenderer_SetMesh();

		//System.Void UnityEngine.CanvasRenderer::SetPopMaterial(UnityEngine.Material,System.Int32)
		void Register_UnityEngine_CanvasRenderer_SetPopMaterial();
		Register_UnityEngine_CanvasRenderer_SetPopMaterial();

		//System.Void UnityEngine.CanvasRenderer::SetTexture(UnityEngine.Texture)
		void Register_UnityEngine_CanvasRenderer_SetTexture();
		Register_UnityEngine_CanvasRenderer_SetTexture();

		//System.Void UnityEngine.CanvasRenderer::SplitIndicesStreamsInternal(System.Object,System.Object)
		void Register_UnityEngine_CanvasRenderer_SplitIndicesStreamsInternal();
		Register_UnityEngine_CanvasRenderer_SplitIndicesStreamsInternal();

		//System.Void UnityEngine.CanvasRenderer::SplitUIVertexStreamsInternal(System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object)
		void Register_UnityEngine_CanvasRenderer_SplitUIVertexStreamsInternal();
		Register_UnityEngine_CanvasRenderer_SplitUIVertexStreamsInternal();

		//System.Void UnityEngine.CanvasRenderer::set_cull(System.Boolean)
		void Register_UnityEngine_CanvasRenderer_set_cull();
		Register_UnityEngine_CanvasRenderer_set_cull();

		//System.Void UnityEngine.CanvasRenderer::set_hasPopInstruction(System.Boolean)
		void Register_UnityEngine_CanvasRenderer_set_hasPopInstruction();
		Register_UnityEngine_CanvasRenderer_set_hasPopInstruction();

		//System.Void UnityEngine.CanvasRenderer::set_materialCount(System.Int32)
		void Register_UnityEngine_CanvasRenderer_set_materialCount();
		Register_UnityEngine_CanvasRenderer_set_materialCount();

		//System.Void UnityEngine.CanvasRenderer::set_popMaterialCount(System.Int32)
		void Register_UnityEngine_CanvasRenderer_set_popMaterialCount();
		Register_UnityEngine_CanvasRenderer_set_popMaterialCount();

		//UnityEngine.Material UnityEngine.CanvasRenderer::GetMaterial(System.Int32)
		void Register_UnityEngine_CanvasRenderer_GetMaterial();
		Register_UnityEngine_CanvasRenderer_GetMaterial();

	//End Registrations for type : UnityEngine.CanvasRenderer

	//Start Registrations for type : UnityEngine.CapsuleCollider

		//System.Single UnityEngine.CapsuleCollider::get_height()
		void Register_UnityEngine_CapsuleCollider_get_height();
		Register_UnityEngine_CapsuleCollider_get_height();

		//System.Single UnityEngine.CapsuleCollider::get_radius()
		void Register_UnityEngine_CapsuleCollider_get_radius();
		Register_UnityEngine_CapsuleCollider_get_radius();

		//System.Void UnityEngine.CapsuleCollider::set_height(System.Single)
		void Register_UnityEngine_CapsuleCollider_set_height();
		Register_UnityEngine_CapsuleCollider_set_height();

	//End Registrations for type : UnityEngine.CapsuleCollider

	//Start Registrations for type : UnityEngine.Collider

		//System.Boolean UnityEngine.Collider::get_enabled()
		void Register_UnityEngine_Collider_get_enabled();
		Register_UnityEngine_Collider_get_enabled();

		//System.Void UnityEngine.Collider::ClosestPoint_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Collider_ClosestPoint_Injected();
		Register_UnityEngine_Collider_ClosestPoint_Injected();

		//System.Void UnityEngine.Collider::Raycast_Injected(UnityEngine.Ray&,System.Single,System.Boolean&,UnityEngine.RaycastHit&)
		void Register_UnityEngine_Collider_Raycast_Injected();
		Register_UnityEngine_Collider_Raycast_Injected();

		//System.Void UnityEngine.Collider::get_bounds_Injected(UnityEngine.Bounds&)
		void Register_UnityEngine_Collider_get_bounds_Injected();
		Register_UnityEngine_Collider_get_bounds_Injected();

		//System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
		void Register_UnityEngine_Collider_set_isTrigger();
		Register_UnityEngine_Collider_set_isTrigger();

		//UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
		void Register_UnityEngine_Collider_get_attachedRigidbody();
		Register_UnityEngine_Collider_get_attachedRigidbody();

	//End Registrations for type : UnityEngine.Collider

	//Start Registrations for type : UnityEngine.Collider2D

		//System.Boolean UnityEngine.Collider2D::OverlapPoint_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Collider2D_OverlapPoint_Injected();
		Register_UnityEngine_Collider2D_OverlapPoint_Injected();

		//UnityEngine.Rigidbody2D UnityEngine.Collider2D::get_attachedRigidbody()
		void Register_UnityEngine_Collider2D_get_attachedRigidbody();
		Register_UnityEngine_Collider2D_get_attachedRigidbody();

	//End Registrations for type : UnityEngine.Collider2D

	//Start Registrations for type : UnityEngine.Component

		//System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
		void Register_UnityEngine_Component_GetComponentsForListInternal();
		Register_UnityEngine_Component_GetComponentsForListInternal();

		//UnityEngine.GameObject UnityEngine.Component::get_gameObject()
		void Register_UnityEngine_Component_get_gameObject();
		Register_UnityEngine_Component_get_gameObject();

		//UnityEngine.Transform UnityEngine.Component::get_transform()
		void Register_UnityEngine_Component_get_transform();
		Register_UnityEngine_Component_get_transform();

	//End Registrations for type : UnityEngine.Component

	//Start Registrations for type : UnityEngine.CompositeCollider2D

		//System.Int32 UnityEngine.CompositeCollider2D::GetPath_Internal(System.Int32,UnityEngine.Vector2[])
		void Register_UnityEngine_CompositeCollider2D_GetPath_Internal();
		Register_UnityEngine_CompositeCollider2D_GetPath_Internal();

		//System.Int32 UnityEngine.CompositeCollider2D::get_pathCount()
		void Register_UnityEngine_CompositeCollider2D_get_pathCount();
		Register_UnityEngine_CompositeCollider2D_get_pathCount();

		//System.Int32 UnityEngine.CompositeCollider2D::get_pointCount()
		void Register_UnityEngine_CompositeCollider2D_get_pointCount();
		Register_UnityEngine_CompositeCollider2D_get_pointCount();

	//End Registrations for type : UnityEngine.CompositeCollider2D

	//Start Registrations for type : UnityEngine.ComputeBuffer

		//System.Int32 UnityEngine.ComputeBuffer::get_count()
		void Register_UnityEngine_ComputeBuffer_get_count();
		Register_UnityEngine_ComputeBuffer_get_count();

		//System.IntPtr UnityEngine.ComputeBuffer::InitBuffer(System.Int32,System.Int32,UnityEngine.ComputeBufferType)
		void Register_UnityEngine_ComputeBuffer_InitBuffer();
		Register_UnityEngine_ComputeBuffer_InitBuffer();

		//System.Void UnityEngine.ComputeBuffer::DestroyBuffer(UnityEngine.ComputeBuffer)
		void Register_UnityEngine_ComputeBuffer_DestroyBuffer();
		Register_UnityEngine_ComputeBuffer_DestroyBuffer();

	//End Registrations for type : UnityEngine.ComputeBuffer

	//Start Registrations for type : UnityEngine.ComputeShader

		//System.Int32 UnityEngine.ComputeShader::FindKernel(System.String)
		void Register_UnityEngine_ComputeShader_FindKernel();
		Register_UnityEngine_ComputeShader_FindKernel();

		//System.Void UnityEngine.ComputeShader::GetKernelThreadGroupSizes(System.Int32,System.UInt32&,System.UInt32&,System.UInt32&)
		void Register_UnityEngine_ComputeShader_GetKernelThreadGroupSizes();
		Register_UnityEngine_ComputeShader_GetKernelThreadGroupSizes();

	//End Registrations for type : UnityEngine.ComputeShader

	//Start Registrations for type : UnityEngine.Coroutine

		//System.Void UnityEngine.Coroutine::ReleaseCoroutine(System.IntPtr)
		void Register_UnityEngine_Coroutine_ReleaseCoroutine();
		Register_UnityEngine_Coroutine_ReleaseCoroutine();

	//End Registrations for type : UnityEngine.Coroutine

	//Start Registrations for type : UnityEngine.Cubemap

		//System.Boolean UnityEngine.Cubemap::Internal_CreateImpl(UnityEngine.Cubemap,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags,System.IntPtr)
		void Register_UnityEngine_Cubemap_Internal_CreateImpl();
		Register_UnityEngine_Cubemap_Internal_CreateImpl();

		//System.Boolean UnityEngine.Cubemap::get_isReadable()
		void Register_UnityEngine_Cubemap_get_isReadable();
		Register_UnityEngine_Cubemap_get_isReadable();

	//End Registrations for type : UnityEngine.Cubemap

	//Start Registrations for type : UnityEngine.CubemapArray

		//System.Boolean UnityEngine.CubemapArray::Internal_CreateImpl(UnityEngine.CubemapArray,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
		void Register_UnityEngine_CubemapArray_Internal_CreateImpl();
		Register_UnityEngine_CubemapArray_Internal_CreateImpl();

		//System.Boolean UnityEngine.CubemapArray::get_isReadable()
		void Register_UnityEngine_CubemapArray_get_isReadable();
		Register_UnityEngine_CubemapArray_get_isReadable();

	//End Registrations for type : UnityEngine.CubemapArray

	//Start Registrations for type : UnityEngine.CullingGroup

		//System.Void UnityEngine.CullingGroup::DisposeInternal()
		void Register_UnityEngine_CullingGroup_DisposeInternal();
		Register_UnityEngine_CullingGroup_DisposeInternal();

		//System.Void UnityEngine.CullingGroup::FinalizerFailure()
		void Register_UnityEngine_CullingGroup_FinalizerFailure();
		Register_UnityEngine_CullingGroup_FinalizerFailure();

	//End Registrations for type : UnityEngine.CullingGroup

	//Start Registrations for type : UnityEngine.Cursor

		//UnityEngine.CursorLockMode UnityEngine.Cursor::get_lockState()
		void Register_UnityEngine_Cursor_get_lockState();
		Register_UnityEngine_Cursor_get_lockState();

	//End Registrations for type : UnityEngine.Cursor

	//Start Registrations for type : UnityEngine.DebugLogHandler

		//System.Void UnityEngine.DebugLogHandler::Internal_Log(UnityEngine.LogType,System.String,UnityEngine.Object)
		void Register_UnityEngine_DebugLogHandler_Internal_Log();
		Register_UnityEngine_DebugLogHandler_Internal_Log();

		//System.Void UnityEngine.DebugLogHandler::Internal_LogException(System.Exception,UnityEngine.Object)
		void Register_UnityEngine_DebugLogHandler_Internal_LogException();
		Register_UnityEngine_DebugLogHandler_Internal_LogException();

	//End Registrations for type : UnityEngine.DebugLogHandler

	//Start Registrations for type : UnityEngine.Display

		//System.Int32 UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)
		void Register_UnityEngine_Display_RelativeMouseAtImpl();
		Register_UnityEngine_Display_RelativeMouseAtImpl();

		//System.Void UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)
		void Register_UnityEngine_Display_GetRenderingExtImpl();
		Register_UnityEngine_Display_GetRenderingExtImpl();

		//System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
		void Register_UnityEngine_Display_GetSystemExtImpl();
		Register_UnityEngine_Display_GetSystemExtImpl();

	//End Registrations for type : UnityEngine.Display

	//Start Registrations for type : UnityEngine.Event

		//System.Boolean UnityEngine.Event::PopEvent(UnityEngine.Event)
		void Register_UnityEngine_Event_PopEvent();
		Register_UnityEngine_Event_PopEvent();

		//System.Char UnityEngine.Event::get_character()
		void Register_UnityEngine_Event_get_character();
		Register_UnityEngine_Event_get_character();

		//System.Int32 UnityEngine.Event::get_clickCount()
		void Register_UnityEngine_Event_get_clickCount();
		Register_UnityEngine_Event_get_clickCount();

		//System.IntPtr UnityEngine.Event::Internal_Create(System.Int32)
		void Register_UnityEngine_Event_Internal_Create();
		Register_UnityEngine_Event_Internal_Create();

		//System.String UnityEngine.Event::get_commandName()
		void Register_UnityEngine_Event_get_commandName();
		Register_UnityEngine_Event_get_commandName();

		//System.Void UnityEngine.Event::Internal_Destroy(System.IntPtr)
		void Register_UnityEngine_Event_Internal_Destroy();
		Register_UnityEngine_Event_Internal_Destroy();

		//System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
		void Register_UnityEngine_Event_Internal_SetNativeEvent();
		Register_UnityEngine_Event_Internal_SetNativeEvent();

		//System.Void UnityEngine.Event::Internal_Use()
		void Register_UnityEngine_Event_Internal_Use();
		Register_UnityEngine_Event_Internal_Use();

		//System.Void UnityEngine.Event::get_mousePosition_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Event_get_mousePosition_Injected();
		Register_UnityEngine_Event_get_mousePosition_Injected();

		//System.Void UnityEngine.Event::set_character(System.Char)
		void Register_UnityEngine_Event_set_character();
		Register_UnityEngine_Event_set_character();

		//System.Void UnityEngine.Event::set_displayIndex(System.Int32)
		void Register_UnityEngine_Event_set_displayIndex();
		Register_UnityEngine_Event_set_displayIndex();

		//System.Void UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)
		void Register_UnityEngine_Event_set_keyCode();
		Register_UnityEngine_Event_set_keyCode();

		//System.Void UnityEngine.Event::set_modifiers(UnityEngine.EventModifiers)
		void Register_UnityEngine_Event_set_modifiers();
		Register_UnityEngine_Event_set_modifiers();

		//System.Void UnityEngine.Event::set_type(UnityEngine.EventType)
		void Register_UnityEngine_Event_set_type();
		Register_UnityEngine_Event_set_type();

		//UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
		void Register_UnityEngine_Event_get_modifiers();
		Register_UnityEngine_Event_get_modifiers();

		//UnityEngine.EventType UnityEngine.Event::get_rawType()
		void Register_UnityEngine_Event_get_rawType();
		Register_UnityEngine_Event_get_rawType();

		//UnityEngine.EventType UnityEngine.Event::get_type()
		void Register_UnityEngine_Event_get_type();
		Register_UnityEngine_Event_get_type();

		//UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
		void Register_UnityEngine_Event_get_keyCode();
		Register_UnityEngine_Event_get_keyCode();

	//End Registrations for type : UnityEngine.Event

	//Start Registrations for type : UnityEngine.Experimental.Audio.AudioSampleProvider

		//System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InternalSetScriptingPtr(System.UInt32,UnityEngine.Experimental.Audio.AudioSampleProvider)
		void Register_UnityEngine_Experimental_Audio_AudioSampleProvider_InternalSetScriptingPtr();
		Register_UnityEngine_Experimental_Audio_AudioSampleProvider_InternalSetScriptingPtr();

	//End Registrations for type : UnityEngine.Experimental.Audio.AudioSampleProvider

	//Start Registrations for type : UnityEngine.Experimental.IntegratedSubsystem

		//System.Void UnityEngine.Experimental.IntegratedSubsystem::SetHandle(UnityEngine.Experimental.IntegratedSubsystem)
		void Register_UnityEngine_Experimental_IntegratedSubsystem_SetHandle();
		Register_UnityEngine_Experimental_IntegratedSubsystem_SetHandle();

	//End Registrations for type : UnityEngine.Experimental.IntegratedSubsystem

	//Start Registrations for type : UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem

		//System.Boolean UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::BuiltinUpdate()
		void Register_UnityEngine_Experimental_Rendering_BuiltinRuntimeReflectionSystem_BuiltinUpdate();
		Register_UnityEngine_Experimental_Rendering_BuiltinRuntimeReflectionSystem_BuiltinUpdate();

	//End Registrations for type : UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem

	//Start Registrations for type : UnityEngine.Experimental.Rendering.GraphicsFormatUtility

		//System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsCompressedTextureFormat(UnityEngine.TextureFormat)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsCompressedTextureFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsCompressedTextureFormat();

		//System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsSRGBFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsSRGBFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsSRGBFormat();

		//UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_TextureFormat(UnityEngine.TextureFormat,System.Boolean)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat();

		//UnityEngine.RenderTextureFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetRenderTextureFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetRenderTextureFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetRenderTextureFormat();

	//End Registrations for type : UnityEngine.Experimental.Rendering.GraphicsFormatUtility

	//Start Registrations for type : UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings

		//System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::ScriptingDirtyReflectionSystemInstance()
		void Register_UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance();
		Register_UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance();

	//End Registrations for type : UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings

	//Start Registrations for type : UnityEngine.Experimental.SubsystemManager

		//System.Void UnityEngine.Experimental.SubsystemManager::ReportSingleSubsystemAnalytics(System.String)
		void Register_UnityEngine_Experimental_SubsystemManager_ReportSingleSubsystemAnalytics();
		Register_UnityEngine_Experimental_SubsystemManager_ReportSingleSubsystemAnalytics();

		//System.Void UnityEngine.Experimental.SubsystemManager::StaticConstructScriptingClassMap()
		void Register_UnityEngine_Experimental_SubsystemManager_StaticConstructScriptingClassMap();
		Register_UnityEngine_Experimental_SubsystemManager_StaticConstructScriptingClassMap();

	//End Registrations for type : UnityEngine.Experimental.SubsystemManager

	//Start Registrations for type : UnityEngine.Font

		//System.Boolean UnityEngine.Font::HasCharacter(System.Int32)
		void Register_UnityEngine_Font_HasCharacter();
		Register_UnityEngine_Font_HasCharacter();

		//System.Boolean UnityEngine.Font::get_dynamic()
		void Register_UnityEngine_Font_get_dynamic();
		Register_UnityEngine_Font_get_dynamic();

		//System.Int32 UnityEngine.Font::get_fontSize()
		void Register_UnityEngine_Font_get_fontSize();
		Register_UnityEngine_Font_get_fontSize();

		//System.Void UnityEngine.Font::Internal_CreateFont(UnityEngine.Font,System.String)
		void Register_UnityEngine_Font_Internal_CreateFont();
		Register_UnityEngine_Font_Internal_CreateFont();

		//UnityEngine.Material UnityEngine.Font::get_material()
		void Register_UnityEngine_Font_get_material();
		Register_UnityEngine_Font_get_material();

	//End Registrations for type : UnityEngine.Font

	//Start Registrations for type : UnityEngine.GameObject

		//System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
		void Register_UnityEngine_GameObject_GetComponentsInternal();
		Register_UnityEngine_GameObject_GetComponentsInternal();

		//System.Boolean UnityEngine.GameObject::CompareTag(System.String)
		void Register_UnityEngine_GameObject_CompareTag();
		Register_UnityEngine_GameObject_CompareTag();

		//System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
		void Register_UnityEngine_GameObject_get_activeInHierarchy();
		Register_UnityEngine_GameObject_get_activeInHierarchy();

		//System.Boolean UnityEngine.GameObject::get_activeSelf()
		void Register_UnityEngine_GameObject_get_activeSelf();
		Register_UnityEngine_GameObject_get_activeSelf();

		//System.Int32 UnityEngine.GameObject::get_layer()
		void Register_UnityEngine_GameObject_get_layer();
		Register_UnityEngine_GameObject_get_layer();

		//System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
		void Register_UnityEngine_GameObject_Internal_CreateGameObject();
		Register_UnityEngine_GameObject_Internal_CreateGameObject();

		//System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
		void Register_UnityEngine_GameObject_SendMessage();
		Register_UnityEngine_GameObject_SendMessage();

		//System.Void UnityEngine.GameObject::SetActive(System.Boolean)
		void Register_UnityEngine_GameObject_SetActive();
		Register_UnityEngine_GameObject_SetActive();

		//System.Void UnityEngine.GameObject::get_scene_Injected(UnityEngine.SceneManagement.Scene&)
		void Register_UnityEngine_GameObject_get_scene_Injected();
		Register_UnityEngine_GameObject_get_scene_Injected();

		//System.Void UnityEngine.GameObject::set_layer(System.Int32)
		void Register_UnityEngine_GameObject_set_layer();
		Register_UnityEngine_GameObject_set_layer();

		//UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
		void Register_UnityEngine_GameObject_GetComponent();
		Register_UnityEngine_GameObject_GetComponent();

		//UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type,System.Boolean)
		void Register_UnityEngine_GameObject_GetComponentInChildren();
		Register_UnityEngine_GameObject_GetComponentInChildren();

		//UnityEngine.Component UnityEngine.GameObject::GetComponentInParent(System.Type)
		void Register_UnityEngine_GameObject_GetComponentInParent();
		Register_UnityEngine_GameObject_GetComponentInParent();

		//UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
		void Register_UnityEngine_GameObject_Internal_AddComponentWithType();
		Register_UnityEngine_GameObject_Internal_AddComponentWithType();

		//UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
		void Register_UnityEngine_GameObject_CreatePrimitive();
		Register_UnityEngine_GameObject_CreatePrimitive();

		//UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
		void Register_UnityEngine_GameObject_Find();
		Register_UnityEngine_GameObject_Find();

		//UnityEngine.Transform UnityEngine.GameObject::get_transform()
		void Register_UnityEngine_GameObject_get_transform();
		Register_UnityEngine_GameObject_get_transform();

	//End Registrations for type : UnityEngine.GameObject

	//Start Registrations for type : UnityEngine.Gizmos

		//System.Void UnityEngine.Gizmos::DrawCube_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Gizmos_DrawCube_Injected();
		Register_UnityEngine_Gizmos_DrawCube_Injected();

		//System.Void UnityEngine.Gizmos::DrawMesh_Injected(UnityEngine.Mesh,System.Int32,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
		void Register_UnityEngine_Gizmos_DrawMesh_Injected();
		Register_UnityEngine_Gizmos_DrawMesh_Injected();

		//System.Void UnityEngine.Gizmos::DrawSphere_Injected(UnityEngine.Vector3&,System.Single)
		void Register_UnityEngine_Gizmos_DrawSphere_Injected();
		Register_UnityEngine_Gizmos_DrawSphere_Injected();

		//System.Void UnityEngine.Gizmos::DrawWireCube_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Gizmos_DrawWireCube_Injected();
		Register_UnityEngine_Gizmos_DrawWireCube_Injected();

		//System.Void UnityEngine.Gizmos::DrawWireMesh_Injected(UnityEngine.Mesh,System.Int32,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
		void Register_UnityEngine_Gizmos_DrawWireMesh_Injected();
		Register_UnityEngine_Gizmos_DrawWireMesh_Injected();

		//System.Void UnityEngine.Gizmos::DrawWireSphere_Injected(UnityEngine.Vector3&,System.Single)
		void Register_UnityEngine_Gizmos_DrawWireSphere_Injected();
		Register_UnityEngine_Gizmos_DrawWireSphere_Injected();

		//System.Void UnityEngine.Gizmos::set_matrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Gizmos_set_matrix_Injected();
		Register_UnityEngine_Gizmos_set_matrix_Injected();

	//End Registrations for type : UnityEngine.Gizmos

	//Start Registrations for type : UnityEngine.GL

		//System.Void UnityEngine.GL::GetGPUProjectionMatrix_Injected(UnityEngine.Matrix4x4&,System.Boolean,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_GL_GetGPUProjectionMatrix_Injected();
		Register_UnityEngine_GL_GetGPUProjectionMatrix_Injected();

	//End Registrations for type : UnityEngine.GL

	//Start Registrations for type : UnityEngine.Gradient

		//System.Boolean UnityEngine.Gradient::Internal_Equals(System.IntPtr)
		void Register_UnityEngine_Gradient_Internal_Equals();
		Register_UnityEngine_Gradient_Internal_Equals();

		//System.IntPtr UnityEngine.Gradient::Init()
		void Register_UnityEngine_Gradient_Init();
		Register_UnityEngine_Gradient_Init();

		//System.Void UnityEngine.Gradient::Cleanup()
		void Register_UnityEngine_Gradient_Cleanup();
		Register_UnityEngine_Gradient_Cleanup();

	//End Registrations for type : UnityEngine.Gradient

	//Start Registrations for type : UnityEngine.Graphics

		//System.Int32 UnityEngine.Graphics::Internal_GetMaxDrawMeshInstanceCount()
		void Register_UnityEngine_Graphics_Internal_GetMaxDrawMeshInstanceCount();
		Register_UnityEngine_Graphics_Internal_GetMaxDrawMeshInstanceCount();

		//System.Void UnityEngine.Graphics::Internal_DrawTexture(UnityEngine.Internal_DrawTextureArguments&)
		void Register_UnityEngine_Graphics_Internal_DrawTexture();
		Register_UnityEngine_Graphics_Internal_DrawTexture();

	//End Registrations for type : UnityEngine.Graphics

	//Start Registrations for type : UnityEngine.GUI

		//System.Boolean UnityEngine.GUI::HasMouseControl(System.Int32)
		void Register_UnityEngine_GUI_HasMouseControl();
		Register_UnityEngine_GUI_HasMouseControl();

		//System.Void UnityEngine.GUI::GrabMouseControl(System.Int32)
		void Register_UnityEngine_GUI_GrabMouseControl();
		Register_UnityEngine_GUI_GrabMouseControl();

		//System.Void UnityEngine.GUI::ReleaseMouseControl()
		void Register_UnityEngine_GUI_ReleaseMouseControl();
		Register_UnityEngine_GUI_ReleaseMouseControl();

		//System.Void UnityEngine.GUI::get_color_Injected(UnityEngine.Color&)
		void Register_UnityEngine_GUI_get_color_Injected();
		Register_UnityEngine_GUI_get_color_Injected();

		//System.Void UnityEngine.GUI::set_changed(System.Boolean)
		void Register_UnityEngine_GUI_set_changed();
		Register_UnityEngine_GUI_set_changed();

		//System.Void UnityEngine.GUI::set_color_Injected(UnityEngine.Color&)
		void Register_UnityEngine_GUI_set_color_Injected();
		Register_UnityEngine_GUI_set_color_Injected();

		//UnityEngine.Material UnityEngine.GUI::get_blendMaterial()
		void Register_UnityEngine_GUI_get_blendMaterial();
		Register_UnityEngine_GUI_get_blendMaterial();

		//UnityEngine.Material UnityEngine.GUI::get_blitMaterial()
		void Register_UnityEngine_GUI_get_blitMaterial();
		Register_UnityEngine_GUI_get_blitMaterial();

		//UnityEngine.Material UnityEngine.GUI::get_roundedRectMaterial()
		void Register_UnityEngine_GUI_get_roundedRectMaterial();
		Register_UnityEngine_GUI_get_roundedRectMaterial();

	//End Registrations for type : UnityEngine.GUI

	//Start Registrations for type : UnityEngine.GUIClip

		//System.Void UnityEngine.GUIClip::Internal_Pop()
		void Register_UnityEngine_GUIClip_Internal_Pop();
		Register_UnityEngine_GUIClip_Internal_Pop();

		//System.Void UnityEngine.GUIClip::Internal_Push_Injected(UnityEngine.Rect&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Boolean)
		void Register_UnityEngine_GUIClip_Internal_Push_Injected();
		Register_UnityEngine_GUIClip_Internal_Push_Injected();

		//System.Void UnityEngine.GUIClip::get_visibleRect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_GUIClip_get_visibleRect_Injected();
		Register_UnityEngine_GUIClip_get_visibleRect_Injected();

	//End Registrations for type : UnityEngine.GUIClip

	//Start Registrations for type : UnityEngine.GUILayer

		//UnityEngine.GUIElement UnityEngine.GUILayer::HitTest_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_GUILayer_HitTest_Injected();
		Register_UnityEngine_GUILayer_HitTest_Injected();

	//End Registrations for type : UnityEngine.GUILayer

	//Start Registrations for type : UnityEngine.GUILayoutUtility

		//System.Void UnityEngine.GUILayoutUtility::Internal_GetWindowRect_Injected(System.Int32,UnityEngine.Rect&)
		void Register_UnityEngine_GUILayoutUtility_Internal_GetWindowRect_Injected();
		Register_UnityEngine_GUILayoutUtility_Internal_GetWindowRect_Injected();

		//System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow_Injected(System.Int32,UnityEngine.Rect&)
		void Register_UnityEngine_GUILayoutUtility_Internal_MoveWindow_Injected();
		Register_UnityEngine_GUILayoutUtility_Internal_MoveWindow_Injected();

	//End Registrations for type : UnityEngine.GUILayoutUtility

	//Start Registrations for type : UnityEngine.GUISettings

		//System.Single UnityEngine.GUISettings::Internal_GetCursorFlashSpeed()
		void Register_UnityEngine_GUISettings_Internal_GetCursorFlashSpeed();
		Register_UnityEngine_GUISettings_Internal_GetCursorFlashSpeed();

	//End Registrations for type : UnityEngine.GUISettings

	//Start Registrations for type : UnityEngine.GUIStyle

		//System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
		void Register_UnityEngine_GUIStyle_get_stretchHeight();
		Register_UnityEngine_GUIStyle_get_stretchHeight();

		//System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
		void Register_UnityEngine_GUIStyle_get_stretchWidth();
		Register_UnityEngine_GUIStyle_get_stretchWidth();

		//System.Boolean UnityEngine.GUIStyle::get_wordWrap()
		void Register_UnityEngine_GUIStyle_get_wordWrap();
		Register_UnityEngine_GUIStyle_get_wordWrap();

		//System.Int32 UnityEngine.GUIStyle::Internal_GetCursorStringIndex_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,UnityEngine.Vector2&)
		void Register_UnityEngine_GUIStyle_Internal_GetCursorStringIndex_Injected();
		Register_UnityEngine_GUIStyle_Internal_GetCursorStringIndex_Injected();

		//System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
		void Register_UnityEngine_GUIStyle_GetRectOffsetPtr();
		Register_UnityEngine_GUIStyle_GetRectOffsetPtr();

		//System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
		void Register_UnityEngine_GUIStyle_GetStyleStatePtr();
		Register_UnityEngine_GUIStyle_GetStyleStatePtr();

		//System.IntPtr UnityEngine.GUIStyle::Internal_Copy(UnityEngine.GUIStyle,UnityEngine.GUIStyle)
		void Register_UnityEngine_GUIStyle_Internal_Copy();
		Register_UnityEngine_GUIStyle_Internal_Copy();

		//System.IntPtr UnityEngine.GUIStyle::Internal_Create(UnityEngine.GUIStyle)
		void Register_UnityEngine_GUIStyle_Internal_Create();
		Register_UnityEngine_GUIStyle_Internal_Create();

		//System.Single UnityEngine.GUIStyle::Internal_CalcHeight(UnityEngine.GUIContent,System.Single)
		void Register_UnityEngine_GUIStyle_Internal_CalcHeight();
		Register_UnityEngine_GUIStyle_Internal_CalcHeight();

		//System.Single UnityEngine.GUIStyle::Internal_GetCursorFlashOffset()
		void Register_UnityEngine_GUIStyle_Internal_GetCursorFlashOffset();
		Register_UnityEngine_GUIStyle_Internal_GetCursorFlashOffset();

		//System.Single UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)
		void Register_UnityEngine_GUIStyle_Internal_GetLineHeight();
		Register_UnityEngine_GUIStyle_Internal_GetLineHeight();

		//System.Single UnityEngine.GUIStyle::get_fixedHeight()
		void Register_UnityEngine_GUIStyle_get_fixedHeight();
		Register_UnityEngine_GUIStyle_get_fixedHeight();

		//System.Single UnityEngine.GUIStyle::get_fixedWidth()
		void Register_UnityEngine_GUIStyle_get_fixedWidth();
		Register_UnityEngine_GUIStyle_get_fixedWidth();

		//System.String UnityEngine.GUIStyle::get_name()
		void Register_UnityEngine_GUIStyle_get_name();
		Register_UnityEngine_GUIStyle_get_name();

		//System.Void UnityEngine.GUIStyle::Internal_CalcMinMaxWidth_Injected(UnityEngine.GUIContent,UnityEngine.Vector2&)
		void Register_UnityEngine_GUIStyle_Internal_CalcMinMaxWidth_Injected();
		Register_UnityEngine_GUIStyle_Internal_CalcMinMaxWidth_Injected();

		//System.Void UnityEngine.GUIStyle::Internal_CalcSizeWithConstraints_Injected(UnityEngine.GUIContent,UnityEngine.Vector2&,UnityEngine.Vector2&)
		void Register_UnityEngine_GUIStyle_Internal_CalcSizeWithConstraints_Injected();
		Register_UnityEngine_GUIStyle_Internal_CalcSizeWithConstraints_Injected();

		//System.Void UnityEngine.GUIStyle::Internal_CalcSize_Injected(UnityEngine.GUIContent,UnityEngine.Vector2&)
		void Register_UnityEngine_GUIStyle_Internal_CalcSize_Injected();
		Register_UnityEngine_GUIStyle_Internal_CalcSize_Injected();

		//System.Void UnityEngine.GUIStyle::Internal_Destroy(System.IntPtr)
		void Register_UnityEngine_GUIStyle_Internal_Destroy();
		Register_UnityEngine_GUIStyle_Internal_Destroy();

		//System.Void UnityEngine.GUIStyle::Internal_Draw2_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
		void Register_UnityEngine_GUIStyle_Internal_Draw2_Injected();
		Register_UnityEngine_GUIStyle_Internal_Draw2_Injected();

		//System.Void UnityEngine.GUIStyle::Internal_DrawCursor_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Color&)
		void Register_UnityEngine_GUIStyle_Internal_DrawCursor_Injected();
		Register_UnityEngine_GUIStyle_Internal_DrawCursor_Injected();

		//System.Void UnityEngine.GUIStyle::Internal_DrawWithTextSelection_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Int32,System.Int32,UnityEngine.Color&,UnityEngine.Color&)
		void Register_UnityEngine_GUIStyle_Internal_DrawWithTextSelection_Injected();
		Register_UnityEngine_GUIStyle_Internal_DrawWithTextSelection_Injected();

		//System.Void UnityEngine.GUIStyle::Internal_Draw_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
		void Register_UnityEngine_GUIStyle_Internal_Draw_Injected();
		Register_UnityEngine_GUIStyle_Internal_Draw_Injected();

		//System.Void UnityEngine.GUIStyle::Internal_GetCursorPixelPosition_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
		void Register_UnityEngine_GUIStyle_Internal_GetCursorPixelPosition_Injected();
		Register_UnityEngine_GUIStyle_Internal_GetCursorPixelPosition_Injected();

		//System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
		void Register_UnityEngine_GUIStyle_SetDefaultFont();
		Register_UnityEngine_GUIStyle_SetDefaultFont();

		//System.Void UnityEngine.GUIStyle::SetMouseTooltip_Injected(System.String,UnityEngine.Rect&)
		void Register_UnityEngine_GUIStyle_SetMouseTooltip_Injected();
		Register_UnityEngine_GUIStyle_SetMouseTooltip_Injected();

		//System.Void UnityEngine.GUIStyle::get_contentOffset_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_GUIStyle_get_contentOffset_Injected();
		Register_UnityEngine_GUIStyle_get_contentOffset_Injected();

		//System.Void UnityEngine.GUIStyle::set_Internal_clipOffset_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_GUIStyle_set_Internal_clipOffset_Injected();
		Register_UnityEngine_GUIStyle_set_Internal_clipOffset_Injected();

		//System.Void UnityEngine.GUIStyle::set_contentOffset_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_GUIStyle_set_contentOffset_Injected();
		Register_UnityEngine_GUIStyle_set_contentOffset_Injected();

		//System.Void UnityEngine.GUIStyle::set_name(System.String)
		void Register_UnityEngine_GUIStyle_set_name();
		Register_UnityEngine_GUIStyle_set_name();

		//System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
		void Register_UnityEngine_GUIStyle_set_stretchHeight();
		Register_UnityEngine_GUIStyle_set_stretchHeight();

		//System.Void UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)
		void Register_UnityEngine_GUIStyle_set_stretchWidth();
		Register_UnityEngine_GUIStyle_set_stretchWidth();

		//UnityEngine.Font UnityEngine.GUIStyle::get_font()
		void Register_UnityEngine_GUIStyle_get_font();
		Register_UnityEngine_GUIStyle_get_font();

		//UnityEngine.ImagePosition UnityEngine.GUIStyle::get_imagePosition()
		void Register_UnityEngine_GUIStyle_get_imagePosition();
		Register_UnityEngine_GUIStyle_get_imagePosition();

	//End Registrations for type : UnityEngine.GUIStyle

	//Start Registrations for type : UnityEngine.GUIStyleState

		//System.IntPtr UnityEngine.GUIStyleState::Init()
		void Register_UnityEngine_GUIStyleState_Init();
		Register_UnityEngine_GUIStyleState_Init();

		//System.Void UnityEngine.GUIStyleState::Cleanup()
		void Register_UnityEngine_GUIStyleState_Cleanup();
		Register_UnityEngine_GUIStyleState_Cleanup();

		//System.Void UnityEngine.GUIStyleState::set_textColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_GUIStyleState_set_textColor_Injected();
		Register_UnityEngine_GUIStyleState_set_textColor_Injected();

	//End Registrations for type : UnityEngine.GUIStyleState

	//Start Registrations for type : UnityEngine.GUIUtility

		//System.Int32 UnityEngine.GUIUtility::GetControlID_Injected(System.Int32,UnityEngine.FocusType,UnityEngine.Rect&)
		void Register_UnityEngine_GUIUtility_GetControlID_Injected();
		Register_UnityEngine_GUIUtility_GetControlID_Injected();

		//System.Int32 UnityEngine.GUIUtility::Internal_GetHotControl()
		void Register_UnityEngine_GUIUtility_Internal_GetHotControl();
		Register_UnityEngine_GUIUtility_Internal_GetHotControl();

		//System.Int32 UnityEngine.GUIUtility::Internal_GetKeyboardControl()
		void Register_UnityEngine_GUIUtility_Internal_GetKeyboardControl();
		Register_UnityEngine_GUIUtility_Internal_GetKeyboardControl();

		//System.Int32 UnityEngine.GUIUtility::get_guiDepth()
		void Register_UnityEngine_GUIUtility_get_guiDepth();
		Register_UnityEngine_GUIUtility_get_guiDepth();

		//System.Object UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
		void Register_UnityEngine_GUIUtility_Internal_GetDefaultSkin();
		Register_UnityEngine_GUIUtility_Internal_GetDefaultSkin();

		//System.Single UnityEngine.GUIUtility::get_pixelsPerPoint()
		void Register_UnityEngine_GUIUtility_get_pixelsPerPoint();
		Register_UnityEngine_GUIUtility_get_pixelsPerPoint();

		//System.String UnityEngine.GUIUtility::get_systemCopyBuffer()
		void Register_UnityEngine_GUIUtility_get_systemCopyBuffer();
		Register_UnityEngine_GUIUtility_get_systemCopyBuffer();

		//System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
		void Register_UnityEngine_GUIUtility_Internal_ExitGUI();
		Register_UnityEngine_GUIUtility_Internal_ExitGUI();

		//System.Void UnityEngine.GUIUtility::Internal_SetHotControl(System.Int32)
		void Register_UnityEngine_GUIUtility_Internal_SetHotControl();
		Register_UnityEngine_GUIUtility_Internal_SetHotControl();

		//System.Void UnityEngine.GUIUtility::Internal_SetKeyboardControl(System.Int32)
		void Register_UnityEngine_GUIUtility_Internal_SetKeyboardControl();
		Register_UnityEngine_GUIUtility_Internal_SetKeyboardControl();

		//System.Void UnityEngine.GUIUtility::set_mouseUsed(System.Boolean)
		void Register_UnityEngine_GUIUtility_set_mouseUsed();
		Register_UnityEngine_GUIUtility_set_mouseUsed();

		//System.Void UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)
		void Register_UnityEngine_GUIUtility_set_systemCopyBuffer();
		Register_UnityEngine_GUIUtility_set_systemCopyBuffer();

		//System.Void UnityEngine.GUIUtility::set_textFieldInput(System.Boolean)
		void Register_UnityEngine_GUIUtility_set_textFieldInput();
		Register_UnityEngine_GUIUtility_set_textFieldInput();

	//End Registrations for type : UnityEngine.GUIUtility

	//Start Registrations for type : UnityEngine.Input

		//System.Boolean UnityEngine.Input::GetButton(System.String)
		void Register_UnityEngine_Input_GetButton();
		Register_UnityEngine_Input_GetButton();

		//System.Boolean UnityEngine.Input::GetButtonDown(System.String)
		void Register_UnityEngine_Input_GetButtonDown();
		Register_UnityEngine_Input_GetButtonDown();

		//System.Boolean UnityEngine.Input::GetKeyDownInt(UnityEngine.KeyCode)
		void Register_UnityEngine_Input_GetKeyDownInt();
		Register_UnityEngine_Input_GetKeyDownInt();

		//System.Boolean UnityEngine.Input::GetKeyInt(UnityEngine.KeyCode)
		void Register_UnityEngine_Input_GetKeyInt();
		Register_UnityEngine_Input_GetKeyInt();

		//System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
		void Register_UnityEngine_Input_GetMouseButton();
		Register_UnityEngine_Input_GetMouseButton();

		//System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
		void Register_UnityEngine_Input_GetMouseButtonDown();
		Register_UnityEngine_Input_GetMouseButtonDown();

		//System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
		void Register_UnityEngine_Input_GetMouseButtonUp();
		Register_UnityEngine_Input_GetMouseButtonUp();

		//System.Boolean UnityEngine.Input::get_mousePresent()
		void Register_UnityEngine_Input_get_mousePresent();
		Register_UnityEngine_Input_get_mousePresent();

		//System.Boolean UnityEngine.Input::get_touchSupported()
		void Register_UnityEngine_Input_get_touchSupported();
		Register_UnityEngine_Input_get_touchSupported();

		//System.Int32 UnityEngine.Input::get_touchCount()
		void Register_UnityEngine_Input_get_touchCount();
		Register_UnityEngine_Input_get_touchCount();

		//System.Single UnityEngine.Input::GetAxis(System.String)
		void Register_UnityEngine_Input_GetAxis();
		Register_UnityEngine_Input_GetAxis();

		//System.Single UnityEngine.Input::GetAxisRaw(System.String)
		void Register_UnityEngine_Input_GetAxisRaw();
		Register_UnityEngine_Input_GetAxisRaw();

		//System.String UnityEngine.Input::get_compositionString()
		void Register_UnityEngine_Input_get_compositionString();
		Register_UnityEngine_Input_get_compositionString();

		//System.Void UnityEngine.Input::GetTouch_Injected(System.Int32,UnityEngine.Touch&)
		void Register_UnityEngine_Input_GetTouch_Injected();
		Register_UnityEngine_Input_GetTouch_Injected();

		//System.Void UnityEngine.Input::get_compositionCursorPos_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Input_get_compositionCursorPos_Injected();
		Register_UnityEngine_Input_get_compositionCursorPos_Injected();

		//System.Void UnityEngine.Input::get_mousePosition_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Input_get_mousePosition_Injected();
		Register_UnityEngine_Input_get_mousePosition_Injected();

		//System.Void UnityEngine.Input::get_mouseScrollDelta_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Input_get_mouseScrollDelta_Injected();
		Register_UnityEngine_Input_get_mouseScrollDelta_Injected();

		//System.Void UnityEngine.Input::set_compositionCursorPos_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Input_set_compositionCursorPos_Injected();
		Register_UnityEngine_Input_set_compositionCursorPos_Injected();

		//System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)
		void Register_UnityEngine_Input_set_imeCompositionMode();
		Register_UnityEngine_Input_set_imeCompositionMode();

		//UnityEngine.IMECompositionMode UnityEngine.Input::get_imeCompositionMode()
		void Register_UnityEngine_Input_get_imeCompositionMode();
		Register_UnityEngine_Input_get_imeCompositionMode();

	//End Registrations for type : UnityEngine.Input

	//Start Registrations for type : UnityEngine.LayerMask

		//System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
		void Register_UnityEngine_LayerMask_NameToLayer();
		Register_UnityEngine_LayerMask_NameToLayer();

	//End Registrations for type : UnityEngine.LayerMask

	//Start Registrations for type : UnityEngine.Material

		//System.Boolean UnityEngine.Material::HasProperty(System.Int32)
		void Register_UnityEngine_Material_HasProperty();
		Register_UnityEngine_Material_HasProperty();

		//System.Int32 UnityEngine.Material::get_passCount()
		void Register_UnityEngine_Material_get_passCount();
		Register_UnityEngine_Material_get_passCount();

		//System.Single UnityEngine.Material::GetFloatImpl(System.Int32)
		void Register_UnityEngine_Material_GetFloatImpl();
		Register_UnityEngine_Material_GetFloatImpl();

		//System.String[] UnityEngine.Material::GetShaderKeywords()
		void Register_UnityEngine_Material_GetShaderKeywords();
		Register_UnityEngine_Material_GetShaderKeywords();

		//System.Void UnityEngine.Material::CopyPropertiesFromMaterial(UnityEngine.Material)
		void Register_UnityEngine_Material_CopyPropertiesFromMaterial();
		Register_UnityEngine_Material_CopyPropertiesFromMaterial();

		//System.Void UnityEngine.Material::CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
		void Register_UnityEngine_Material_CreateWithMaterial();
		Register_UnityEngine_Material_CreateWithMaterial();

		//System.Void UnityEngine.Material::CreateWithShader(UnityEngine.Material,UnityEngine.Shader)
		void Register_UnityEngine_Material_CreateWithShader();
		Register_UnityEngine_Material_CreateWithShader();

		//System.Void UnityEngine.Material::CreateWithString(UnityEngine.Material)
		void Register_UnityEngine_Material_CreateWithString();
		Register_UnityEngine_Material_CreateWithString();

		//System.Void UnityEngine.Material::DisableKeyword(System.String)
		void Register_UnityEngine_Material_DisableKeyword();
		Register_UnityEngine_Material_DisableKeyword();

		//System.Void UnityEngine.Material::EnableKeyword(System.String)
		void Register_UnityEngine_Material_EnableKeyword();
		Register_UnityEngine_Material_EnableKeyword();

		//System.Void UnityEngine.Material::GetColorImpl_Injected(System.Int32,UnityEngine.Color&)
		void Register_UnityEngine_Material_GetColorImpl_Injected();
		Register_UnityEngine_Material_GetColorImpl_Injected();

		//System.Void UnityEngine.Material::SetColorImpl_Injected(System.Int32,UnityEngine.Color&)
		void Register_UnityEngine_Material_SetColorImpl_Injected();
		Register_UnityEngine_Material_SetColorImpl_Injected();

		//System.Void UnityEngine.Material::SetFloatImpl(System.Int32,System.Single)
		void Register_UnityEngine_Material_SetFloatImpl();
		Register_UnityEngine_Material_SetFloatImpl();

		//System.Void UnityEngine.Material::SetMatrixImpl_Injected(System.Int32,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Material_SetMatrixImpl_Injected();
		Register_UnityEngine_Material_SetMatrixImpl_Injected();

		//System.Void UnityEngine.Material::SetShaderKeywords(System.String[])
		void Register_UnityEngine_Material_SetShaderKeywords();
		Register_UnityEngine_Material_SetShaderKeywords();

		//System.Void UnityEngine.Material::SetTextureImpl(System.Int32,UnityEngine.Texture)
		void Register_UnityEngine_Material_SetTextureImpl();
		Register_UnityEngine_Material_SetTextureImpl();

		//System.Void UnityEngine.Material::set_renderQueue(System.Int32)
		void Register_UnityEngine_Material_set_renderQueue();
		Register_UnityEngine_Material_set_renderQueue();

		//UnityEngine.Texture UnityEngine.Material::GetTextureImpl(System.Int32)
		void Register_UnityEngine_Material_GetTextureImpl();
		Register_UnityEngine_Material_GetTextureImpl();

	//End Registrations for type : UnityEngine.Material

	//Start Registrations for type : UnityEngine.MaterialPropertyBlock

		//System.IntPtr UnityEngine.MaterialPropertyBlock::CreateImpl()
		void Register_UnityEngine_MaterialPropertyBlock_CreateImpl();
		Register_UnityEngine_MaterialPropertyBlock_CreateImpl();

		//System.Void UnityEngine.MaterialPropertyBlock::Clear(System.Boolean)
		void Register_UnityEngine_MaterialPropertyBlock_Clear();
		Register_UnityEngine_MaterialPropertyBlock_Clear();

		//System.Void UnityEngine.MaterialPropertyBlock::DestroyImpl(System.IntPtr)
		void Register_UnityEngine_MaterialPropertyBlock_DestroyImpl();
		Register_UnityEngine_MaterialPropertyBlock_DestroyImpl();

		//System.Void UnityEngine.MaterialPropertyBlock::SetBufferImpl(System.Int32,UnityEngine.ComputeBuffer)
		void Register_UnityEngine_MaterialPropertyBlock_SetBufferImpl();
		Register_UnityEngine_MaterialPropertyBlock_SetBufferImpl();

		//System.Void UnityEngine.MaterialPropertyBlock::SetColorImpl_Injected(System.Int32,UnityEngine.Color&)
		void Register_UnityEngine_MaterialPropertyBlock_SetColorImpl_Injected();
		Register_UnityEngine_MaterialPropertyBlock_SetColorImpl_Injected();

		//System.Void UnityEngine.MaterialPropertyBlock::SetFloatImpl(System.Int32,System.Single)
		void Register_UnityEngine_MaterialPropertyBlock_SetFloatImpl();
		Register_UnityEngine_MaterialPropertyBlock_SetFloatImpl();

		//System.Void UnityEngine.MaterialPropertyBlock::SetMatrixImpl_Injected(System.Int32,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_MaterialPropertyBlock_SetMatrixImpl_Injected();
		Register_UnityEngine_MaterialPropertyBlock_SetMatrixImpl_Injected();

		//System.Void UnityEngine.MaterialPropertyBlock::SetTextureImpl(System.Int32,UnityEngine.Texture)
		void Register_UnityEngine_MaterialPropertyBlock_SetTextureImpl();
		Register_UnityEngine_MaterialPropertyBlock_SetTextureImpl();

		//System.Void UnityEngine.MaterialPropertyBlock::SetVectorImpl_Injected(System.Int32,UnityEngine.Vector4&)
		void Register_UnityEngine_MaterialPropertyBlock_SetVectorImpl_Injected();
		Register_UnityEngine_MaterialPropertyBlock_SetVectorImpl_Injected();

	//End Registrations for type : UnityEngine.MaterialPropertyBlock

	//Start Registrations for type : UnityEngine.Mathf

		//System.Int32 UnityEngine.Mathf::ClosestPowerOfTwo(System.Int32)
		void Register_UnityEngine_Mathf_ClosestPowerOfTwo();
		Register_UnityEngine_Mathf_ClosestPowerOfTwo();

		//System.Int32 UnityEngine.Mathf::NextPowerOfTwo(System.Int32)
		void Register_UnityEngine_Mathf_NextPowerOfTwo();
		Register_UnityEngine_Mathf_NextPowerOfTwo();

		//System.Single UnityEngine.Mathf::GammaToLinearSpace(System.Single)
		void Register_UnityEngine_Mathf_GammaToLinearSpace();
		Register_UnityEngine_Mathf_GammaToLinearSpace();

		//System.Single UnityEngine.Mathf::PerlinNoise(System.Single,System.Single)
		void Register_UnityEngine_Mathf_PerlinNoise();
		Register_UnityEngine_Mathf_PerlinNoise();

	//End Registrations for type : UnityEngine.Mathf

	//Start Registrations for type : UnityEngine.Matrix4x4

		//System.Void UnityEngine.Matrix4x4::DecomposeProjection_Injected(UnityEngine.Matrix4x4&,UnityEngine.FrustumPlanes&)
		void Register_UnityEngine_Matrix4x4_DecomposeProjection_Injected();
		Register_UnityEngine_Matrix4x4_DecomposeProjection_Injected();

		//System.Void UnityEngine.Matrix4x4::Frustum_Injected(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Matrix4x4_Frustum_Injected();
		Register_UnityEngine_Matrix4x4_Frustum_Injected();

		//System.Void UnityEngine.Matrix4x4::Inverse_Injected(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Matrix4x4_Inverse_Injected();
		Register_UnityEngine_Matrix4x4_Inverse_Injected();

		//System.Void UnityEngine.Matrix4x4::Ortho_Injected(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Matrix4x4_Ortho_Injected();
		Register_UnityEngine_Matrix4x4_Ortho_Injected();

		//System.Void UnityEngine.Matrix4x4::Perspective_Injected(System.Single,System.Single,System.Single,System.Single,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Matrix4x4_Perspective_Injected();
		Register_UnityEngine_Matrix4x4_Perspective_Injected();

		//System.Void UnityEngine.Matrix4x4::TRS_Injected(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Matrix4x4_TRS_Injected();
		Register_UnityEngine_Matrix4x4_TRS_Injected();

	//End Registrations for type : UnityEngine.Matrix4x4

	//Start Registrations for type : UnityEngine.Mesh

		//System.Array UnityEngine.Mesh::GetAllocArrayFromChannelImpl(UnityEngine.Rendering.VertexAttribute,UnityEngine.Mesh/InternalVertexChannelType,System.Int32)
		void Register_UnityEngine_Mesh_GetAllocArrayFromChannelImpl();
		Register_UnityEngine_Mesh_GetAllocArrayFromChannelImpl();

		//System.Boolean UnityEngine.Mesh::HasChannel(UnityEngine.Rendering.VertexAttribute)
		void Register_UnityEngine_Mesh_HasChannel();
		Register_UnityEngine_Mesh_HasChannel();

		//System.Boolean UnityEngine.Mesh::get_canAccess()
		void Register_UnityEngine_Mesh_get_canAccess();
		Register_UnityEngine_Mesh_get_canAccess();

		//System.Int32 UnityEngine.Mesh::get_subMeshCount()
		void Register_UnityEngine_Mesh_get_subMeshCount();
		Register_UnityEngine_Mesh_get_subMeshCount();

		//System.Int32[] UnityEngine.Mesh::GetIndicesImpl(System.Int32,System.Boolean)
		void Register_UnityEngine_Mesh_GetIndicesImpl();
		Register_UnityEngine_Mesh_GetIndicesImpl();

		//System.Void UnityEngine.Mesh::ClearImpl(System.Boolean)
		void Register_UnityEngine_Mesh_ClearImpl();
		Register_UnityEngine_Mesh_ClearImpl();

		//System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
		void Register_UnityEngine_Mesh_Internal_Create();
		Register_UnityEngine_Mesh_Internal_Create();

		//System.Void UnityEngine.Mesh::MarkDynamicImpl()
		void Register_UnityEngine_Mesh_MarkDynamicImpl();
		Register_UnityEngine_Mesh_MarkDynamicImpl();

		//System.Void UnityEngine.Mesh::PrintErrorCantAccessChannel(UnityEngine.Rendering.VertexAttribute)
		void Register_UnityEngine_Mesh_PrintErrorCantAccessChannel();
		Register_UnityEngine_Mesh_PrintErrorCantAccessChannel();

		//System.Void UnityEngine.Mesh::RecalculateBoundsImpl()
		void Register_UnityEngine_Mesh_RecalculateBoundsImpl();
		Register_UnityEngine_Mesh_RecalculateBoundsImpl();

		//System.Void UnityEngine.Mesh::SetArrayForChannelImpl(UnityEngine.Rendering.VertexAttribute,UnityEngine.Mesh/InternalVertexChannelType,System.Int32,System.Array,System.Int32)
		void Register_UnityEngine_Mesh_SetArrayForChannelImpl();
		Register_UnityEngine_Mesh_SetArrayForChannelImpl();

		//System.Void UnityEngine.Mesh::SetIndicesImpl(System.Int32,UnityEngine.MeshTopology,System.Array,System.Int32,System.Boolean,System.Int32)
		void Register_UnityEngine_Mesh_SetIndicesImpl();
		Register_UnityEngine_Mesh_SetIndicesImpl();

		//System.Void UnityEngine.Mesh::UploadMeshDataImpl(System.Boolean)
		void Register_UnityEngine_Mesh_UploadMeshDataImpl();
		Register_UnityEngine_Mesh_UploadMeshDataImpl();

		//System.Void UnityEngine.Mesh::get_bounds_Injected(UnityEngine.Bounds&)
		void Register_UnityEngine_Mesh_get_bounds_Injected();
		Register_UnityEngine_Mesh_get_bounds_Injected();

		//System.Void UnityEngine.Mesh::set_bounds_Injected(UnityEngine.Bounds&)
		void Register_UnityEngine_Mesh_set_bounds_Injected();
		Register_UnityEngine_Mesh_set_bounds_Injected();

	//End Registrations for type : UnityEngine.Mesh

	//Start Registrations for type : UnityEngine.MeshCollider

		//System.Boolean UnityEngine.MeshCollider::get_convex()
		void Register_UnityEngine_MeshCollider_get_convex();
		Register_UnityEngine_MeshCollider_get_convex();

		//System.Void UnityEngine.MeshCollider::set_convex(System.Boolean)
		void Register_UnityEngine_MeshCollider_set_convex();
		Register_UnityEngine_MeshCollider_set_convex();

		//UnityEngine.Mesh UnityEngine.MeshCollider::get_sharedMesh()
		void Register_UnityEngine_MeshCollider_get_sharedMesh();
		Register_UnityEngine_MeshCollider_get_sharedMesh();

	//End Registrations for type : UnityEngine.MeshCollider

	//Start Registrations for type : UnityEngine.MeshFilter

		//System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
		void Register_UnityEngine_MeshFilter_set_mesh();
		Register_UnityEngine_MeshFilter_set_mesh();

		//System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
		void Register_UnityEngine_MeshFilter_set_sharedMesh();
		Register_UnityEngine_MeshFilter_set_sharedMesh();

		//UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
		void Register_UnityEngine_MeshFilter_get_sharedMesh();
		Register_UnityEngine_MeshFilter_get_sharedMesh();

	//End Registrations for type : UnityEngine.MeshFilter

	//Start Registrations for type : UnityEngine.MonoBehaviour

		//System.Boolean UnityEngine.MonoBehaviour::Internal_IsInvokingAll(UnityEngine.MonoBehaviour)
		void Register_UnityEngine_MonoBehaviour_Internal_IsInvokingAll();
		Register_UnityEngine_MonoBehaviour_Internal_IsInvokingAll();

		//System.Boolean UnityEngine.MonoBehaviour::IsInvoking(UnityEngine.MonoBehaviour,System.String)
		void Register_UnityEngine_MonoBehaviour_IsInvoking();
		Register_UnityEngine_MonoBehaviour_IsInvoking();

		//System.Boolean UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)
		void Register_UnityEngine_MonoBehaviour_IsObjectMonoBehaviour();
		Register_UnityEngine_MonoBehaviour_IsObjectMonoBehaviour();

		//System.Boolean UnityEngine.MonoBehaviour::get_useGUILayout()
		void Register_UnityEngine_MonoBehaviour_get_useGUILayout();
		Register_UnityEngine_MonoBehaviour_get_useGUILayout();

		//System.String UnityEngine.MonoBehaviour::GetScriptClassName()
		void Register_UnityEngine_MonoBehaviour_GetScriptClassName();
		Register_UnityEngine_MonoBehaviour_GetScriptClassName();

		//System.Void UnityEngine.MonoBehaviour::CancelInvoke(UnityEngine.MonoBehaviour,System.String)
		void Register_UnityEngine_MonoBehaviour_CancelInvoke();
		Register_UnityEngine_MonoBehaviour_CancelInvoke();

		//System.Void UnityEngine.MonoBehaviour::Internal_CancelInvokeAll(UnityEngine.MonoBehaviour)
		void Register_UnityEngine_MonoBehaviour_Internal_CancelInvokeAll();
		Register_UnityEngine_MonoBehaviour_Internal_CancelInvokeAll();

		//System.Void UnityEngine.MonoBehaviour::InvokeDelayed(UnityEngine.MonoBehaviour,System.String,System.Single,System.Single)
		void Register_UnityEngine_MonoBehaviour_InvokeDelayed();
		Register_UnityEngine_MonoBehaviour_InvokeDelayed();

		//System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
		void Register_UnityEngine_MonoBehaviour_StopAllCoroutines();
		Register_UnityEngine_MonoBehaviour_StopAllCoroutines();

		//System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
		void Register_UnityEngine_MonoBehaviour_StopCoroutine();
		Register_UnityEngine_MonoBehaviour_StopCoroutine();

		//System.Void UnityEngine.MonoBehaviour::StopCoroutineFromEnumeratorManaged(System.Collections.IEnumerator)
		void Register_UnityEngine_MonoBehaviour_StopCoroutineFromEnumeratorManaged();
		Register_UnityEngine_MonoBehaviour_StopCoroutineFromEnumeratorManaged();

		//System.Void UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)
		void Register_UnityEngine_MonoBehaviour_StopCoroutineManaged();
		Register_UnityEngine_MonoBehaviour_StopCoroutineManaged();

		//System.Void UnityEngine.MonoBehaviour::set_useGUILayout(System.Boolean)
		void Register_UnityEngine_MonoBehaviour_set_useGUILayout();
		Register_UnityEngine_MonoBehaviour_set_useGUILayout();

		//UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutineManaged(System.String,System.Object)
		void Register_UnityEngine_MonoBehaviour_StartCoroutineManaged();
		Register_UnityEngine_MonoBehaviour_StartCoroutineManaged();

		//UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)
		void Register_UnityEngine_MonoBehaviour_StartCoroutineManaged2();
		Register_UnityEngine_MonoBehaviour_StartCoroutineManaged2();

	//End Registrations for type : UnityEngine.MonoBehaviour

	//Start Registrations for type : UnityEngine.Motion

		//System.Boolean UnityEngine.Motion::get_isLooping()
		void Register_UnityEngine_Motion_get_isLooping();
		Register_UnityEngine_Motion_get_isLooping();

	//End Registrations for type : UnityEngine.Motion

	//Start Registrations for type : UnityEngine.Networking.CertificateHandler

		//System.Void UnityEngine.Networking.CertificateHandler::Release()
		void Register_UnityEngine_Networking_CertificateHandler_Release();
		Register_UnityEngine_Networking_CertificateHandler_Release();

	//End Registrations for type : UnityEngine.Networking.CertificateHandler

	//Start Registrations for type : UnityEngine.Networking.DownloadHandler

		//System.Byte[] UnityEngine.Networking.DownloadHandler::InternalGetByteArray(UnityEngine.Networking.DownloadHandler)
		void Register_UnityEngine_Networking_DownloadHandler_InternalGetByteArray();
		Register_UnityEngine_Networking_DownloadHandler_InternalGetByteArray();

		//System.String UnityEngine.Networking.DownloadHandler::GetContentType()
		void Register_UnityEngine_Networking_DownloadHandler_GetContentType();
		Register_UnityEngine_Networking_DownloadHandler_GetContentType();

		//System.Void UnityEngine.Networking.DownloadHandler::Release()
		void Register_UnityEngine_Networking_DownloadHandler_Release();
		Register_UnityEngine_Networking_DownloadHandler_Release();

	//End Registrations for type : UnityEngine.Networking.DownloadHandler

	//Start Registrations for type : UnityEngine.Networking.DownloadHandlerBuffer

		//System.IntPtr UnityEngine.Networking.DownloadHandlerBuffer::Create(UnityEngine.Networking.DownloadHandlerBuffer)
		void Register_UnityEngine_Networking_DownloadHandlerBuffer_Create();
		Register_UnityEngine_Networking_DownloadHandlerBuffer_Create();

	//End Registrations for type : UnityEngine.Networking.DownloadHandlerBuffer

	//Start Registrations for type : UnityEngine.Networking.UnityWebRequest

		//System.Boolean UnityEngine.Networking.UnityWebRequest::get_isDone()
		void Register_UnityEngine_Networking_UnityWebRequest_get_isDone();
		Register_UnityEngine_Networking_UnityWebRequest_get_isDone();

		//System.Boolean UnityEngine.Networking.UnityWebRequest::get_isHttpError()
		void Register_UnityEngine_Networking_UnityWebRequest_get_isHttpError();
		Register_UnityEngine_Networking_UnityWebRequest_get_isHttpError();

		//System.Boolean UnityEngine.Networking.UnityWebRequest::get_isModifiable()
		void Register_UnityEngine_Networking_UnityWebRequest_get_isModifiable();
		Register_UnityEngine_Networking_UnityWebRequest_get_isModifiable();

		//System.Boolean UnityEngine.Networking.UnityWebRequest::get_isNetworkError()
		void Register_UnityEngine_Networking_UnityWebRequest_get_isNetworkError();
		Register_UnityEngine_Networking_UnityWebRequest_get_isNetworkError();

		//System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
		void Register_UnityEngine_Networking_UnityWebRequest_get_responseCode();
		Register_UnityEngine_Networking_UnityWebRequest_get_responseCode();

		//System.IntPtr UnityEngine.Networking.UnityWebRequest::Create()
		void Register_UnityEngine_Networking_UnityWebRequest_Create();
		Register_UnityEngine_Networking_UnityWebRequest_Create();

		//System.String UnityEngine.Networking.UnityWebRequest::GetHTTPStatusString(System.Int64)
		void Register_UnityEngine_Networking_UnityWebRequest_GetHTTPStatusString();
		Register_UnityEngine_Networking_UnityWebRequest_GetHTTPStatusString();

		//System.String UnityEngine.Networking.UnityWebRequest::GetUrl()
		void Register_UnityEngine_Networking_UnityWebRequest_GetUrl();
		Register_UnityEngine_Networking_UnityWebRequest_GetUrl();

		//System.String UnityEngine.Networking.UnityWebRequest::GetWebErrorString(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError)
		void Register_UnityEngine_Networking_UnityWebRequest_GetWebErrorString();
		Register_UnityEngine_Networking_UnityWebRequest_GetWebErrorString();

		//System.Void UnityEngine.Networking.UnityWebRequest::Abort()
		void Register_UnityEngine_Networking_UnityWebRequest_Abort();
		Register_UnityEngine_Networking_UnityWebRequest_Abort();

		//System.Void UnityEngine.Networking.UnityWebRequest::Release()
		void Register_UnityEngine_Networking_UnityWebRequest_Release();
		Register_UnityEngine_Networking_UnityWebRequest_Release();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::GetError()
		void Register_UnityEngine_Networking_UnityWebRequest_GetError();
		Register_UnityEngine_Networking_UnityWebRequest_GetError();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetCustomMethod(System.String)
		void Register_UnityEngine_Networking_UnityWebRequest_SetCustomMethod();
		Register_UnityEngine_Networking_UnityWebRequest_SetCustomMethod();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetDownloadHandler(UnityEngine.Networking.DownloadHandler)
		void Register_UnityEngine_Networking_UnityWebRequest_SetDownloadHandler();
		Register_UnityEngine_Networking_UnityWebRequest_SetDownloadHandler();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
		void Register_UnityEngine_Networking_UnityWebRequest_SetMethod();
		Register_UnityEngine_Networking_UnityWebRequest_SetMethod();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUploadHandler(UnityEngine.Networking.UploadHandler)
		void Register_UnityEngine_Networking_UnityWebRequest_SetUploadHandler();
		Register_UnityEngine_Networking_UnityWebRequest_SetUploadHandler();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUrl(System.String)
		void Register_UnityEngine_Networking_UnityWebRequest_SetUrl();
		Register_UnityEngine_Networking_UnityWebRequest_SetUrl();

		//UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::BeginWebRequest()
		void Register_UnityEngine_Networking_UnityWebRequest_BeginWebRequest();
		Register_UnityEngine_Networking_UnityWebRequest_BeginWebRequest();

	//End Registrations for type : UnityEngine.Networking.UnityWebRequest

	//Start Registrations for type : UnityEngine.Networking.UploadHandler

		//System.Void UnityEngine.Networking.UploadHandler::Release()
		void Register_UnityEngine_Networking_UploadHandler_Release();
		Register_UnityEngine_Networking_UploadHandler_Release();

	//End Registrations for type : UnityEngine.Networking.UploadHandler

	//Start Registrations for type : UnityEngine.NoAllocHelpers

		//System.Array UnityEngine.NoAllocHelpers::ExtractArrayFromList(System.Object)
		void Register_UnityEngine_NoAllocHelpers_ExtractArrayFromList();
		Register_UnityEngine_NoAllocHelpers_ExtractArrayFromList();

	//End Registrations for type : UnityEngine.NoAllocHelpers

	//Start Registrations for type : UnityEngine.Object

		//System.Int32 UnityEngine.Object::GetOffsetOfInstanceIDInCPlusPlusObject()
		void Register_UnityEngine_Object_GetOffsetOfInstanceIDInCPlusPlusObject();
		Register_UnityEngine_Object_GetOffsetOfInstanceIDInCPlusPlusObject();

		//System.String UnityEngine.Object::GetName(UnityEngine.Object)
		void Register_UnityEngine_Object_GetName();
		Register_UnityEngine_Object_GetName();

		//System.String UnityEngine.Object::ToString(UnityEngine.Object)
		void Register_UnityEngine_Object_ToString();
		Register_UnityEngine_Object_ToString();

		//System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
		void Register_UnityEngine_Object_Destroy();
		Register_UnityEngine_Object_Destroy();

		//System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
		void Register_UnityEngine_Object_DestroyImmediate();
		Register_UnityEngine_Object_DestroyImmediate();

		//System.Void UnityEngine.Object::SetName(UnityEngine.Object,System.String)
		void Register_UnityEngine_Object_SetName();
		Register_UnityEngine_Object_SetName();

		//System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
		void Register_UnityEngine_Object_set_hideFlags();
		Register_UnityEngine_Object_set_hideFlags();

		//UnityEngine.HideFlags UnityEngine.Object::get_hideFlags()
		void Register_UnityEngine_Object_get_hideFlags();
		Register_UnityEngine_Object_get_hideFlags();

		//UnityEngine.Object UnityEngine.Object::FindObjectFromInstanceID(System.Int32)
		void Register_UnityEngine_Object_FindObjectFromInstanceID();
		Register_UnityEngine_Object_FindObjectFromInstanceID();

		//UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
		void Register_UnityEngine_Object_Internal_CloneSingle();
		Register_UnityEngine_Object_Internal_CloneSingle();

		//UnityEngine.Object UnityEngine.Object::Internal_CloneSingleWithParent(UnityEngine.Object,UnityEngine.Transform,System.Boolean)
		void Register_UnityEngine_Object_Internal_CloneSingleWithParent();
		Register_UnityEngine_Object_Internal_CloneSingleWithParent();

		//UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
		void Register_UnityEngine_Object_FindObjectsOfType();
		Register_UnityEngine_Object_FindObjectsOfType();

	//End Registrations for type : UnityEngine.Object

	//Start Registrations for type : UnityEngine.ParticleSystem

		//System.Boolean UnityEngine.ParticleSystem::get_useAutoRandomSeed()
		void Register_UnityEngine_ParticleSystem_get_useAutoRandomSeed();
		Register_UnityEngine_ParticleSystem_get_useAutoRandomSeed();

		//System.Single UnityEngine.ParticleSystem::get_time()
		void Register_UnityEngine_ParticleSystem_get_time();
		Register_UnityEngine_ParticleSystem_get_time();

		//System.UInt32 UnityEngine.ParticleSystem::get_randomSeed()
		void Register_UnityEngine_ParticleSystem_get_randomSeed();
		Register_UnityEngine_ParticleSystem_get_randomSeed();

		//System.Void UnityEngine.ParticleSystem::Emit_Injected(UnityEngine.ParticleSystem/EmitParams&,System.Int32)
		void Register_UnityEngine_ParticleSystem_Emit_Injected();
		Register_UnityEngine_ParticleSystem_Emit_Injected();

		//System.Void UnityEngine.ParticleSystem::Emit_Internal(System.Int32)
		void Register_UnityEngine_ParticleSystem_Emit_Internal();
		Register_UnityEngine_ParticleSystem_Emit_Internal();

		//System.Void UnityEngine.ParticleSystem::Internal_EmitOld(UnityEngine.ParticleSystem/Particle&)
		void Register_UnityEngine_ParticleSystem_Internal_EmitOld();
		Register_UnityEngine_ParticleSystem_Internal_EmitOld();

		//System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
		void Register_UnityEngine_ParticleSystem_Play();
		Register_UnityEngine_ParticleSystem_Play();

		//System.Void UnityEngine.ParticleSystem::Simulate(System.Single,System.Boolean,System.Boolean,System.Boolean)
		void Register_UnityEngine_ParticleSystem_Simulate();
		Register_UnityEngine_ParticleSystem_Simulate();

		//System.Void UnityEngine.ParticleSystem::Stop(System.Boolean,UnityEngine.ParticleSystemStopBehavior)
		void Register_UnityEngine_ParticleSystem_Stop();
		Register_UnityEngine_ParticleSystem_Stop();

		//System.Void UnityEngine.ParticleSystem::set_randomSeed(System.UInt32)
		void Register_UnityEngine_ParticleSystem_set_randomSeed();
		Register_UnityEngine_ParticleSystem_set_randomSeed();

		//System.Void UnityEngine.ParticleSystem::set_useAutoRandomSeed(System.Boolean)
		void Register_UnityEngine_ParticleSystem_set_useAutoRandomSeed();
		Register_UnityEngine_ParticleSystem_set_useAutoRandomSeed();

	//End Registrations for type : UnityEngine.ParticleSystem

	//Start Registrations for type : UnityEngine.ParticleSystem/MainModule

		//System.Boolean UnityEngine.ParticleSystem/MainModule::GetLoop(UnityEngine.ParticleSystem)
		void Register_UnityEngine_ParticleSystem_MainModule_GetLoop();
		Register_UnityEngine_ParticleSystem_MainModule_GetLoop();

		//System.Single UnityEngine.ParticleSystem/MainModule::GetDuration(UnityEngine.ParticleSystem)
		void Register_UnityEngine_ParticleSystem_MainModule_GetDuration();
		Register_UnityEngine_ParticleSystem_MainModule_GetDuration();

		//System.Void UnityEngine.ParticleSystem/MainModule::GetStartDelay(UnityEngine.ParticleSystem,UnityEngine.ParticleSystem/MinMaxCurve&)
		void Register_UnityEngine_ParticleSystem_MainModule_GetStartDelay();
		Register_UnityEngine_ParticleSystem_MainModule_GetStartDelay();

	//End Registrations for type : UnityEngine.ParticleSystem/MainModule

	//Start Registrations for type : UnityEngine.ParticleSystemRenderer

		//System.Int32 UnityEngine.ParticleSystemRenderer::Internal_GetMeshCount()
		void Register_UnityEngine_ParticleSystemRenderer_Internal_GetMeshCount();
		Register_UnityEngine_ParticleSystemRenderer_Internal_GetMeshCount();

	//End Registrations for type : UnityEngine.ParticleSystemRenderer

	//Start Registrations for type : UnityEngine.Physics

		//System.Boolean UnityEngine.Physics::Query_ComputePenetration_Injected(UnityEngine.Collider,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Collider,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,System.Single&)
		void Register_UnityEngine_Physics_Query_ComputePenetration_Injected();
		Register_UnityEngine_Physics_Query_ComputePenetration_Injected();

		//System.Int32 UnityEngine.Physics::Internal_SphereCastNonAlloc_Injected(UnityEngine.PhysicsScene&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_Physics_Internal_SphereCastNonAlloc_Injected();
		Register_UnityEngine_Physics_Internal_SphereCastNonAlloc_Injected();

		//System.Int32 UnityEngine.Physics::OverlapCapsuleNonAlloc_Internal_Injected(UnityEngine.PhysicsScene&,UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Collider[],System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_Physics_OverlapCapsuleNonAlloc_Internal_Injected();
		Register_UnityEngine_Physics_OverlapCapsuleNonAlloc_Internal_Injected();

		//System.Int32 UnityEngine.Physics::OverlapSphereNonAlloc_Internal_Injected(UnityEngine.PhysicsScene&,UnityEngine.Vector3&,System.Single,UnityEngine.Collider[],System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_Physics_OverlapSphereNonAlloc_Internal_Injected();
		Register_UnityEngine_Physics_OverlapSphereNonAlloc_Internal_Injected();

		//System.Single UnityEngine.Physics::get_defaultContactOffset()
		void Register_UnityEngine_Physics_get_defaultContactOffset();
		Register_UnityEngine_Physics_get_defaultContactOffset();

		//System.Void UnityEngine.Physics::get_defaultPhysicsScene_Injected(UnityEngine.PhysicsScene&)
		void Register_UnityEngine_Physics_get_defaultPhysicsScene_Injected();
		Register_UnityEngine_Physics_get_defaultPhysicsScene_Injected();

		//UnityEngine.RaycastHit[] UnityEngine.Physics::Internal_RaycastAll_Injected(UnityEngine.PhysicsScene&,UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_Physics_Internal_RaycastAll_Injected();
		Register_UnityEngine_Physics_Internal_RaycastAll_Injected();

	//End Registrations for type : UnityEngine.Physics

	//Start Registrations for type : UnityEngine.Physics2D

		//System.Boolean UnityEngine.Physics2D::get_queriesHitTriggers()
		void Register_UnityEngine_Physics2D_get_queriesHitTriggers();
		Register_UnityEngine_Physics2D_get_queriesHitTriggers();

		//System.Void UnityEngine.Physics2D::get_defaultPhysicsScene_Injected(UnityEngine.PhysicsScene2D&)
		void Register_UnityEngine_Physics2D_get_defaultPhysicsScene_Injected();
		Register_UnityEngine_Physics2D_get_defaultPhysicsScene_Injected();

		//UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::GetRayIntersectionAll_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
		void Register_UnityEngine_Physics2D_GetRayIntersectionAll_Internal_Injected();
		Register_UnityEngine_Physics2D_GetRayIntersectionAll_Internal_Injected();

	//End Registrations for type : UnityEngine.Physics2D

	//Start Registrations for type : UnityEngine.PhysicsScene

		//System.Boolean UnityEngine.PhysicsScene::Internal_RaycastTest_Injected(UnityEngine.PhysicsScene&,UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_PhysicsScene_Internal_RaycastTest_Injected();
		Register_UnityEngine_PhysicsScene_Internal_RaycastTest_Injected();

		//System.Boolean UnityEngine.PhysicsScene::Internal_Raycast_Injected(UnityEngine.PhysicsScene&,UnityEngine.Ray&,System.Single,UnityEngine.RaycastHit&,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_PhysicsScene_Internal_Raycast_Injected();
		Register_UnityEngine_PhysicsScene_Internal_Raycast_Injected();

		//System.Int32 UnityEngine.PhysicsScene::Internal_RaycastNonAlloc_Injected(UnityEngine.PhysicsScene&,UnityEngine.Ray&,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_PhysicsScene_Internal_RaycastNonAlloc_Injected();
		Register_UnityEngine_PhysicsScene_Internal_RaycastNonAlloc_Injected();

	//End Registrations for type : UnityEngine.PhysicsScene

	//Start Registrations for type : UnityEngine.PhysicsScene2D

		//System.Int32 UnityEngine.PhysicsScene2D::GetRayIntersectionNonAlloc_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.RaycastHit2D[])
		void Register_UnityEngine_PhysicsScene2D_GetRayIntersectionNonAlloc_Internal_Injected();
		Register_UnityEngine_PhysicsScene2D_GetRayIntersectionNonAlloc_Internal_Injected();

		//System.Int32 UnityEngine.PhysicsScene2D::RaycastNonAlloc_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,UnityEngine.ContactFilter2D&,UnityEngine.RaycastHit2D[])
		void Register_UnityEngine_PhysicsScene2D_RaycastNonAlloc_Internal_Injected();
		Register_UnityEngine_PhysicsScene2D_RaycastNonAlloc_Internal_Injected();

		//System.Void UnityEngine.PhysicsScene2D::Raycast_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,UnityEngine.ContactFilter2D&,UnityEngine.RaycastHit2D&)
		void Register_UnityEngine_PhysicsScene2D_Raycast_Internal_Injected();
		Register_UnityEngine_PhysicsScene2D_Raycast_Internal_Injected();

	//End Registrations for type : UnityEngine.PhysicsScene2D

	//Start Registrations for type : UnityEngine.Playables.PlayableDirector

		//System.Double UnityEngine.Playables.PlayableDirector::get_duration()
		void Register_UnityEngine_Playables_PlayableDirector_get_duration();
		Register_UnityEngine_Playables_PlayableDirector_get_duration();

		//System.Double UnityEngine.Playables.PlayableDirector::get_time()
		void Register_UnityEngine_Playables_PlayableDirector_get_time();
		Register_UnityEngine_Playables_PlayableDirector_get_time();

		//System.Void UnityEngine.Playables.PlayableDirector::Evaluate()
		void Register_UnityEngine_Playables_PlayableDirector_Evaluate();
		Register_UnityEngine_Playables_PlayableDirector_Evaluate();

		//System.Void UnityEngine.Playables.PlayableDirector::GetGraphHandle_Injected(UnityEngine.Playables.PlayableGraph&)
		void Register_UnityEngine_Playables_PlayableDirector_GetGraphHandle_Injected();
		Register_UnityEngine_Playables_PlayableDirector_GetGraphHandle_Injected();

		//System.Void UnityEngine.Playables.PlayableDirector::Pause()
		void Register_UnityEngine_Playables_PlayableDirector_Pause();
		Register_UnityEngine_Playables_PlayableDirector_Pause();

		//System.Void UnityEngine.Playables.PlayableDirector::Play()
		void Register_UnityEngine_Playables_PlayableDirector_Play();
		Register_UnityEngine_Playables_PlayableDirector_Play();

		//System.Void UnityEngine.Playables.PlayableDirector::Stop()
		void Register_UnityEngine_Playables_PlayableDirector_Stop();
		Register_UnityEngine_Playables_PlayableDirector_Stop();

		//System.Void UnityEngine.Playables.PlayableDirector::set_time(System.Double)
		void Register_UnityEngine_Playables_PlayableDirector_set_time();
		Register_UnityEngine_Playables_PlayableDirector_set_time();

		//UnityEngine.Object UnityEngine.Playables.PlayableDirector::GetGenericBinding(UnityEngine.Object)
		void Register_UnityEngine_Playables_PlayableDirector_GetGenericBinding();
		Register_UnityEngine_Playables_PlayableDirector_GetGenericBinding();

		//UnityEngine.Object UnityEngine.Playables.PlayableDirector::GetReferenceValue_Injected(UnityEngine.PropertyName&,System.Boolean&)
		void Register_UnityEngine_Playables_PlayableDirector_GetReferenceValue_Injected();
		Register_UnityEngine_Playables_PlayableDirector_GetReferenceValue_Injected();

		//UnityEngine.Playables.DirectorWrapMode UnityEngine.Playables.PlayableDirector::GetWrapMode()
		void Register_UnityEngine_Playables_PlayableDirector_GetWrapMode();
		Register_UnityEngine_Playables_PlayableDirector_GetWrapMode();

		//UnityEngine.ScriptableObject UnityEngine.Playables.PlayableDirector::Internal_GetPlayableAsset()
		void Register_UnityEngine_Playables_PlayableDirector_Internal_GetPlayableAsset();
		Register_UnityEngine_Playables_PlayableDirector_Internal_GetPlayableAsset();

	//End Registrations for type : UnityEngine.Playables.PlayableDirector

	//Start Registrations for type : UnityEngine.Playables.PlayableGraph

		//System.Boolean UnityEngine.Playables.PlayableGraph::ConnectInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&,System.Int32,UnityEngine.Playables.PlayableHandle&,System.Int32)
		void Register_UnityEngine_Playables_PlayableGraph_ConnectInternal_Injected();
		Register_UnityEngine_Playables_PlayableGraph_ConnectInternal_Injected();

		//System.Boolean UnityEngine.Playables.PlayableGraph::CreateScriptOutputInternal_Injected(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)
		void Register_UnityEngine_Playables_PlayableGraph_CreateScriptOutputInternal_Injected();
		Register_UnityEngine_Playables_PlayableGraph_CreateScriptOutputInternal_Injected();

		//System.Boolean UnityEngine.Playables.PlayableGraph::IsPlaying_Injected(UnityEngine.Playables.PlayableGraph&)
		void Register_UnityEngine_Playables_PlayableGraph_IsPlaying_Injected();
		Register_UnityEngine_Playables_PlayableGraph_IsPlaying_Injected();

		//System.Boolean UnityEngine.Playables.PlayableGraph::IsValid_Injected(UnityEngine.Playables.PlayableGraph&)
		void Register_UnityEngine_Playables_PlayableGraph_IsValid_Injected();
		Register_UnityEngine_Playables_PlayableGraph_IsValid_Injected();

		//System.Int32 UnityEngine.Playables.PlayableGraph::GetPlayableCount_Injected(UnityEngine.Playables.PlayableGraph&)
		void Register_UnityEngine_Playables_PlayableGraph_GetPlayableCount_Injected();
		Register_UnityEngine_Playables_PlayableGraph_GetPlayableCount_Injected();

		//System.Int32 UnityEngine.Playables.PlayableGraph::GetRootPlayableCount_Injected(UnityEngine.Playables.PlayableGraph&)
		void Register_UnityEngine_Playables_PlayableGraph_GetRootPlayableCount_Injected();
		Register_UnityEngine_Playables_PlayableGraph_GetRootPlayableCount_Injected();

		//System.Void UnityEngine.Playables.PlayableGraph::CreatePlayableHandle_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableGraph_CreatePlayableHandle_Injected();
		Register_UnityEngine_Playables_PlayableGraph_CreatePlayableHandle_Injected();

		//System.Void UnityEngine.Playables.PlayableGraph::GetRootPlayableInternal_Injected(UnityEngine.Playables.PlayableGraph&,System.Int32,UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableGraph_GetRootPlayableInternal_Injected();
		Register_UnityEngine_Playables_PlayableGraph_GetRootPlayableInternal_Injected();

		//UnityEngine.IExposedPropertyTable UnityEngine.Playables.PlayableGraph::GetResolver_Injected(UnityEngine.Playables.PlayableGraph&)
		void Register_UnityEngine_Playables_PlayableGraph_GetResolver_Injected();
		Register_UnityEngine_Playables_PlayableGraph_GetResolver_Injected();

	//End Registrations for type : UnityEngine.Playables.PlayableGraph

	//Start Registrations for type : UnityEngine.Playables.PlayableHandle

		//System.Boolean UnityEngine.Playables.PlayableHandle::IsValid_Injected(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableHandle_IsValid_Injected();
		Register_UnityEngine_Playables_PlayableHandle_IsValid_Injected();

		//System.Double UnityEngine.Playables.PlayableHandle::GetDuration_Injected(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableHandle_GetDuration_Injected();
		Register_UnityEngine_Playables_PlayableHandle_GetDuration_Injected();

		//System.Double UnityEngine.Playables.PlayableHandle::GetPreviousTime_Injected(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableHandle_GetPreviousTime_Injected();
		Register_UnityEngine_Playables_PlayableHandle_GetPreviousTime_Injected();

		//System.Double UnityEngine.Playables.PlayableHandle::GetTime_Injected(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableHandle_GetTime_Injected();
		Register_UnityEngine_Playables_PlayableHandle_GetTime_Injected();

		//System.Int32 UnityEngine.Playables.PlayableHandle::GetInputCount_Injected(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableHandle_GetInputCount_Injected();
		Register_UnityEngine_Playables_PlayableHandle_GetInputCount_Injected();

		//System.Object UnityEngine.Playables.PlayableHandle::GetScriptInstance_Injected(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableHandle_GetScriptInstance_Injected();
		Register_UnityEngine_Playables_PlayableHandle_GetScriptInstance_Injected();

		//System.Single UnityEngine.Playables.PlayableHandle::GetInputWeightFromIndex_Injected(UnityEngine.Playables.PlayableHandle&,System.Int32)
		void Register_UnityEngine_Playables_PlayableHandle_GetInputWeightFromIndex_Injected();
		Register_UnityEngine_Playables_PlayableHandle_GetInputWeightFromIndex_Injected();

		//System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType_Injected(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableHandle_GetPlayableType_Injected();
		Register_UnityEngine_Playables_PlayableHandle_GetPlayableType_Injected();

		//System.Void UnityEngine.Playables.PlayableHandle::GetGraph_Injected(UnityEngine.Playables.PlayableHandle&,UnityEngine.Playables.PlayableGraph&)
		void Register_UnityEngine_Playables_PlayableHandle_GetGraph_Injected();
		Register_UnityEngine_Playables_PlayableHandle_GetGraph_Injected();

		//System.Void UnityEngine.Playables.PlayableHandle::GetInputHandle_Injected(UnityEngine.Playables.PlayableHandle&,System.Int32,UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableHandle_GetInputHandle_Injected();
		Register_UnityEngine_Playables_PlayableHandle_GetInputHandle_Injected();

		//System.Void UnityEngine.Playables.PlayableHandle::Pause_Injected(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableHandle_Pause_Injected();
		Register_UnityEngine_Playables_PlayableHandle_Pause_Injected();

		//System.Void UnityEngine.Playables.PlayableHandle::Play_Injected(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableHandle_Play_Injected();
		Register_UnityEngine_Playables_PlayableHandle_Play_Injected();

		//System.Void UnityEngine.Playables.PlayableHandle::SetDuration_Injected(UnityEngine.Playables.PlayableHandle&,System.Double)
		void Register_UnityEngine_Playables_PlayableHandle_SetDuration_Injected();
		Register_UnityEngine_Playables_PlayableHandle_SetDuration_Injected();

		//System.Void UnityEngine.Playables.PlayableHandle::SetInputCount_Injected(UnityEngine.Playables.PlayableHandle&,System.Int32)
		void Register_UnityEngine_Playables_PlayableHandle_SetInputCount_Injected();
		Register_UnityEngine_Playables_PlayableHandle_SetInputCount_Injected();

		//System.Void UnityEngine.Playables.PlayableHandle::SetInputWeightFromIndex_Injected(UnityEngine.Playables.PlayableHandle&,System.Int32,System.Single)
		void Register_UnityEngine_Playables_PlayableHandle_SetInputWeightFromIndex_Injected();
		Register_UnityEngine_Playables_PlayableHandle_SetInputWeightFromIndex_Injected();

		//System.Void UnityEngine.Playables.PlayableHandle::SetInputWeight_Injected(UnityEngine.Playables.PlayableHandle&,UnityEngine.Playables.PlayableHandle&,System.Single)
		void Register_UnityEngine_Playables_PlayableHandle_SetInputWeight_Injected();
		Register_UnityEngine_Playables_PlayableHandle_SetInputWeight_Injected();

		//System.Void UnityEngine.Playables.PlayableHandle::SetPropagateSetTime_Injected(UnityEngine.Playables.PlayableHandle&,System.Boolean)
		void Register_UnityEngine_Playables_PlayableHandle_SetPropagateSetTime_Injected();
		Register_UnityEngine_Playables_PlayableHandle_SetPropagateSetTime_Injected();

		//System.Void UnityEngine.Playables.PlayableHandle::SetScriptInstance_Injected(UnityEngine.Playables.PlayableHandle&,System.Object)
		void Register_UnityEngine_Playables_PlayableHandle_SetScriptInstance_Injected();
		Register_UnityEngine_Playables_PlayableHandle_SetScriptInstance_Injected();

		//System.Void UnityEngine.Playables.PlayableHandle::SetSpeed_Injected(UnityEngine.Playables.PlayableHandle&,System.Double)
		void Register_UnityEngine_Playables_PlayableHandle_SetSpeed_Injected();
		Register_UnityEngine_Playables_PlayableHandle_SetSpeed_Injected();

		//System.Void UnityEngine.Playables.PlayableHandle::SetTime_Injected(UnityEngine.Playables.PlayableHandle&,System.Double)
		void Register_UnityEngine_Playables_PlayableHandle_SetTime_Injected();
		Register_UnityEngine_Playables_PlayableHandle_SetTime_Injected();

		//System.Void UnityEngine.Playables.PlayableHandle::SetTraversalMode_Injected(UnityEngine.Playables.PlayableHandle&,UnityEngine.Playables.PlayableTraversalMode)
		void Register_UnityEngine_Playables_PlayableHandle_SetTraversalMode_Injected();
		Register_UnityEngine_Playables_PlayableHandle_SetTraversalMode_Injected();

		//UnityEngine.Playables.PlayState UnityEngine.Playables.PlayableHandle::GetPlayState_Injected(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableHandle_GetPlayState_Injected();
		Register_UnityEngine_Playables_PlayableHandle_GetPlayState_Injected();

	//End Registrations for type : UnityEngine.Playables.PlayableHandle

	//Start Registrations for type : UnityEngine.Playables.PlayableOutputHandle

		//System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsValid_Injected(UnityEngine.Playables.PlayableOutputHandle&)
		void Register_UnityEngine_Playables_PlayableOutputHandle_IsValid_Injected();
		Register_UnityEngine_Playables_PlayableOutputHandle_IsValid_Injected();

		//System.Int32 UnityEngine.Playables.PlayableOutputHandle::GetSourceOutputPort_Injected(UnityEngine.Playables.PlayableOutputHandle&)
		void Register_UnityEngine_Playables_PlayableOutputHandle_GetSourceOutputPort_Injected();
		Register_UnityEngine_Playables_PlayableOutputHandle_GetSourceOutputPort_Injected();

		//System.Type UnityEngine.Playables.PlayableOutputHandle::GetPlayableOutputType_Injected(UnityEngine.Playables.PlayableOutputHandle&)
		void Register_UnityEngine_Playables_PlayableOutputHandle_GetPlayableOutputType_Injected();
		Register_UnityEngine_Playables_PlayableOutputHandle_GetPlayableOutputType_Injected();

		//System.Void UnityEngine.Playables.PlayableOutputHandle::GetSourcePlayable_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableOutputHandle_GetSourcePlayable_Injected();
		Register_UnityEngine_Playables_PlayableOutputHandle_GetSourcePlayable_Injected();

		//System.Void UnityEngine.Playables.PlayableOutputHandle::SetReferenceObject_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Object)
		void Register_UnityEngine_Playables_PlayableOutputHandle_SetReferenceObject_Injected();
		Register_UnityEngine_Playables_PlayableOutputHandle_SetReferenceObject_Injected();

		//System.Void UnityEngine.Playables.PlayableOutputHandle::SetSourceOutputPort_Injected(UnityEngine.Playables.PlayableOutputHandle&,System.Int32)
		void Register_UnityEngine_Playables_PlayableOutputHandle_SetSourceOutputPort_Injected();
		Register_UnityEngine_Playables_PlayableOutputHandle_SetSourceOutputPort_Injected();

		//System.Void UnityEngine.Playables.PlayableOutputHandle::SetSourcePlayable_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableOutputHandle_SetSourcePlayable_Injected();
		Register_UnityEngine_Playables_PlayableOutputHandle_SetSourcePlayable_Injected();

		//System.Void UnityEngine.Playables.PlayableOutputHandle::SetWeight_Injected(UnityEngine.Playables.PlayableOutputHandle&,System.Single)
		void Register_UnityEngine_Playables_PlayableOutputHandle_SetWeight_Injected();
		Register_UnityEngine_Playables_PlayableOutputHandle_SetWeight_Injected();

	//End Registrations for type : UnityEngine.Playables.PlayableOutputHandle

	//Start Registrations for type : UnityEngine.PlayerConnectionInternal

		//System.Boolean UnityEngine.PlayerConnectionInternal::IsConnected()
		void Register_UnityEngine_PlayerConnectionInternal_IsConnected();
		Register_UnityEngine_PlayerConnectionInternal_IsConnected();

		//System.Void UnityEngine.PlayerConnectionInternal::DisconnectAll()
		void Register_UnityEngine_PlayerConnectionInternal_DisconnectAll();
		Register_UnityEngine_PlayerConnectionInternal_DisconnectAll();

		//System.Void UnityEngine.PlayerConnectionInternal::Initialize()
		void Register_UnityEngine_PlayerConnectionInternal_Initialize();
		Register_UnityEngine_PlayerConnectionInternal_Initialize();

		//System.Void UnityEngine.PlayerConnectionInternal::PollInternal()
		void Register_UnityEngine_PlayerConnectionInternal_PollInternal();
		Register_UnityEngine_PlayerConnectionInternal_PollInternal();

		//System.Void UnityEngine.PlayerConnectionInternal::RegisterInternal(System.String)
		void Register_UnityEngine_PlayerConnectionInternal_RegisterInternal();
		Register_UnityEngine_PlayerConnectionInternal_RegisterInternal();

		//System.Void UnityEngine.PlayerConnectionInternal::SendMessage(System.String,System.Byte[],System.Int32)
		void Register_UnityEngine_PlayerConnectionInternal_SendMessage();
		Register_UnityEngine_PlayerConnectionInternal_SendMessage();

		//System.Void UnityEngine.PlayerConnectionInternal::UnregisterInternal(System.String)
		void Register_UnityEngine_PlayerConnectionInternal_UnregisterInternal();
		Register_UnityEngine_PlayerConnectionInternal_UnregisterInternal();

	//End Registrations for type : UnityEngine.PlayerConnectionInternal

	//Start Registrations for type : UnityEngine.PolygonCollider2D

		//System.Int32 UnityEngine.PolygonCollider2D::get_pathCount()
		void Register_UnityEngine_PolygonCollider2D_get_pathCount();
		Register_UnityEngine_PolygonCollider2D_get_pathCount();

		//UnityEngine.Vector2[] UnityEngine.PolygonCollider2D::GetPath_Internal(System.Int32)
		void Register_UnityEngine_PolygonCollider2D_GetPath_Internal();
		Register_UnityEngine_PolygonCollider2D_GetPath_Internal();

	//End Registrations for type : UnityEngine.PolygonCollider2D

	//Start Registrations for type : UnityEngine.PropertyNameUtils

		//System.Void UnityEngine.PropertyNameUtils::PropertyNameFromString_Injected(System.String,UnityEngine.PropertyName&)
		void Register_UnityEngine_PropertyNameUtils_PropertyNameFromString_Injected();
		Register_UnityEngine_PropertyNameUtils_PropertyNameFromString_Injected();

	//End Registrations for type : UnityEngine.PropertyNameUtils

	//Start Registrations for type : UnityEngine.QualitySettings

		//UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
		void Register_UnityEngine_QualitySettings_get_activeColorSpace();
		Register_UnityEngine_QualitySettings_get_activeColorSpace();

	//End Registrations for type : UnityEngine.QualitySettings

	//Start Registrations for type : UnityEngine.Quaternion

		//System.Void UnityEngine.Quaternion::AngleAxis_Injected(System.Single,UnityEngine.Vector3&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_AngleAxis_Injected();
		Register_UnityEngine_Quaternion_AngleAxis_Injected();

		//System.Void UnityEngine.Quaternion::FromToRotation_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_FromToRotation_Injected();
		Register_UnityEngine_Quaternion_FromToRotation_Injected();

		//System.Void UnityEngine.Quaternion::Internal_FromEulerRad_Injected(UnityEngine.Vector3&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_Internal_FromEulerRad_Injected();
		Register_UnityEngine_Quaternion_Internal_FromEulerRad_Injected();

		//System.Void UnityEngine.Quaternion::Internal_ToEulerRad_Injected(UnityEngine.Quaternion&,UnityEngine.Vector3&)
		void Register_UnityEngine_Quaternion_Internal_ToEulerRad_Injected();
		Register_UnityEngine_Quaternion_Internal_ToEulerRad_Injected();

		//System.Void UnityEngine.Quaternion::Inverse_Injected(UnityEngine.Quaternion&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_Inverse_Injected();
		Register_UnityEngine_Quaternion_Inverse_Injected();

		//System.Void UnityEngine.Quaternion::LookRotation_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_LookRotation_Injected();
		Register_UnityEngine_Quaternion_LookRotation_Injected();

		//System.Void UnityEngine.Quaternion::SlerpUnclamped_Injected(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_SlerpUnclamped_Injected();
		Register_UnityEngine_Quaternion_SlerpUnclamped_Injected();

		//System.Void UnityEngine.Quaternion::Slerp_Injected(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_Slerp_Injected();
		Register_UnityEngine_Quaternion_Slerp_Injected();

	//End Registrations for type : UnityEngine.Quaternion

	//Start Registrations for type : UnityEngine.Random

		//System.Int32 UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)
		void Register_UnityEngine_Random_RandomRangeInt();
		Register_UnityEngine_Random_RandomRangeInt();

		//System.Single UnityEngine.Random::Range(System.Single,System.Single)
		void Register_UnityEngine_Random_Range();
		Register_UnityEngine_Random_Range();

		//System.Single UnityEngine.Random::get_value()
		void Register_UnityEngine_Random_get_value();
		Register_UnityEngine_Random_get_value();

	//End Registrations for type : UnityEngine.Random

	//Start Registrations for type : UnityEngine.RectOffset

		//System.Int32 UnityEngine.RectOffset::get_bottom()
		void Register_UnityEngine_RectOffset_get_bottom();
		Register_UnityEngine_RectOffset_get_bottom();

		//System.Int32 UnityEngine.RectOffset::get_horizontal()
		void Register_UnityEngine_RectOffset_get_horizontal();
		Register_UnityEngine_RectOffset_get_horizontal();

		//System.Int32 UnityEngine.RectOffset::get_left()
		void Register_UnityEngine_RectOffset_get_left();
		Register_UnityEngine_RectOffset_get_left();

		//System.Int32 UnityEngine.RectOffset::get_right()
		void Register_UnityEngine_RectOffset_get_right();
		Register_UnityEngine_RectOffset_get_right();

		//System.Int32 UnityEngine.RectOffset::get_top()
		void Register_UnityEngine_RectOffset_get_top();
		Register_UnityEngine_RectOffset_get_top();

		//System.Int32 UnityEngine.RectOffset::get_vertical()
		void Register_UnityEngine_RectOffset_get_vertical();
		Register_UnityEngine_RectOffset_get_vertical();

		//System.IntPtr UnityEngine.RectOffset::InternalCreate()
		void Register_UnityEngine_RectOffset_InternalCreate();
		Register_UnityEngine_RectOffset_InternalCreate();

		//System.Void UnityEngine.RectOffset::InternalDestroy(System.IntPtr)
		void Register_UnityEngine_RectOffset_InternalDestroy();
		Register_UnityEngine_RectOffset_InternalDestroy();

		//System.Void UnityEngine.RectOffset::Remove_Injected(UnityEngine.Rect&,UnityEngine.Rect&)
		void Register_UnityEngine_RectOffset_Remove_Injected();
		Register_UnityEngine_RectOffset_Remove_Injected();

	//End Registrations for type : UnityEngine.RectOffset

	//Start Registrations for type : UnityEngine.RectTransform

		//System.Void UnityEngine.RectTransform::ForceUpdateRectTransforms()
		void Register_UnityEngine_RectTransform_ForceUpdateRectTransforms();
		Register_UnityEngine_RectTransform_ForceUpdateRectTransforms();

		//System.Void UnityEngine.RectTransform::get_anchorMax_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_get_anchorMax_Injected();
		Register_UnityEngine_RectTransform_get_anchorMax_Injected();

		//System.Void UnityEngine.RectTransform::get_anchorMin_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_get_anchorMin_Injected();
		Register_UnityEngine_RectTransform_get_anchorMin_Injected();

		//System.Void UnityEngine.RectTransform::get_anchoredPosition_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_get_anchoredPosition_Injected();
		Register_UnityEngine_RectTransform_get_anchoredPosition_Injected();

		//System.Void UnityEngine.RectTransform::get_pivot_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_get_pivot_Injected();
		Register_UnityEngine_RectTransform_get_pivot_Injected();

		//System.Void UnityEngine.RectTransform::get_rect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_RectTransform_get_rect_Injected();
		Register_UnityEngine_RectTransform_get_rect_Injected();

		//System.Void UnityEngine.RectTransform::get_sizeDelta_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_get_sizeDelta_Injected();
		Register_UnityEngine_RectTransform_get_sizeDelta_Injected();

		//System.Void UnityEngine.RectTransform::set_anchorMax_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_set_anchorMax_Injected();
		Register_UnityEngine_RectTransform_set_anchorMax_Injected();

		//System.Void UnityEngine.RectTransform::set_anchorMin_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_set_anchorMin_Injected();
		Register_UnityEngine_RectTransform_set_anchorMin_Injected();

		//System.Void UnityEngine.RectTransform::set_anchoredPosition_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_set_anchoredPosition_Injected();
		Register_UnityEngine_RectTransform_set_anchoredPosition_Injected();

		//System.Void UnityEngine.RectTransform::set_pivot_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_set_pivot_Injected();
		Register_UnityEngine_RectTransform_set_pivot_Injected();

		//System.Void UnityEngine.RectTransform::set_sizeDelta_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_set_sizeDelta_Injected();
		Register_UnityEngine_RectTransform_set_sizeDelta_Injected();

	//End Registrations for type : UnityEngine.RectTransform

	//Start Registrations for type : UnityEngine.RectTransformUtility

		//System.Boolean UnityEngine.RectTransformUtility::PointInRectangle_Injected(UnityEngine.Vector2&,UnityEngine.RectTransform,UnityEngine.Camera)
		void Register_UnityEngine_RectTransformUtility_PointInRectangle_Injected();
		Register_UnityEngine_RectTransformUtility_PointInRectangle_Injected();

		//System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint_Injected(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransformUtility_PixelAdjustPoint_Injected();
		Register_UnityEngine_RectTransformUtility_PixelAdjustPoint_Injected();

		//System.Void UnityEngine.RectTransformUtility::PixelAdjustRect_Injected(UnityEngine.RectTransform,UnityEngine.Canvas,UnityEngine.Rect&)
		void Register_UnityEngine_RectTransformUtility_PixelAdjustRect_Injected();
		Register_UnityEngine_RectTransformUtility_PixelAdjustRect_Injected();

	//End Registrations for type : UnityEngine.RectTransformUtility

	//Start Registrations for type : UnityEngine.RemoteConfigSettings

		//System.Void UnityEngine.RemoteConfigSettings::Internal_Destroy(System.IntPtr)
		void Register_UnityEngine_RemoteConfigSettings_Internal_Destroy();
		Register_UnityEngine_RemoteConfigSettings_Internal_Destroy();

	//End Registrations for type : UnityEngine.RemoteConfigSettings

	//Start Registrations for type : UnityEngine.Renderer

		//System.Int32 UnityEngine.Renderer::get_sortingLayerID()
		void Register_UnityEngine_Renderer_get_sortingLayerID();
		Register_UnityEngine_Renderer_get_sortingLayerID();

		//System.Int32 UnityEngine.Renderer::get_sortingOrder()
		void Register_UnityEngine_Renderer_get_sortingOrder();
		Register_UnityEngine_Renderer_get_sortingOrder();

		//System.Void UnityEngine.Renderer::SetMaterial(UnityEngine.Material)
		void Register_UnityEngine_Renderer_SetMaterial();
		Register_UnityEngine_Renderer_SetMaterial();

		//System.Void UnityEngine.Renderer::set_receiveShadows(System.Boolean)
		void Register_UnityEngine_Renderer_set_receiveShadows();
		Register_UnityEngine_Renderer_set_receiveShadows();

		//System.Void UnityEngine.Renderer::set_shadowCastingMode(UnityEngine.Rendering.ShadowCastingMode)
		void Register_UnityEngine_Renderer_set_shadowCastingMode();
		Register_UnityEngine_Renderer_set_shadowCastingMode();

		//System.Void UnityEngine.Renderer::set_sortingLayerID(System.Int32)
		void Register_UnityEngine_Renderer_set_sortingLayerID();
		Register_UnityEngine_Renderer_set_sortingLayerID();

		//System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
		void Register_UnityEngine_Renderer_set_sortingOrder();
		Register_UnityEngine_Renderer_set_sortingOrder();

		//UnityEngine.Material UnityEngine.Renderer::GetMaterial()
		void Register_UnityEngine_Renderer_GetMaterial();
		Register_UnityEngine_Renderer_GetMaterial();

		//UnityEngine.Material UnityEngine.Renderer::GetSharedMaterial()
		void Register_UnityEngine_Renderer_GetSharedMaterial();
		Register_UnityEngine_Renderer_GetSharedMaterial();

	//End Registrations for type : UnityEngine.Renderer

	//Start Registrations for type : UnityEngine.Rendering.CommandBuffer

		//System.IntPtr UnityEngine.Rendering.CommandBuffer::InitBuffer()
		void Register_UnityEngine_Rendering_CommandBuffer_InitBuffer();
		Register_UnityEngine_Rendering_CommandBuffer_InitBuffer();

		//System.Void UnityEngine.Rendering.CommandBuffer::BeginSample(System.String)
		void Register_UnityEngine_Rendering_CommandBuffer_BeginSample();
		Register_UnityEngine_Rendering_CommandBuffer_BeginSample();

		//System.Void UnityEngine.Rendering.CommandBuffer::Blit_Identifier_Injected(UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Material,System.Int32,UnityEngine.Vector2&,UnityEngine.Vector2&)
		void Register_UnityEngine_Rendering_CommandBuffer_Blit_Identifier_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_Blit_Identifier_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::Blit_Texture_Injected(UnityEngine.Texture,UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Material,System.Int32,UnityEngine.Vector2&,UnityEngine.Vector2&)
		void Register_UnityEngine_Rendering_CommandBuffer_Blit_Texture_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_Blit_Texture_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::Clear()
		void Register_UnityEngine_Rendering_CommandBuffer_Clear();
		Register_UnityEngine_Rendering_CommandBuffer_Clear();

		//System.Void UnityEngine.Rendering.CommandBuffer::ClearRenderTarget_Injected(System.Boolean,System.Boolean,UnityEngine.Color&,System.Single)
		void Register_UnityEngine_Rendering_CommandBuffer_ClearRenderTarget_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_ClearRenderTarget_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::CopyTexture_Internal(UnityEngine.Rendering.RenderTargetIdentifier&,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Rendering.RenderTargetIdentifier&,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_CopyTexture_Internal();
		Register_UnityEngine_Rendering_CommandBuffer_CopyTexture_Internal();

		//System.Void UnityEngine.Rendering.CommandBuffer::EndSample(System.String)
		void Register_UnityEngine_Rendering_CommandBuffer_EndSample();
		Register_UnityEngine_Rendering_CommandBuffer_EndSample();

		//System.Void UnityEngine.Rendering.CommandBuffer::GetTemporaryRT(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.FilterMode,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite,System.Int32,System.Boolean,UnityEngine.RenderTextureMemoryless,System.Boolean)
		void Register_UnityEngine_Rendering_CommandBuffer_GetTemporaryRT();
		Register_UnityEngine_Rendering_CommandBuffer_GetTemporaryRT();

		//System.Void UnityEngine.Rendering.CommandBuffer::GetTemporaryRTWithDescriptor_Injected(System.Int32,UnityEngine.RenderTextureDescriptor&,UnityEngine.FilterMode)
		void Register_UnityEngine_Rendering_CommandBuffer_GetTemporaryRTWithDescriptor_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_GetTemporaryRTWithDescriptor_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::Internal_DispatchCompute(UnityEngine.ComputeShader,System.Int32,System.Int32,System.Int32,System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_Internal_DispatchCompute();
		Register_UnityEngine_Rendering_CommandBuffer_Internal_DispatchCompute();

		//System.Void UnityEngine.Rendering.CommandBuffer::Internal_DrawMesh_Injected(UnityEngine.Mesh,UnityEngine.Matrix4x4&,UnityEngine.Material,System.Int32,System.Int32,UnityEngine.MaterialPropertyBlock)
		void Register_UnityEngine_Rendering_CommandBuffer_Internal_DrawMesh_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_Internal_DrawMesh_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::Internal_SetComputeFloats(UnityEngine.ComputeShader,System.Int32,System.Single[])
		void Register_UnityEngine_Rendering_CommandBuffer_Internal_SetComputeFloats();
		Register_UnityEngine_Rendering_CommandBuffer_Internal_SetComputeFloats();

		//System.Void UnityEngine.Rendering.CommandBuffer::Internal_SetComputeTextureParam(UnityEngine.ComputeShader,System.Int32,System.Int32,UnityEngine.Rendering.RenderTargetIdentifier&,System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_Internal_SetComputeTextureParam();
		Register_UnityEngine_Rendering_CommandBuffer_Internal_SetComputeTextureParam();

		//System.Void UnityEngine.Rendering.CommandBuffer::ReleaseBuffer()
		void Register_UnityEngine_Rendering_CommandBuffer_ReleaseBuffer();
		Register_UnityEngine_Rendering_CommandBuffer_ReleaseBuffer();

		//System.Void UnityEngine.Rendering.CommandBuffer::ReleaseTemporaryRT(System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_ReleaseTemporaryRT();
		Register_UnityEngine_Rendering_CommandBuffer_ReleaseTemporaryRT();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetComputeBufferParam(UnityEngine.ComputeShader,System.Int32,System.Int32,UnityEngine.ComputeBuffer)
		void Register_UnityEngine_Rendering_CommandBuffer_SetComputeBufferParam();
		Register_UnityEngine_Rendering_CommandBuffer_SetComputeBufferParam();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetComputeVectorParam_Injected(UnityEngine.ComputeShader,System.Int32,UnityEngine.Vector4&)
		void Register_UnityEngine_Rendering_CommandBuffer_SetComputeVectorParam_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_SetComputeVectorParam_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalFloat(System.Int32,System.Single)
		void Register_UnityEngine_Rendering_CommandBuffer_SetGlobalFloat();
		Register_UnityEngine_Rendering_CommandBuffer_SetGlobalFloat();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalTexture_Impl(System.Int32,UnityEngine.Rendering.RenderTargetIdentifier&)
		void Register_UnityEngine_Rendering_CommandBuffer_SetGlobalTexture_Impl();
		Register_UnityEngine_Rendering_CommandBuffer_SetGlobalTexture_Impl();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalVector_Injected(System.Int32,UnityEngine.Vector4&)
		void Register_UnityEngine_Rendering_CommandBuffer_SetGlobalVector_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_SetGlobalVector_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetRenderTargetColorDepth_Internal_Injected(UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Rendering.RenderBufferLoadAction,UnityEngine.Rendering.RenderBufferStoreAction,UnityEngine.Rendering.RenderBufferLoadAction,UnityEngine.Rendering.RenderBufferStoreAction)
		void Register_UnityEngine_Rendering_CommandBuffer_SetRenderTargetColorDepth_Internal_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_SetRenderTargetColorDepth_Internal_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetRenderTargetMulti_Internal_Injected(UnityEngine.Rendering.RenderTargetIdentifier[],UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Rendering.RenderBufferLoadAction[],UnityEngine.Rendering.RenderBufferStoreAction[],UnityEngine.Rendering.RenderBufferLoadAction,UnityEngine.Rendering.RenderBufferStoreAction)
		void Register_UnityEngine_Rendering_CommandBuffer_SetRenderTargetMulti_Internal_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_SetRenderTargetMulti_Internal_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetRenderTargetSingle_Internal_Injected(UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Rendering.RenderBufferLoadAction,UnityEngine.Rendering.RenderBufferStoreAction,UnityEngine.Rendering.RenderBufferLoadAction,UnityEngine.Rendering.RenderBufferStoreAction)
		void Register_UnityEngine_Rendering_CommandBuffer_SetRenderTargetSingle_Internal_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_SetRenderTargetSingle_Internal_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetViewport_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_Rendering_CommandBuffer_SetViewport_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_SetViewport_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::set_name(System.String)
		void Register_UnityEngine_Rendering_CommandBuffer_set_name();
		Register_UnityEngine_Rendering_CommandBuffer_set_name();

	//End Registrations for type : UnityEngine.Rendering.CommandBuffer

	//Start Registrations for type : UnityEngine.Rendering.GraphicsSettings

		//UnityEngine.Rendering.BuiltinShaderMode UnityEngine.Rendering.GraphicsSettings::GetShaderMode(UnityEngine.Rendering.BuiltinShaderType)
		void Register_UnityEngine_Rendering_GraphicsSettings_GetShaderMode();
		Register_UnityEngine_Rendering_GraphicsSettings_GetShaderMode();

		//UnityEngine.ScriptableObject UnityEngine.Rendering.GraphicsSettings::get_INTERNAL_renderPipelineAsset()
		void Register_UnityEngine_Rendering_GraphicsSettings_get_INTERNAL_renderPipelineAsset();
		Register_UnityEngine_Rendering_GraphicsSettings_get_INTERNAL_renderPipelineAsset();

	//End Registrations for type : UnityEngine.Rendering.GraphicsSettings

	//Start Registrations for type : UnityEngine.RenderSettings

		//System.Boolean UnityEngine.RenderSettings::get_fog()
		void Register_UnityEngine_RenderSettings_get_fog();
		Register_UnityEngine_RenderSettings_get_fog();

		//System.Single UnityEngine.RenderSettings::get_fogDensity()
		void Register_UnityEngine_RenderSettings_get_fogDensity();
		Register_UnityEngine_RenderSettings_get_fogDensity();

		//System.Single UnityEngine.RenderSettings::get_fogEndDistance()
		void Register_UnityEngine_RenderSettings_get_fogEndDistance();
		Register_UnityEngine_RenderSettings_get_fogEndDistance();

		//System.Single UnityEngine.RenderSettings::get_fogStartDistance()
		void Register_UnityEngine_RenderSettings_get_fogStartDistance();
		Register_UnityEngine_RenderSettings_get_fogStartDistance();

		//System.Void UnityEngine.RenderSettings::get_fogColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_RenderSettings_get_fogColor_Injected();
		Register_UnityEngine_RenderSettings_get_fogColor_Injected();

	//End Registrations for type : UnityEngine.RenderSettings

	//Start Registrations for type : UnityEngine.RenderTexture

		//System.Boolean UnityEngine.RenderTexture::Create()
		void Register_UnityEngine_RenderTexture_Create();
		Register_UnityEngine_RenderTexture_Create();

		//System.Boolean UnityEngine.RenderTexture::IsCreated()
		void Register_UnityEngine_RenderTexture_IsCreated();
		Register_UnityEngine_RenderTexture_IsCreated();

		//System.Boolean UnityEngine.RenderTexture::get_enableRandomWrite()
		void Register_UnityEngine_RenderTexture_get_enableRandomWrite();
		Register_UnityEngine_RenderTexture_get_enableRandomWrite();

		//System.Int32 UnityEngine.RenderTexture::get_height()
		void Register_UnityEngine_RenderTexture_get_height();
		Register_UnityEngine_RenderTexture_get_height();

		//System.Int32 UnityEngine.RenderTexture::get_volumeDepth()
		void Register_UnityEngine_RenderTexture_get_volumeDepth();
		Register_UnityEngine_RenderTexture_get_volumeDepth();

		//System.Int32 UnityEngine.RenderTexture::get_width()
		void Register_UnityEngine_RenderTexture_get_width();
		Register_UnityEngine_RenderTexture_get_width();

		//System.Void UnityEngine.RenderTexture::GetDescriptor_Injected(UnityEngine.RenderTextureDescriptor&)
		void Register_UnityEngine_RenderTexture_GetDescriptor_Injected();
		Register_UnityEngine_RenderTexture_GetDescriptor_Injected();

		//System.Void UnityEngine.RenderTexture::Internal_Create(UnityEngine.RenderTexture)
		void Register_UnityEngine_RenderTexture_Internal_Create();
		Register_UnityEngine_RenderTexture_Internal_Create();

		//System.Void UnityEngine.RenderTexture::Release()
		void Register_UnityEngine_RenderTexture_Release();
		Register_UnityEngine_RenderTexture_Release();

		//System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
		void Register_UnityEngine_RenderTexture_ReleaseTemporary();
		Register_UnityEngine_RenderTexture_ReleaseTemporary();

		//System.Void UnityEngine.RenderTexture::SetActive(UnityEngine.RenderTexture)
		void Register_UnityEngine_RenderTexture_SetActive();
		Register_UnityEngine_RenderTexture_SetActive();

		//System.Void UnityEngine.RenderTexture::SetRenderTextureDescriptor_Injected(UnityEngine.RenderTextureDescriptor&)
		void Register_UnityEngine_RenderTexture_SetRenderTextureDescriptor_Injected();
		Register_UnityEngine_RenderTexture_SetRenderTextureDescriptor_Injected();

		//System.Void UnityEngine.RenderTexture::SetSRGBReadWrite(System.Boolean)
		void Register_UnityEngine_RenderTexture_SetSRGBReadWrite();
		Register_UnityEngine_RenderTexture_SetSRGBReadWrite();

		//System.Void UnityEngine.RenderTexture::set_autoGenerateMips(System.Boolean)
		void Register_UnityEngine_RenderTexture_set_autoGenerateMips();
		Register_UnityEngine_RenderTexture_set_autoGenerateMips();

		//System.Void UnityEngine.RenderTexture::set_depth(System.Int32)
		void Register_UnityEngine_RenderTexture_set_depth();
		Register_UnityEngine_RenderTexture_set_depth();

		//System.Void UnityEngine.RenderTexture::set_dimension(UnityEngine.Rendering.TextureDimension)
		void Register_UnityEngine_RenderTexture_set_dimension();
		Register_UnityEngine_RenderTexture_set_dimension();

		//System.Void UnityEngine.RenderTexture::set_enableRandomWrite(System.Boolean)
		void Register_UnityEngine_RenderTexture_set_enableRandomWrite();
		Register_UnityEngine_RenderTexture_set_enableRandomWrite();

		//System.Void UnityEngine.RenderTexture::set_format(UnityEngine.RenderTextureFormat)
		void Register_UnityEngine_RenderTexture_set_format();
		Register_UnityEngine_RenderTexture_set_format();

		//System.Void UnityEngine.RenderTexture::set_height(System.Int32)
		void Register_UnityEngine_RenderTexture_set_height();
		Register_UnityEngine_RenderTexture_set_height();

		//System.Void UnityEngine.RenderTexture::set_useMipMap(System.Boolean)
		void Register_UnityEngine_RenderTexture_set_useMipMap();
		Register_UnityEngine_RenderTexture_set_useMipMap();

		//System.Void UnityEngine.RenderTexture::set_volumeDepth(System.Int32)
		void Register_UnityEngine_RenderTexture_set_volumeDepth();
		Register_UnityEngine_RenderTexture_set_volumeDepth();

		//System.Void UnityEngine.RenderTexture::set_width(System.Int32)
		void Register_UnityEngine_RenderTexture_set_width();
		Register_UnityEngine_RenderTexture_set_width();

		//UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary_Internal_Injected(UnityEngine.RenderTextureDescriptor&)
		void Register_UnityEngine_RenderTexture_GetTemporary_Internal_Injected();
		Register_UnityEngine_RenderTexture_GetTemporary_Internal_Injected();

		//UnityEngine.RenderTextureFormat UnityEngine.RenderTexture::get_format()
		void Register_UnityEngine_RenderTexture_get_format();
		Register_UnityEngine_RenderTexture_get_format();

		//UnityEngine.Rendering.TextureDimension UnityEngine.RenderTexture::get_dimension()
		void Register_UnityEngine_RenderTexture_get_dimension();
		Register_UnityEngine_RenderTexture_get_dimension();

	//End Registrations for type : UnityEngine.RenderTexture

	//Start Registrations for type : UnityEngine.Resources

		//UnityEngine.Object UnityEngine.Resources::GetBuiltinResource(System.Type,System.String)
		void Register_UnityEngine_Resources_GetBuiltinResource();
		Register_UnityEngine_Resources_GetBuiltinResource();

		//UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
		void Register_UnityEngine_Resources_Load();
		Register_UnityEngine_Resources_Load();

	//End Registrations for type : UnityEngine.Resources

	//Start Registrations for type : UnityEngine.Rigidbody

		//System.Single UnityEngine.Rigidbody::get_mass()
		void Register_UnityEngine_Rigidbody_get_mass();
		Register_UnityEngine_Rigidbody_get_mass();

		//System.Void UnityEngine.Rigidbody::MovePosition_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Rigidbody_MovePosition_Injected();
		Register_UnityEngine_Rigidbody_MovePosition_Injected();

		//System.Void UnityEngine.Rigidbody::MoveRotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Rigidbody_MoveRotation_Injected();
		Register_UnityEngine_Rigidbody_MoveRotation_Injected();

		//System.Void UnityEngine.Rigidbody::get_position_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Rigidbody_get_position_Injected();
		Register_UnityEngine_Rigidbody_get_position_Injected();

		//System.Void UnityEngine.Rigidbody::get_rotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Rigidbody_get_rotation_Injected();
		Register_UnityEngine_Rigidbody_get_rotation_Injected();

		//System.Void UnityEngine.Rigidbody::get_velocity_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Rigidbody_get_velocity_Injected();
		Register_UnityEngine_Rigidbody_get_velocity_Injected();

		//System.Void UnityEngine.Rigidbody::set_detectCollisions(System.Boolean)
		void Register_UnityEngine_Rigidbody_set_detectCollisions();
		Register_UnityEngine_Rigidbody_set_detectCollisions();

		//System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
		void Register_UnityEngine_Rigidbody_set_isKinematic();
		Register_UnityEngine_Rigidbody_set_isKinematic();

	//End Registrations for type : UnityEngine.Rigidbody

	//Start Registrations for type : UnityEngine.Rigidbody2D

		//System.Single UnityEngine.Rigidbody2D::get_mass()
		void Register_UnityEngine_Rigidbody2D_get_mass();
		Register_UnityEngine_Rigidbody2D_get_mass();

		//System.Void UnityEngine.Rigidbody2D::get_velocity_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Rigidbody2D_get_velocity_Injected();
		Register_UnityEngine_Rigidbody2D_get_velocity_Injected();

	//End Registrations for type : UnityEngine.Rigidbody2D

	//Start Registrations for type : UnityEngine.SceneManagement.Scene

		//System.Boolean UnityEngine.SceneManagement.Scene::GetIsLoadedInternal(System.Int32)
		void Register_UnityEngine_SceneManagement_Scene_GetIsLoadedInternal();
		Register_UnityEngine_SceneManagement_Scene_GetIsLoadedInternal();

		//System.Boolean UnityEngine.SceneManagement.Scene::IsValidInternal(System.Int32)
		void Register_UnityEngine_SceneManagement_Scene_IsValidInternal();
		Register_UnityEngine_SceneManagement_Scene_IsValidInternal();

		//System.Int32 UnityEngine.SceneManagement.Scene::GetRootCountInternal(System.Int32)
		void Register_UnityEngine_SceneManagement_Scene_GetRootCountInternal();
		Register_UnityEngine_SceneManagement_Scene_GetRootCountInternal();

		//System.String UnityEngine.SceneManagement.Scene::GetNameInternal(System.Int32)
		void Register_UnityEngine_SceneManagement_Scene_GetNameInternal();
		Register_UnityEngine_SceneManagement_Scene_GetNameInternal();

		//System.Void UnityEngine.SceneManagement.Scene::GetRootGameObjectsInternal(System.Int32,System.Object)
		void Register_UnityEngine_SceneManagement_Scene_GetRootGameObjectsInternal();
		Register_UnityEngine_SceneManagement_Scene_GetRootGameObjectsInternal();

	//End Registrations for type : UnityEngine.SceneManagement.Scene

	//Start Registrations for type : UnityEngine.SceneManagement.SceneManager

		//System.Void UnityEngine.SceneManagement.SceneManager::GetActiveScene_Injected(UnityEngine.SceneManagement.Scene&)
		void Register_UnityEngine_SceneManagement_SceneManager_GetActiveScene_Injected();
		Register_UnityEngine_SceneManagement_SceneManager_GetActiveScene_Injected();

	//End Registrations for type : UnityEngine.SceneManagement.SceneManager

	//Start Registrations for type : UnityEngine.Screen

		//System.Int32 UnityEngine.Screen::get_height()
		void Register_UnityEngine_Screen_get_height();
		Register_UnityEngine_Screen_get_height();

		//System.Int32 UnityEngine.Screen::get_width()
		void Register_UnityEngine_Screen_get_width();
		Register_UnityEngine_Screen_get_width();

		//System.Single UnityEngine.Screen::get_dpi()
		void Register_UnityEngine_Screen_get_dpi();
		Register_UnityEngine_Screen_get_dpi();

	//End Registrations for type : UnityEngine.Screen

	//Start Registrations for type : UnityEngine.ScriptableObject

		//System.Void UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)
		void Register_UnityEngine_ScriptableObject_CreateScriptableObject();
		Register_UnityEngine_ScriptableObject_CreateScriptableObject();

		//UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateScriptableObjectInstanceFromType(System.Type)
		void Register_UnityEngine_ScriptableObject_CreateScriptableObjectInstanceFromType();
		Register_UnityEngine_ScriptableObject_CreateScriptableObjectInstanceFromType();

	//End Registrations for type : UnityEngine.ScriptableObject

	//Start Registrations for type : UnityEngine.Shader

		//System.Boolean UnityEngine.Shader::get_isSupported()
		void Register_UnityEngine_Shader_get_isSupported();
		Register_UnityEngine_Shader_get_isSupported();

		//System.Int32 UnityEngine.Shader::PropertyToID(System.String)
		void Register_UnityEngine_Shader_PropertyToID();
		Register_UnityEngine_Shader_PropertyToID();

		//System.Void UnityEngine.Shader::SetGlobalFloatImpl(System.Int32,System.Single)
		void Register_UnityEngine_Shader_SetGlobalFloatImpl();
		Register_UnityEngine_Shader_SetGlobalFloatImpl();

		//UnityEngine.Shader UnityEngine.Shader::Find(System.String)
		void Register_UnityEngine_Shader_Find();
		Register_UnityEngine_Shader_Find();

	//End Registrations for type : UnityEngine.Shader

	//Start Registrations for type : UnityEngine.SortingLayer

		//System.Int32 UnityEngine.SortingLayer::GetLayerValueFromID(System.Int32)
		void Register_UnityEngine_SortingLayer_GetLayerValueFromID();
		Register_UnityEngine_SortingLayer_GetLayerValueFromID();

	//End Registrations for type : UnityEngine.SortingLayer

	//Start Registrations for type : UnityEngine.SphereCollider

		//System.Single UnityEngine.SphereCollider::get_radius()
		void Register_UnityEngine_SphereCollider_get_radius();
		Register_UnityEngine_SphereCollider_get_radius();

		//System.Void UnityEngine.SphereCollider::get_center_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_SphereCollider_get_center_Injected();
		Register_UnityEngine_SphereCollider_get_center_Injected();

		//System.Void UnityEngine.SphereCollider::set_radius(System.Single)
		void Register_UnityEngine_SphereCollider_set_radius();
		Register_UnityEngine_SphereCollider_set_radius();

	//End Registrations for type : UnityEngine.SphereCollider

	//Start Registrations for type : UnityEngine.Sprite

		//System.Int32 UnityEngine.Sprite::GetPacked()
		void Register_UnityEngine_Sprite_GetPacked();
		Register_UnityEngine_Sprite_GetPacked();

		//System.Int32 UnityEngine.Sprite::GetPackingMode()
		void Register_UnityEngine_Sprite_GetPackingMode();
		Register_UnityEngine_Sprite_GetPackingMode();

		//System.Single UnityEngine.Sprite::get_pixelsPerUnit()
		void Register_UnityEngine_Sprite_get_pixelsPerUnit();
		Register_UnityEngine_Sprite_get_pixelsPerUnit();

		//System.UInt16[] UnityEngine.Sprite::get_triangles()
		void Register_UnityEngine_Sprite_get_triangles();
		Register_UnityEngine_Sprite_get_triangles();

		//System.Void UnityEngine.Sprite::GetInnerUVs_Injected(UnityEngine.Vector4&)
		void Register_UnityEngine_Sprite_GetInnerUVs_Injected();
		Register_UnityEngine_Sprite_GetInnerUVs_Injected();

		//System.Void UnityEngine.Sprite::GetOuterUVs_Injected(UnityEngine.Vector4&)
		void Register_UnityEngine_Sprite_GetOuterUVs_Injected();
		Register_UnityEngine_Sprite_GetOuterUVs_Injected();

		//System.Void UnityEngine.Sprite::GetPadding_Injected(UnityEngine.Vector4&)
		void Register_UnityEngine_Sprite_GetPadding_Injected();
		Register_UnityEngine_Sprite_GetPadding_Injected();

		//System.Void UnityEngine.Sprite::GetTextureRect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_Sprite_GetTextureRect_Injected();
		Register_UnityEngine_Sprite_GetTextureRect_Injected();

		//System.Void UnityEngine.Sprite::get_border_Injected(UnityEngine.Vector4&)
		void Register_UnityEngine_Sprite_get_border_Injected();
		Register_UnityEngine_Sprite_get_border_Injected();

		//System.Void UnityEngine.Sprite::get_bounds_Injected(UnityEngine.Bounds&)
		void Register_UnityEngine_Sprite_get_bounds_Injected();
		Register_UnityEngine_Sprite_get_bounds_Injected();

		//System.Void UnityEngine.Sprite::get_pivot_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Sprite_get_pivot_Injected();
		Register_UnityEngine_Sprite_get_pivot_Injected();

		//System.Void UnityEngine.Sprite::get_rect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_Sprite_get_rect_Injected();
		Register_UnityEngine_Sprite_get_rect_Injected();

		//UnityEngine.Texture2D UnityEngine.Sprite::get_associatedAlphaSplitTexture()
		void Register_UnityEngine_Sprite_get_associatedAlphaSplitTexture();
		Register_UnityEngine_Sprite_get_associatedAlphaSplitTexture();

		//UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
		void Register_UnityEngine_Sprite_get_texture();
		Register_UnityEngine_Sprite_get_texture();

		//UnityEngine.Vector2[] UnityEngine.Sprite::get_uv()
		void Register_UnityEngine_Sprite_get_uv();
		Register_UnityEngine_Sprite_get_uv();

		//UnityEngine.Vector2[] UnityEngine.Sprite::get_vertices()
		void Register_UnityEngine_Sprite_get_vertices();
		Register_UnityEngine_Sprite_get_vertices();

	//End Registrations for type : UnityEngine.Sprite

	//Start Registrations for type : UnityEngine.SystemInfo

		//System.Boolean UnityEngine.SystemInfo::GetGraphicsUVStartsAtTop()
		void Register_UnityEngine_SystemInfo_GetGraphicsUVStartsAtTop();
		Register_UnityEngine_SystemInfo_GetGraphicsUVStartsAtTop();

		//System.Boolean UnityEngine.SystemInfo::HasRenderTextureNative(UnityEngine.RenderTextureFormat)
		void Register_UnityEngine_SystemInfo_HasRenderTextureNative();
		Register_UnityEngine_SystemInfo_HasRenderTextureNative();

		//System.Boolean UnityEngine.SystemInfo::IsFormatSupported(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)
		void Register_UnityEngine_SystemInfo_IsFormatSupported();
		Register_UnityEngine_SystemInfo_IsFormatSupported();

		//System.Boolean UnityEngine.SystemInfo::Supports3DRenderTextures()
		void Register_UnityEngine_SystemInfo_Supports3DRenderTextures();
		Register_UnityEngine_SystemInfo_Supports3DRenderTextures();

		//System.Boolean UnityEngine.SystemInfo::SupportsComputeShaders()
		void Register_UnityEngine_SystemInfo_SupportsComputeShaders();
		Register_UnityEngine_SystemInfo_SupportsComputeShaders();

		//System.Boolean UnityEngine.SystemInfo::SupportsMotionVectors()
		void Register_UnityEngine_SystemInfo_SupportsMotionVectors();
		Register_UnityEngine_SystemInfo_SupportsMotionVectors();

		//System.Boolean UnityEngine.SystemInfo::SupportsTextureFormatNative(UnityEngine.TextureFormat)
		void Register_UnityEngine_SystemInfo_SupportsTextureFormatNative();
		Register_UnityEngine_SystemInfo_SupportsTextureFormatNative();

		//System.Boolean UnityEngine.SystemInfo::UsesReversedZBuffer()
		void Register_UnityEngine_SystemInfo_UsesReversedZBuffer();
		Register_UnityEngine_SystemInfo_UsesReversedZBuffer();

		//System.Int32 UnityEngine.SystemInfo::GetGraphicsShaderLevel()
		void Register_UnityEngine_SystemInfo_GetGraphicsShaderLevel();
		Register_UnityEngine_SystemInfo_GetGraphicsShaderLevel();

		//System.Int32 UnityEngine.SystemInfo::SupportedRenderTargetCount()
		void Register_UnityEngine_SystemInfo_SupportedRenderTargetCount();
		Register_UnityEngine_SystemInfo_SupportedRenderTargetCount();

		//UnityEngine.OperatingSystemFamily UnityEngine.SystemInfo::GetOperatingSystemFamily()
		void Register_UnityEngine_SystemInfo_GetOperatingSystemFamily();
		Register_UnityEngine_SystemInfo_GetOperatingSystemFamily();

		//UnityEngine.Rendering.CopyTextureSupport UnityEngine.SystemInfo::GetCopyTextureSupport()
		void Register_UnityEngine_SystemInfo_GetCopyTextureSupport();
		Register_UnityEngine_SystemInfo_GetCopyTextureSupport();

		//UnityEngine.Rendering.GraphicsDeviceType UnityEngine.SystemInfo::GetGraphicsDeviceType()
		void Register_UnityEngine_SystemInfo_GetGraphicsDeviceType();
		Register_UnityEngine_SystemInfo_GetGraphicsDeviceType();

	//End Registrations for type : UnityEngine.SystemInfo

	//Start Registrations for type : UnityEngine.TextAsset

		//System.String UnityEngine.TextAsset::get_text()
		void Register_UnityEngine_TextAsset_get_text();
		Register_UnityEngine_TextAsset_get_text();

	//End Registrations for type : UnityEngine.TextAsset

	//Start Registrations for type : UnityEngine.TextGenerator

		//System.Boolean UnityEngine.TextGenerator::Populate_Internal_Injected(System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean,System.Boolean,System.UInt32&)
		void Register_UnityEngine_TextGenerator_Populate_Internal_Injected();
		Register_UnityEngine_TextGenerator_Populate_Internal_Injected();

		//System.Int32 UnityEngine.TextGenerator::get_characterCount()
		void Register_UnityEngine_TextGenerator_get_characterCount();
		Register_UnityEngine_TextGenerator_get_characterCount();

		//System.Int32 UnityEngine.TextGenerator::get_lineCount()
		void Register_UnityEngine_TextGenerator_get_lineCount();
		Register_UnityEngine_TextGenerator_get_lineCount();

		//System.IntPtr UnityEngine.TextGenerator::Internal_Create()
		void Register_UnityEngine_TextGenerator_Internal_Create();
		Register_UnityEngine_TextGenerator_Internal_Create();

		//System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
		void Register_UnityEngine_TextGenerator_GetCharactersInternal();
		Register_UnityEngine_TextGenerator_GetCharactersInternal();

		//System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
		void Register_UnityEngine_TextGenerator_GetLinesInternal();
		Register_UnityEngine_TextGenerator_GetLinesInternal();

		//System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
		void Register_UnityEngine_TextGenerator_GetVerticesInternal();
		Register_UnityEngine_TextGenerator_GetVerticesInternal();

		//System.Void UnityEngine.TextGenerator::Internal_Destroy(System.IntPtr)
		void Register_UnityEngine_TextGenerator_Internal_Destroy();
		Register_UnityEngine_TextGenerator_Internal_Destroy();

		//System.Void UnityEngine.TextGenerator::get_rectExtents_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_TextGenerator_get_rectExtents_Injected();
		Register_UnityEngine_TextGenerator_get_rectExtents_Injected();

	//End Registrations for type : UnityEngine.TextGenerator

	//Start Registrations for type : UnityEngine.Texture

		//System.Boolean UnityEngine.Texture::get_isReadable()
		void Register_UnityEngine_Texture_get_isReadable();
		Register_UnityEngine_Texture_get_isReadable();

		//System.Int32 UnityEngine.Texture::GetDataHeight()
		void Register_UnityEngine_Texture_GetDataHeight();
		Register_UnityEngine_Texture_GetDataHeight();

		//System.Int32 UnityEngine.Texture::GetDataWidth()
		void Register_UnityEngine_Texture_GetDataWidth();
		Register_UnityEngine_Texture_GetDataWidth();

		//System.Void UnityEngine.Texture::get_texelSize_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Texture_get_texelSize_Injected();
		Register_UnityEngine_Texture_get_texelSize_Injected();

		//System.Void UnityEngine.Texture::set_anisoLevel(System.Int32)
		void Register_UnityEngine_Texture_set_anisoLevel();
		Register_UnityEngine_Texture_set_anisoLevel();

		//System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
		void Register_UnityEngine_Texture_set_filterMode();
		Register_UnityEngine_Texture_set_filterMode();

		//System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
		void Register_UnityEngine_Texture_set_wrapMode();
		Register_UnityEngine_Texture_set_wrapMode();

		//UnityEngine.Rendering.TextureDimension UnityEngine.Texture::GetDimension()
		void Register_UnityEngine_Texture_GetDimension();
		Register_UnityEngine_Texture_GetDimension();

		//UnityEngine.TextureWrapMode UnityEngine.Texture::get_wrapMode()
		void Register_UnityEngine_Texture_get_wrapMode();
		Register_UnityEngine_Texture_get_wrapMode();

	//End Registrations for type : UnityEngine.Texture

	//Start Registrations for type : UnityEngine.Texture2D

		//System.Boolean UnityEngine.Texture2D::Internal_CreateImpl(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags,System.IntPtr)
		void Register_UnityEngine_Texture2D_Internal_CreateImpl();
		Register_UnityEngine_Texture2D_Internal_CreateImpl();

		//System.Boolean UnityEngine.Texture2D::get_isReadable()
		void Register_UnityEngine_Texture2D_get_isReadable();
		Register_UnityEngine_Texture2D_get_isReadable();

		//System.Byte[] UnityEngine.Texture2D::GetRawTextureData()
		void Register_UnityEngine_Texture2D_GetRawTextureData();
		Register_UnityEngine_Texture2D_GetRawTextureData();

		//System.Void UnityEngine.Texture2D::ApplyImpl(System.Boolean,System.Boolean)
		void Register_UnityEngine_Texture2D_ApplyImpl();
		Register_UnityEngine_Texture2D_ApplyImpl();

		//System.Void UnityEngine.Texture2D::GetPixelBilinearImpl_Injected(System.Int32,System.Single,System.Single,UnityEngine.Color&)
		void Register_UnityEngine_Texture2D_GetPixelBilinearImpl_Injected();
		Register_UnityEngine_Texture2D_GetPixelBilinearImpl_Injected();

		//System.Void UnityEngine.Texture2D::SetPixelImpl_Injected(System.Int32,System.Int32,System.Int32,UnityEngine.Color&)
		void Register_UnityEngine_Texture2D_SetPixelImpl_Injected();
		Register_UnityEngine_Texture2D_SetPixelImpl_Injected();

		//System.Void UnityEngine.Texture2D::SetPixelsImpl(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color[],System.Int32,System.Int32)
		void Register_UnityEngine_Texture2D_SetPixelsImpl();
		Register_UnityEngine_Texture2D_SetPixelsImpl();

		//UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
		void Register_UnityEngine_Texture2D_get_whiteTexture();
		Register_UnityEngine_Texture2D_get_whiteTexture();

		//UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
		void Register_UnityEngine_Texture2D_get_format();
		Register_UnityEngine_Texture2D_get_format();

	//End Registrations for type : UnityEngine.Texture2D

	//Start Registrations for type : UnityEngine.Texture2DArray

		//System.Boolean UnityEngine.Texture2DArray::Internal_CreateImpl(UnityEngine.Texture2DArray,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
		void Register_UnityEngine_Texture2DArray_Internal_CreateImpl();
		Register_UnityEngine_Texture2DArray_Internal_CreateImpl();

		//System.Boolean UnityEngine.Texture2DArray::get_isReadable()
		void Register_UnityEngine_Texture2DArray_get_isReadable();
		Register_UnityEngine_Texture2DArray_get_isReadable();

	//End Registrations for type : UnityEngine.Texture2DArray

	//Start Registrations for type : UnityEngine.Texture3D

		//System.Boolean UnityEngine.Texture3D::Internal_CreateImpl(UnityEngine.Texture3D,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
		void Register_UnityEngine_Texture3D_Internal_CreateImpl();
		Register_UnityEngine_Texture3D_Internal_CreateImpl();

		//System.Boolean UnityEngine.Texture3D::get_isReadable()
		void Register_UnityEngine_Texture3D_get_isReadable();
		Register_UnityEngine_Texture3D_get_isReadable();

		//System.Int32 UnityEngine.Texture3D::get_depth()
		void Register_UnityEngine_Texture3D_get_depth();
		Register_UnityEngine_Texture3D_get_depth();

		//System.Void UnityEngine.Texture3D::ApplyImpl(System.Boolean,System.Boolean)
		void Register_UnityEngine_Texture3D_ApplyImpl();
		Register_UnityEngine_Texture3D_ApplyImpl();

		//System.Void UnityEngine.Texture3D::SetPixels(UnityEngine.Color[],System.Int32)
		void Register_UnityEngine_Texture3D_SetPixels();
		Register_UnityEngine_Texture3D_SetPixels();

	//End Registrations for type : UnityEngine.Texture3D

	//Start Registrations for type : UnityEngine.Time

		//System.Int32 UnityEngine.Time::get_frameCount()
		void Register_UnityEngine_Time_get_frameCount();
		Register_UnityEngine_Time_get_frameCount();

		//System.Int32 UnityEngine.Time::get_renderedFrameCount()
		void Register_UnityEngine_Time_get_renderedFrameCount();
		Register_UnityEngine_Time_get_renderedFrameCount();

		//System.Single UnityEngine.Time::get_deltaTime()
		void Register_UnityEngine_Time_get_deltaTime();
		Register_UnityEngine_Time_get_deltaTime();

		//System.Single UnityEngine.Time::get_fixedDeltaTime()
		void Register_UnityEngine_Time_get_fixedDeltaTime();
		Register_UnityEngine_Time_get_fixedDeltaTime();

		//System.Single UnityEngine.Time::get_maximumDeltaTime()
		void Register_UnityEngine_Time_get_maximumDeltaTime();
		Register_UnityEngine_Time_get_maximumDeltaTime();

		//System.Single UnityEngine.Time::get_maximumParticleDeltaTime()
		void Register_UnityEngine_Time_get_maximumParticleDeltaTime();
		Register_UnityEngine_Time_get_maximumParticleDeltaTime();

		//System.Single UnityEngine.Time::get_realtimeSinceStartup()
		void Register_UnityEngine_Time_get_realtimeSinceStartup();
		Register_UnityEngine_Time_get_realtimeSinceStartup();

		//System.Single UnityEngine.Time::get_time()
		void Register_UnityEngine_Time_get_time();
		Register_UnityEngine_Time_get_time();

		//System.Single UnityEngine.Time::get_timeScale()
		void Register_UnityEngine_Time_get_timeScale();
		Register_UnityEngine_Time_get_timeScale();

		//System.Single UnityEngine.Time::get_timeSinceLevelLoad()
		void Register_UnityEngine_Time_get_timeSinceLevelLoad();
		Register_UnityEngine_Time_get_timeSinceLevelLoad();

		//System.Single UnityEngine.Time::get_unscaledDeltaTime()
		void Register_UnityEngine_Time_get_unscaledDeltaTime();
		Register_UnityEngine_Time_get_unscaledDeltaTime();

		//System.Single UnityEngine.Time::get_unscaledTime()
		void Register_UnityEngine_Time_get_unscaledTime();
		Register_UnityEngine_Time_get_unscaledTime();

		//System.Void UnityEngine.Time::set_timeScale(System.Single)
		void Register_UnityEngine_Time_set_timeScale();
		Register_UnityEngine_Time_set_timeScale();

	//End Registrations for type : UnityEngine.Time

	//Start Registrations for type : UnityEngine.Transform

		//System.Boolean UnityEngine.Transform::IsChildOf(UnityEngine.Transform)
		void Register_UnityEngine_Transform_IsChildOf();
		Register_UnityEngine_Transform_IsChildOf();

		//System.Boolean UnityEngine.Transform::get_hasChanged()
		void Register_UnityEngine_Transform_get_hasChanged();
		Register_UnityEngine_Transform_get_hasChanged();

		//System.Int32 UnityEngine.Transform::get_childCount()
		void Register_UnityEngine_Transform_get_childCount();
		Register_UnityEngine_Transform_get_childCount();

		//System.Void UnityEngine.Transform::InverseTransformPoint_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_InverseTransformPoint_Injected();
		Register_UnityEngine_Transform_InverseTransformPoint_Injected();

		//System.Void UnityEngine.Transform::RotateAroundInternal_Injected(UnityEngine.Vector3&,System.Single)
		void Register_UnityEngine_Transform_RotateAroundInternal_Injected();
		Register_UnityEngine_Transform_RotateAroundInternal_Injected();

		//System.Void UnityEngine.Transform::SetAsFirstSibling()
		void Register_UnityEngine_Transform_SetAsFirstSibling();
		Register_UnityEngine_Transform_SetAsFirstSibling();

		//System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
		void Register_UnityEngine_Transform_SetParent();
		Register_UnityEngine_Transform_SetParent();

		//System.Void UnityEngine.Transform::TransformDirection_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_TransformDirection_Injected();
		Register_UnityEngine_Transform_TransformDirection_Injected();

		//System.Void UnityEngine.Transform::TransformPoint_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_TransformPoint_Injected();
		Register_UnityEngine_Transform_TransformPoint_Injected();

		//System.Void UnityEngine.Transform::get_localPosition_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_get_localPosition_Injected();
		Register_UnityEngine_Transform_get_localPosition_Injected();

		//System.Void UnityEngine.Transform::get_localRotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_get_localRotation_Injected();
		Register_UnityEngine_Transform_get_localRotation_Injected();

		//System.Void UnityEngine.Transform::get_localScale_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_get_localScale_Injected();
		Register_UnityEngine_Transform_get_localScale_Injected();

		//System.Void UnityEngine.Transform::get_localToWorldMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Transform_get_localToWorldMatrix_Injected();
		Register_UnityEngine_Transform_get_localToWorldMatrix_Injected();

		//System.Void UnityEngine.Transform::get_lossyScale_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_get_lossyScale_Injected();
		Register_UnityEngine_Transform_get_lossyScale_Injected();

		//System.Void UnityEngine.Transform::get_position_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_get_position_Injected();
		Register_UnityEngine_Transform_get_position_Injected();

		//System.Void UnityEngine.Transform::get_rotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_get_rotation_Injected();
		Register_UnityEngine_Transform_get_rotation_Injected();

		//System.Void UnityEngine.Transform::get_worldToLocalMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Transform_get_worldToLocalMatrix_Injected();
		Register_UnityEngine_Transform_get_worldToLocalMatrix_Injected();

		//System.Void UnityEngine.Transform::set_hasChanged(System.Boolean)
		void Register_UnityEngine_Transform_set_hasChanged();
		Register_UnityEngine_Transform_set_hasChanged();

		//System.Void UnityEngine.Transform::set_localPosition_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_set_localPosition_Injected();
		Register_UnityEngine_Transform_set_localPosition_Injected();

		//System.Void UnityEngine.Transform::set_localRotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_set_localRotation_Injected();
		Register_UnityEngine_Transform_set_localRotation_Injected();

		//System.Void UnityEngine.Transform::set_localScale_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_set_localScale_Injected();
		Register_UnityEngine_Transform_set_localScale_Injected();

		//System.Void UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_set_position_Injected();
		Register_UnityEngine_Transform_set_position_Injected();

		//System.Void UnityEngine.Transform::set_rotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_set_rotation_Injected();
		Register_UnityEngine_Transform_set_rotation_Injected();

		//UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
		void Register_UnityEngine_Transform_GetChild();
		Register_UnityEngine_Transform_GetChild();

		//UnityEngine.Transform UnityEngine.Transform::GetParent()
		void Register_UnityEngine_Transform_GetParent();
		Register_UnityEngine_Transform_GetParent();

	//End Registrations for type : UnityEngine.Transform

	//Start Registrations for type : UnityEngine.U2D.SpriteAtlas

		//System.Boolean UnityEngine.U2D.SpriteAtlas::CanBindTo(UnityEngine.Sprite)
		void Register_UnityEngine_U2D_SpriteAtlas_CanBindTo();
		Register_UnityEngine_U2D_SpriteAtlas_CanBindTo();

	//End Registrations for type : UnityEngine.U2D.SpriteAtlas

	//Start Registrations for type : UnityEngine.U2D.SpriteAtlasManager

		//System.Void UnityEngine.U2D.SpriteAtlasManager::Register(UnityEngine.U2D.SpriteAtlas)
		void Register_UnityEngine_U2D_SpriteAtlasManager_Register();
		Register_UnityEngine_U2D_SpriteAtlasManager_Register();

	//End Registrations for type : UnityEngine.U2D.SpriteAtlasManager

	//Start Registrations for type : UnityEngine.UISystemProfilerApi

		//System.Void UnityEngine.UISystemProfilerApi::AddMarker(System.String,UnityEngine.Object)
		void Register_UnityEngine_UISystemProfilerApi_AddMarker();
		Register_UnityEngine_UISystemProfilerApi_AddMarker();

		//System.Void UnityEngine.UISystemProfilerApi::BeginSample(UnityEngine.UISystemProfilerApi/SampleType)
		void Register_UnityEngine_UISystemProfilerApi_BeginSample();
		Register_UnityEngine_UISystemProfilerApi_BeginSample();

		//System.Void UnityEngine.UISystemProfilerApi::EndSample(UnityEngine.UISystemProfilerApi/SampleType)
		void Register_UnityEngine_UISystemProfilerApi_EndSample();
		Register_UnityEngine_UISystemProfilerApi_EndSample();

	//End Registrations for type : UnityEngine.UISystemProfilerApi

	//Start Registrations for type : UnityEngine.Vector3

		//System.Void UnityEngine.Vector3::Slerp_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&)
		void Register_UnityEngine_Vector3_Slerp_Injected();
		Register_UnityEngine_Vector3_Slerp_Injected();

	//End Registrations for type : UnityEngine.Vector3

	//Start Registrations for type : UnityEngine.XR.XRSettings

		//System.Boolean UnityEngine.XR.XRSettings::get_enabled()
		void Register_UnityEngine_XR_XRSettings_get_enabled();
		Register_UnityEngine_XR_XRSettings_get_enabled();

		//System.Int32 UnityEngine.XR.XRSettings::get_eyeTextureHeight()
		void Register_UnityEngine_XR_XRSettings_get_eyeTextureHeight();
		Register_UnityEngine_XR_XRSettings_get_eyeTextureHeight();

		//System.Int32 UnityEngine.XR.XRSettings::get_eyeTextureWidth()
		void Register_UnityEngine_XR_XRSettings_get_eyeTextureWidth();
		Register_UnityEngine_XR_XRSettings_get_eyeTextureWidth();

		//System.Single UnityEngine.XR.XRSettings::get_renderViewportScaleInternal()
		void Register_UnityEngine_XR_XRSettings_get_renderViewportScaleInternal();
		Register_UnityEngine_XR_XRSettings_get_renderViewportScaleInternal();

		//System.Void UnityEngine.XR.XRSettings::get_eyeTextureDesc_Injected(UnityEngine.RenderTextureDescriptor&)
		void Register_UnityEngine_XR_XRSettings_get_eyeTextureDesc_Injected();
		Register_UnityEngine_XR_XRSettings_get_eyeTextureDesc_Injected();

	//End Registrations for type : UnityEngine.XR.XRSettings

	//Start Registrations for type : UnityEngineInternal.Input.NativeInputSystem

		//System.Void UnityEngineInternal.Input.NativeInputSystem::set_hasDeviceDiscoveredCallback(System.Boolean)
		void Register_UnityEngineInternal_Input_NativeInputSystem_set_hasDeviceDiscoveredCallback();
		Register_UnityEngineInternal_Input_NativeInputSystem_set_hasDeviceDiscoveredCallback();

	//End Registrations for type : UnityEngineInternal.Input.NativeInputSystem

}
