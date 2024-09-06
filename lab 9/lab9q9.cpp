#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class Ishape
{
public:
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
};
class Point
{
public:
    int x, y;
    Point()
    {
        x = 1;
        y = 1;
    }
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
};
class Shape : public Ishape
{
    Point point[3];

public:
    string type;
    Shape(Point points[]) {}

    virtual double getArea() {}
    virtual double getPerimeter() {}
};
class Triangle : public Shape
{
    Point points[3];

public:
    Triangle(Point point[]) : Shape(point)
    {
        for (int i = 0; i < 3; i++)
        {
            points[i] = point[i];
        }
    }
    double getArea()
    {
        double a;
        a = 0.5 * ((points[0].x * (points[1].y - points[2].y)) +
                   (points[1].x * (points[2].y - points[0].y)) + (points[2].x * (points[0].y - points[1].y)));
        return a;
    }
    double getPerimeter()
    {
        double p, ab, bc, ca;
        ab = sqrt(pow(points[1].x - points[0].x, 2) + pow(points[1].y -
                                                              points[0].y,
                                                          2));
        bc = sqrt(pow(points[2].x - points[1].x, 2) + pow(points[2].y -
                                                              points[1].y,
                                                          2));
        ca = sqrt(pow(points[0].x - points[2].x, 2) + pow(points[0].y -
                                                              points[2].y,
                                                          2));
        p = ab + bc + ca;
        return p;
    }
};
class Rectangle : Shape
{

    Point points[4];

public:
    Rectangle(Point point[]) : Shape(point)
    {
        for (int i = 0; i < 4; i++)
        {
            points[i] = point[i];
        }
    }
};

class ShapeHelper
{
public:
    void input()
    {
        Point p[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> p[i].x;
            cin >> p[i].y;
        }
        Triangle t(p);
        cout << t.getArea();
    }
};

int main()
{
    ShapeHelper s;
    s.input();
    return 0;
}
