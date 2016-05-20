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

// MainMenuController
struct  MainMenuController_t2486335374  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.GameObject MainMenuController::MainMenu
	GameObject_t1366199518 * ___MainMenu_2;
	// UnityEngine.GameObject MainMenuController::DifficultySelection
	GameObject_t1366199518 * ___DifficultySelection_3;
	// UnityEngine.GameObject MainMenuController::Credits
	GameObject_t1366199518 * ___Credits_4;
	// UnityEngine.GameObject MainMenuController::HighScores
	GameObject_t1366199518 * ___HighScores_5;
	// UnityEngine.GameObject MainMenuController::Controls
	GameObject_t1366199518 * ___Controls_6;

public:
	inline static int32_t get_offset_of_MainMenu_2() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___MainMenu_2)); }
	inline GameObject_t1366199518 * get_MainMenu_2() const { return ___MainMenu_2; }
	inline GameObject_t1366199518 ** get_address_of_MainMenu_2() { return &___MainMenu_2; }
	inline void set_MainMenu_2(GameObject_t1366199518 * value)
	{
		___MainMenu_2 = value;
		Il2CppCodeGenWriteBarrier(&___MainMenu_2, value);
	}

	inline static int32_t get_offset_of_DifficultySelection_3() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___DifficultySelection_3)); }
	inline GameObject_t1366199518 * get_DifficultySelection_3() const { return ___DifficultySelection_3; }
	inline GameObject_t1366199518 ** get_address_of_DifficultySelection_3() { return &___DifficultySelection_3; }
	inline void set_DifficultySelection_3(GameObject_t1366199518 * value)
	{
		___DifficultySelection_3 = value;
		Il2CppCodeGenWriteBarrier(&___DifficultySelection_3, value);
	}

	inline static int32_t get_offset_of_Credits_4() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___Credits_4)); }
	inline GameObject_t1366199518 * get_Credits_4() const { return ___Credits_4; }
	inline GameObject_t1366199518 ** get_address_of_Credits_4() { return &___Credits_4; }
	inline void set_Credits_4(GameObject_t1366199518 * value)
	{
		___Credits_4 = value;
		Il2CppCodeGenWriteBarrier(&___Credits_4, value);
	}

	inline static int32_t get_offset_of_HighScores_5() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___HighScores_5)); }
	inline GameObject_t1366199518 * get_HighScores_5() const { return ___HighScores_5; }
	inline GameObject_t1366199518 ** get_address_of_HighScores_5() { return &___HighScores_5; }
	inline void set_HighScores_5(GameObject_t1366199518 * value)
	{
		___HighScores_5 = value;
		Il2CppCodeGenWriteBarrier(&___HighScores_5, value);
	}

	inline static int32_t get_offset_of_Controls_6() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___Controls_6)); }
	inline GameObject_t1366199518 * get_Controls_6() const { return ___Controls_6; }
	inline GameObject_t1366199518 ** get_address_of_Controls_6() { return &___Controls_6; }
	inline void set_Controls_6(GameObject_t1366199518 * value)
	{
		___Controls_6 = value;
		Il2CppCodeGenWriteBarrier(&___Controls_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
