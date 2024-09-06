#include <iostream>
using namespace std;

class Vehicle
{
protected:
    int i;

public:
    Vehicle(int a) { i = a; }
    virtual void display()
    {
        cout << "I am Vehicle class object, i = " << i << endl;
    }
};

class Derived : public Vehicle
{
    int j;

public:
    Derived(int a, int b)
        : Vehicle(a)
    {
        j = b;
    }
    virtual void display()
    {
        cout << "I am Derived class object, i = " << i
             << ", j = " << j << endl;
    }
};

void slice(Vehicle obj) { obj.display(); }

int main()
{
    Vehicle v(38);
    Derived d(88, 46);
    slice(v);
    slice(d);
    return 0;
}
