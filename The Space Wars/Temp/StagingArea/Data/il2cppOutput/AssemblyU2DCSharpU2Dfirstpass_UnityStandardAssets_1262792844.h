#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityStandardAssets.Utility.TimedObjectActivator/Entries
struct Entries_t2164939972;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.TimedObjectActivator
struct  TimedObjectActivator_t1262792844  : public MonoBehaviour_t774292115
{
public:
	// UnityStandardAssets.Utility.TimedObjectActivator/Entries UnityStandardAssets.Utility.TimedObjectActivator::entries
	Entries_t2164939972 * ___entries_2;

public:
	inline static int32_t get_offset_of_entries_2() { return static_cast<int32_t>(offsetof(TimedObjectActivator_t1262792844, ___entries_2)); }
	inline Entries_t2164939972 * get_entries_2() const { return ___entries_2; }
	inline Entries_t2164939972 ** get_address_of_entries_2() { return &___entries_2; }
	inline void set_entries_2(Entries_t2164939972 * value)
	{
		___entries_2 = value;
		Il2CppCodeGenWriteBarrier(&___entries_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
