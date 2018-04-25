#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObstacleSpawner
struct  ObstacleSpawner_t2040278039  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ObstacleSpawner::groupRotateSpeed
	float ___groupRotateSpeed_2;
	// System.Single ObstacleSpawner::spawnRange
	float ___spawnRange_3;
	// UnityEngine.Vector3[] ObstacleSpawner::configs
	Vector3U5BU5D_t1172311765* ___configs_5;
	// System.Int32 ObstacleSpawner::wave
	int32_t ___wave_6;

public:
	inline static int32_t get_offset_of_groupRotateSpeed_2() { return static_cast<int32_t>(offsetof(ObstacleSpawner_t2040278039, ___groupRotateSpeed_2)); }
	inline float get_groupRotateSpeed_2() const { return ___groupRotateSpeed_2; }
	inline float* get_address_of_groupRotateSpeed_2() { return &___groupRotateSpeed_2; }
	inline void set_groupRotateSpeed_2(float value)
	{
		___groupRotateSpeed_2 = value;
	}

	inline static int32_t get_offset_of_spawnRange_3() { return static_cast<int32_t>(offsetof(ObstacleSpawner_t2040278039, ___spawnRange_3)); }
	inline float get_spawnRange_3() const { return ___spawnRange_3; }
	inline float* get_address_of_spawnRange_3() { return &___spawnRange_3; }
	inline void set_spawnRange_3(float value)
	{
		___spawnRange_3 = value;
	}

	inline static int32_t get_offset_of_configs_5() { return static_cast<int32_t>(offsetof(ObstacleSpawner_t2040278039, ___configs_5)); }
	inline Vector3U5BU5D_t1172311765* get_configs_5() const { return ___configs_5; }
	inline Vector3U5BU5D_t1172311765** get_address_of_configs_5() { return &___configs_5; }
	inline void set_configs_5(Vector3U5BU5D_t1172311765* value)
	{
		___configs_5 = value;
		Il2CppCodeGenWriteBarrier(&___configs_5, value);
	}

	inline static int32_t get_offset_of_wave_6() { return static_cast<int32_t>(offsetof(ObstacleSpawner_t2040278039, ___wave_6)); }
	inline int32_t get_wave_6() const { return ___wave_6; }
	inline int32_t* get_address_of_wave_6() { return &___wave_6; }
	inline void set_wave_6(int32_t value)
	{
		___wave_6 = value;
	}
};

struct ObstacleSpawner_t2040278039_StaticFields
{
public:
	// UnityEngine.Vector2 ObstacleSpawner::lastEntry
	Vector2_t2243707579  ___lastEntry_4;

public:
	inline static int32_t get_offset_of_lastEntry_4() { return static_cast<int32_t>(offsetof(ObstacleSpawner_t2040278039_StaticFields, ___lastEntry_4)); }
	inline Vector2_t2243707579  get_lastEntry_4() const { return ___lastEntry_4; }
	inline Vector2_t2243707579 * get_address_of_lastEntry_4() { return &___lastEntry_4; }
	inline void set_lastEntry_4(Vector2_t2243707579  value)
	{
		___lastEntry_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
