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

// System.Security.Cryptography.RC2Transform
struct RC2Transform_t3749090782;
// System.Security.Cryptography.RC2
struct RC2_t3489617002;
// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RC23489617002.h"

// System.Void System.Security.Cryptography.RC2Transform::.ctor(System.Security.Cryptography.RC2,System.Boolean,System.Byte[],System.Byte[])
extern "C"  void RC2Transform__ctor_m492910827 (RC2Transform_t3749090782 * __this, RC2_t3489617002 * ___rc2Algo0, bool ___encryption1, ByteU5BU5D_t3835026402* ___key2, ByteU5BU5D_t3835026402* ___iv3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2Transform::.cctor()
extern "C"  void RC2Transform__cctor_m4079629627 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2Transform::ECB(System.Byte[],System.Byte[])
extern "C"  void RC2Transform_ECB_m941769014 (RC2Transform_t3749090782 * __this, ByteU5BU5D_t3835026402* ___input0, ByteU5BU5D_t3835026402* ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
