/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/Elevator/ElevatorManualGampieceToggle.h"
#include "Robot.h"

ElevatorManualGampieceToggle::ElevatorManualGampieceToggle() {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  Requires(&Robot::Elevator);
}

// Called just before this Command runs the first time
void ElevatorManualGampieceToggle::Initialize() {
  if(Robot::Elevator.current_gamepiece == 1){
    Robot::Elevator.SetCurrentGamepiece(2);
  }else{
    Robot::Elevator.SetCurrentGamepiece(1);
  }
}

// Called repeatedly when this Command is scheduled to run
void ElevatorManualGampieceToggle::Execute() {}

// Make this return true when this Command no longer needs to run execute()
bool ElevatorManualGampieceToggle::IsFinished() { return true; }

// Called once after isFinished returns true
void ElevatorManualGampieceToggle::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ElevatorManualGampieceToggle::Interrupted() {}
