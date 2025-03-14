#include "main.h"
#include "api.h"
#include "auton.h"

bool MogoToggle = false;

void autonomous() {
    MoveBackward(35);
    delay(900);
    ResetDrive();
    if (MogoToggle == false){
		Mogo.set_value(true);
		MogoToggle = true;
	}
	delay(400);
    IntakeRing(90);
	delay(1300);
	ResetIntake();
	if(MogoToggle == true){
		Mogo.set_value(false);
		MogoToggle = false;
	}
	TurnRight(65);
	delay(1000);
	ResetDrive();
	delay(100);
	MoveForward(70);
	delay(1800);
	ResetDrive();
	/*
	delay(200);
	MoveForward(35);
	delay(400);
	*/


}