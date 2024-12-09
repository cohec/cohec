#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor leftsideMotorA = motor(PORT1, ratio6_1, false);
motor leftsideMotorB = motor(PORT2, ratio6_1, false);
motor_group leftside = motor_group(leftsideMotorA, leftsideMotorB);
motor conveyorMotorA = motor(PORT3, ratio18_1, false);
motor conveyorMotorB = motor(PORT11, ratio18_1, false);
motor_group conveyor = motor_group(conveyorMotorA, conveyorMotorB);
motor rightsideMotorA = motor(PORT12, ratio6_1, false);
motor rightsideMotorB = motor(PORT13, ratio6_1, false);
motor_group rightside = motor_group(rightsideMotorA, rightsideMotorB);
controller Controller1 = controller(primary);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}