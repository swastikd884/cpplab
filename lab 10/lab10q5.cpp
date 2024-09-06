#include <iostream>
#include <math.h>
#define pi 3.14
using namespace std;

void pow_factor(float a)
{
    if (a > 1 || a < -1)
    {
        throw(a);
    }
    else
    {
        cout << "Voltage is lagging from current by " << acos(a) * 180 / pi << " degree\n";
    }
}

int main()
{
    float a;
    try
    {
        cout << "Enter pow factor:";
        cin >> a;
        pow_factor(a);
    }
    catch (float b)
    {
        cout << "Caught an exception.\n";
    }
    return 0;
}
