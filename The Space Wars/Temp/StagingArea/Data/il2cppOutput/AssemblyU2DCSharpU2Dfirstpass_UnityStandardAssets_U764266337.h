﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Shader
struct Shader_t2331662484;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition
struct  ReplacementDefinition_t764266337  : public Il2CppObject
{
public:
	// UnityEngine.Shader UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition::original
	Shader_t2331662484 * ___original_0;
	// UnityEngine.Shader UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition::replacement
	Shader_t2331662484 * ___replacement_1;

public:
	inline static int32_t get_offset_of_original_0() { return static_cast<int32_t>(offsetof(ReplacementDefinition_t764266337, ___original_0)); }
	inline Shader_t2331662484 * get_original_0() const { return ___original_0; }
	inline Shader_t2331662484 ** get_address_of_original_0() { return &___original_0; }
	inline void set_original_0(Shader_t2331662484 * value)
	{
		___original_0 = value;
		Il2CppCodeGenWriteBarrier(&___original_0, value);
	}

	inline static int32_t get_offset_of_replacement_1() { return static_cast<int32_t>(offsetof(ReplacementDefinition_t764266337, ___replacement_1)); }
	inline Shader_t2331662484 * get_replacement_1() const { return ___replacement_1; }
	inline Shader_t2331662484 ** get_address_of_replacement_1() { return &___replacement_1; }
	inline void set_replacement_1(Shader_t2331662484 * value)
	{
		___replacement_1 = value;
		Il2CppCodeGenWriteBarrier(&___replacement_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif