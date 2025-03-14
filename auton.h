#include "api.h"
#include "subs.h"

void MoveForward(int velocity){
	Chassis.move_velocity(velocity);
}

void MoveBackward(int velocity){
	Chassis.move_velocity(-velocity);
}

void ResetDrive(){
	Chassis.move_velocity(0);
}

void ResetIntake(){
	Intake.move_velocity(0);
}

void TurnLeft(int velocity){
	LeftDrive = -velocity;
	RightDrive = velocity;
}

void TurnRight(int velocity){
	LeftDrive = velocity;
	RightDrive = -velocity;
}

void Clamp(){
	Mogo.set_value(false);
}

void Unclamp(){
    Mogo.set_value(true);
}

void IntakeRing(int velocity){
    Intake = -velocity;
}