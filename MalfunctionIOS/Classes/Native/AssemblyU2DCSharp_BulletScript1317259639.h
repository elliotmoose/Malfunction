﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BulletScript
struct  BulletScript_t1317259639  : public MonoBehaviour_t1158329972
{
public:
	// System.Single BulletScript::lifetime
	float ___lifetime_2;
	// System.Single BulletScript::speed
	float ___speed_3;

public:
	inline static int32_t get_offset_of_lifetime_2() { return static_cast<int32_t>(offsetof(BulletScript_t1317259639, ___lifetime_2)); }
	inline float get_lifetime_2() const { return ___lifetime_2; }
	inline float* get_address_of_lifetime_2() { return &___lifetime_2; }
	inline void set_lifetime_2(float value)
	{
		___lifetime_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(BulletScript_t1317259639, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
