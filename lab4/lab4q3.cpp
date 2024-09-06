#include <iostream>
using namespace std;
int main()
{ 
	float principle, rate, sinterest,totalamount;
	int time;
 
	cout<<"Enter Principle Amount, Rate %% per Annum and Time\n";
	cin>>principle>>rate>>time;
 
	sinterest = (principle * rate * time)/ 100.0;
	totalamount=sinterest+principle;
 
	cout<<"Principle Amount=\n"<<principle;
	cout<<"Rate %% per Annum=\n"<<rate;
	cout<<"\nTime="<<time<<"years\n";
	cout<<"Simple Interest:\n"<<sinterest;
	cout<<"\ntotal amount:"<<totalamount;
}
