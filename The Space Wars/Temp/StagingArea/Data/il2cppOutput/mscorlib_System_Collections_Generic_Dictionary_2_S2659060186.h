﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_En684356285.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct  ShimEnumerator_t2659060186  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ShimEnumerator::host_enumerator
	Enumerator_t684356286  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(ShimEnumerator_t2659060186, ___host_enumerator_0)); }
	inline Enumerator_t684356286  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t684356286 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t684356286  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
