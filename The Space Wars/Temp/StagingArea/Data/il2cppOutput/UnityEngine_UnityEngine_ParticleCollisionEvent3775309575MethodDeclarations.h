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

// UnityEngine.Collider
struct Collider_t2798266161;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ParticleCollisionEvent3775309575.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"

// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::get_velocity()
extern "C"  Vector3_t465617797  ParticleCollisionEvent_get_velocity_m2808179599 (ParticleCollisionEvent_t3775309575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.ParticleCollisionEvent::get_collider()
extern "C"  Collider_t2798266161 * ParticleCollisionEvent_get_collider_m3258307018 (ParticleCollisionEvent_t3775309575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.ParticleCollisionEvent::InstanceIDToCollider(System.Int32)
extern "C"  Collider_t2798266161 * ParticleCollisionEvent_InstanceIDToCollider_m2053572809 (Il2CppObject * __this /* static, unused */, int32_t ___instanceID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ParticleCollisionEvent_t3775309575;
struct ParticleCollisionEvent_t3775309575_marshaled_pinvoke;

extern "C" void ParticleCollisionEvent_t3775309575_marshal_pinvoke(const ParticleCollisionEvent_t3775309575& unmarshaled, ParticleCollisionEvent_t3775309575_marshaled_pinvoke& marshaled);
extern "C" void ParticleCollisionEvent_t3775309575_marshal_pinvoke_back(const ParticleCollisionEvent_t3775309575_marshaled_pinvoke& marshaled, ParticleCollisionEvent_t3775309575& unmarshaled);
extern "C" void ParticleCollisionEvent_t3775309575_marshal_pinvoke_cleanup(ParticleCollisionEvent_t3775309575_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ParticleCollisionEvent_t3775309575;
struct ParticleCollisionEvent_t3775309575_marshaled_com;

extern "C" void ParticleCollisionEvent_t3775309575_marshal_com(const ParticleCollisionEvent_t3775309575& unmarshaled, ParticleCollisionEvent_t3775309575_marshaled_com& marshaled);
extern "C" void ParticleCollisionEvent_t3775309575_marshal_com_back(const ParticleCollisionEvent_t3775309575_marshaled_com& marshaled, ParticleCollisionEvent_t3775309575& unmarshaled);
extern "C" void ParticleCollisionEvent_t3775309575_marshal_com_cleanup(ParticleCollisionEvent_t3775309575_marshaled_com& marshaled);
