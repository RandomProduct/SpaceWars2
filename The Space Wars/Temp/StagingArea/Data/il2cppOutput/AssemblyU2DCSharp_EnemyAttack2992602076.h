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
// PlayerHealth
struct PlayerHealth_t2894595013;
// UnityEngine.Rigidbody
struct Rigidbody_t1071364940;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyAttack
struct  EnemyAttack_t2992602076  : public MonoBehaviour_t774292115
{
public:
	// System.Single EnemyAttack::timeBetweenAttacks
	float ___timeBetweenAttacks_2;
	// System.Int32 EnemyAttack::attackDamage
	int32_t ___attackDamage_3;
	// UnityEngine.GameObject EnemyAttack::player
	GameObject_t1366199518 * ___player_4;
	// UnityEngine.Transform EnemyAttack::playerTransform
	Transform_t224878301 * ___playerTransform_5;
	// PlayerHealth EnemyAttack::playerHealth
	PlayerHealth_t2894595013 * ___playerHealth_6;
	// System.Single EnemyAttack::timer
	float ___timer_7;
	// System.Single EnemyAttack::range
	float ___range_8;
	// System.Single EnemyAttack::bulletImpulse
	float ___bulletImpulse_9;
	// System.Boolean EnemyAttack::onRange
	bool ___onRange_10;
	// UnityEngine.Rigidbody EnemyAttack::projectile
	Rigidbody_t1071364940 * ___projectile_11;
	// UnityEngine.GameObject EnemyAttack::explosion
	GameObject_t1366199518 * ___explosion_12;
	// System.Int32 EnemyAttack::turretHealth
	int32_t ___turretHealth_13;

public:
	inline static int32_t get_offset_of_timeBetweenAttacks_2() { return static_cast<int32_t>(offsetof(EnemyAttack_t2992602076, ___timeBetweenAttacks_2)); }
	inline float get_timeBetweenAttacks_2() const { return ___timeBetweenAttacks_2; }
	inline float* get_address_of_timeBetweenAttacks_2() { return &___timeBetweenAttacks_2; }
	inline void set_timeBetweenAttacks_2(float value)
	{
		___timeBetweenAttacks_2 = value;
	}

	inline static int32_t get_offset_of_attackDamage_3() { return static_cast<int32_t>(offsetof(EnemyAttack_t2992602076, ___attackDamage_3)); }
	inline int32_t get_attackDamage_3() const { return ___attackDamage_3; }
	inline int32_t* get_address_of_attackDamage_3() { return &___attackDamage_3; }
	inline void set_attackDamage_3(int32_t value)
	{
		___attackDamage_3 = value;
	}

	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(EnemyAttack_t2992602076, ___player_4)); }
	inline GameObject_t1366199518 * get_player_4() const { return ___player_4; }
	inline GameObject_t1366199518 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_t1366199518 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier(&___player_4, value);
	}

	inline static int32_t get_offset_of_playerTransform_5() { return static_cast<int32_t>(offsetof(EnemyAttack_t2992602076, ___playerTransform_5)); }
	inline Transform_t224878301 * get_playerTransform_5() const { return ___playerTransform_5; }
	inline Transform_t224878301 ** get_address_of_playerTransform_5() { return &___playerTransform_5; }
	inline void set_playerTransform_5(Transform_t224878301 * value)
	{
		___playerTransform_5 = value;
		Il2CppCodeGenWriteBarrier(&___playerTransform_5, value);
	}

	inline static int32_t get_offset_of_playerHealth_6() { return static_cast<int32_t>(offsetof(EnemyAttack_t2992602076, ___playerHealth_6)); }
	inline PlayerHealth_t2894595013 * get_playerHealth_6() const { return ___playerHealth_6; }
	inline PlayerHealth_t2894595013 ** get_address_of_playerHealth_6() { return &___playerHealth_6; }
	inline void set_playerHealth_6(PlayerHealth_t2894595013 * value)
	{
		___playerHealth_6 = value;
		Il2CppCodeGenWriteBarrier(&___playerHealth_6, value);
	}

	inline static int32_t get_offset_of_timer_7() { return static_cast<int32_t>(offsetof(EnemyAttack_t2992602076, ___timer_7)); }
	inline float get_timer_7() const { return ___timer_7; }
	inline float* get_address_of_timer_7() { return &___timer_7; }
	inline void set_timer_7(float value)
	{
		___timer_7 = value;
	}

	inline static int32_t get_offset_of_range_8() { return static_cast<int32_t>(offsetof(EnemyAttack_t2992602076, ___range_8)); }
	inline float get_range_8() const { return ___range_8; }
	inline float* get_address_of_range_8() { return &___range_8; }
	inline void set_range_8(float value)
	{
		___range_8 = value;
	}

	inline static int32_t get_offset_of_bulletImpulse_9() { return static_cast<int32_t>(offsetof(EnemyAttack_t2992602076, ___bulletImpulse_9)); }
	inline float get_bulletImpulse_9() const { return ___bulletImpulse_9; }
	inline float* get_address_of_bulletImpulse_9() { return &___bulletImpulse_9; }
	inline void set_bulletImpulse_9(float value)
	{
		___bulletImpulse_9 = value;
	}

	inline static int32_t get_offset_of_onRange_10() { return static_cast<int32_t>(offsetof(EnemyAttack_t2992602076, ___onRange_10)); }
	inline bool get_onRange_10() const { return ___onRange_10; }
	inline bool* get_address_of_onRange_10() { return &___onRange_10; }
	inline void set_onRange_10(bool value)
	{
		___onRange_10 = value;
	}

	inline static int32_t get_offset_of_projectile_11() { return static_cast<int32_t>(offsetof(EnemyAttack_t2992602076, ___projectile_11)); }
	inline Rigidbody_t1071364940 * get_projectile_11() const { return ___projectile_11; }
	inline Rigidbody_t1071364940 ** get_address_of_projectile_11() { return &___projectile_11; }
	inline void set_projectile_11(Rigidbody_t1071364940 * value)
	{
		___projectile_11 = value;
		Il2CppCodeGenWriteBarrier(&___projectile_11, value);
	}

	inline static int32_t get_offset_of_explosion_12() { return static_cast<int32_t>(offsetof(EnemyAttack_t2992602076, ___explosion_12)); }
	inline GameObject_t1366199518 * get_explosion_12() const { return ___explosion_12; }
	inline GameObject_t1366199518 ** get_address_of_explosion_12() { return &___explosion_12; }
	inline void set_explosion_12(GameObject_t1366199518 * value)
	{
		___explosion_12 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_12, value);
	}

	inline static int32_t get_offset_of_turretHealth_13() { return static_cast<int32_t>(offsetof(EnemyAttack_t2992602076, ___turretHealth_13)); }
	inline int32_t get_turretHealth_13() const { return ___turretHealth_13; }
	inline int32_t* get_address_of_turretHealth_13() { return &___turretHealth_13; }
	inline void set_turretHealth_13(int32_t value)
	{
		___turretHealth_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
