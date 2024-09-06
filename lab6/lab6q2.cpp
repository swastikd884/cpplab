#include<iostream>
using namespace std;

class mother
{
	public:
	void display()
	{
		cout<<"mother class";
	}
};
class daughter : public mother
{
	public:
	void display()
	{
		cout<<"daughter class";
	}
};
int main()
{
	daughter d;
	d.mother::display();
}
