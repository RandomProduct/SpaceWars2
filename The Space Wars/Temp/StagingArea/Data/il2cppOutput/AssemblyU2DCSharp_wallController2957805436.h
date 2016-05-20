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
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t477570861;
// UnityEngine.GameObject
struct GameObject_t1366199518;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// wallController
struct  wallController_t2957805436  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.Transform wallController::walls
	Transform_t224878301 * ___walls_2;
	// System.Int32 wallController::target
	int32_t ___target_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> wallController::wallPrefabs
	List_1_t477570861 * ___wallPrefabs_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> wallController::wallTemps
	List_1_t477570861 * ___wallTemps_5;
	// UnityEngine.Transform wallController::wallMaster
	Transform_t224878301 * ___wallMaster_6;
	// UnityEngine.GameObject wallController::finale
	GameObject_t1366199518 * ___finale_7;
	// System.Boolean wallController::notDone
	bool ___notDone_8;
	// System.Int32 wallController::newWallPos
	int32_t ___newWallPos_9;

public:
	inline static int32_t get_offset_of_walls_2() { return static_cast<int32_t>(offsetof(wallController_t2957805436, ___walls_2)); }
	inline Transform_t224878301 * get_walls_2() const { return ___walls_2; }
	inline Transform_t224878301 ** get_address_of_walls_2() { return &___walls_2; }
	inline void set_walls_2(Transform_t224878301 * value)
	{
		___walls_2 = value;
		Il2CppCodeGenWriteBarrier(&___walls_2, value);
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(wallController_t2957805436, ___target_3)); }
	inline int32_t get_target_3() const { return ___target_3; }
	inline int32_t* get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(int32_t value)
	{
		___target_3 = value;
	}

	inline static int32_t get_offset_of_wallPrefabs_4() { return static_cast<int32_t>(offsetof(wallController_t2957805436, ___wallPrefabs_4)); }
	inline List_1_t477570861 * get_wallPrefabs_4() const { return ___wallPrefabs_4; }
	inline List_1_t477570861 ** get_address_of_wallPrefabs_4() { return &___wallPrefabs_4; }
	inline void set_wallPrefabs_4(List_1_t477570861 * value)
	{
		___wallPrefabs_4 = value;
		Il2CppCodeGenWriteBarrier(&___wallPrefabs_4, value);
	}

	inline static int32_t get_offset_of_wallTemps_5() { return static_cast<int32_t>(offsetof(wallController_t2957805436, ___wallTemps_5)); }
	inline List_1_t477570861 * get_wallTemps_5() const { return ___wallTemps_5; }
	inline List_1_t477570861 ** get_address_of_wallTemps_5() { return &___wallTemps_5; }
	inline void set_wallTemps_5(List_1_t477570861 * value)
	{
		___wallTemps_5 = value;
		Il2CppCodeGenWriteBarrier(&___wallTemps_5, value);
	}

	inline static int32_t get_offset_of_wallMaster_6() { return static_cast<int32_t>(offsetof(wallController_t2957805436, ___wallMaster_6)); }
	inline Transform_t224878301 * get_wallMaster_6() const { return ___wallMaster_6; }
	inline Transform_t224878301 ** get_address_of_wallMaster_6() { return &___wallMaster_6; }
	inline void set_wallMaster_6(Transform_t224878301 * value)
	{
		___wallMaster_6 = value;
		Il2CppCodeGenWriteBarrier(&___wallMaster_6, value);
	}

	inline static int32_t get_offset_of_finale_7() { return static_cast<int32_t>(offsetof(wallController_t2957805436, ___finale_7)); }
	inline GameObject_t1366199518 * get_finale_7() const { return ___finale_7; }
	inline GameObject_t1366199518 ** get_address_of_finale_7() { return &___finale_7; }
	inline void set_finale_7(GameObject_t1366199518 * value)
	{
		___finale_7 = value;
		Il2CppCodeGenWriteBarrier(&___finale_7, value);
	}

	inline static int32_t get_offset_of_notDone_8() { return static_cast<int32_t>(offsetof(wallController_t2957805436, ___notDone_8)); }
	inline bool get_notDone_8() const { return ___notDone_8; }
	inline bool* get_address_of_notDone_8() { return &___notDone_8; }
	inline void set_notDone_8(bool value)
	{
		___notDone_8 = value;
	}

	inline static int32_t get_offset_of_newWallPos_9() { return static_cast<int32_t>(offsetof(wallController_t2957805436, ___newWallPos_9)); }
	inline int32_t get_newWallPos_9() const { return ___newWallPos_9; }
	inline int32_t* get_address_of_newWallPos_9() { return &___newWallPos_9; }
	inline void set_newWallPos_9(int32_t value)
	{
		___newWallPos_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
