//-------------------------------------------------------------------------
/*
Copyright (C) 1997, 2005 - 3D Realms Entertainment

This file is part of Shadow Warrior version 1.2

Shadow Warrior is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

Original Source: 1997 - Frank Maddin and Jim Norwood
Prepared for public release: 03/28/2005 - Charlie Wiederhold, 3D Realms
*/
//-------------------------------------------------------------------------

// _functio.h

// file created by makehead.exe
// these headers contain default key assignments, as well as
// default button assignments and game function names
// axis defaults are also included


#ifndef _function_private_
#define _function_private_
char * gamefunctions[] =
   {
   "Move_Forward",
   "Move_Backward",
   "Turn_Left",
   "Turn_Right",
   "Strafe",
   "Fire",
   "Secondary_Fire",
   "Open",
   "Run",
   "AutoRun",
   "Jump",
   "Crouch",
   "Look_Up",
   "Look_Down",
   "Strafe_Left",
   "Strafe_Right",
   "Aim_Up",
   "Aim_Down",
   "Weapon_1",
   "Weapon_2",
   "Weapon_3",
   "Weapon_4",
   "Weapon_5",
   "Weapon_6",
   "Weapon_7",
   "Weapon_8",
   "Weapon_9",
   "Weapon_10",
   "Inventory",
   "Inventory_Left",
   "Inventory_Right",
   "Med_Kit",
   "Smoke_Bomb",
   "Night_Vision",
   "Gas_Bomb",
   "Flash_Bomb",
   "Caltrops",
   "TurnAround",
   "SendMessage",
   "Map",
   "Shrink_Screen",
   "Enlarge_Screen",
   "Center_View",
   "Holster_Weapon",
   "Map_Follow_Mode",
   "See_Co_Op_View",
   "Mouse_Aiming",
   "Toggle_Crosshair",
   "Next_Weapon",
   "Previous_Weapon",
   "Show_Menu",
   "Show_Console",
   };

#define NUMKEYENTRIES 50

static char * keydefaults[] =
   {
   "Move_Forward", "Up", "",
   "Move_Backward", "Down", "",
   "Turn_Left", "Left", "",
   "Turn_Right", "Right", "",
   "Strafe", "LAlt", "",
   "Fire", "LCtrl", "",
   "Secondary_Fire", "BakSpc", "",
   "Open", "Space", "",
   "Run", "", "",
   "AutoRun", "", "",
   "Jump", "LShift", "",
   "Crouch", "Tab", "",
   "Look_Up", "", "",
   "Look_Down", "", "",
   "Strafe_Left", "", "",
   "Strafe_Right", "", "",
   "Aim_Up", "", "",
   "Aim_Down", "", "",
   "Weapon_1", "", "",
   "Weapon_2", "", "",
   "Weapon_3", "", "",
   "Weapon_4", "", "",
   "Weapon_5", "", "",
   "Weapon_6", "", "",
   "Weapon_7", "", "",
   "Weapon_8", "", "",
   "Weapon_9", "", "",
   "Weapon_10", "", "",
   "Inventory", "Enter", "",
   "Inventory_Left", "L", "",
   "Inventory_Right", "R", "",
   "Med_Kit", "", "",
   "Smoke_Bomb", "", "",
   "Night_Vision", "", "",
   "Gas_Bomb", "", "",
   "Flash_Bomb", "", "",
   "Caltrops", "", "",
   "TurnAround", "B", "",
   "SendMessage", "", "",
   "Map", "D", "",
   "Shrink_Screen", "", "",
   "Enlarge_Screen", "", "",
   "Center_View", "", "",
   "Holster_Weapon", "", "",
   "Map_Follow_Mode", "", "",
   "See_Co_Op_View", "", "",
   "Mouse_Aiming", "", "",
   "Toggle_Crosshair", "", "",
   "Next_Weapon", "]", "",
   "Previous_Weapon", "[", "",
   "Show_Console", "", "",
   };

static char * keydefaults_modern[] =
   {
   "Move_Forward", "Space", "",
   "Move_Backward", "LAlt", "",
   "Turn_Left", "", "",
   "Turn_Right", "", "",
   "Strafe", "", "",
   "Fire", "BakSpc", "",
   "Secondary_Fire", "Up", "",
   "Open", "Down", "",
   "Run", "", "",
   "AutoRun", "D", "",
   "Jump", "Tab", "",
   "Crouch", "[", "",
   "Look_Up", "", "",
   "Look_Down", "", "",
   "Strafe_Left", "LShift", "",
   "Strafe_Right", "LCtrl", "",
   "Aim_Up", "", "",
   "Aim_Down", "", "",
   "Weapon_1", "", "",
   "Weapon_2", "", "",
   "Weapon_3", "", "",
   "Weapon_4", "", "",
   "Weapon_5", "", "",
   "Weapon_6", "", "",
   "Weapon_7", "", "",
   "Weapon_8", "", "",
   "Weapon_9", "", "",
   "Weapon_10", "", "",
   "Inventory", "Enter", "",
   "Inventory_Left", "L", "",
   "Inventory_Right", "R", "",
   "Med_Kit", "", "",
   "Smoke_Bomb", "", "",
   "Night_Vision", "", "",
   "Gas_Bomb", "", "",
   "Flash_Bomb", "", "",
   "Caltrops", "", "",
   "TurnAround", "", "",
   "SendMessage", "", "",
   "Map", "U", "",
   "Shrink_Screen", "", "",
   "Enlarge_Screen", "", "",
   "Center_View", "", "",
   "Holster_Weapon", "", "",
   "Map_Follow_Mode", "", "",
   "See_Co_Op_View", "", "",
   "Mouse_Aiming", "", "",
   "Toggle_Crosshair", "", "",
   "Next_Weapon", "Left", "",
   "Previous_Weapon", "Right", "",
   "Show_Console", "", "",
   };


static char * mousedefaults[] =
   {
   "Fire",
   "Strafe",
   "Move_Forward",
   "",
   ""
   };

static char * mousedefaults_modern[] =
   {
   "Fire",
   "Open",
   "",
   "",
   "Next_Weapon",
   "Previous_Weapon"
   };


static char * mouseclickeddefaults[] =
   {
   "",
   "Open",
   "",
   "",
   ""
   };

static char * mouseclickeddefaults_modern[] =
   {
   "",
   "",
   "",
   "",
   "",
   ""
   };


static char * joystickdefaults[] =
   {
   "Fire",
   "Strafe",
   "Run",
   "Open",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "Aim_Down",
   "Look_Right",
   "Aim_Up",
   "Look_Left",
   };


static char * joystickclickeddefaults[] =
   {
   "",
   "Inventory",
   "Jump",
   "Crouch",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   };


static char * mouseanalogdefaults[] =
   {
   "analog_turning",
   "analog_moving",
   };


static char * mousedigitaldefaults[] =
   {
   "",
   "",
   "",
   "",
   };


static char * gamepaddigitaldefaults[] =
   {
   "Turn_Left",
   "Turn_Right",
   "Move_Forward",
   "Move_Backward",
   };


static char * joystickanalogdefaults[] =
   {
   "analog_turning",
   "analog_lookingupanddown",
   "analog_strafing",
   "",
   "",
   "",
   "",
   "",
   };


static char * joystickdigitaldefaults[] =
   {
   "",
   "",
   "",
   "",
   "",
   "",
   "Run",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   "",
   };
#endif
