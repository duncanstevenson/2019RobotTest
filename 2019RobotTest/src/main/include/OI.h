/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once
#include <frc/Joystick.h>
using namespace frc;

class OI {
 public:
  OI();
  	enum OperatorButton {
		X=3,
		A=1,
		B=2,
		Y=4,
		BumperTopLeft=5,
		BumperTopRight=6,
		Back=7,
		Start=8,
		LeftJoystickCenterButton=9, 
		RightJoystickCenterButton=10,
	};
	Joystick left;
	Joystick right;
	Joystick operate;
	bool ClimberSwitch = false;
};
