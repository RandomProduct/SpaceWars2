﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.AudioSource
struct AudioSource_t585923902;
// UnityEngine.AudioClip
struct AudioClip_t3927647597;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AudioClip3927647597.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"

// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern "C"  void AudioSource_set_volume_m2777308722 (AudioSource_t585923902 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C"  void AudioSource_set_clip_m738814682 (AudioSource_t585923902 * __this, AudioClip_t3927647597 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
extern "C"  void AudioSource_Play_m889724421 (AudioSource_t585923902 * __this, uint64_t ___delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C"  void AudioSource_Play_m353744792 (AudioSource_t585923902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3)
extern "C"  void AudioSource_PlayClipAtPoint_m1513558507 (Il2CppObject * __this /* static, unused */, AudioClip_t3927647597 * ___clip0, Vector3_t465617797  ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3,System.Single)
extern "C"  void AudioSource_PlayClipAtPoint_m1469997862 (Il2CppObject * __this /* static, unused */, AudioClip_t3927647597 * ___clip0, Vector3_t465617797  ___position1, float ___volume2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_spatialBlend(System.Single)
extern "C"  void AudioSource_set_spatialBlend_m387590113 (AudioSource_t585923902 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
