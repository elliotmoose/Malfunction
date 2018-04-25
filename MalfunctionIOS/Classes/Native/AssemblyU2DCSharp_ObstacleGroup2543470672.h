#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Object
struct Object_t1021602117;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObstacleGroup
struct  ObstacleGroup_t2543470672  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ObstacleGroup::spacing
	float ___spacing_2;
	// System.Single ObstacleGroup::rotateSpeed
	float ___rotateSpeed_3;
	// UnityEngine.Vector3 ObstacleGroup::targetPosition
	Vector3_t2243707580  ___targetPosition_4;
	// UnityEngine.GameObject ObstacleGroup::indicator
	GameObject_t1756533147 * ___indicator_5;
	// System.Int32 ObstacleGroup::waveID
	int32_t ___waveID_6;
	// UnityEngine.Vector3 ObstacleGroup::config
	Vector3_t2243707580  ___config_7;
	// System.Int32 ObstacleGroup::rotations
	int32_t ___rotations_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ObstacleGroup::allObstacles
	List_1_t1125654279 * ___allObstacles_10;

public:
	inline static int32_t get_offset_of_spacing_2() { return static_cast<int32_t>(offsetof(ObstacleGroup_t2543470672, ___spacing_2)); }
	inline float get_spacing_2() const { return ___spacing_2; }
	inline float* get_address_of_spacing_2() { return &___spacing_2; }
	inline void set_spacing_2(float value)
	{
		___spacing_2 = value;
	}

	inline static int32_t get_offset_of_rotateSpeed_3() { return static_cast<int32_t>(offsetof(ObstacleGroup_t2543470672, ___rotateSpeed_3)); }
	inline float get_rotateSpeed_3() const { return ___rotateSpeed_3; }
	inline float* get_address_of_rotateSpeed_3() { return &___rotateSpeed_3; }
	inline void set_rotateSpeed_3(float value)
	{
		___rotateSpeed_3 = value;
	}

	inline static int32_t get_offset_of_targetPosition_4() { return static_cast<int32_t>(offsetof(ObstacleGroup_t2543470672, ___targetPosition_4)); }
	inline Vector3_t2243707580  get_targetPosition_4() const { return ___targetPosition_4; }
	inline Vector3_t2243707580 * get_address_of_targetPosition_4() { return &___targetPosition_4; }
	inline void set_targetPosition_4(Vector3_t2243707580  value)
	{
		___targetPosition_4 = value;
	}

	inline static int32_t get_offset_of_indicator_5() { return static_cast<int32_t>(offsetof(ObstacleGroup_t2543470672, ___indicator_5)); }
	inline GameObject_t1756533147 * get_indicator_5() const { return ___indicator_5; }
	inline GameObject_t1756533147 ** get_address_of_indicator_5() { return &___indicator_5; }
	inline void set_indicator_5(GameObject_t1756533147 * value)
	{
		___indicator_5 = value;
		Il2CppCodeGenWriteBarrier(&___indicator_5, value);
	}

	inline static int32_t get_offset_of_waveID_6() { return static_cast<int32_t>(offsetof(ObstacleGroup_t2543470672, ___waveID_6)); }
	inline int32_t get_waveID_6() const { return ___waveID_6; }
	inline int32_t* get_address_of_waveID_6() { return &___waveID_6; }
	inline void set_waveID_6(int32_t value)
	{
		___waveID_6 = value;
	}

	inline static int32_t get_offset_of_config_7() { return static_cast<int32_t>(offsetof(ObstacleGroup_t2543470672, ___config_7)); }
	inline Vector3_t2243707580  get_config_7() const { return ___config_7; }
	inline Vector3_t2243707580 * get_address_of_config_7() { return &___config_7; }
	inline void set_config_7(Vector3_t2243707580  value)
	{
		___config_7 = value;
	}

	inline static int32_t get_offset_of_rotations_8() { return static_cast<int32_t>(offsetof(ObstacleGroup_t2543470672, ___rotations_8)); }
	inline int32_t get_rotations_8() const { return ___rotations_8; }
	inline int32_t* get_address_of_rotations_8() { return &___rotations_8; }
	inline void set_rotations_8(int32_t value)
	{
		___rotations_8 = value;
	}

	inline static int32_t get_offset_of_allObstacles_10() { return static_cast<int32_t>(offsetof(ObstacleGroup_t2543470672, ___allObstacles_10)); }
	inline List_1_t1125654279 * get_allObstacles_10() const { return ___allObstacles_10; }
	inline List_1_t1125654279 ** get_address_of_allObstacles_10() { return &___allObstacles_10; }
	inline void set_allObstacles_10(List_1_t1125654279 * value)
	{
		___allObstacles_10 = value;
		Il2CppCodeGenWriteBarrier(&___allObstacles_10, value);
	}
};

struct ObstacleGroup_t2543470672_StaticFields
{
public:
	// UnityEngine.Object ObstacleGroup::obstacle
	Object_t1021602117 * ___obstacle_9;
	// System.Int32 ObstacleGroup::numberOfLayers
	int32_t ___numberOfLayers_11;

public:
	inline static int32_t get_offset_of_obstacle_9() { return static_cast<int32_t>(offsetof(ObstacleGroup_t2543470672_StaticFields, ___obstacle_9)); }
	inline Object_t1021602117 * get_obstacle_9() const { return ___obstacle_9; }
	inline Object_t1021602117 ** get_address_of_obstacle_9() { return &___obstacle_9; }
	inline void set_obstacle_9(Object_t1021602117 * value)
	{
		___obstacle_9 = value;
		Il2CppCodeGenWriteBarrier(&___obstacle_9, value);
	}

	inline static int32_t get_offset_of_numberOfLayers_11() { return static_cast<int32_t>(offsetof(ObstacleGroup_t2543470672_StaticFields, ___numberOfLayers_11)); }
	inline int32_t get_numberOfLayers_11() const { return ___numberOfLayers_11; }
	inline int32_t* get_address_of_numberOfLayers_11() { return &___numberOfLayers_11; }
	inline void set_numberOfLayers_11(int32_t value)
	{
		___numberOfLayers_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
