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

// UnityEngine.ParticleSystem
struct ParticleSystem_t3099937104;
// UnityEngine.GameObject
struct GameObject_t1366199518;
// UnityEngine.ParticleCollisionEvent[]
struct ParticleCollisionEventU5BU5D_t2537115902;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ParticleSystem3099937104.h"
#include "UnityEngine_UnityEngine_GameObject1366199518.h"

// System.Int32 UnityEngine.ParticlePhysicsExtensions::GetSafeCollisionEventSize(UnityEngine.ParticleSystem)
extern "C"  int32_t ParticlePhysicsExtensions_GetSafeCollisionEventSize_m3982961422 (Il2CppObject * __this /* static, unused */, ParticleSystem_t3099937104 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.ParticlePhysicsExtensions::GetCollisionEvents(UnityEngine.ParticleSystem,UnityEngine.GameObject,UnityEngine.ParticleCollisionEvent[])
extern "C"  int32_t ParticlePhysicsExtensions_GetCollisionEvents_m3036599300 (Il2CppObject * __this /* static, unused */, ParticleSystem_t3099937104 * ___ps0, GameObject_t1366199518 * ___go1, ParticleCollisionEventU5BU5D_t2537115902* ___collisionEvents2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
