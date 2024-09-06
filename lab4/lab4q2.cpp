#include <iostream>
using namespace std;

int calculateBill(int units)
{

    if (units <= 50)
    {
        return units * 1.5;
    }
    else if (units <= 100)
    {
        return (50 * 1.5) +
               (units - 50) * 2.5;
    }
    else if (units <= 200)
    {
        return (50 * 1.5) +
               (100* 2.5) +
               (units - 150) *3.5;
    }
    else if (units > 200)
    {
        return (50 * 1.5) +
               (50 * 2.5) +
               (100 * 3.5) +
               (units - 200) * 4.5;
    }
    return 0;
}
int main()
{
    int units;
    cout<<"enter units:";
    cin>>units;
    cout<<"bill is:";
    cout << calculateBill(units);
}
