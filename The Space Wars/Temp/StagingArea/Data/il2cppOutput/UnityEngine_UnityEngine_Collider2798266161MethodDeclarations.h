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

// UnityEngine.Collider
struct Collider_t2798266161;
// UnityEngine.Rigidbody
struct Rigidbody_t1071364940;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider2798266161.h"
#include "UnityEngine_UnityEngine_Ray4121084637.h"
#include "UnityEngine_UnityEngine_RaycastHit317570005.h"

// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C"  void Collider_set_enabled_m3489100454 (Collider_t2798266161 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C"  Rigidbody_t1071364940 * Collider_get_attachedRigidbody_m3279305420 (Collider_t2798266161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Collider::Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C"  bool Collider_Internal_Raycast_m1155465004 (Il2CppObject * __this /* static, unused */, Collider_t2798266161 * ___col0, Ray_t4121084637  ___ray1, RaycastHit_t317570005 * ___hitInfo2, float ___maxDistance3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Collider::INTERNAL_CALL_Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray&,UnityEngine.RaycastHit&,System.Single)
extern "C"  bool Collider_INTERNAL_CALL_Internal_Raycast_m1149196481 (Il2CppObject * __this /* static, unused */, Collider_t2798266161 * ___col0, Ray_t4121084637 * ___ray1, RaycastHit_t317570005 * ___hitInfo2, float ___maxDistance3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Collider::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C"  bool Collider_Raycast_m765524243 (Collider_t2798266161 * __this, Ray_t4121084637  ___ray0, RaycastHit_t317570005 * ___hitInfo1, float ___maxDistance2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
