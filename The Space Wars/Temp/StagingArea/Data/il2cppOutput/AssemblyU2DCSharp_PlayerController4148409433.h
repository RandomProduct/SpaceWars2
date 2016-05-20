#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t2442207934;
// UnityEngine.UI.Text
struct Text_t3921196294;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1366199518;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public MonoBehaviour_t774292115
{
public:
	// System.Boolean PlayerController::TurretsOut
	bool ___TurretsOut_2;
	// UnityEngine.Animator PlayerController::anime
	Animator_t2442207934 * ___anime_3;
	// System.Boolean PlayerController::readyToShoot
	bool ___readyToShoot_5;
	// UnityEngine.UI.Text PlayerController::text
	Text_t3921196294 * ___text_6;
	// System.String PlayerController::zeros
	String_t* ___zeros_7;
	// System.Single PlayerController::bulletImpulse
	float ___bulletImpulse_9;
	// UnityEngine.GameObject PlayerController::playerBullet
	GameObject_t1366199518 * ___playerBullet_10;
	// UnityEngine.GameObject PlayerController::playerBulletSmall
	GameObject_t1366199518 * ___playerBulletSmall_11;
	// System.Boolean PlayerController::bigGun
	bool ___bigGun_12;
	// System.Boolean PlayerController::smallGun
	bool ___smallGun_13;
	// System.Int32 PlayerController::timer
	int32_t ___timer_14;
	// System.Int32 PlayerController::totalTime
	int32_t ___totalTime_15;

public:
	inline static int32_t get_offset_of_TurretsOut_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___TurretsOut_2)); }
	inline bool get_TurretsOut_2() const { return ___TurretsOut_2; }
	inline bool* get_address_of_TurretsOut_2() { return &___TurretsOut_2; }
	inline void set_TurretsOut_2(bool value)
	{
		___TurretsOut_2 = value;
	}

	inline static int32_t get_offset_of_anime_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___anime_3)); }
	inline Animator_t2442207934 * get_anime_3() const { return ___anime_3; }
	inline Animator_t2442207934 ** get_address_of_anime_3() { return &___anime_3; }
	inline void set_anime_3(Animator_t2442207934 * value)
	{
		___anime_3 = value;
		Il2CppCodeGenWriteBarrier(&___anime_3, value);
	}

	inline static int32_t get_offset_of_readyToShoot_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___readyToShoot_5)); }
	inline bool get_readyToShoot_5() const { return ___readyToShoot_5; }
	inline bool* get_address_of_readyToShoot_5() { return &___readyToShoot_5; }
	inline void set_readyToShoot_5(bool value)
	{
		___readyToShoot_5 = value;
	}

	inline static int32_t get_offset_of_text_6() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___text_6)); }
	inline Text_t3921196294 * get_text_6() const { return ___text_6; }
	inline Text_t3921196294 ** get_address_of_text_6() { return &___text_6; }
	inline void set_text_6(Text_t3921196294 * value)
	{
		___text_6 = value;
		Il2CppCodeGenWriteBarrier(&___text_6, value);
	}

	inline static int32_t get_offset_of_zeros_7() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___zeros_7)); }
	inline String_t* get_zeros_7() const { return ___zeros_7; }
	inline String_t** get_address_of_zeros_7() { return &___zeros_7; }
	inline void set_zeros_7(String_t* value)
	{
		___zeros_7 = value;
		Il2CppCodeGenWriteBarrier(&___zeros_7, value);
	}

	inline static int32_t get_offset_of_bulletImpulse_9() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___bulletImpulse_9)); }
	inline float get_bulletImpulse_9() const { return ___bulletImpulse_9; }
	inline float* get_address_of_bulletImpulse_9() { return &___bulletImpulse_9; }
	inline void set_bulletImpulse_9(float value)
	{
		___bulletImpulse_9 = value;
	}

	inline static int32_t get_offset_of_playerBullet_10() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___playerBullet_10)); }
	inline GameObject_t1366199518 * get_playerBullet_10() const { return ___playerBullet_10; }
	inline GameObject_t1366199518 ** get_address_of_playerBullet_10() { return &___playerBullet_10; }
	inline void set_playerBullet_10(GameObject_t1366199518 * value)
	{
		___playerBullet_10 = value;
		Il2CppCodeGenWriteBarrier(&___playerBullet_10, value);
	}

	inline static int32_t get_offset_of_playerBulletSmall_11() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___playerBulletSmall_11)); }
	inline GameObject_t1366199518 * get_playerBulletSmall_11() const { return ___playerBulletSmall_11; }
	inline GameObject_t1366199518 ** get_address_of_playerBulletSmall_11() { return &___playerBulletSmall_11; }
	inline void set_playerBulletSmall_11(GameObject_t1366199518 * value)
	{
		___playerBulletSmall_11 = value;
		Il2CppCodeGenWriteBarrier(&___playerBulletSmall_11, value);
	}

	inline static int32_t get_offset_of_bigGun_12() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___bigGun_12)); }
	inline bool get_bigGun_12() const { return ___bigGun_12; }
	inline bool* get_address_of_bigGun_12() { return &___bigGun_12; }
	inline void set_bigGun_12(bool value)
	{
		___bigGun_12 = value;
	}

	inline static int32_t get_offset_of_smallGun_13() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___smallGun_13)); }
	inline bool get_smallGun_13() const { return ___smallGun_13; }
	inline bool* get_address_of_smallGun_13() { return &___smallGun_13; }
	inline void set_smallGun_13(bool value)
	{
		___smallGun_13 = value;
	}

	inline static int32_t get_offset_of_timer_14() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___timer_14)); }
	inline int32_t get_timer_14() const { return ___timer_14; }
	inline int32_t* get_address_of_timer_14() { return &___timer_14; }
	inline void set_timer_14(int32_t value)
	{
		___timer_14 = value;
	}

	inline static int32_t get_offset_of_totalTime_15() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___totalTime_15)); }
	inline int32_t get_totalTime_15() const { return ___totalTime_15; }
	inline int32_t* get_address_of_totalTime_15() { return &___totalTime_15; }
	inline void set_totalTime_15(int32_t value)
	{
		___totalTime_15 = value;
	}
};

struct PlayerController_t4148409433_StaticFields
{
public:
	// System.Single PlayerController::totalPoints
	float ___totalPoints_4;
	// System.Int32 PlayerController::difficulty
	int32_t ___difficulty_8;

public:
	inline static int32_t get_offset_of_totalPoints_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433_StaticFields, ___totalPoints_4)); }
	inline float get_totalPoints_4() const { return ___totalPoints_4; }
	inline float* get_address_of_totalPoints_4() { return &___totalPoints_4; }
	inline void set_totalPoints_4(float value)
	{
		___totalPoints_4 = value;
	}

	inline static int32_t get_offset_of_difficulty_8() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433_StaticFields, ___difficulty_8)); }
	inline int32_t get_difficulty_8() const { return ___difficulty_8; }
	inline int32_t* get_address_of_difficulty_8() { return &___difficulty_8; }
	inline void set_difficulty_8(int32_t value)
	{
		___difficulty_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
