#include "api.h"

//controller
extern pros::Controller master;


//chassis motors
extern pros::Motor FrontLeft;
extern pros::Motor MidLeft;
extern pros::Motor BackLeft;
extern pros::Motor FrontRight;
extern pros::Motor MidRight;
extern pros::Motor BackRight;

//intake motor
extern pros::Motor Intake;

//high stake motors
extern pros::Motor HighStake1;
extern pros::Motor HighStake2;

//pneumatics
extern pros::ADIDigitalOut Mogo;

//motor groups
extern pros::Motor_Group Chassis;
extern pros::Motor_Group LeftDrive;
extern pros::Motor_Group RightDrive;
extern pros::Motor_Group HighStake;

