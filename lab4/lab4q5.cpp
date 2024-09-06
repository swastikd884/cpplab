#include <iostream>
using namespace std;

class student
{
	private:
	int rollno,m1,m2,m3,m4,m5,m6,total;
	char name[50];
	public:
	void getdata()
	{
			cout<<"enter student name:";
			cin>>name;
			cout<<"enter roll number";
			cin>>rollno;
			cout<<"enter marks in subject 1";
			cin>>m1;
			cout<<"enter marks in subject 2";
			cin>>m2;
			cout<<"enter marks in subject 3";
			cin>>m3;
			cout<<"enter marks in subject 4";
			cin>>m4;
			cout<<"enter marks in subject 5";
			cin>>m5;
			cout<<"enter marks in subject 6";
			cin>>m6;
		
	}
	void displaytotalmarks()
	{
		/*for(int i=1;i<=n;i++)
		{*/
			total=m1+m2+m3+m4+m5+m6;
			cout<<"total marks for student is:"<<total;
	}
}s;
int main()
{
	student s[2];
	for(int i=0;i<2;i++)
	{
		s[i].getdata();
		s[i].displaytotalmarks();
	}
}
  
