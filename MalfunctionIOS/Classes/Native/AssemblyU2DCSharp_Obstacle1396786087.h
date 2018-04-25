#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Object
struct Object_t1021602117;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Obstacle
struct  Obstacle_t1396786087  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Obstacle::isActive
	bool ___isActive_2;
	// UnityEngine.GameObject Obstacle::coinObject
	GameObject_t1756533147 * ___coinObject_3;
	// System.Int32 Obstacle::globalRowIndex
	int32_t ___globalRowIndex_4;
	// System.Int32 Obstacle::column
	int32_t ___column_5;
	// UnityEngine.Color Obstacle::originalColor
	Color_t2020392075  ___originalColor_6;

public:
	inline static int32_t get_offset_of_isActive_2() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087, ___isActive_2)); }
	inline bool get_isActive_2() const { return ___isActive_2; }
	inline bool* get_address_of_isActive_2() { return &___isActive_2; }
	inline void set_isActive_2(bool value)
	{
		___isActive_2 = value;
	}

	inline static int32_t get_offset_of_coinObject_3() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087, ___coinObject_3)); }
	inline GameObject_t1756533147 * get_coinObject_3() const { return ___coinObject_3; }
	inline GameObject_t1756533147 ** get_address_of_coinObject_3() { return &___coinObject_3; }
	inline void set_coinObject_3(GameObject_t1756533147 * value)
	{
		___coinObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___coinObject_3, value);
	}

	inline static int32_t get_offset_of_globalRowIndex_4() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087, ___globalRowIndex_4)); }
	inline int32_t get_globalRowIndex_4() const { return ___globalRowIndex_4; }
	inline int32_t* get_address_of_globalRowIndex_4() { return &___globalRowIndex_4; }
	inline void set_globalRowIndex_4(int32_t value)
	{
		___globalRowIndex_4 = value;
	}

	inline static int32_t get_offset_of_column_5() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087, ___column_5)); }
	inline int32_t get_column_5() const { return ___column_5; }
	inline int32_t* get_address_of_column_5() { return &___column_5; }
	inline void set_column_5(int32_t value)
	{
		___column_5 = value;
	}

	inline static int32_t get_offset_of_originalColor_6() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087, ___originalColor_6)); }
	inline Color_t2020392075  get_originalColor_6() const { return ___originalColor_6; }
	inline Color_t2020392075 * get_address_of_originalColor_6() { return &___originalColor_6; }
	inline void set_originalColor_6(Color_t2020392075  value)
	{
		___originalColor_6 = value;
	}
};

struct Obstacle_t1396786087_StaticFields
{
public:
	// UnityEngine.Object Obstacle::coin
	Object_t1021602117 * ___coin_7;
	// UnityEngine.Object Obstacle::speedUp
	Object_t1021602117 * ___speedUp_8;
	// UnityEngine.Object Obstacle::slowDown
	Object_t1021602117 * ___slowDown_9;
	// UnityEngine.Object Obstacle::gun
	Object_t1021602117 * ___gun_10;
	// UnityEngine.Object Obstacle::shield
	Object_t1021602117 * ___shield_11;

public:
	inline static int32_t get_offset_of_coin_7() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087_StaticFields, ___coin_7)); }
	inline Object_t1021602117 * get_coin_7() const { return ___coin_7; }
	inline Object_t1021602117 ** get_address_of_coin_7() { return &___coin_7; }
	inline void set_coin_7(Object_t1021602117 * value)
	{
		___coin_7 = value;
		Il2CppCodeGenWriteBarrier(&___coin_7, value);
	}

	inline static int32_t get_offset_of_speedUp_8() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087_StaticFields, ___speedUp_8)); }
	inline Object_t1021602117 * get_speedUp_8() const { return ___speedUp_8; }
	inline Object_t1021602117 ** get_address_of_speedUp_8() { return &___speedUp_8; }
	inline void set_speedUp_8(Object_t1021602117 * value)
	{
		___speedUp_8 = value;
		Il2CppCodeGenWriteBarrier(&___speedUp_8, value);
	}

	inline static int32_t get_offset_of_slowDown_9() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087_StaticFields, ___slowDown_9)); }
	inline Object_t1021602117 * get_slowDown_9() const { return ___slowDown_9; }
	inline Object_t1021602117 ** get_address_of_slowDown_9() { return &___slowDown_9; }
	inline void set_slowDown_9(Object_t1021602117 * value)
	{
		___slowDown_9 = value;
		Il2CppCodeGenWriteBarrier(&___slowDown_9, value);
	}

	inline static int32_t get_offset_of_gun_10() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087_StaticFields, ___gun_10)); }
	inline Object_t1021602117 * get_gun_10() const { return ___gun_10; }
	inline Object_t1021602117 ** get_address_of_gun_10() { return &___gun_10; }
	inline void set_gun_10(Object_t1021602117 * value)
	{
		___gun_10 = value;
		Il2CppCodeGenWriteBarrier(&___gun_10, value);
	}

	inline static int32_t get_offset_of_shield_11() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087_StaticFields, ___shield_11)); }
	inline Object_t1021602117 * get_shield_11() const { return ___shield_11; }
	inline Object_t1021602117 ** get_address_of_shield_11() { return &___shield_11; }
	inline void set_shield_11(Object_t1021602117 * value)
	{
		___shield_11 = value;
		Il2CppCodeGenWriteBarrier(&___shield_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
