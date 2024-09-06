#include <iostream>
using namespace std;
int main()
{
    int cash,d10,d50,d100;
    cout<<"Enter the amount to be withdrawn in hundreds\n";
    cin>>cash;

    d100=cash/100;
    cash=cash-d100*100; 
    d50=cash/50;
    cash=cash-d50*50;
    d10=cash/10;
    
    cout<<"Exact currency notes that cashier has to give\n";
    cout<<"Number of 10s cashier will give="<<d10<<"\nNumber of 50s cashier will give="<<d50<<"\nNumber of 100s cashier will give= " <<d100;
}
