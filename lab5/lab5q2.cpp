#include<iostream>
using namespace std;
class complex
{
	public:
		int real,img;
		complex()
		{
			real=0;
			img=0;
		}
		
		complex(int x,int y)
		{
			real=x;
			img=y;
		}
		void print()
		{
			cout<<real<<"+"<<img<<"i";
		}
}c[2];
int main()
{
	//complex c;
	//c.print();
	//complex c;
	c[0].print();
	//cout<<"\n";
	//complex c1(2,3);
	int p,q;
	cin>>p>>q;
	c[1].complex(p,q);
	c[1].print();//
	
}
