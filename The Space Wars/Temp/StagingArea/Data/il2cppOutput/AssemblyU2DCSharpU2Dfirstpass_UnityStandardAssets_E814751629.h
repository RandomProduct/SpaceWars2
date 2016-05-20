#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Collider[]
struct ColliderU5BU5D_t1033275628;
// UnityEngine.SphereCollider
struct SphereCollider_t4279045290;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Effects.AfterburnerPhysicsForce
struct  AfterburnerPhysicsForce_t814751629  : public MonoBehaviour_t774292115
{
public:
	// System.Single UnityStandardAssets.Effects.AfterburnerPhysicsForce::effectAngle
	float ___effectAngle_2;
	// System.Single UnityStandardAssets.Effects.AfterburnerPhysicsForce::effectWidth
	float ___effectWidth_3;
	// System.Single UnityStandardAssets.Effects.AfterburnerPhysicsForce::effectDistance
	float ___effectDistance_4;
	// System.Single UnityStandardAssets.Effects.AfterburnerPhysicsForce::force
	float ___force_5;
	// UnityEngine.Collider[] UnityStandardAssets.Effects.AfterburnerPhysicsForce::m_Cols
	ColliderU5BU5D_t1033275628* ___m_Cols_6;
	// UnityEngine.SphereCollider UnityStandardAssets.Effects.AfterburnerPhysicsForce::m_Sphere
	SphereCollider_t4279045290 * ___m_Sphere_7;

public:
	inline static int32_t get_offset_of_effectAngle_2() { return static_cast<int32_t>(offsetof(AfterburnerPhysicsForce_t814751629, ___effectAngle_2)); }
	inline float get_effectAngle_2() const { return ___effectAngle_2; }
	inline float* get_address_of_effectAngle_2() { return &___effectAngle_2; }
	inline void set_effectAngle_2(float value)
	{
		___effectAngle_2 = value;
	}

	inline static int32_t get_offset_of_effectWidth_3() { return static_cast<int32_t>(offsetof(AfterburnerPhysicsForce_t814751629, ___effectWidth_3)); }
	inline float get_effectWidth_3() const { return ___effectWidth_3; }
	inline float* get_address_of_effectWidth_3() { return &___effectWidth_3; }
	inline void set_effectWidth_3(float value)
	{
		___effectWidth_3 = value;
	}

	inline static int32_t get_offset_of_effectDistance_4() { return static_cast<int32_t>(offsetof(AfterburnerPhysicsForce_t814751629, ___effectDistance_4)); }
	inline float get_effectDistance_4() const { return ___effectDistance_4; }
	inline float* get_address_of_effectDistance_4() { return &___effectDistance_4; }
	inline void set_effectDistance_4(float value)
	{
		___effectDistance_4 = value;
	}

	inline static int32_t get_offset_of_force_5() { return static_cast<int32_t>(offsetof(AfterburnerPhysicsForce_t814751629, ___force_5)); }
	inline float get_force_5() const { return ___force_5; }
	inline float* get_address_of_force_5() { return &___force_5; }
	inline void set_force_5(float value)
	{
		___force_5 = value;
	}

	inline static int32_t get_offset_of_m_Cols_6() { return static_cast<int32_t>(offsetof(AfterburnerPhysicsForce_t814751629, ___m_Cols_6)); }
	inline ColliderU5BU5D_t1033275628* get_m_Cols_6() const { return ___m_Cols_6; }
	inline ColliderU5BU5D_t1033275628** get_address_of_m_Cols_6() { return &___m_Cols_6; }
	inline void set_m_Cols_6(ColliderU5BU5D_t1033275628* value)
	{
		___m_Cols_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_Cols_6, value);
	}

	inline static int32_t get_offset_of_m_Sphere_7() { return static_cast<int32_t>(offsetof(AfterburnerPhysicsForce_t814751629, ___m_Sphere_7)); }
	inline SphereCollider_t4279045290 * get_m_Sphere_7() const { return ___m_Sphere_7; }
	inline SphereCollider_t4279045290 ** get_address_of_m_Sphere_7() { return &___m_Sphere_7; }
	inline void set_m_Sphere_7(SphereCollider_t4279045290 * value)
	{
		___m_Sphere_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_Sphere_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
