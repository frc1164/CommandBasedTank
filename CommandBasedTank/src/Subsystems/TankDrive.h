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
	double Left, Right, LTrigger, RTrigger;
	//XboxController *Controller;

public:
	TankDrive();
	void InitDefaultCommand();
	void DriveLeftMotors(int LAxis);
	void DriveRightMotors(int RAxis);
	double* DriveValues(int LAxis, int RAxis, int RTriggerAxis, int LTriggerAxis);
	void DriveMotors(double DriveValues[4]);

};

#endif  // TankDrive_H
