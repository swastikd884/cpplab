#include <iostream>
using namespace std;
struct student {
   int rollno;
   char name[50];
   float cgpa;
   
}s[20];
int main()
{
	int n;
	cout<<"enter number of students";
	cin>>n;
	for(int i=0;i<n;i++)
	{
	cout<<"enter student name:";
	cin>>s[i].name;
	cout<<"enter roll number";
	cin>>s[i].rollno;
	cout<<"enter cgpa:";
	cin>>s[i].cgpa;
	}
	cout<<"name\t\tcgpa\n";
	for(int i=0;i<n;i++)
	{
	cout<<s[i].name<<"\t\t"<<s[i].cgpa<<"\n";
	}
	float a;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (s[i].cgpa < s[j].cgpa)
			{
				a =s[i].cgpa;
				s[i].cgpa =s[j].cgpa;
				s[j].cgpa = a;
			}
		}
	}
	cout<<"The cgpa arranged in descending order are given below\n";
	for (int i = 0; i < n; ++i)
	{
		cout<<s[i].cgpa<<"\n"; //printing numbers in descending order
	}
}
