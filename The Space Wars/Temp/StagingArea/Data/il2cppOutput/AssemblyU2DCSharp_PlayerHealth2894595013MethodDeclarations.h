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

// PlayerHealth
struct PlayerHealth_t2894595013;
// UnityEngine.Collider
struct Collider_t2798266161;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider2798266161.h"

// System.Void PlayerHealth::.ctor()
extern "C"  void PlayerHealth__ctor_m24469338 (PlayerHealth_t2894595013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHealth::Awake()
extern "C"  void PlayerHealth_Awake_m653547285 (PlayerHealth_t2894595013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHealth::Update()
extern "C"  void PlayerHealth_Update_m682785001 (PlayerHealth_t2894595013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHealth::TakeDamage(System.Int32)
extern "C"  void PlayerHealth_TakeDamage_m3822532457 (PlayerHealth_t2894595013 * __this, int32_t ___amount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHealth::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void PlayerHealth_OnTriggerEnter_m4009646630 (PlayerHealth_t2894595013 * __this, Collider_t2798266161 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHealth::Death()
extern "C"  void PlayerHealth_Death_m1768345908 (PlayerHealth_t2894595013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
