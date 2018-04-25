#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_MultipleButtonsMenu_ButtonsLayout199069743.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MultipleButtonsMenu
struct  MultipleButtonsMenu_t1852763254  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject MultipleButtonsMenu::buttonPrefab
	GameObject_t1756533147 * ___buttonPrefab_2;
	// UnityEngine.Animator MultipleButtonsMenu::animator
	Animator_t69676727 * ___animator_3;
	// UnityEngine.GameObject MultipleButtonsMenu::menuGroup
	GameObject_t1756533147 * ___menuGroup_4;
	// MultipleButtonsMenu/ButtonsLayoutMode MultipleButtonsMenu::mode
	int32_t ___mode_5;

public:
	inline static int32_t get_offset_of_buttonPrefab_2() { return static_cast<int32_t>(offsetof(MultipleButtonsMenu_t1852763254, ___buttonPrefab_2)); }
	inline GameObject_t1756533147 * get_buttonPrefab_2() const { return ___buttonPrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_buttonPrefab_2() { return &___buttonPrefab_2; }
	inline void set_buttonPrefab_2(GameObject_t1756533147 * value)
	{
		___buttonPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___buttonPrefab_2, value);
	}

	inline static int32_t get_offset_of_animator_3() { return static_cast<int32_t>(offsetof(MultipleButtonsMenu_t1852763254, ___animator_3)); }
	inline Animator_t69676727 * get_animator_3() const { return ___animator_3; }
	inline Animator_t69676727 ** get_address_of_animator_3() { return &___animator_3; }
	inline void set_animator_3(Animator_t69676727 * value)
	{
		___animator_3 = value;
		Il2CppCodeGenWriteBarrier(&___animator_3, value);
	}

	inline static int32_t get_offset_of_menuGroup_4() { return static_cast<int32_t>(offsetof(MultipleButtonsMenu_t1852763254, ___menuGroup_4)); }
	inline GameObject_t1756533147 * get_menuGroup_4() const { return ___menuGroup_4; }
	inline GameObject_t1756533147 ** get_address_of_menuGroup_4() { return &___menuGroup_4; }
	inline void set_menuGroup_4(GameObject_t1756533147 * value)
	{
		___menuGroup_4 = value;
		Il2CppCodeGenWriteBarrier(&___menuGroup_4, value);
	}

	inline static int32_t get_offset_of_mode_5() { return static_cast<int32_t>(offsetof(MultipleButtonsMenu_t1852763254, ___mode_5)); }
	inline int32_t get_mode_5() const { return ___mode_5; }
	inline int32_t* get_address_of_mode_5() { return &___mode_5; }
	inline void set_mode_5(int32_t value)
	{
		___mode_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
