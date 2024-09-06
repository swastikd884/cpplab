#include<iostream>
using namespace std;

class point
{
	private:
		int x,y,z;
	public:
		point()
		{
			x=1;
			y=2;
			z=4;
		}
		void operator ++(void)
		{
			++x;
			++y;
			++z;
		}
		void operator --(void)
		{
			--x;
			--y;
			--z;
		}
		void operator -(void)
		{
			x=x*(-1);
			y=y*(-1);
			z=z*(-1);
		}
		void display()
		{
			cout<<"\nx:"<<x<<"\ny:"<<y<<"\nz:"<<z;
		}
};
int main()
{
	point q;
	++q;
	cout<<"\nafter increment:";
	q.display();
	--q;
	cout<<"\n after decrement:";
	q.display();
	-q;
	cout<<"\n unary  minus:";
	q.display();
}
		
		
