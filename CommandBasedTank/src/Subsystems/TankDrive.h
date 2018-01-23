#ifndef TankDrive_H
#define TankDrive_H

#include <Commands/Subsystem.h>
#include <Victor.h>
#include <Joystick.h>
#include "../OI.h"

class TankDrive : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

	Victor *Left1, *Left2, *Right1, *Right2;
	Joystick *Stick;

	// 0 = Right1, 1 = Right2, 2 = Left1, 3 = Left2
	double Motors[4];
	//XboxController *Controller;

public:
	TankDrive();
	void InitDefaultCommand();
	void DriveLeftMotors(int LAxis);
	void DriveRightMotors(int RAxis);
	double* DriveForward(int TriggerAxis);
	double* DriveBackward(int TriggerAxis);
	double* FourWheelTurn(int JoyAxis, int TriggerAxis);
	double* TwoWheelTurn(int JoyAxis);


};

#endif  // TankDrive_H
