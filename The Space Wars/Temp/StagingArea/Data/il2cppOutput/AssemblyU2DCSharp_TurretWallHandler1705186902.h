#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1366199518;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TurretWallHandler
struct  TurretWallHandler_t1705186902  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.GameObject TurretWallHandler::explosion
	GameObject_t1366199518 * ___explosion_2;
	// System.Boolean TurretWallHandler::exploded
	bool ___exploded_3;

public:
	inline static int32_t get_offset_of_explosion_2() { return static_cast<int32_t>(offsetof(TurretWallHandler_t1705186902, ___explosion_2)); }
	inline GameObject_t1366199518 * get_explosion_2() const { return ___explosion_2; }
	inline GameObject_t1366199518 ** get_address_of_explosion_2() { return &___explosion_2; }
	inline void set_explosion_2(GameObject_t1366199518 * value)
	{
		___explosion_2 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_2, value);
	}

	inline static int32_t get_offset_of_exploded_3() { return static_cast<int32_t>(offsetof(TurretWallHandler_t1705186902, ___exploded_3)); }
	inline bool get_exploded_3() const { return ___exploded_3; }
	inline bool* get_address_of_exploded_3() { return &___exploded_3; }
	inline void set_exploded_3(bool value)
	{
		___exploded_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
