/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/TimedRobot.h>
#include <frc/commands/Command.h>
#include <frc/smartdashboard/SendableChooser.h>

#include "OI.h"

#include "commands/ExampleCommand.h"
#include "commands/MyAutoCommand.h"
#include "commands/Auto/GeneralTestAuto.h"

#include "subsystems/ClimbSubsystem.h"
#include "subsystems/DriveSubsystem.h"
#include "subsystems/ElevatorSubsystem.h"
#include "subsystems/ExampleSubsystem.h"
#include "subsystems/HatchSubsystem.h"
#include "subsystems/IntakeSubsystem.h"
#include "subsystems/LightSubsystem.h"
using namespace frc;

class Robot : public frc::TimedRobot {
 public:
  static OI oi;
  static ClimbSubsystem Climb;
  static DriveSubsystem Drive;
  static ElevatorSubsystem Elevator;
  static ExampleSubsystem m_subsystem;
  static HatchSubsystem Hatch;
  static IntakeSubsystem Intake;
  static LightSubsystem Lights;


  void RobotInit() override;
  void RobotPeriodic() override;
  void DisabledInit() override;
  void DisabledPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void TestPeriodic() override;

 private:
  // Have it null by default so that if testing teleop it
  // doesn't have undefined behavior and potentially crash.
  frc::Command* autonomousCommand = nullptr;
  ExampleCommand defaultAuto;
  MyAutoCommand myAuto;
  GeneralTestAuto TestAuto;
  frc::SendableChooser<frc::Command*> AutonomousChooser;
};
