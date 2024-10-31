 /*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       Rohan & Eric                                                    */
/*    Created:      10/23/2024, 3:50:58 PM                                    */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"
#include <iostream>
#include <fstream>  
#include "functions.h"
#include "init.h"
using namespace vex;

int main() {
    // move("forward", 50);
    Brain.Screen.print("Test 1\n");
    Brain.Screen.print("Test 2\n");
    
    while (true) {
        if (leftSensor.isObjectDetected()){
            Brain.Screen.print("Left Sensor: Object Detected\n");

            while (!middleSensor.isObjectDetected()){
                move("right", 50);
            }
            wait(0.1, seconds);
            stop();
            Brain.Screen.print("Stopped turning right\n");
        }

        if (rightSensor.isObjectDetected()){
            Brain.Screen.print("Right Sensor: Object Detected\n");
            while (!middleSensor.isObjectDetected()){
                move("left", 50);
            }
            wait(0.1, seconds);
            stop();
            Brain.Screen.print("Stopped turning left\n");
        }
    }
}
