#include<iostream>

using namespace std;

int main()
{
int a=10, b=0, c;
try
{
	if(b==0)
		throw(c); 
	else
	c=a/b; 		
		
}
catch(char c)   
{
	cout<<"Caught exception : char type ";
}
catch(int i)    
{
	cout<<"Caught exception : int type ";
}
catch(short s)    
{
	cout<<"Caught exception : short type ";
}
cout<<"\n Hello";
}
