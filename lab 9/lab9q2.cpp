#include <iostream>
using namespace std;

class Animal
{
protected:
    int i;

public:
    Animal(int x) { i = x; }
    virtual void display()
    {
        cout << "I am Animal class object, i = " << i << endl;
    }
};

class Derived : public Animal
{
    int j;

public:
    Derived(int x, int y)
        : Animal(x)
    {
        j = y;
    }
    virtual void display()
    {
        cout << "I am Derived class object, i = " << i
             << ", j = " << j << endl;
    }
};

void slice(Animal obj) { obj.display(); }

int main()
{
    Animal a(78);
    Derived d(89, 2);
    slice(a);
    slice(d);
    return 0;
}
