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

// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t1547598136;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t1033275628;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "UnityEngine_UnityEngine_RaycastHit317570005.h"
#include "UnityEngine_UnityEngine_QueryTriggerInteraction3759209877.h"
#include "UnityEngine_UnityEngine_Ray4121084637.h"

// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C"  bool Physics_Raycast_m1929115794 (Il2CppObject * __this /* static, unused */, Vector3_t465617797  ___origin0, Vector3_t465617797  ___direction1, RaycastHit_t317570005 * ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
extern "C"  bool Physics_Raycast_m2994111303 (Il2CppObject * __this /* static, unused */, Vector3_t465617797  ___origin0, Vector3_t465617797  ___direction1, RaycastHit_t317570005 * ___hitInfo2, float ___maxDistance3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Raycast_m2036777053 (Il2CppObject * __this /* static, unused */, Vector3_t465617797  ___origin0, Vector3_t465617797  ___direction1, RaycastHit_t317570005 * ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C"  bool Physics_Raycast_m2009151399 (Il2CppObject * __this /* static, unused */, Ray_t4121084637  ___ray0, RaycastHit_t317570005 * ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C"  bool Physics_Raycast_m2308457076 (Il2CppObject * __this /* static, unused */, Ray_t4121084637  ___ray0, RaycastHit_t317570005 * ___hitInfo1, float ___maxDistance2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
extern "C"  bool Physics_Raycast_m2736931691 (Il2CppObject * __this /* static, unused */, Ray_t4121084637  ___ray0, RaycastHit_t317570005 * ___hitInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Raycast_m233619224 (Il2CppObject * __this /* static, unused */, Ray_t4121084637  ___ray0, RaycastHit_t317570005 * ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C"  RaycastHitU5BU5D_t1547598136* Physics_RaycastAll_m233036521 (Il2CppObject * __this /* static, unused */, Ray_t4121084637  ___ray0, float ___maxDistance1, int32_t ___layerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t1547598136* Physics_RaycastAll_m410413656 (Il2CppObject * __this /* static, unused */, Ray_t4121084637  ___ray0, float ___maxDistance1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t1547598136* Physics_RaycastAll_m3908263591 (Il2CppObject * __this /* static, unused */, Vector3_t465617797  ___origin0, Vector3_t465617797  ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t1547598136* Physics_INTERNAL_CALL_RaycastAll_m2126789092 (Il2CppObject * __this /* static, unused */, Vector3_t465617797 * ___origin0, Vector3_t465617797 * ___direction1, float ___maxDistance2, int32_t ___layermask3, int32_t ___queryTriggerInteraction4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single)
extern "C"  ColliderU5BU5D_t1033275628* Physics_OverlapSphere_m3967613486 (Il2CppObject * __this /* static, unused */, Vector3_t465617797  ___position0, float ___radius1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider[] UnityEngine.Physics::INTERNAL_CALL_OverlapSphere(UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  ColliderU5BU5D_t1033275628* Physics_INTERNAL_CALL_OverlapSphere_m2407088301 (Il2CppObject * __this /* static, unused */, Vector3_t465617797 * ___position0, float ___radius1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Internal_Raycast_m1160243045 (Il2CppObject * __this /* static, unused */, Vector3_t465617797  ___origin0, Vector3_t465617797  ___direction1, RaycastHit_t317570005 * ___hitInfo2, float ___maxDistance3, int32_t ___layermask4, int32_t ___queryTriggerInteraction5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_INTERNAL_CALL_Internal_Raycast_m93849932 (Il2CppObject * __this /* static, unused */, Vector3_t465617797 * ___origin0, Vector3_t465617797 * ___direction1, RaycastHit_t317570005 * ___hitInfo2, float ___maxDistance3, int32_t ___layermask4, int32_t ___queryTriggerInteraction5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
