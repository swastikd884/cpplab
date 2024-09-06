#include <iostream>
using namespace std;
class Point
{
	public:
		int a,b;
		Point(int x,int y)
		{
			a=x;
			b=y;
		}
		void print()
		{
			cout<<a<<"\n"<<b;
		}
};
int main()
{
	int m,n;
	cin>>m>>n;
	Point p(m,n);
	p.print();	
}
