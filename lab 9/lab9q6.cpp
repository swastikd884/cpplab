#include <iostream>
using namespace std;

class Celsius
{
private:
    float celsius, fahrenheit;

public:
    void temp_func()
    {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
        fahrenheit = (celsius * 9 / 5) + 32;

        cout << "Temperature in Fahrenheit is: " << fahrenheit << "\n";
    }
};

class Fahrenheit
{
private:
    float celsius, fahrenheit;

public:
    void conv_temp()
    {
        cout << "\nEnter temp in Fahrenheit: ";
        cin >> fahrenheit;
        celsius = (fahrenheit - 32) * 5 / 9;
        cout << "Temperature in Celsius is: " << celsius;
    }
};

int main()
{
    Celsius conv1;
    conv1.temp_func();
    Fahrenheit conv2;
    conv2.conv_temp();
    return 0;
}
