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

// PlayerController
struct PlayerController_t4148409433;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;
// UnityEngine.Collider
struct Collider_t2798266161;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider2798266161.h"

// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m3280132936 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::.cctor()
extern "C"  void PlayerController__cctor_m3892529579 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Awake()
extern "C"  void PlayerController_Awake_m3907272501 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PlayerController::countdown()
extern "C"  Il2CppObject * PlayerController_countdown_m812950767 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::FixedUpdate()
extern "C"  void PlayerController_FixedUpdate_m1756102567 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Update()
extern "C"  void PlayerController_Update_m4228472513 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Shoot()
extern "C"  void PlayerController_Shoot_m8662559 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PlayerController::waitToShoot()
extern "C"  Il2CppObject * PlayerController_waitToShoot_m1033772185 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void PlayerController_OnTriggerEnter_m2196551076 (PlayerController_t4148409433 * __this, Collider_t2798266161 * ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
