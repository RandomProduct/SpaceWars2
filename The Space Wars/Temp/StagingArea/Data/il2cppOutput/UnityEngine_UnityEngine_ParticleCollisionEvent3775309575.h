﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4028081426.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleCollisionEvent
struct  ParticleCollisionEvent_t3775309575 
{
public:
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Intersection
	Vector3_t465617797  ___m_Intersection_0;
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Normal
	Vector3_t465617797  ___m_Normal_1;
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Velocity
	Vector3_t465617797  ___m_Velocity_2;
	// System.Int32 UnityEngine.ParticleCollisionEvent::m_ColliderInstanceID
	int32_t ___m_ColliderInstanceID_3;

public:
	inline static int32_t get_offset_of_m_Intersection_0() { return static_cast<int32_t>(offsetof(ParticleCollisionEvent_t3775309575, ___m_Intersection_0)); }
	inline Vector3_t465617797  get_m_Intersection_0() const { return ___m_Intersection_0; }
	inline Vector3_t465617797 * get_address_of_m_Intersection_0() { return &___m_Intersection_0; }
	inline void set_m_Intersection_0(Vector3_t465617797  value)
	{
		___m_Intersection_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ParticleCollisionEvent_t3775309575, ___m_Normal_1)); }
	inline Vector3_t465617797  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t465617797 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t465617797  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_2() { return static_cast<int32_t>(offsetof(ParticleCollisionEvent_t3775309575, ___m_Velocity_2)); }
	inline Vector3_t465617797  get_m_Velocity_2() const { return ___m_Velocity_2; }
	inline Vector3_t465617797 * get_address_of_m_Velocity_2() { return &___m_Velocity_2; }
	inline void set_m_Velocity_2(Vector3_t465617797  value)
	{
		___m_Velocity_2 = value;
	}

	inline static int32_t get_offset_of_m_ColliderInstanceID_3() { return static_cast<int32_t>(offsetof(ParticleCollisionEvent_t3775309575, ___m_ColliderInstanceID_3)); }
	inline int32_t get_m_ColliderInstanceID_3() const { return ___m_ColliderInstanceID_3; }
	inline int32_t* get_address_of_m_ColliderInstanceID_3() { return &___m_ColliderInstanceID_3; }
	inline void set_m_ColliderInstanceID_3(int32_t value)
	{
		___m_ColliderInstanceID_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.ParticleCollisionEvent
struct ParticleCollisionEvent_t3775309575_marshaled_pinvoke
{
	Vector3_t465617797_marshaled_pinvoke ___m_Intersection_0;
	Vector3_t465617797_marshaled_pinvoke ___m_Normal_1;
	Vector3_t465617797_marshaled_pinvoke ___m_Velocity_2;
	int32_t ___m_ColliderInstanceID_3;
};
// Native definition for marshalling of: UnityEngine.ParticleCollisionEvent
struct ParticleCollisionEvent_t3775309575_marshaled_com
{
	Vector3_t465617797_marshaled_com ___m_Intersection_0;
	Vector3_t465617797_marshaled_com ___m_Normal_1;
	Vector3_t465617797_marshaled_com ___m_Velocity_2;
	int32_t ___m_ColliderInstanceID_3;
};
