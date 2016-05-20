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

// Mono.Security.X509.SafeBag
struct SafeBag_t3814866477;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t2605720235;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "Mono_Security_Mono_Security_ASN12605720234.h"

// System.Void Mono.Security.X509.SafeBag::.ctor(System.String,Mono.Security.ASN1)
extern "C"  void SafeBag__ctor_m2828572544 (SafeBag_t3814866477 * __this, String_t* ___bagOID0, ASN1_t2605720235 * ___asn11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.SafeBag::get_BagOID()
extern "C"  String_t* SafeBag_get_BagOID_m2574947216 (SafeBag_t3814866477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.SafeBag::get_ASN1()
extern "C"  ASN1_t2605720235 * SafeBag_get_ASN1_m1646183377 (SafeBag_t3814866477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
