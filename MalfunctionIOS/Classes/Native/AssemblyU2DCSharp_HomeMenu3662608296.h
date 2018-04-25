#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_MultipleButtonsMenu1852763254.h"

// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t670468573;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HomeMenu
struct  HomeMenu_t3662608296  : public MultipleButtonsMenu_t1852763254
{
public:
	// System.String[] HomeMenu::buttonTitles
	StringU5BU5D_t1642385972* ___buttonTitles_6;
	// System.Single HomeMenu::preferredButtonHeight
	float ___preferredButtonHeight_7;
	// System.Single HomeMenu::preferredButtonWidth
	float ___preferredButtonWidth_8;
	// System.Single HomeMenu::padding
	float ___padding_9;
	// System.Single HomeMenu::spacing
	float ___spacing_10;
	// System.Int32 HomeMenu::fontSize
	int32_t ___fontSize_11;
	// UnityEngine.RuntimeAnimatorController HomeMenu::homeMenuAnimationController
	RuntimeAnimatorController_t670468573 * ___homeMenuAnimationController_12;

public:
	inline static int32_t get_offset_of_buttonTitles_6() { return static_cast<int32_t>(offsetof(HomeMenu_t3662608296, ___buttonTitles_6)); }
	inline StringU5BU5D_t1642385972* get_buttonTitles_6() const { return ___buttonTitles_6; }
	inline StringU5BU5D_t1642385972** get_address_of_buttonTitles_6() { return &___buttonTitles_6; }
	inline void set_buttonTitles_6(StringU5BU5D_t1642385972* value)
	{
		___buttonTitles_6 = value;
		Il2CppCodeGenWriteBarrier(&___buttonTitles_6, value);
	}

	inline static int32_t get_offset_of_preferredButtonHeight_7() { return static_cast<int32_t>(offsetof(HomeMenu_t3662608296, ___preferredButtonHeight_7)); }
	inline float get_preferredButtonHeight_7() const { return ___preferredButtonHeight_7; }
	inline float* get_address_of_preferredButtonHeight_7() { return &___preferredButtonHeight_7; }
	inline void set_preferredButtonHeight_7(float value)
	{
		___preferredButtonHeight_7 = value;
	}

	inline static int32_t get_offset_of_preferredButtonWidth_8() { return static_cast<int32_t>(offsetof(HomeMenu_t3662608296, ___preferredButtonWidth_8)); }
	inline float get_preferredButtonWidth_8() const { return ___preferredButtonWidth_8; }
	inline float* get_address_of_preferredButtonWidth_8() { return &___preferredButtonWidth_8; }
	inline void set_preferredButtonWidth_8(float value)
	{
		___preferredButtonWidth_8 = value;
	}

	inline static int32_t get_offset_of_padding_9() { return static_cast<int32_t>(offsetof(HomeMenu_t3662608296, ___padding_9)); }
	inline float get_padding_9() const { return ___padding_9; }
	inline float* get_address_of_padding_9() { return &___padding_9; }
	inline void set_padding_9(float value)
	{
		___padding_9 = value;
	}

	inline static int32_t get_offset_of_spacing_10() { return static_cast<int32_t>(offsetof(HomeMenu_t3662608296, ___spacing_10)); }
	inline float get_spacing_10() const { return ___spacing_10; }
	inline float* get_address_of_spacing_10() { return &___spacing_10; }
	inline void set_spacing_10(float value)
	{
		___spacing_10 = value;
	}

	inline static int32_t get_offset_of_fontSize_11() { return static_cast<int32_t>(offsetof(HomeMenu_t3662608296, ___fontSize_11)); }
	inline int32_t get_fontSize_11() const { return ___fontSize_11; }
	inline int32_t* get_address_of_fontSize_11() { return &___fontSize_11; }
	inline void set_fontSize_11(int32_t value)
	{
		___fontSize_11 = value;
	}

	inline static int32_t get_offset_of_homeMenuAnimationController_12() { return static_cast<int32_t>(offsetof(HomeMenu_t3662608296, ___homeMenuAnimationController_12)); }
	inline RuntimeAnimatorController_t670468573 * get_homeMenuAnimationController_12() const { return ___homeMenuAnimationController_12; }
	inline RuntimeAnimatorController_t670468573 ** get_address_of_homeMenuAnimationController_12() { return &___homeMenuAnimationController_12; }
	inline void set_homeMenuAnimationController_12(RuntimeAnimatorController_t670468573 * value)
	{
		___homeMenuAnimationController_12 = value;
		Il2CppCodeGenWriteBarrier(&___homeMenuAnimationController_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
