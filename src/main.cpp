/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       Rohan & Eric                                              */
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

int main()
{
    while (true)
    {
        if (middleSensor.isObjectDetected())
        {
            stop();
        }
        else if (rightSensor.isObjectDetected())
        {
            move("right", 10);
        }
        else if (leftSensor.isObjectDetected())
        {
            move("left", 10);
        }
    }
}