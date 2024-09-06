#include<iostream>
using namespace std;
class a
{
	public:
		a()
		{cout<<"\nBase Constructor\n";}
		virtual ~a()
		{cout<<"\nBase Destructor\n";}
};
class b : public a
{
public:
b(){cout<<"\nDerived Constructor\n";}
~b(){cout<<"\nDerived Destructor\n";}
};
int main()
{
a* obj=new b;
delete obj;
return 0;
}
