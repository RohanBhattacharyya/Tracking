#include "functions.h"
#include "init.h"
#include "vex.h"
using namespace vex;

void move(char* type, double amount){
    
    if (strcmp(type, "left") == 0) {
        frw.spin(forward, amount, rpm);
        brw.spin(forward, amount, rpm);
        flw.spin(forward, -amount, rpm);
        blw.spin(forward, -amount, rpm);
    }
    
    else if (strcmp(type, "right") == 0) {
        frw.spin(forward, -amount, rpm);
        brw.spin(forward, -amount, rpm);
        flw.spin(forward, amount, rpm);
        blw.spin(forward, amount, rpm);
    }
    
    else if (strcmp(type, "forward") == 0) {
        frw.spin(forward, amount, rpm);
        brw.spin(forward, amount, rpm);
        flw.spin(forward, amount, rpm);
        blw.spin(forward, amount, rpm);
    }
}

void stop(){
    frw.stop();
    flw.stop();
    brw.stop();
    blw.stop();
}