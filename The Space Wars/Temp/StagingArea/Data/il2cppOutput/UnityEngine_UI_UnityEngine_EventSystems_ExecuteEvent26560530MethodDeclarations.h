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

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t26560530;
// System.Object
struct Il2CppObject;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t2893864196;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventD2893864196.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void EventFunction_1__ctor_m814090495_gshared (EventFunction_1_t26560530 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define EventFunction_1__ctor_m814090495(__this, ___object0, ___method1, method) ((  void (*) (EventFunction_1_t26560530 *, Il2CppObject *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m814090495_gshared)(__this, ___object0, ___method1, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
extern "C"  void EventFunction_1_Invoke_m2378823590_gshared (EventFunction_1_t26560530 * __this, Il2CppObject * ___handler0, BaseEventData_t2893864196 * ___eventData1, const MethodInfo* method);
#define EventFunction_1_Invoke_m2378823590(__this, ___handler0, ___eventData1, method) ((  void (*) (EventFunction_1_t26560530 *, Il2CppObject *, BaseEventData_t2893864196 *, const MethodInfo*))EventFunction_1_Invoke_m2378823590_gshared)(__this, ___handler0, ___eventData1, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EventFunction_1_BeginInvoke_m3064802067_gshared (EventFunction_1_t26560530 * __this, Il2CppObject * ___handler0, BaseEventData_t2893864196 * ___eventData1, AsyncCallback_t889871978 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define EventFunction_1_BeginInvoke_m3064802067(__this, ___handler0, ___eventData1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (EventFunction_1_t26560530 *, Il2CppObject *, BaseEventData_t2893864196 *, AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))EventFunction_1_BeginInvoke_m3064802067_gshared)(__this, ___handler0, ___eventData1, ___callback2, ___object3, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void EventFunction_1_EndInvoke_m1238672169_gshared (EventFunction_1_t26560530 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define EventFunction_1_EndInvoke_m1238672169(__this, ___result0, method) ((  void (*) (EventFunction_1_t26560530 *, Il2CppObject *, const MethodInfo*))EventFunction_1_EndInvoke_m1238672169_gshared)(__this, ___result0, method)
