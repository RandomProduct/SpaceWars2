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

// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct AudioConfigurationChangeHandler_t253189760;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void AudioConfigurationChangeHandler__ctor_m114228029 (AudioConfigurationChangeHandler_t253189760 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
extern "C"  void AudioConfigurationChangeHandler_Invoke_m635374412 (AudioConfigurationChangeHandler_t253189760 * __this, bool ___deviceWasChanged0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AudioConfigurationChangeHandler_t253189760(Il2CppObject* delegate, bool ___deviceWasChanged0);
// System.IAsyncResult UnityEngine.AudioSettings/AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AudioConfigurationChangeHandler_BeginInvoke_m2418670597 (AudioConfigurationChangeHandler_t253189760 * __this, bool ___deviceWasChanged0, AsyncCallback_t889871978 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult)
extern "C"  void AudioConfigurationChangeHandler_EndInvoke_m2237100787 (AudioConfigurationChangeHandler_t253189760 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
