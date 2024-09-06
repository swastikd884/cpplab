#include <iostream>
using namespace std;
 
struct time_struct
{
	int hours;
	int minutes;
	int seconds;
}s;
int main()
{
	cout<<"enter time in hours minutes seconds format:";
	cin>>s.hours>>s.minutes>>s.seconds;
	if(s.minutes>60 || s.seconds>60)
	{
		cout<<"\nPlease enter valid time format";
	}
	else
	{	
		cout<<s.hours<<":"<<s.minutes<<":"<<s.seconds;
	}
}
