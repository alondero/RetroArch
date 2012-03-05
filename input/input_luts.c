/*  SSNES - A Super Nintendo Entertainment System (SNES) Emulator frontend for libsnes.
 *  Copyright (C) 2010-2012 - Hans-Kristian Arntzen
 *  Copyright (C) 2011-2012 - Daniel De Matteis
 *
 *  Some code herein may be based on code found in BSNES.
 * 
 *  SSNES is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  SSNES is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with SSNES.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#include "input_luts.h"

uint64_t default_keybind_lut[SSNES_FIRST_META_KEY] = 
{
	SNES_DEVICE_ID_JOYPAD_B,
	SNES_DEVICE_ID_JOYPAD_Y,
	SNES_DEVICE_ID_JOYPAD_SELECT,
	SNES_DEVICE_ID_JOYPAD_START,
	SNES_DEVICE_ID_JOYPAD_UP,
	SNES_DEVICE_ID_JOYPAD_DOWN,
	SNES_DEVICE_ID_JOYPAD_LEFT,
	SNES_DEVICE_ID_JOYPAD_RIGHT,
	SNES_DEVICE_ID_JOYPAD_A,
	SNES_DEVICE_ID_JOYPAD_X,
	SNES_DEVICE_ID_JOYPAD_L,
	SNES_DEVICE_ID_JOYPAD_R
};

const char * default_libsnes_keybind_name_lut[SSNES_FIRST_META_KEY] = 
{
	"Button B",				//SNES_DEVICE_ID_JOYPAD_B
	"Button Y",				//SNES_DEVICE_ID_JOYPAD_Y
	"Select button",			//SNES_DEVICE_ID_JOYPAD_SELECT
	"Start button",				//SNES_DEVICE_ID_JOYPAD_START
	"D-Pad Up",				//SNES_DEVICE_ID_JOYPAD_UP
	"D-Pad Down",				//SNES_DEVICE_ID_JOYPAD_DOWN
	"D-Pad Left",				//SNES_DEVICE_ID_JOYPAD_LEFT
	"D-Pad Right",				//SNES_DEVICE_ID_JOYPAD_RIGHT
	"Button A",				//SNES_DEVICE_ID_JOYPAD_A
	"Button X",				//SNES_DEVICE_ID_JOYPAD_X
	"L Button",				//SNES_DEVICE_ID_JOYPAD_L
	"R Button"				//SNES_DEVICE_ID_JOYPAD_R
};

#ifdef SSNES_CONSOLE
#if defined(__CELLOS_LV2__)
uint64_t platform_keybind_lut[SSNES_LAST_PLATFORM_KEY+1] = 
{
	CTRL_CIRCLE_MASK,
	CTRL_CROSS_MASK,
	CTRL_TRIANGLE_MASK,
	CTRL_SQUARE_MASK,
	CTRL_UP_MASK,
	CTRL_DOWN_MASK,
	CTRL_LEFT_MASK,
	CTRL_RIGHT_MASK,
	CTRL_SELECT_MASK,
	CTRL_START_MASK,
	CTRL_L1_MASK,
	CTRL_L2_MASK,
	CTRL_L3_MASK,
	CTRL_R1_MASK,
	CTRL_R2_MASK,
	CTRL_R3_MASK,
	CTRL_LSTICK_LEFT_MASK,
	CTRL_LSTICK_RIGHT_MASK,
	CTRL_LSTICK_UP_MASK,
	CTRL_LSTICK_DOWN_MASK,
	CTRL_LEFT_MASK | CTRL_LSTICK_LEFT_MASK,
	CTRL_RIGHT_MASK | CTRL_LSTICK_RIGHT_MASK,
	CTRL_UP_MASK | CTRL_LSTICK_UP_MASK,
	CTRL_DOWN_MASK | CTRL_LSTICK_DOWN_MASK,
	CTRL_RSTICK_LEFT_MASK,
	CTRL_RSTICK_RIGHT_MASK,
	CTRL_RSTICK_UP_MASK,
	CTRL_RSTICK_DOWN_MASK,
	CTRL_LEFT_MASK | CTRL_RSTICK_LEFT_MASK,
	CTRL_RIGHT_MASK | CTRL_RSTICK_RIGHT_MASK,
	CTRL_UP_MASK | CTRL_RSTICK_UP_MASK,
	CTRL_DOWN_MASK | CTRL_RSTICK_DOWN_MASK,
};
#elif defined(_XBOX)

#endif
#endif
