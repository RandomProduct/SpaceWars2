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

// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color2250949164.h"
#include "mscorlib_System_Object707969140.h"
#include "UnityEngine_UnityEngine_Vector4465617796.h"

// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m1909920690 (Color_t2250949164 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m3811852957 (Color_t2250949164 * __this, float ___r0, float ___g1, float ___b2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Color::ToString()
extern "C"  String_t* Color_ToString_m4028093047 (Color_t2250949164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Color::GetHashCode()
extern "C"  int32_t Color_GetHashCode_m3182525367 (Color_t2250949164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Color::Equals(System.Object)
extern "C"  bool Color_Equals_m661618137 (Color_t2250949164 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  Color_t2250949164  Color_Lerp_m3323752807 (Il2CppObject * __this /* static, unused */, Color_t2250949164  ___a0, Color_t2250949164  ___b1, float ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C"  Color_t2250949164  Color_get_red_m2410286591 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_green()
extern "C"  Color_t2250949164  Color_get_green_m2671273823 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C"  Color_t2250949164  Color_get_white_m3987539815 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_black()
extern "C"  Color_t2250949164  Color_get_black_m2650940523 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_yellow()
extern "C"  Color_t2250949164  Color_get_yellow_m3741935494 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_clear()
extern "C"  Color_t2250949164  Color_get_clear_m1469108305 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
extern "C"  Color_t2250949164  Color_op_Multiply_m325555950 (Il2CppObject * __this /* static, unused */, Color_t2250949164  ___a0, float ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
extern "C"  bool Color_op_Equality_m3156451394 (Il2CppObject * __this /* static, unused */, Color_t2250949164  ___lhs0, Color_t2250949164  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
extern "C"  Vector4_t465617796  Color_op_Implicit_m1067945802 (Il2CppObject * __this /* static, unused */, Color_t2250949164  ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Color_t2250949164;
struct Color_t2250949164_marshaled_pinvoke;

extern "C" void Color_t2250949164_marshal_pinvoke(const Color_t2250949164& unmarshaled, Color_t2250949164_marshaled_pinvoke& marshaled);
extern "C" void Color_t2250949164_marshal_pinvoke_back(const Color_t2250949164_marshaled_pinvoke& marshaled, Color_t2250949164& unmarshaled);
extern "C" void Color_t2250949164_marshal_pinvoke_cleanup(Color_t2250949164_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Color_t2250949164;
struct Color_t2250949164_marshaled_com;

extern "C" void Color_t2250949164_marshal_com(const Color_t2250949164& unmarshaled, Color_t2250949164_marshaled_com& marshaled);
extern "C" void Color_t2250949164_marshal_com_back(const Color_t2250949164_marshaled_com& marshaled, Color_t2250949164& unmarshaled);
extern "C" void Color_t2250949164_marshal_com_cleanup(Color_t2250949164_marshaled_com& marshaled);
