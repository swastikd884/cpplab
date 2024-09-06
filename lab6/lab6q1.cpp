
#include<iostream>
using namespace std;

class plates
{
	public:
	int length;
	int width;
};
class box:public plates
{
	public:
	int height;
};
class woodbox:public box
{
	public:
	int thick;
	woodbox(int a,int b,int c,int d)
	{
		length=a;
		width=b;
		height=c;
		thick=d;
	}
	void display()
	{
		cout<<"\nlength is:"<<length<<"\nwidth is:"<<width<<"\nheight is :"<<height<<"\nthickness is:"<<thick;
	}
	
};
int main()
{
 woodbox b(1,2,3,4);
 b.display();
}
