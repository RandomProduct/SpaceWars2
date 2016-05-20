#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RotateController
struct  RotateController_t3751099039  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.Vector2 RotateController::playerPos
	Vector2_t465617798  ___playerPos_2;
	// UnityEngine.Vector3 RotateController::addPos
	Vector3_t465617797  ___addPos_3;
	// System.Single RotateController::startTime
	float ___startTime_4;
	// System.Single RotateController::rotateSpeed
	float ___rotateSpeed_5;
	// System.Int32 RotateController::difficulty
	int32_t ___difficulty_6;
	// System.Boolean RotateController::playing
	bool ___playing_7;

public:
	inline static int32_t get_offset_of_playerPos_2() { return static_cast<int32_t>(offsetof(RotateController_t3751099039, ___playerPos_2)); }
	inline Vector2_t465617798  get_playerPos_2() const { return ___playerPos_2; }
	inline Vector2_t465617798 * get_address_of_playerPos_2() { return &___playerPos_2; }
	inline void set_playerPos_2(Vector2_t465617798  value)
	{
		___playerPos_2 = value;
	}

	inline static int32_t get_offset_of_addPos_3() { return static_cast<int32_t>(offsetof(RotateController_t3751099039, ___addPos_3)); }
	inline Vector3_t465617797  get_addPos_3() const { return ___addPos_3; }
	inline Vector3_t465617797 * get_address_of_addPos_3() { return &___addPos_3; }
	inline void set_addPos_3(Vector3_t465617797  value)
	{
		___addPos_3 = value;
	}

	inline static int32_t get_offset_of_startTime_4() { return static_cast<int32_t>(offsetof(RotateController_t3751099039, ___startTime_4)); }
	inline float get_startTime_4() const { return ___startTime_4; }
	inline float* get_address_of_startTime_4() { return &___startTime_4; }
	inline void set_startTime_4(float value)
	{
		___startTime_4 = value;
	}

	inline static int32_t get_offset_of_rotateSpeed_5() { return static_cast<int32_t>(offsetof(RotateController_t3751099039, ___rotateSpeed_5)); }
	inline float get_rotateSpeed_5() const { return ___rotateSpeed_5; }
	inline float* get_address_of_rotateSpeed_5() { return &___rotateSpeed_5; }
	inline void set_rotateSpeed_5(float value)
	{
		___rotateSpeed_5 = value;
	}

	inline static int32_t get_offset_of_difficulty_6() { return static_cast<int32_t>(offsetof(RotateController_t3751099039, ___difficulty_6)); }
	inline int32_t get_difficulty_6() const { return ___difficulty_6; }
	inline int32_t* get_address_of_difficulty_6() { return &___difficulty_6; }
	inline void set_difficulty_6(int32_t value)
	{
		___difficulty_6 = value;
	}

	inline static int32_t get_offset_of_playing_7() { return static_cast<int32_t>(offsetof(RotateController_t3751099039, ___playing_7)); }
	inline bool get_playing_7() const { return ___playing_7; }
	inline bool* get_address_of_playing_7() { return &___playing_7; }
	inline void set_playing_7(bool value)
	{
		___playing_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
