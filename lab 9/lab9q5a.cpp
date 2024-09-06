#include <iostream>
using namespace std;

class Basic
{
private:
    int x;

public:
    Basic() { x = 0; }
    Basic(int x) { this->x = x; }
    Basic(float x) { this->x = x; }
    void show() { cout << "\n"
                       << x; }
};

int main()
{
    Basic b1, b2, b3;
    int x = 9;
    float y = 7.9;
    b2 = x;
    b3 = y;
    b1.show();
    b2.show();
    b3.show();
    return 0;
}
