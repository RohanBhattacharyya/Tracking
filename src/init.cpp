#include "vex.h"
using namespace vex;

brain Brain;
motor frw = motor(PORT11, true);
motor flw = motor(PORT20);
motor brw = motor(PORT12, true);
motor blw = motor(PORT19);
motor claw = motor(PORT4);
distance rightSensor = distance(PORT13);
distance leftSensor = distance(PORT18);
distance middleSensor = distance(PORT10);