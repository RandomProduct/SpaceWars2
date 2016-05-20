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

// UnityStandardAssets.Utility.CameraRefocus
struct CameraRefocus_t2518411811;
// UnityEngine.Camera
struct Camera_t2805735124;
// UnityEngine.Transform
struct Transform_t224878301;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera2805735124.h"
#include "UnityEngine_UnityEngine_Transform224878301.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"

// System.Void UnityStandardAssets.Utility.CameraRefocus::.ctor(UnityEngine.Camera,UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  void CameraRefocus__ctor_m521485776 (CameraRefocus_t2518411811 * __this, Camera_t2805735124 * ___camera0, Transform_t224878301 * ___parent1, Vector3_t465617797  ___origCameraPos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeCamera(UnityEngine.Camera)
extern "C"  void CameraRefocus_ChangeCamera_m1026793793 (CameraRefocus_t2518411811 * __this, Camera_t2805735124 * ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeParent(UnityEngine.Transform)
extern "C"  void CameraRefocus_ChangeParent_m3370050841 (CameraRefocus_t2518411811 * __this, Transform_t224878301 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::GetFocusPoint()
extern "C"  void CameraRefocus_GetFocusPoint_m842617662 (CameraRefocus_t2518411811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::SetFocusPoint()
extern "C"  void CameraRefocus_SetFocusPoint_m402586586 (CameraRefocus_t2518411811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
