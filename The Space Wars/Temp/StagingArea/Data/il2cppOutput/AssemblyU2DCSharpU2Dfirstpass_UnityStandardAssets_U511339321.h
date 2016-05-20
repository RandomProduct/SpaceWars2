#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityStandardAssets.Utility.WaypointCircuit
struct WaypointCircuit_t3183707927;
// UnityEngine.Transform
struct Transform_t224878301;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_4167213812.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_4172996975.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointProgressTracker
struct  WaypointProgressTracker_t511339321  : public MonoBehaviour_t774292115
{
public:
	// UnityStandardAssets.Utility.WaypointCircuit UnityStandardAssets.Utility.WaypointProgressTracker::circuit
	WaypointCircuit_t3183707927 * ___circuit_2;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForTargetOffset
	float ___lookAheadForTargetOffset_3;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForTargetFactor
	float ___lookAheadForTargetFactor_4;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForSpeedOffset
	float ___lookAheadForSpeedOffset_5;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForSpeedFactor
	float ___lookAheadForSpeedFactor_6;
	// UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle UnityStandardAssets.Utility.WaypointProgressTracker::progressStyle
	int32_t ___progressStyle_7;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::pointToPointThreshold
	float ___pointToPointThreshold_8;
	// UnityEngine.Transform UnityStandardAssets.Utility.WaypointProgressTracker::target
	Transform_t224878301 * ___target_9;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::progressDistance
	float ___progressDistance_10;
	// System.Int32 UnityStandardAssets.Utility.WaypointProgressTracker::progressNum
	int32_t ___progressNum_11;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointProgressTracker::lastPosition
	Vector3_t465617797  ___lastPosition_12;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::speed
	float ___speed_13;
	// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::<targetPoint>k__BackingField
	RoutePoint_t4172996975  ___U3CtargetPointU3Ek__BackingField_14;
	// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::<speedPoint>k__BackingField
	RoutePoint_t4172996975  ___U3CspeedPointU3Ek__BackingField_15;
	// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::<progressPoint>k__BackingField
	RoutePoint_t4172996975  ___U3CprogressPointU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_circuit_2() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t511339321, ___circuit_2)); }
	inline WaypointCircuit_t3183707927 * get_circuit_2() const { return ___circuit_2; }
	inline WaypointCircuit_t3183707927 ** get_address_of_circuit_2() { return &___circuit_2; }
	inline void set_circuit_2(WaypointCircuit_t3183707927 * value)
	{
		___circuit_2 = value;
		Il2CppCodeGenWriteBarrier(&___circuit_2, value);
	}

	inline static int32_t get_offset_of_lookAheadForTargetOffset_3() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t511339321, ___lookAheadForTargetOffset_3)); }
	inline float get_lookAheadForTargetOffset_3() const { return ___lookAheadForTargetOffset_3; }
	inline float* get_address_of_lookAheadForTargetOffset_3() { return &___lookAheadForTargetOffset_3; }
	inline void set_lookAheadForTargetOffset_3(float value)
	{
		___lookAheadForTargetOffset_3 = value;
	}

	inline static int32_t get_offset_of_lookAheadForTargetFactor_4() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t511339321, ___lookAheadForTargetFactor_4)); }
	inline float get_lookAheadForTargetFactor_4() const { return ___lookAheadForTargetFactor_4; }
	inline float* get_address_of_lookAheadForTargetFactor_4() { return &___lookAheadForTargetFactor_4; }
	inline void set_lookAheadForTargetFactor_4(float value)
	{
		___lookAheadForTargetFactor_4 = value;
	}

	inline static int32_t get_offset_of_lookAheadForSpeedOffset_5() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t511339321, ___lookAheadForSpeedOffset_5)); }
	inline float get_lookAheadForSpeedOffset_5() const { return ___lookAheadForSpeedOffset_5; }
	inline float* get_address_of_lookAheadForSpeedOffset_5() { return &___lookAheadForSpeedOffset_5; }
	inline void set_lookAheadForSpeedOffset_5(float value)
	{
		___lookAheadForSpeedOffset_5 = value;
	}

	inline static int32_t get_offset_of_lookAheadForSpeedFactor_6() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t511339321, ___lookAheadForSpeedFactor_6)); }
	inline float get_lookAheadForSpeedFactor_6() const { return ___lookAheadForSpeedFactor_6; }
	inline float* get_address_of_lookAheadForSpeedFactor_6() { return &___lookAheadForSpeedFactor_6; }
	inline void set_lookAheadForSpeedFactor_6(float value)
	{
		___lookAheadForSpeedFactor_6 = value;
	}

	inline static int32_t get_offset_of_progressStyle_7() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t511339321, ___progressStyle_7)); }
	inline int32_t get_progressStyle_7() const { return ___progressStyle_7; }
	inline int32_t* get_address_of_progressStyle_7() { return &___progressStyle_7; }
	inline void set_progressStyle_7(int32_t value)
	{
		___progressStyle_7 = value;
	}

	inline static int32_t get_offset_of_pointToPointThreshold_8() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t511339321, ___pointToPointThreshold_8)); }
	inline float get_pointToPointThreshold_8() const { return ___pointToPointThreshold_8; }
	inline float* get_address_of_pointToPointThreshold_8() { return &___pointToPointThreshold_8; }
	inline void set_pointToPointThreshold_8(float value)
	{
		___pointToPointThreshold_8 = value;
	}

	inline static int32_t get_offset_of_target_9() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t511339321, ___target_9)); }
	inline Transform_t224878301 * get_target_9() const { return ___target_9; }
	inline Transform_t224878301 ** get_address_of_target_9() { return &___target_9; }
	inline void set_target_9(Transform_t224878301 * value)
	{
		___target_9 = value;
		Il2CppCodeGenWriteBarrier(&___target_9, value);
	}

	inline static int32_t get_offset_of_progressDistance_10() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t511339321, ___progressDistance_10)); }
	inline float get_progressDistance_10() const { return ___progressDistance_10; }
	inline float* get_address_of_progressDistance_10() { return &___progressDistance_10; }
	inline void set_progressDistance_10(float value)
	{
		___progressDistance_10 = value;
	}

	inline static int32_t get_offset_of_progressNum_11() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t511339321, ___progressNum_11)); }
	inline int32_t get_progressNum_11() const { return ___progressNum_11; }
	inline int32_t* get_address_of_progressNum_11() { return &___progressNum_11; }
	inline void set_progressNum_11(int32_t value)
	{
		___progressNum_11 = value;
	}

	inline static int32_t get_offset_of_lastPosition_12() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t511339321, ___lastPosition_12)); }
	inline Vector3_t465617797  get_lastPosition_12() const { return ___lastPosition_12; }
	inline Vector3_t465617797 * get_address_of_lastPosition_12() { return &___lastPosition_12; }
	inline void set_lastPosition_12(Vector3_t465617797  value)
	{
		___lastPosition_12 = value;
	}

	inline static int32_t get_offset_of_speed_13() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t511339321, ___speed_13)); }
	inline float get_speed_13() const { return ___speed_13; }
	inline float* get_address_of_speed_13() { return &___speed_13; }
	inline void set_speed_13(float value)
	{
		___speed_13 = value;
	}

	inline static int32_t get_offset_of_U3CtargetPointU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t511339321, ___U3CtargetPointU3Ek__BackingField_14)); }
	inline RoutePoint_t4172996975  get_U3CtargetPointU3Ek__BackingField_14() const { return ___U3CtargetPointU3Ek__BackingField_14; }
	inline RoutePoint_t4172996975 * get_address_of_U3CtargetPointU3Ek__BackingField_14() { return &___U3CtargetPointU3Ek__BackingField_14; }
	inline void set_U3CtargetPointU3Ek__BackingField_14(RoutePoint_t4172996975  value)
	{
		___U3CtargetPointU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CspeedPointU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t511339321, ___U3CspeedPointU3Ek__BackingField_15)); }
	inline RoutePoint_t4172996975  get_U3CspeedPointU3Ek__BackingField_15() const { return ___U3CspeedPointU3Ek__BackingField_15; }
	inline RoutePoint_t4172996975 * get_address_of_U3CspeedPointU3Ek__BackingField_15() { return &___U3CspeedPointU3Ek__BackingField_15; }
	inline void set_U3CspeedPointU3Ek__BackingField_15(RoutePoint_t4172996975  value)
	{
		___U3CspeedPointU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CprogressPointU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t511339321, ___U3CprogressPointU3Ek__BackingField_16)); }
	inline RoutePoint_t4172996975  get_U3CprogressPointU3Ek__BackingField_16() const { return ___U3CprogressPointU3Ek__BackingField_16; }
	inline RoutePoint_t4172996975 * get_address_of_U3CprogressPointU3Ek__BackingField_16() { return &___U3CprogressPointU3Ek__BackingField_16; }
	inline void set_U3CprogressPointU3Ek__BackingField_16(RoutePoint_t4172996975  value)
	{
		___U3CprogressPointU3Ek__BackingField_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
