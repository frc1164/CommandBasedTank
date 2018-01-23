#include "TankDrive.h"
#include "../RobotMap.h"
#include "../Commands/Drive.h"

TankDrive::TankDrive() : Subsystem("TankDrive") {

	Left1 = new Victor(kLeft1);
	Left2 = new Victor(kLeft2);
	Right1 = new Victor(kRight1);
	Right2 = new Victor(kRight2);
	Stick = new Joystick(0);
}

void TankDrive::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new Drive());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.


void TankDrive::DriveLeftMotors(int LAxis){
	Left1->Set(-(Stick->GetRawAxis(LAxis)));
	Left2->Set(-(Stick->GetRawAxis(LAxis)));
}

void TankDrive::DriveRightMotors(int RAxis){
	Right1->Set(Stick->GetRawAxis(RAxis));
	Right2->Set(Stick->GetRawAxis(RAxis));
}

double* TankDrive::DriveForward(int TriggerAxis){

	double vRight1 = Stick->GetRawAxis(TriggerAxis);
	double vRight2 = Stick->GetRawAxis(TriggerAxis);
	double vLeft1 = Stick->GetRawAxis(TriggerAxis);
	double vLeft2 = Stick->GetRawAxis(TriggerAxis);

	Motors[0] = vRight1;
	Motors[1] = vRight2;
	Motors[2] = vLeft1;
	Motors[3] = vLeft2;

	return Motors;
}

double* TankDrive::DriveBackward(int TriggerAxis){

	double vRight1 = -(Stick->GetRawAxis(TriggerAxis));
	double vRight2 = -(Stick->GetRawAxis(TriggerAxis));
	double vLeft1 = -(Stick->GetRawAxis(TriggerAxis));
	double vLeft2 = -(Stick->GetRawAxis(TriggerAxis));

	Motors[0] = vRight1;
	Motors[1] = vRight2;
	Motors[2] = vLeft1;
	Motors[3] = vLeft2;

	return Motors;
}

double* TankDrive::FourWheelTurn(int JoyAxis, int TriggerAxis){

	if (Stick->GetRawAxis(TriggerAxis) > - 0.1 && Stick->GetRawAxis(TriggerAxis) < 0.1){

	int JoystickValue = Stick->GetRawAxis(JoyAxis);

	double vRight1 = -JoystickValue;
	double vRight2 = -JoystickValue;
	double vLeft1 = JoystickValue;
	double vLeft2 = JoystickValue;

	Motors[0] = vRight1;
	Motors[1] = vRight2;
	Motors[2] = vLeft1;
	Motors[3] = vLeft2;
	}

	return Motors;
}

double* TankDrive::TwoWheelTurn(int JoyAxis){
	int JoystickValue = Stick->GetRawAxis(JoyAxis);

	Right1->Set(1.5-JoystickValue);
	Right2->Set(1.5-JoystickValue);
	Left1->Set(1.5+JoystickValue);
	Left2->Set(1.5+JoystickValue);
}
