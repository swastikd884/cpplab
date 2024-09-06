#include <iostream>
using namespace std;

class complex
{
	public:
	int real;
	int img;
	void set()
	{
		cout<<"\nenter real paart";
		cin>>real;
		cout<<"\nenter imaginary part";
		cin>>img;
	}
	void display()
	{
		cout<<"\n"<<real<<"+"<<img<<"i";
	}
	void sum(complex o1,complex o2)
	{
		real=o1.real+o2.real;
		img=o1.img+o2.img;
		cout<<"\nsum is:";
	}
};
int main()
{
	complex c1,c2,c3;
	c1.set();
	c1.display();
	c2.set();
	c2.display();
	c3.sum(c1,c2);
	c3.display();
}
