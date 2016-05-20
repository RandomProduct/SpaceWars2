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
// UnityEngine.Transform
struct Transform_t224878301;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FinaleHandler
struct  FinaleHandler_t2440613643  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.GameObject FinaleHandler::finalWall
	GameObject_t1366199518 * ___finalWall_2;
	// System.Boolean FinaleHandler::finishing
	bool ___finishing_3;
	// UnityEngine.Transform FinaleHandler::explosions
	Transform_t224878301 * ___explosions_4;

public:
	inline static int32_t get_offset_of_finalWall_2() { return static_cast<int32_t>(offsetof(FinaleHandler_t2440613643, ___finalWall_2)); }
	inline GameObject_t1366199518 * get_finalWall_2() const { return ___finalWall_2; }
	inline GameObject_t1366199518 ** get_address_of_finalWall_2() { return &___finalWall_2; }
	inline void set_finalWall_2(GameObject_t1366199518 * value)
	{
		___finalWall_2 = value;
		Il2CppCodeGenWriteBarrier(&___finalWall_2, value);
	}

	inline static int32_t get_offset_of_finishing_3() { return static_cast<int32_t>(offsetof(FinaleHandler_t2440613643, ___finishing_3)); }
	inline bool get_finishing_3() const { return ___finishing_3; }
	inline bool* get_address_of_finishing_3() { return &___finishing_3; }
	inline void set_finishing_3(bool value)
	{
		___finishing_3 = value;
	}

	inline static int32_t get_offset_of_explosions_4() { return static_cast<int32_t>(offsetof(FinaleHandler_t2440613643, ___explosions_4)); }
	inline Transform_t224878301 * get_explosions_4() const { return ___explosions_4; }
	inline Transform_t224878301 ** get_address_of_explosions_4() { return &___explosions_4; }
	inline void set_explosions_4(Transform_t224878301 * value)
	{
		___explosions_4 = value;
		Il2CppCodeGenWriteBarrier(&___explosions_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
