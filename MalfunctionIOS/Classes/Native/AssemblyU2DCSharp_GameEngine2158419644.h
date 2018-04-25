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
// ObstacleSpawner
struct ObstacleSpawner_t2040278039;
// GameUI
struct GameUI_t4016257260;
// RocketMan
struct RocketMan_t1080386144;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameEngine
struct  GameEngine_t2158419644  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject GameEngine::context
	GameObject_t1756533147 * ___context_9;

public:
	inline static int32_t get_offset_of_context_9() { return static_cast<int32_t>(offsetof(GameEngine_t2158419644, ___context_9)); }
	inline GameObject_t1756533147 * get_context_9() const { return ___context_9; }
	inline GameObject_t1756533147 ** get_address_of_context_9() { return &___context_9; }
	inline void set_context_9(GameObject_t1756533147 * value)
	{
		___context_9 = value;
		Il2CppCodeGenWriteBarrier(&___context_9, value);
	}
};

struct GameEngine_t2158419644_StaticFields
{
public:
	// System.Boolean GameEngine::gameInProgress
	bool ___gameInProgress_2;
	// System.Single GameEngine::gameTime
	float ___gameTime_3;
	// System.Int32 GameEngine::points
	int32_t ___points_4;
	// System.Int32 GameEngine::currentWave
	int32_t ___currentWave_5;
	// System.Single GameEngine::gameSpeed
	float ___gameSpeed_6;
	// System.Single GameEngine::gameSpeedOffset
	float ___gameSpeedOffset_7;
	// System.Single GameEngine::waveIntervals
	float ___waveIntervals_8;
	// ObstacleSpawner GameEngine::spawner
	ObstacleSpawner_t2040278039 * ___spawner_10;
	// GameUI GameEngine::ui
	GameUI_t4016257260 * ___ui_11;
	// UnityEngine.GameObject GameEngine::player
	GameObject_t1756533147 * ___player_12;
	// RocketMan GameEngine::rocketMan
	RocketMan_t1080386144 * ___rocketMan_13;

public:
	inline static int32_t get_offset_of_gameInProgress_2() { return static_cast<int32_t>(offsetof(GameEngine_t2158419644_StaticFields, ___gameInProgress_2)); }
	inline bool get_gameInProgress_2() const { return ___gameInProgress_2; }
	inline bool* get_address_of_gameInProgress_2() { return &___gameInProgress_2; }
	inline void set_gameInProgress_2(bool value)
	{
		___gameInProgress_2 = value;
	}

	inline static int32_t get_offset_of_gameTime_3() { return static_cast<int32_t>(offsetof(GameEngine_t2158419644_StaticFields, ___gameTime_3)); }
	inline float get_gameTime_3() const { return ___gameTime_3; }
	inline float* get_address_of_gameTime_3() { return &___gameTime_3; }
	inline void set_gameTime_3(float value)
	{
		___gameTime_3 = value;
	}

	inline static int32_t get_offset_of_points_4() { return static_cast<int32_t>(offsetof(GameEngine_t2158419644_StaticFields, ___points_4)); }
	inline int32_t get_points_4() const { return ___points_4; }
	inline int32_t* get_address_of_points_4() { return &___points_4; }
	inline void set_points_4(int32_t value)
	{
		___points_4 = value;
	}

	inline static int32_t get_offset_of_currentWave_5() { return static_cast<int32_t>(offsetof(GameEngine_t2158419644_StaticFields, ___currentWave_5)); }
	inline int32_t get_currentWave_5() const { return ___currentWave_5; }
	inline int32_t* get_address_of_currentWave_5() { return &___currentWave_5; }
	inline void set_currentWave_5(int32_t value)
	{
		___currentWave_5 = value;
	}

	inline static int32_t get_offset_of_gameSpeed_6() { return static_cast<int32_t>(offsetof(GameEngine_t2158419644_StaticFields, ___gameSpeed_6)); }
	inline float get_gameSpeed_6() const { return ___gameSpeed_6; }
	inline float* get_address_of_gameSpeed_6() { return &___gameSpeed_6; }
	inline void set_gameSpeed_6(float value)
	{
		___gameSpeed_6 = value;
	}

	inline static int32_t get_offset_of_gameSpeedOffset_7() { return static_cast<int32_t>(offsetof(GameEngine_t2158419644_StaticFields, ___gameSpeedOffset_7)); }
	inline float get_gameSpeedOffset_7() const { return ___gameSpeedOffset_7; }
	inline float* get_address_of_gameSpeedOffset_7() { return &___gameSpeedOffset_7; }
	inline void set_gameSpeedOffset_7(float value)
	{
		___gameSpeedOffset_7 = value;
	}

	inline static int32_t get_offset_of_waveIntervals_8() { return static_cast<int32_t>(offsetof(GameEngine_t2158419644_StaticFields, ___waveIntervals_8)); }
	inline float get_waveIntervals_8() const { return ___waveIntervals_8; }
	inline float* get_address_of_waveIntervals_8() { return &___waveIntervals_8; }
	inline void set_waveIntervals_8(float value)
	{
		___waveIntervals_8 = value;
	}

	inline static int32_t get_offset_of_spawner_10() { return static_cast<int32_t>(offsetof(GameEngine_t2158419644_StaticFields, ___spawner_10)); }
	inline ObstacleSpawner_t2040278039 * get_spawner_10() const { return ___spawner_10; }
	inline ObstacleSpawner_t2040278039 ** get_address_of_spawner_10() { return &___spawner_10; }
	inline void set_spawner_10(ObstacleSpawner_t2040278039 * value)
	{
		___spawner_10 = value;
		Il2CppCodeGenWriteBarrier(&___spawner_10, value);
	}

	inline static int32_t get_offset_of_ui_11() { return static_cast<int32_t>(offsetof(GameEngine_t2158419644_StaticFields, ___ui_11)); }
	inline GameUI_t4016257260 * get_ui_11() const { return ___ui_11; }
	inline GameUI_t4016257260 ** get_address_of_ui_11() { return &___ui_11; }
	inline void set_ui_11(GameUI_t4016257260 * value)
	{
		___ui_11 = value;
		Il2CppCodeGenWriteBarrier(&___ui_11, value);
	}

	inline static int32_t get_offset_of_player_12() { return static_cast<int32_t>(offsetof(GameEngine_t2158419644_StaticFields, ___player_12)); }
	inline GameObject_t1756533147 * get_player_12() const { return ___player_12; }
	inline GameObject_t1756533147 ** get_address_of_player_12() { return &___player_12; }
	inline void set_player_12(GameObject_t1756533147 * value)
	{
		___player_12 = value;
		Il2CppCodeGenWriteBarrier(&___player_12, value);
	}

	inline static int32_t get_offset_of_rocketMan_13() { return static_cast<int32_t>(offsetof(GameEngine_t2158419644_StaticFields, ___rocketMan_13)); }
	inline RocketMan_t1080386144 * get_rocketMan_13() const { return ___rocketMan_13; }
	inline RocketMan_t1080386144 ** get_address_of_rocketMan_13() { return &___rocketMan_13; }
	inline void set_rocketMan_13(RocketMan_t1080386144 * value)
	{
		___rocketMan_13 = value;
		Il2CppCodeGenWriteBarrier(&___rocketMan_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
