#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RocketMan
struct  RocketMan_t1080386144  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 RocketMan::currentAxis
	int32_t ___currentAxis_2;
	// System.Int32 RocketMan::currentDirection
	int32_t ___currentDirection_3;
	// System.Boolean RocketMan::isAlive
	bool ___isAlive_4;
	// System.Single RocketMan::speed
	float ___speed_5;
	// System.Int32 RocketMan::completedWave
	int32_t ___completedWave_6;
	// System.Boolean RocketMan::isMoving
	bool ___isMoving_7;
	// UnityEngine.GameObject RocketMan::bulletPrefab
	GameObject_t1756533147 * ___bulletPrefab_8;
	// UnityEngine.GameObject RocketMan::explosionObject
	GameObject_t1756533147 * ___explosionObject_9;
	// UnityEngine.GameObject RocketMan::target
	GameObject_t1756533147 * ___target_10;
	// UnityEngine.GameObject RocketMan::context
	GameObject_t1756533147 * ___context_11;
	// UnityEngine.GameObject RocketMan::shieldObject
	GameObject_t1756533147 * ___shieldObject_12;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> RocketMan::aliveParticleEffects
	List_1_t1125654279 * ___aliveParticleEffects_13;
	// UnityEngine.MeshRenderer RocketMan::meshRenderer
	MeshRenderer_t1268241104 * ___meshRenderer_14;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> RocketMan::gunSpawnPoints
	List_1_t1125654279 * ___gunSpawnPoints_15;
	// System.Boolean RocketMan::shield
	bool ___shield_16;
	// System.Single RocketMan::gunLifeTimer
	float ___gunLifeTimer_17;
	// System.Single RocketMan::gunRunTimer
	float ___gunRunTimer_18;
	// System.Single RocketMan::gunCooldown
	float ___gunCooldown_19;
	// System.Single RocketMan::boost
	float ___boost_20;
	// System.Single RocketMan::boostLifetime
	float ___boostLifetime_21;

public:
	inline static int32_t get_offset_of_currentAxis_2() { return static_cast<int32_t>(offsetof(RocketMan_t1080386144, ___currentAxis_2)); }
	inline int32_t get_currentAxis_2() const { return ___currentAxis_2; }
	inline int32_t* get_address_of_currentAxis_2() { return &___currentAxis_2; }
	inline void set_currentAxis_2(int32_t value)
	{
		___currentAxis_2 = value;
	}

	inline static int32_t get_offset_of_currentDirection_3() { return static_cast<int32_t>(offsetof(RocketMan_t1080386144, ___currentDirection_3)); }
	inline int32_t get_currentDirection_3() const { return ___currentDirection_3; }
	inline int32_t* get_address_of_currentDirection_3() { return &___currentDirection_3; }
	inline void set_currentDirection_3(int32_t value)
	{
		___currentDirection_3 = value;
	}

	inline static int32_t get_offset_of_isAlive_4() { return static_cast<int32_t>(offsetof(RocketMan_t1080386144, ___isAlive_4)); }
	inline bool get_isAlive_4() const { return ___isAlive_4; }
	inline bool* get_address_of_isAlive_4() { return &___isAlive_4; }
	inline void set_isAlive_4(bool value)
	{
		___isAlive_4 = value;
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(RocketMan_t1080386144, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_completedWave_6() { return static_cast<int32_t>(offsetof(RocketMan_t1080386144, ___completedWave_6)); }
	inline int32_t get_completedWave_6() const { return ___completedWave_6; }
	inline int32_t* get_address_of_completedWave_6() { return &___completedWave_6; }
	inline void set_completedWave_6(int32_t value)
	{
		___completedWave_6 = value;
	}

	inline static int32_t get_offset_of_isMoving_7() { return static_cast<int32_t>(offsetof(RocketMan_t1080386144, ___isMoving_7)); }
	inline bool get_isMoving_7() const { return ___isMoving_7; }
	inline bool* get_address_of_isMoving_7() { return &___isMoving_7; }
	inline void set_isMoving_7(bool value)
	{
		___isMoving_7 = value;
	}

	inline static int32_t get_offset_of_bulletPrefab_8() { return static_cast<int32_t>(offsetof(RocketMan_t1080386144, ___bulletPrefab_8)); }
	inline GameObject_t1756533147 * get_bulletPrefab_8() const { return ___bulletPrefab_8; }
	inline GameObject_t1756533147 ** get_address_of_bulletPrefab_8() { return &___bulletPrefab_8; }
	inline void set_bulletPrefab_8(GameObject_t1756533147 * value)
	{
		___bulletPrefab_8 = value;
		Il2CppCodeGenWriteBarrier(&___bulletPrefab_8, value);
	}

	inline static int32_t get_offset_of_explosionObject_9() { return static_cast<int32_t>(offsetof(RocketMan_t1080386144, ___explosionObject_9)); }
	inline GameObject_t1756533147 * get_explosionObject_9() const { return ___explosionObject_9; }
	inline GameObject_t1756533147 ** get_address_of_explosionObject_9() { return &___explosionObject_9; }
	inline void set_explosionObject_9(GameObject_t1756533147 * value)
	{
		___explosionObject_9 = value;
		Il2CppCodeGenWriteBarrier(&___explosionObject_9, value);
	}

	inline static int32_t get_offset_of_target_10() { return static_cast<int32_t>(offsetof(RocketMan_t1080386144, ___target_10)); }
	inline GameObject_t1756533147 * get_target_10() const { return ___target_10; }
	inline GameObject_t1756533147 ** get_address_of_target_10() { return &___target_10; }
	inline void set_target_10(GameObject_t1756533147 * value)
	{
		___target_10 = value;
		Il2CppCodeGenWriteBarrier(&___target_10, value);
	}

	inline static int32_t get_offset_of_context_11() { return static_cast<int32_t>(offsetof(RocketMan_t1080386144, ___context_11)); }
	inline GameObject_t1756533147 * get_context_11() const { return ___context_11; }
	inline GameObject_t1756533147 ** get_address_of_context_11() { return &___context_11; }
	inline void set_context_11(GameObject_t1756533147 * value)
	{
		___context_11 = value;
		Il2CppCodeGenWriteBarrier(&___context_11, value);
	}

	inline static int32_t get_offset_of_shieldObject_12() { return static_cast<int32_t>(offsetof(RocketMan_t1080386144, ___shieldObject_12)); }
	inline GameObject_t1756533147 * get_shieldObject_12() const { return ___shieldObject_12; }
	inline GameObject_t1756533147 ** get_address_of_shieldObject_12() { return &___shieldObject_12; }
	inline void set_shieldObject_12(GameObject_t1756533147 * value)
	{
		___shieldObject_12 = value;
		Il2CppCodeGenWriteBarrier(&___shieldObject_12, value);
	}

	inline static int32_t get_offset_of_aliveParticleEffects_13() { return static_cast<int32_t>(offsetof(RocketMan_t1080386144, ___aliveParticleEffects_13)); }
	inline List_1_t1125654279 * get_aliveParticleEffects_13() const { return ___aliveParticleEffects_13; }
	inline List_1_t1125654279 ** get_address_of_aliveParticleEffects_13() { return &___aliveParticleEffects_13; }
	inline void set_aliveParticleEffects_13(List_1_t1125654279 * value)
	{
		___aliveParticleEffects_13 = value;
		Il2CppCodeGenWriteBarrier(&___aliveParticleEffects_13, value);
	}

	inline static int32_t get_offset_of_meshRenderer_14() { return static_cast<int32_t>(offsetof(RocketMan_t1080386144, ___meshRenderer_14)); }
	inline MeshRenderer_t1268241104 * get_meshRenderer_14() const { return ___meshRenderer_14; }
	inline MeshRenderer_t1268241104 ** get_address_of_meshRenderer_14() { return &___meshRenderer_14; }
	inline void set_meshRenderer_14(MeshRenderer_t1268241104 * value)
	{
		___meshRenderer_14 = value;
		Il2CppCodeGenWriteBarrier(&___meshRenderer_14, value);
	}

	inline static int32_t get_offset_of_gunSpawnPoints_15() { return static_cast<int32_t>(offsetof(RocketMan_t1080386144, ___gunSpawnPoints_15)); }
	inline List_1_t1125654279 * get_gunSpawnPoints_15() const { return ___gunSpawnPoints_15; }
	inline List_1_t1125654279 ** get_address_of_gunSpawnPoints_15() { return &___gunSpawnPoints_15; }
	inline void set_gunSpawnPoints_15(List_1_t1125654279 * value)
	{
		___gunSpawnPoints_15 = value;
		Il2CppCodeGenWriteBarrier(&___gunSpawnPoints_15, value);
	}

	inline static int32_t get_offset_of_shield_16() { return static_cast<int32_t>(offsetof(RocketMan_t1080386144, ___shield_16)); }
	inline bool get_shield_16() const { return ___shield_16; }
	inline bool* get_address_of_shield_16() { return &___shield_16; }
	inline void set_shield_16(bool value)
	{
		___shield_16 = value;
	}

	inline static int32_t get_offset_of_gunLifeTimer_17() { return static_cast<int32_t>(offsetof(RocketMan_t1080386144, ___gunLifeTimer_17)); }
	inline float get_gunLifeTimer_17() const { return ___gunLifeTimer_17; }
	inline float* get_address_of_gunLifeTimer_17() { return &___gunLifeTimer_17; }
	inline void set_gunLifeTimer_17(float value)
	{
		___gunLifeTimer_17 = value;
	}

	inline static int32_t get_offset_of_gunRunTimer_18() { return static_cast<int32_t>(offsetof(RocketMan_t1080386144, ___gunRunTimer_18)); }
	inline float get_gunRunTimer_18() const { return ___gunRunTimer_18; }
	inline float* get_address_of_gunRunTimer_18() { return &___gunRunTimer_18; }
	inline void set_gunRunTimer_18(float value)
	{
		___gunRunTimer_18 = value;
	}

	inline static int32_t get_offset_of_gunCooldown_19() { return static_cast<int32_t>(offsetof(RocketMan_t1080386144, ___gunCooldown_19)); }
	inline float get_gunCooldown_19() const { return ___gunCooldown_19; }
	inline float* get_address_of_gunCooldown_19() { return &___gunCooldown_19; }
	inline void set_gunCooldown_19(float value)
	{
		___gunCooldown_19 = value;
	}

	inline static int32_t get_offset_of_boost_20() { return static_cast<int32_t>(offsetof(RocketMan_t1080386144, ___boost_20)); }
	inline float get_boost_20() const { return ___boost_20; }
	inline float* get_address_of_boost_20() { return &___boost_20; }
	inline void set_boost_20(float value)
	{
		___boost_20 = value;
	}

	inline static int32_t get_offset_of_boostLifetime_21() { return static_cast<int32_t>(offsetof(RocketMan_t1080386144, ___boostLifetime_21)); }
	inline float get_boostLifetime_21() const { return ___boostLifetime_21; }
	inline float* get_address_of_boostLifetime_21() { return &___boostLifetime_21; }
	inline void set_boostLifetime_21(float value)
	{
		___boostLifetime_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
