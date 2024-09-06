#include <iostream>
using namespace std;

class box
{
  private:
  int length;
  int width;
  int height;

  public:
   void input()
   {
     cout<<"Enter height";
     cin>>height;
     cout<<"Enter width";
     cin>>width;
     cout<<"enter length";
     cin>>length;
   }

   void display()
   {
	 cout<<"volume is:";
     cout << height*width*length;
   }
};
int main()
{
	box b;
	b.input();
	b.display();
}

