#include "subs.h"

//controller
pros::Controller master(pros::E_CONTROLLER_MASTER);


//chassis motors
pros::Motor FrontLeft(15, true);
pros::Motor MidLeft(3, true);
pros::Motor BackLeft(1, true);
pros::Motor FrontRight(13, false);
pros::Motor MidRight(12, false);
pros::Motor BackRight(17, false);

//intake motor
pros::Motor Intake(14, pros::E_MOTOR_GEARSET_36, false);

//high stake motoru7
pros::Motor HighStake1(19, true);
pros::Motor HighStake2(9, true);

// 8===D
//pneumatics
pros::ADIDigitalOut Mogo ('H');


//motor groups
pros::Motor_Group Chassis({FrontLeft, MidLeft, BackLeft, FrontRight, MidRight, BackRight});
pros::Motor_Group LeftDrive({FrontLeft, MidLeft, BackLeft});
pros::Motor_Group RightDrive({FrontRight, MidRight, BackRight});
pros::Motor_Group HighStake({HighStake1, HighStake2});