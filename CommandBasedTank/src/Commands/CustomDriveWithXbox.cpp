#include "CustomDriveWithXbox.h"
#include "../RobotMap.h"

CustomDriveWithXbox::CustomDriveWithXbox() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());

	Requires(&MyTankDrive);
}

// Called just before this Command runs the first time
void CustomDriveWithXbox::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void CustomDriveWithXbox::Execute() {


}

// Make this return true when this Command no longer needs to run execute()
bool CustomDriveWithXbox::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void CustomDriveWithXbox::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CustomDriveWithXbox::Interrupted() {

}
