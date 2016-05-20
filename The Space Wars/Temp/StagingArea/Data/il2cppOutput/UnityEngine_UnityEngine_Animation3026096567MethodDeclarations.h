#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Animation
struct Animation_t3026096567;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;
// UnityEngine.AnimationState
struct AnimationState_t1861571064;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_PlayMode2887175546.h"

// System.Boolean UnityEngine.Animation::Play()
extern "C"  bool Animation_Play_m185747875 (Animation_t3026096567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
extern "C"  bool Animation_Play_m112733823 (Animation_t3026096567 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
extern "C"  bool Animation_PlayDefaultAnimation_m3276120146 (Animation_t3026096567 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
extern "C"  Il2CppObject * Animation_GetEnumerator_m3067441975 (Animation_t3026096567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
extern "C"  AnimationState_t1861571064 * Animation_GetStateAtIndex_m2774853377 (Animation_t3026096567 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animation::GetStateCount()
extern "C"  int32_t Animation_GetStateCount_m1145090795 (Animation_t3026096567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
