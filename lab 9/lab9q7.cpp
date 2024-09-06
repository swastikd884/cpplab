#include <iostream>
using namespace std;

class Dollar
{
private:
    int dollar;

public:
    Dollar(int d = 0) : dollar(d) {}
    void display()
    {
        cout << "Dollar value:" << dollar << endl;
    }

    int getValue()
    {
        return dollar;
    }
};

class Rupee
{
private:
    int rupee;

public:
    Rupee(int r = 0) : rupee(r) {}
    Rupee(Dollar d)
    {
        rupee = 82 * d.getValue();
    }

    void display()
    {
        cout << "Rupee value:" << rupee << endl;
    }
};

int main()
{
    Dollar d1(80);
    Rupee r1;
    r1 = d1;
    d1.display();
    r1.display();
    return 0;
}
