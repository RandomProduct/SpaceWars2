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

// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t982283579;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t1468494371;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Collections_ArrayList1468494371.h"

// System.Void System.Collections.Specialized.NameValueCollection::.ctor()
extern "C"  void NameValueCollection__ctor_m1767369537 (NameValueCollection_t982283579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void NameValueCollection__ctor_m3660918416 (NameValueCollection_t982283579 * __this, SerializationInfo_t1029367511 * ___info0, StreamingContext_t3848318932  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String)
extern "C"  void NameValueCollection_Add_m263445674 (NameValueCollection_t982283579 * __this, String_t* ___name0, String_t* ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::Get(System.Int32)
extern "C"  String_t* NameValueCollection_Get_m861415899 (NameValueCollection_t982283579 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::AsSingleString(System.Collections.ArrayList)
extern "C"  String_t* NameValueCollection_AsSingleString_m10599052 (Il2CppObject * __this /* static, unused */, ArrayList_t1468494371 * ___values0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::GetKey(System.Int32)
extern "C"  String_t* NameValueCollection_GetKey_m3871624648 (NameValueCollection_t982283579 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::InvalidateCachedArrays()
extern "C"  void NameValueCollection_InvalidateCachedArrays_m1142700554 (NameValueCollection_t982283579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
