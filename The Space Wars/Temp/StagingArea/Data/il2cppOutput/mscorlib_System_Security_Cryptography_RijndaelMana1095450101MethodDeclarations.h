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

// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t1095450101;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t3351301915;
// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.RijndaelManaged::.ctor()
extern "C"  void RijndaelManaged__ctor_m1723326849 (RijndaelManaged_t1095450101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateIV()
extern "C"  void RijndaelManaged_GenerateIV_m805619657 (RijndaelManaged_t1095450101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateKey()
extern "C"  void RijndaelManaged_GenerateKey_m3366247933 (RijndaelManaged_t1095450101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateDecryptor(System.Byte[],System.Byte[])
extern "C"  Il2CppObject * RijndaelManaged_CreateDecryptor_m3253408643 (RijndaelManaged_t1095450101 * __this, ByteU5BU5D_t3835026402* ___rgbKey0, ByteU5BU5D_t3835026402* ___rgbIV1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateEncryptor(System.Byte[],System.Byte[])
extern "C"  Il2CppObject * RijndaelManaged_CreateEncryptor_m315737265 (RijndaelManaged_t1095450101 * __this, ByteU5BU5D_t3835026402* ___rgbKey0, ByteU5BU5D_t3835026402* ___rgbIV1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
