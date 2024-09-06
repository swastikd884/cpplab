#include <iostream>
using namespace std;

// parent class named shape
class shape
{
    // public instance variable
  public:
    // declaring variables 
    int height,width;
    // constructor of shape class(also called default constructor)
       shape()
       {
        //   initializing height and width for the shape in constructor
           height = 5.0;
           width = 2.0;
       }
};
// child class or subclass of parent shape class 
class triangle : public shape
{
    // public methods
   public:
//   function to calculate triangle shape area
    void shapeArea()
    {
       cout<<"Area of Triangle is calculated as: "<<(0.5 * height * width)<<endl;
    }
};
// child class or subclass of parent shape class 
class rectangle : public shape
{
    // public methods
   public:
//   function to calculate reactangle shape area
    void shapeArea()
    {
       cout<<"Area of Rectangle is calculated as: "<<(height * width)<<endl;
    }
};


int main()
{
    // object of triangle class
    triangle tri;
    // object of rectangle class
    rectangle rect;
    // calling shapeArea function for both the objects
    tri.shapeArea();
    rect.shapeArea();

 return 0;
}
