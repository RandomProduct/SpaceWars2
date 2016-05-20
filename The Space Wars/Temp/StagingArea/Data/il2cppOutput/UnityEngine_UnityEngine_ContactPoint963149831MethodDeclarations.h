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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ContactPoint963149831.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"

// UnityEngine.Vector3 UnityEngine.ContactPoint::get_point()
extern "C"  Vector3_t465617797  ContactPoint_get_point_m371381516 (ContactPoint_t963149831 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.ContactPoint::get_normal()
extern "C"  Vector3_t465617797  ContactPoint_get_normal_m91778337 (ContactPoint_t963149831 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ContactPoint_t963149831;
struct ContactPoint_t963149831_marshaled_pinvoke;

extern "C" void ContactPoint_t963149831_marshal_pinvoke(const ContactPoint_t963149831& unmarshaled, ContactPoint_t963149831_marshaled_pinvoke& marshaled);
extern "C" void ContactPoint_t963149831_marshal_pinvoke_back(const ContactPoint_t963149831_marshaled_pinvoke& marshaled, ContactPoint_t963149831& unmarshaled);
extern "C" void ContactPoint_t963149831_marshal_pinvoke_cleanup(ContactPoint_t963149831_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ContactPoint_t963149831;
struct ContactPoint_t963149831_marshaled_com;

extern "C" void ContactPoint_t963149831_marshal_com(const ContactPoint_t963149831& unmarshaled, ContactPoint_t963149831_marshaled_com& marshaled);
extern "C" void ContactPoint_t963149831_marshal_com_back(const ContactPoint_t963149831_marshaled_com& marshaled, ContactPoint_t963149831& unmarshaled);
extern "C" void ContactPoint_t963149831_marshal_com_cleanup(ContactPoint_t963149831_marshaled_com& marshaled);
