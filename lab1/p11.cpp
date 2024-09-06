#include<iostream>
using namespace std;
int main()
{
	int num_103, originalNum_103, remainder_103, result_103 = 0;
    cout << "Enter a three-digit integer: ";
    cin >> num_103;
    originalNum_103 = num_103;

    while (originalNum_103 != 0) 
    {
        remainder_103 = originalNum_103 % 10;
        result_103 +=remainder_103*remainder_103*remainder_103;
        originalNum_103/= 10;
    }

    if (result_103 == num_103)
        cout << num_103 << " is an Armstrong number.";
    else
        cout << num_103 << " is not an Armstrong number.";
	
}
