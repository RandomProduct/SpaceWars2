#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Slider
struct Slider_t3374729198;
// UnityEngine.UI.Image
struct Image_t2058862956;
// UnityEngine.AudioClip
struct AudioClip_t3927647597;
// UnityEngine.Animator
struct Animator_t2442207934;
// UnityEngine.AudioSource
struct AudioSource_t585923902;
// UnityEngine.GameObject
struct GameObject_t1366199518;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"
#include "UnityEngine_UnityEngine_Color2250949164.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerHealth
struct  PlayerHealth_t2894595013  : public MonoBehaviour_t774292115
{
public:
	// System.Int32 PlayerHealth::startingHealth
	int32_t ___startingHealth_2;
	// System.Int32 PlayerHealth::currentHealth
	int32_t ___currentHealth_3;
	// UnityEngine.UI.Slider PlayerHealth::healthSlider
	Slider_t3374729198 * ___healthSlider_4;
	// UnityEngine.UI.Image PlayerHealth::damageImage
	Image_t2058862956 * ___damageImage_5;
	// UnityEngine.AudioClip PlayerHealth::deathClip
	AudioClip_t3927647597 * ___deathClip_6;
	// System.Single PlayerHealth::flashSpeed
	float ___flashSpeed_7;
	// UnityEngine.Color PlayerHealth::flashColour
	Color_t2250949164  ___flashColour_8;
	// System.Int32 PlayerHealth::attackDamage
	int32_t ___attackDamage_9;
	// UnityEngine.Animator PlayerHealth::anim
	Animator_t2442207934 * ___anim_10;
	// UnityEngine.AudioSource PlayerHealth::playerAudio
	AudioSource_t585923902 * ___playerAudio_11;
	// System.Boolean PlayerHealth::isDead
	bool ___isDead_12;
	// System.Boolean PlayerHealth::damaged
	bool ___damaged_13;
	// System.Int32 PlayerHealth::difficulty
	int32_t ___difficulty_14;
	// UnityEngine.GameObject PlayerHealth::deathObject
	GameObject_t1366199518 * ___deathObject_15;

public:
	inline static int32_t get_offset_of_startingHealth_2() { return static_cast<int32_t>(offsetof(PlayerHealth_t2894595013, ___startingHealth_2)); }
	inline int32_t get_startingHealth_2() const { return ___startingHealth_2; }
	inline int32_t* get_address_of_startingHealth_2() { return &___startingHealth_2; }
	inline void set_startingHealth_2(int32_t value)
	{
		___startingHealth_2 = value;
	}

	inline static int32_t get_offset_of_currentHealth_3() { return static_cast<int32_t>(offsetof(PlayerHealth_t2894595013, ___currentHealth_3)); }
	inline int32_t get_currentHealth_3() const { return ___currentHealth_3; }
	inline int32_t* get_address_of_currentHealth_3() { return &___currentHealth_3; }
	inline void set_currentHealth_3(int32_t value)
	{
		___currentHealth_3 = value;
	}

	inline static int32_t get_offset_of_healthSlider_4() { return static_cast<int32_t>(offsetof(PlayerHealth_t2894595013, ___healthSlider_4)); }
	inline Slider_t3374729198 * get_healthSlider_4() const { return ___healthSlider_4; }
	inline Slider_t3374729198 ** get_address_of_healthSlider_4() { return &___healthSlider_4; }
	inline void set_healthSlider_4(Slider_t3374729198 * value)
	{
		___healthSlider_4 = value;
		Il2CppCodeGenWriteBarrier(&___healthSlider_4, value);
	}

	inline static int32_t get_offset_of_damageImage_5() { return static_cast<int32_t>(offsetof(PlayerHealth_t2894595013, ___damageImage_5)); }
	inline Image_t2058862956 * get_damageImage_5() const { return ___damageImage_5; }
	inline Image_t2058862956 ** get_address_of_damageImage_5() { return &___damageImage_5; }
	inline void set_damageImage_5(Image_t2058862956 * value)
	{
		___damageImage_5 = value;
		Il2CppCodeGenWriteBarrier(&___damageImage_5, value);
	}

	inline static int32_t get_offset_of_deathClip_6() { return static_cast<int32_t>(offsetof(PlayerHealth_t2894595013, ___deathClip_6)); }
	inline AudioClip_t3927647597 * get_deathClip_6() const { return ___deathClip_6; }
	inline AudioClip_t3927647597 ** get_address_of_deathClip_6() { return &___deathClip_6; }
	inline void set_deathClip_6(AudioClip_t3927647597 * value)
	{
		___deathClip_6 = value;
		Il2CppCodeGenWriteBarrier(&___deathClip_6, value);
	}

	inline static int32_t get_offset_of_flashSpeed_7() { return static_cast<int32_t>(offsetof(PlayerHealth_t2894595013, ___flashSpeed_7)); }
	inline float get_flashSpeed_7() const { return ___flashSpeed_7; }
	inline float* get_address_of_flashSpeed_7() { return &___flashSpeed_7; }
	inline void set_flashSpeed_7(float value)
	{
		___flashSpeed_7 = value;
	}

	inline static int32_t get_offset_of_flashColour_8() { return static_cast<int32_t>(offsetof(PlayerHealth_t2894595013, ___flashColour_8)); }
	inline Color_t2250949164  get_flashColour_8() const { return ___flashColour_8; }
	inline Color_t2250949164 * get_address_of_flashColour_8() { return &___flashColour_8; }
	inline void set_flashColour_8(Color_t2250949164  value)
	{
		___flashColour_8 = value;
	}

	inline static int32_t get_offset_of_attackDamage_9() { return static_cast<int32_t>(offsetof(PlayerHealth_t2894595013, ___attackDamage_9)); }
	inline int32_t get_attackDamage_9() const { return ___attackDamage_9; }
	inline int32_t* get_address_of_attackDamage_9() { return &___attackDamage_9; }
	inline void set_attackDamage_9(int32_t value)
	{
		___attackDamage_9 = value;
	}

	inline static int32_t get_offset_of_anim_10() { return static_cast<int32_t>(offsetof(PlayerHealth_t2894595013, ___anim_10)); }
	inline Animator_t2442207934 * get_anim_10() const { return ___anim_10; }
	inline Animator_t2442207934 ** get_address_of_anim_10() { return &___anim_10; }
	inline void set_anim_10(Animator_t2442207934 * value)
	{
		___anim_10 = value;
		Il2CppCodeGenWriteBarrier(&___anim_10, value);
	}

	inline static int32_t get_offset_of_playerAudio_11() { return static_cast<int32_t>(offsetof(PlayerHealth_t2894595013, ___playerAudio_11)); }
	inline AudioSource_t585923902 * get_playerAudio_11() const { return ___playerAudio_11; }
	inline AudioSource_t585923902 ** get_address_of_playerAudio_11() { return &___playerAudio_11; }
	inline void set_playerAudio_11(AudioSource_t585923902 * value)
	{
		___playerAudio_11 = value;
		Il2CppCodeGenWriteBarrier(&___playerAudio_11, value);
	}

	inline static int32_t get_offset_of_isDead_12() { return static_cast<int32_t>(offsetof(PlayerHealth_t2894595013, ___isDead_12)); }
	inline bool get_isDead_12() const { return ___isDead_12; }
	inline bool* get_address_of_isDead_12() { return &___isDead_12; }
	inline void set_isDead_12(bool value)
	{
		___isDead_12 = value;
	}

	inline static int32_t get_offset_of_damaged_13() { return static_cast<int32_t>(offsetof(PlayerHealth_t2894595013, ___damaged_13)); }
	inline bool get_damaged_13() const { return ___damaged_13; }
	inline bool* get_address_of_damaged_13() { return &___damaged_13; }
	inline void set_damaged_13(bool value)
	{
		___damaged_13 = value;
	}

	inline static int32_t get_offset_of_difficulty_14() { return static_cast<int32_t>(offsetof(PlayerHealth_t2894595013, ___difficulty_14)); }
	inline int32_t get_difficulty_14() const { return ___difficulty_14; }
	inline int32_t* get_address_of_difficulty_14() { return &___difficulty_14; }
	inline void set_difficulty_14(int32_t value)
	{
		___difficulty_14 = value;
	}

	inline static int32_t get_offset_of_deathObject_15() { return static_cast<int32_t>(offsetof(PlayerHealth_t2894595013, ___deathObject_15)); }
	inline GameObject_t1366199518 * get_deathObject_15() const { return ___deathObject_15; }
	inline GameObject_t1366199518 ** get_address_of_deathObject_15() { return &___deathObject_15; }
	inline void set_deathObject_15(GameObject_t1366199518 * value)
	{
		___deathObject_15 = value;
		Il2CppCodeGenWriteBarrier(&___deathObject_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
