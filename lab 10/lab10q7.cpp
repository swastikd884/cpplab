// WAP to demonstrate the concept of re-throwing an exception
#include <iostream>
using namespace std;
int main()
{
    try
    {
        int a, b;
        cout << "Enter two integer values: ";
        cin >> a >> b;
        try
        {
            if (b == 0)
            {
                throw b;
            }
            else
            {
                cout << (a / b);
            }
        }
        catch (...)
        {
            throw;
        }
    }
    catch (int)
    {
        cout << "Second value cannot be zero";
    }
    return 0;
}
