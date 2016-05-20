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

// UnityStandardAssets.Utility.CurveControlledBob
struct CurveControlledBob_t3156015453;
// UnityEngine.Camera
struct Camera_t2805735124;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera2805735124.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"

// System.Void UnityStandardAssets.Utility.CurveControlledBob::.ctor()
extern "C"  void CurveControlledBob__ctor_m1624125956 (CurveControlledBob_t3156015453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CurveControlledBob::Setup(UnityEngine.Camera,System.Single)
extern "C"  void CurveControlledBob_Setup_m2972201010 (CurveControlledBob_t3156015453 * __this, Camera_t2805735124 * ___camera0, float ___bobBaseInterval1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.Utility.CurveControlledBob::DoHeadBob(System.Single)
extern "C"  Vector3_t465617797  CurveControlledBob_DoHeadBob_m1976998139 (CurveControlledBob_t3156015453 * __this, float ___speed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
