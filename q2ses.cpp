#include <iostream>
using namespace std;
class MILES_8103;
class KM_8103
{
public:
    float data_8103;

public:
    KM_8103()
    {
        cout << "\nEnter the distancein km:";
        cin >> data_8103;
    }
    float operator=(MILES_8103 m);
    void display()
    {
        cout << "\nThe distance is:" << data_8103 << " KM\n";
    }
};
class MILES_8103
{
public:
    float data_8103;

public:
    MILES_8103()
    {
        cout << "\nEnter the distance in miles:";
        cin >> data_8103;
    }
    float operator=(KM_8103 k);
    void display()
    {
        cout << "\nThe distance is:" << data_8103 << " MILES\n";
    }
};
float KM_8103::operator=(MILES_8103 m)
{
    return data_8103 = m.data_8103 * 1.609;
}
float MILES_8103::operator=(KM_8103 k)
{
    return data_8103 = k.data_8103 * 0.6213712;
}
int main()
{
	cout<<"SWASTIK DAS 2128103";
    KM_8103 k1, k2;
    MILES_8103 m1, m2;
    k1.display();
    k2.display();
    m1.display();
    m2.display();
    k1 = m1;
    m2 = k2;
    k1.display();
    m2.display();
}
