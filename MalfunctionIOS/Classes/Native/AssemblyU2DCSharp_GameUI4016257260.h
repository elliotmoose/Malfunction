#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameUI
struct  GameUI_t4016257260  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button GameUI::playButton
	Button_t2872111280 * ___playButton_2;
	// UnityEngine.UI.Button GameUI::pauseButton
	Button_t2872111280 * ___pauseButton_3;
	// UnityEngine.UI.Button GameUI::resumeButton
	Button_t2872111280 * ___resumeButton_4;
	// UnityEngine.UI.Text GameUI::scoreTextView
	Text_t356221433 * ___scoreTextView_5;
	// UnityEngine.UI.Text GameUI::highscoreTextView
	Text_t356221433 * ___highscoreTextView_6;
	// UnityEngine.UI.Text GameUI::coinsTextView
	Text_t356221433 * ___coinsTextView_7;
	// UnityEngine.UI.Text GameUI::stepsToTakeTextView
	Text_t356221433 * ___stepsToTakeTextView_8;

public:
	inline static int32_t get_offset_of_playButton_2() { return static_cast<int32_t>(offsetof(GameUI_t4016257260, ___playButton_2)); }
	inline Button_t2872111280 * get_playButton_2() const { return ___playButton_2; }
	inline Button_t2872111280 ** get_address_of_playButton_2() { return &___playButton_2; }
	inline void set_playButton_2(Button_t2872111280 * value)
	{
		___playButton_2 = value;
		Il2CppCodeGenWriteBarrier(&___playButton_2, value);
	}

	inline static int32_t get_offset_of_pauseButton_3() { return static_cast<int32_t>(offsetof(GameUI_t4016257260, ___pauseButton_3)); }
	inline Button_t2872111280 * get_pauseButton_3() const { return ___pauseButton_3; }
	inline Button_t2872111280 ** get_address_of_pauseButton_3() { return &___pauseButton_3; }
	inline void set_pauseButton_3(Button_t2872111280 * value)
	{
		___pauseButton_3 = value;
		Il2CppCodeGenWriteBarrier(&___pauseButton_3, value);
	}

	inline static int32_t get_offset_of_resumeButton_4() { return static_cast<int32_t>(offsetof(GameUI_t4016257260, ___resumeButton_4)); }
	inline Button_t2872111280 * get_resumeButton_4() const { return ___resumeButton_4; }
	inline Button_t2872111280 ** get_address_of_resumeButton_4() { return &___resumeButton_4; }
	inline void set_resumeButton_4(Button_t2872111280 * value)
	{
		___resumeButton_4 = value;
		Il2CppCodeGenWriteBarrier(&___resumeButton_4, value);
	}

	inline static int32_t get_offset_of_scoreTextView_5() { return static_cast<int32_t>(offsetof(GameUI_t4016257260, ___scoreTextView_5)); }
	inline Text_t356221433 * get_scoreTextView_5() const { return ___scoreTextView_5; }
	inline Text_t356221433 ** get_address_of_scoreTextView_5() { return &___scoreTextView_5; }
	inline void set_scoreTextView_5(Text_t356221433 * value)
	{
		___scoreTextView_5 = value;
		Il2CppCodeGenWriteBarrier(&___scoreTextView_5, value);
	}

	inline static int32_t get_offset_of_highscoreTextView_6() { return static_cast<int32_t>(offsetof(GameUI_t4016257260, ___highscoreTextView_6)); }
	inline Text_t356221433 * get_highscoreTextView_6() const { return ___highscoreTextView_6; }
	inline Text_t356221433 ** get_address_of_highscoreTextView_6() { return &___highscoreTextView_6; }
	inline void set_highscoreTextView_6(Text_t356221433 * value)
	{
		___highscoreTextView_6 = value;
		Il2CppCodeGenWriteBarrier(&___highscoreTextView_6, value);
	}

	inline static int32_t get_offset_of_coinsTextView_7() { return static_cast<int32_t>(offsetof(GameUI_t4016257260, ___coinsTextView_7)); }
	inline Text_t356221433 * get_coinsTextView_7() const { return ___coinsTextView_7; }
	inline Text_t356221433 ** get_address_of_coinsTextView_7() { return &___coinsTextView_7; }
	inline void set_coinsTextView_7(Text_t356221433 * value)
	{
		___coinsTextView_7 = value;
		Il2CppCodeGenWriteBarrier(&___coinsTextView_7, value);
	}

	inline static int32_t get_offset_of_stepsToTakeTextView_8() { return static_cast<int32_t>(offsetof(GameUI_t4016257260, ___stepsToTakeTextView_8)); }
	inline Text_t356221433 * get_stepsToTakeTextView_8() const { return ___stepsToTakeTextView_8; }
	inline Text_t356221433 ** get_address_of_stepsToTakeTextView_8() { return &___stepsToTakeTextView_8; }
	inline void set_stepsToTakeTextView_8(Text_t356221433 * value)
	{
		___stepsToTakeTextView_8 = value;
		Il2CppCodeGenWriteBarrier(&___stepsToTakeTextView_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
