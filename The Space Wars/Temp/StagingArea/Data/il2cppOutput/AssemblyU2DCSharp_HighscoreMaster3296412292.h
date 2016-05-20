#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HighscoreMaster
struct HighscoreMaster_t3296412292;
// System.String[]
struct StringU5BU5D_t3764931161;
// System.Int32[]
struct Int32U5BU5D_t3315407976;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighscoreMaster
struct  HighscoreMaster_t3296412292  : public MonoBehaviour_t774292115
{
public:
	// HighscoreMaster HighscoreMaster::ultimate
	HighscoreMaster_t3296412292 * ___ultimate_2;
	// System.String[] HighscoreMaster::initials
	StringU5BU5D_t3764931161* ___initials_3;
	// System.Int32[] HighscoreMaster::scores
	Int32U5BU5D_t3315407976* ___scores_4;

public:
	inline static int32_t get_offset_of_ultimate_2() { return static_cast<int32_t>(offsetof(HighscoreMaster_t3296412292, ___ultimate_2)); }
	inline HighscoreMaster_t3296412292 * get_ultimate_2() const { return ___ultimate_2; }
	inline HighscoreMaster_t3296412292 ** get_address_of_ultimate_2() { return &___ultimate_2; }
	inline void set_ultimate_2(HighscoreMaster_t3296412292 * value)
	{
		___ultimate_2 = value;
		Il2CppCodeGenWriteBarrier(&___ultimate_2, value);
	}

	inline static int32_t get_offset_of_initials_3() { return static_cast<int32_t>(offsetof(HighscoreMaster_t3296412292, ___initials_3)); }
	inline StringU5BU5D_t3764931161* get_initials_3() const { return ___initials_3; }
	inline StringU5BU5D_t3764931161** get_address_of_initials_3() { return &___initials_3; }
	inline void set_initials_3(StringU5BU5D_t3764931161* value)
	{
		___initials_3 = value;
		Il2CppCodeGenWriteBarrier(&___initials_3, value);
	}

	inline static int32_t get_offset_of_scores_4() { return static_cast<int32_t>(offsetof(HighscoreMaster_t3296412292, ___scores_4)); }
	inline Int32U5BU5D_t3315407976* get_scores_4() const { return ___scores_4; }
	inline Int32U5BU5D_t3315407976** get_address_of_scores_4() { return &___scores_4; }
	inline void set_scores_4(Int32U5BU5D_t3315407976* value)
	{
		___scores_4 = value;
		Il2CppCodeGenWriteBarrier(&___scores_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
