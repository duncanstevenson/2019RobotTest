/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/ElevatorSubsystem.h"

#include "RobotMap.h"


ElevatorSubsystem::ElevatorSubsystem() : 
  frc::Subsystem("ElevatorSubsystem"),
  elevatorMaster(ELEVATOR_MASTER),
  elevatorFollower(ELEVATOR_FOLLOWER) 
  {
    //encoder stuff goes here

    //current limiting, magic numbers currently
    elevatorMaster.ConfigPeakCurrentDuration(30, 10);
    elevatorMaster.ConfigPeakCurrentLimit(22, 10);
    elevatorMaster.ConfigContinuousCurrentLimit(15, 10);
    elevatorMaster.EnableCurrentLimit(true);

    elevatorFollower.ConfigPeakCurrentDuration(30, 10);
    elevatorFollower.ConfigPeakCurrentLimit(22, 10);
    elevatorFollower.ConfigContinuousCurrentLimit(15, 10);
    elevatorFollower.EnableCurrentLimit(true);
    
    //follow code
    elevatorFollower.Follow(elevatorMaster);
    //elevatorFollower.SetInverted(FollowMaster) //if necessary 

  }

void ElevatorSubsystem::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
