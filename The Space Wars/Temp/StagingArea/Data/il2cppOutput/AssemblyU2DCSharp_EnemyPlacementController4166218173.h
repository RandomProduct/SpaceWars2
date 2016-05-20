#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t224878301;
// UnityEngine.GameObject
struct GameObject_t1366199518;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t3631216940;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyPlacementController
struct  EnemyPlacementController_t4166218173  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.Transform EnemyPlacementController::placementController
	Transform_t224878301 * ___placementController_2;
	// UnityEngine.GameObject EnemyPlacementController::turret
	GameObject_t1366199518 * ___turret_3;
	// System.Single EnemyPlacementController::chanceSpawn
	float ___chanceSpawn_4;
	// System.Collections.Generic.List`1<UnityEngine.Transform> EnemyPlacementController::spots
	List_1_t3631216940 * ___spots_5;
	// System.Int32 EnemyPlacementController::difficulty
	int32_t ___difficulty_6;
	// System.Single EnemyPlacementController::reduceSpawn
	float ___reduceSpawn_7;

public:
	inline static int32_t get_offset_of_placementController_2() { return static_cast<int32_t>(offsetof(EnemyPlacementController_t4166218173, ___placementController_2)); }
	inline Transform_t224878301 * get_placementController_2() const { return ___placementController_2; }
	inline Transform_t224878301 ** get_address_of_placementController_2() { return &___placementController_2; }
	inline void set_placementController_2(Transform_t224878301 * value)
	{
		___placementController_2 = value;
		Il2CppCodeGenWriteBarrier(&___placementController_2, value);
	}

	inline static int32_t get_offset_of_turret_3() { return static_cast<int32_t>(offsetof(EnemyPlacementController_t4166218173, ___turret_3)); }
	inline GameObject_t1366199518 * get_turret_3() const { return ___turret_3; }
	inline GameObject_t1366199518 ** get_address_of_turret_3() { return &___turret_3; }
	inline void set_turret_3(GameObject_t1366199518 * value)
	{
		___turret_3 = value;
		Il2CppCodeGenWriteBarrier(&___turret_3, value);
	}

	inline static int32_t get_offset_of_chanceSpawn_4() { return static_cast<int32_t>(offsetof(EnemyPlacementController_t4166218173, ___chanceSpawn_4)); }
	inline float get_chanceSpawn_4() const { return ___chanceSpawn_4; }
	inline float* get_address_of_chanceSpawn_4() { return &___chanceSpawn_4; }
	inline void set_chanceSpawn_4(float value)
	{
		___chanceSpawn_4 = value;
	}

	inline static int32_t get_offset_of_spots_5() { return static_cast<int32_t>(offsetof(EnemyPlacementController_t4166218173, ___spots_5)); }
	inline List_1_t3631216940 * get_spots_5() const { return ___spots_5; }
	inline List_1_t3631216940 ** get_address_of_spots_5() { return &___spots_5; }
	inline void set_spots_5(List_1_t3631216940 * value)
	{
		___spots_5 = value;
		Il2CppCodeGenWriteBarrier(&___spots_5, value);
	}

	inline static int32_t get_offset_of_difficulty_6() { return static_cast<int32_t>(offsetof(EnemyPlacementController_t4166218173, ___difficulty_6)); }
	inline int32_t get_difficulty_6() const { return ___difficulty_6; }
	inline int32_t* get_address_of_difficulty_6() { return &___difficulty_6; }
	inline void set_difficulty_6(int32_t value)
	{
		___difficulty_6 = value;
	}

	inline static int32_t get_offset_of_reduceSpawn_7() { return static_cast<int32_t>(offsetof(EnemyPlacementController_t4166218173, ___reduceSpawn_7)); }
	inline float get_reduceSpawn_7() const { return ___reduceSpawn_7; }
	inline float* get_address_of_reduceSpawn_7() { return &___reduceSpawn_7; }
	inline void set_reduceSpawn_7(float value)
	{
		___reduceSpawn_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
