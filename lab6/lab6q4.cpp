#include <iostream>
using namespace std;

class sheet
{
	public:
	int length;
	int width,sheeta,costsheet;
	void getdata()
	{
		cout<<"enter the length";
		cin>>length;
		cout<<"enter the width";
		cin>>width;
		
	}
	void sheetcost()
	{
		sheeta=length*width;
		costsheet=sheeta*40;
		cout<<"cost for sheet is:"<<costsheet;
	}
};
class box : public sheet
{
	public:
	int height,boxv,costbox,length1,width1;
	void getdata()
	{
		cout<<"enter the length";
		cin>>length1;
		cout<<"enter the width";
		cin>>width1;
		
		cout<<"enter height";
		cin>>height;
	}
	void boxcost()
	{
		boxv=length1*width1*height;
		costbox=boxv*60;
		cout<<"cost for box is:"<<costbox;
	}
};
int main()
{
	sheet s;
	s.getdata();
	s.sheetcost();
	box b;
	b.getdata();
	b.boxcost();
}
	

