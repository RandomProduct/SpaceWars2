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

// System.IO.DirectoryInfo
struct DirectoryInfo_t2045585366;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"

// System.Void System.IO.DirectoryInfo::.ctor(System.String)
extern "C"  void DirectoryInfo__ctor_m3750996792 (DirectoryInfo_t2045585366 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::.ctor(System.String,System.Boolean)
extern "C"  void DirectoryInfo__ctor_m404287517 (DirectoryInfo_t2045585366 * __this, String_t* ___path0, bool ___simpleOriginalPath1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DirectoryInfo__ctor_m2666043091 (DirectoryInfo_t2045585366 * __this, SerializationInfo_t1029367511 * ___info0, StreamingContext_t3848318932  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::Initialize()
extern "C"  void DirectoryInfo_Initialize_m2216118894 (DirectoryInfo_t2045585366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.DirectoryInfo::get_Exists()
extern "C"  bool DirectoryInfo_get_Exists_m3635270941 (DirectoryInfo_t2045585366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.DirectoryInfo::get_Parent()
extern "C"  DirectoryInfo_t2045585366 * DirectoryInfo_get_Parent_m1198766078 (DirectoryInfo_t2045585366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::Create()
extern "C"  void DirectoryInfo_Create_m1327646140 (DirectoryInfo_t2045585366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.DirectoryInfo::ToString()
extern "C"  String_t* DirectoryInfo_ToString_m4208086799 (DirectoryInfo_t2045585366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
