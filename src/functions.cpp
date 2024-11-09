#include "init.h"
#include "vex.h"
using namespace vex;

double FRS = 0;
double BRS = 0;
double FLS = 0;
double BLS = 0;

void move(char *type, double amount)
{

    if (strcmp(type, "left") == 0)
    {
        FLS -= amount;
        BLS -= amount;
        BRS += amount;
        FRS += amount;
    }

    else if (strcmp(type, "right") == 0)
    {
        FLS += amount;
        BLS += amount;
        BRS -= amount;
        FRS -= amount;
    }

    else if (strcmp(type, "forward") == 0)
    {
        FRS += amount;
        BRS += amount;
        FLS += amount;
        BLS += amount;
    }
    else if (strcmp(type, "backward") == 0)
    {
        FRS -= amount;
        BRS -= amount;
        FLS -= amount;
        BLS -= amount;
    }

    frw.spin(forward, FRS, rpm);
    brw.spin(forward, BRS, rpm);
    flw.spin(forward, FLS, rpm);
    blw.spin(forward, BLS, rpm);
}

void stop()
{
    frw.stop();
    flw.stop();
    brw.stop();
    blw.stop();
}