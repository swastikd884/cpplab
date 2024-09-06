#include<iostream>
using namespace std;
class Base
{
public:
virtual ~Base() = 0; //Pure Virtual Destructor
};
Base::~Base() { cout << "Base Destructor"; } //Definition of Pure Virtual Destructor
class Derived : public Base
{
public:
~Derived() { cout<< "Derived Destructor"; }
};

int main()
{
Base* obj=new Derived;
delete obj;
return 0;
}
