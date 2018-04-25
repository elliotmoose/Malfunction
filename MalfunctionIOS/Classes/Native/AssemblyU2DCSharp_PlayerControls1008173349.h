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

// PlayerControls/PlayerControlDelegate
struct PlayerControlDelegate_t2881067437;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerControls
struct  PlayerControls_t1008173349  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean PlayerControls::allowUITouchesToFireEvents
	bool ___allowUITouchesToFireEvents_2;
	// System.Single PlayerControls::mouseDownTime
	float ___mouseDownTime_3;
	// UnityEngine.Vector3 PlayerControls::lastTouchPosition
	Vector3_t2243707580  ___lastTouchPosition_4;
	// System.Boolean PlayerControls::lastTouchWasUI
	bool ___lastTouchWasUI_5;
	// System.Boolean PlayerControls::wasLastFrameZooming
	bool ___wasLastFrameZooming_6;
	// System.Single PlayerControls::lastZoomDistance
	float ___lastZoomDistance_7;
	// PlayerControls/PlayerControlDelegate PlayerControls::longTouchEvent
	PlayerControlDelegate_t2881067437 * ___longTouchEvent_8;
	// PlayerControls/PlayerControlDelegate PlayerControls::touchEndEvent
	PlayerControlDelegate_t2881067437 * ___touchEndEvent_9;
	// PlayerControls/PlayerControlDelegate PlayerControls::touchBeginEvent
	PlayerControlDelegate_t2881067437 * ___touchBeginEvent_10;
	// PlayerControls/PlayerControlDelegate PlayerControls::touchMovedEvent
	PlayerControlDelegate_t2881067437 * ___touchMovedEvent_11;
	// PlayerControls/PlayerControlDelegate PlayerControls::touchZoomEvent
	PlayerControlDelegate_t2881067437 * ___touchZoomEvent_12;

public:
	inline static int32_t get_offset_of_allowUITouchesToFireEvents_2() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___allowUITouchesToFireEvents_2)); }
	inline bool get_allowUITouchesToFireEvents_2() const { return ___allowUITouchesToFireEvents_2; }
	inline bool* get_address_of_allowUITouchesToFireEvents_2() { return &___allowUITouchesToFireEvents_2; }
	inline void set_allowUITouchesToFireEvents_2(bool value)
	{
		___allowUITouchesToFireEvents_2 = value;
	}

	inline static int32_t get_offset_of_mouseDownTime_3() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___mouseDownTime_3)); }
	inline float get_mouseDownTime_3() const { return ___mouseDownTime_3; }
	inline float* get_address_of_mouseDownTime_3() { return &___mouseDownTime_3; }
	inline void set_mouseDownTime_3(float value)
	{
		___mouseDownTime_3 = value;
	}

	inline static int32_t get_offset_of_lastTouchPosition_4() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___lastTouchPosition_4)); }
	inline Vector3_t2243707580  get_lastTouchPosition_4() const { return ___lastTouchPosition_4; }
	inline Vector3_t2243707580 * get_address_of_lastTouchPosition_4() { return &___lastTouchPosition_4; }
	inline void set_lastTouchPosition_4(Vector3_t2243707580  value)
	{
		___lastTouchPosition_4 = value;
	}

	inline static int32_t get_offset_of_lastTouchWasUI_5() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___lastTouchWasUI_5)); }
	inline bool get_lastTouchWasUI_5() const { return ___lastTouchWasUI_5; }
	inline bool* get_address_of_lastTouchWasUI_5() { return &___lastTouchWasUI_5; }
	inline void set_lastTouchWasUI_5(bool value)
	{
		___lastTouchWasUI_5 = value;
	}

	inline static int32_t get_offset_of_wasLastFrameZooming_6() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___wasLastFrameZooming_6)); }
	inline bool get_wasLastFrameZooming_6() const { return ___wasLastFrameZooming_6; }
	inline bool* get_address_of_wasLastFrameZooming_6() { return &___wasLastFrameZooming_6; }
	inline void set_wasLastFrameZooming_6(bool value)
	{
		___wasLastFrameZooming_6 = value;
	}

	inline static int32_t get_offset_of_lastZoomDistance_7() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___lastZoomDistance_7)); }
	inline float get_lastZoomDistance_7() const { return ___lastZoomDistance_7; }
	inline float* get_address_of_lastZoomDistance_7() { return &___lastZoomDistance_7; }
	inline void set_lastZoomDistance_7(float value)
	{
		___lastZoomDistance_7 = value;
	}

	inline static int32_t get_offset_of_longTouchEvent_8() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___longTouchEvent_8)); }
	inline PlayerControlDelegate_t2881067437 * get_longTouchEvent_8() const { return ___longTouchEvent_8; }
	inline PlayerControlDelegate_t2881067437 ** get_address_of_longTouchEvent_8() { return &___longTouchEvent_8; }
	inline void set_longTouchEvent_8(PlayerControlDelegate_t2881067437 * value)
	{
		___longTouchEvent_8 = value;
		Il2CppCodeGenWriteBarrier(&___longTouchEvent_8, value);
	}

	inline static int32_t get_offset_of_touchEndEvent_9() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___touchEndEvent_9)); }
	inline PlayerControlDelegate_t2881067437 * get_touchEndEvent_9() const { return ___touchEndEvent_9; }
	inline PlayerControlDelegate_t2881067437 ** get_address_of_touchEndEvent_9() { return &___touchEndEvent_9; }
	inline void set_touchEndEvent_9(PlayerControlDelegate_t2881067437 * value)
	{
		___touchEndEvent_9 = value;
		Il2CppCodeGenWriteBarrier(&___touchEndEvent_9, value);
	}

	inline static int32_t get_offset_of_touchBeginEvent_10() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___touchBeginEvent_10)); }
	inline PlayerControlDelegate_t2881067437 * get_touchBeginEvent_10() const { return ___touchBeginEvent_10; }
	inline PlayerControlDelegate_t2881067437 ** get_address_of_touchBeginEvent_10() { return &___touchBeginEvent_10; }
	inline void set_touchBeginEvent_10(PlayerControlDelegate_t2881067437 * value)
	{
		___touchBeginEvent_10 = value;
		Il2CppCodeGenWriteBarrier(&___touchBeginEvent_10, value);
	}

	inline static int32_t get_offset_of_touchMovedEvent_11() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___touchMovedEvent_11)); }
	inline PlayerControlDelegate_t2881067437 * get_touchMovedEvent_11() const { return ___touchMovedEvent_11; }
	inline PlayerControlDelegate_t2881067437 ** get_address_of_touchMovedEvent_11() { return &___touchMovedEvent_11; }
	inline void set_touchMovedEvent_11(PlayerControlDelegate_t2881067437 * value)
	{
		___touchMovedEvent_11 = value;
		Il2CppCodeGenWriteBarrier(&___touchMovedEvent_11, value);
	}

	inline static int32_t get_offset_of_touchZoomEvent_12() { return static_cast<int32_t>(offsetof(PlayerControls_t1008173349, ___touchZoomEvent_12)); }
	inline PlayerControlDelegate_t2881067437 * get_touchZoomEvent_12() const { return ___touchZoomEvent_12; }
	inline PlayerControlDelegate_t2881067437 ** get_address_of_touchZoomEvent_12() { return &___touchZoomEvent_12; }
	inline void set_touchZoomEvent_12(PlayerControlDelegate_t2881067437 * value)
	{
		___touchZoomEvent_12 = value;
		Il2CppCodeGenWriteBarrier(&___touchZoomEvent_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
