#include <iostream>
using namespace std;
 
struct cricket
{
	char name[50];
	int age;
	char teamname[50];
	int matches;
	float battingaverage;
}; 
int main()
{
	int n;
	cout<<"enter number of players";
	cin>>n;
	struct cricket c[12];
	for(int i=0;i<n;i++)
	{
	cout<<"enter player name:";
	cin>>c[i].name;
	cout<<"enter age";
	cin>>c[i].age;
	cout<<"enter batting average:";
	cin>>c[i].battingaverage;
	}
	cout<<"name\t\tbattingaverage\n";
	for(int i=0;i<n;i++)
	{
	cout<<c[i].name<<"\t\t"<<c[i].battingaverage<<"\n";
	
	
	}
	
}
	
