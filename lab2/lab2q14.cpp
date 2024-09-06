#include <iostream>
using namespace std;
float power_103(float base_103, int exponent_103)
{
	float result_103 = 1;

    

    while (exponent_103 != 0) {
        result_103 *= base_103;
        --exponent_103;
    }
    return result_103;
}

int main() 
{
    int exponent_103;
    float base_103, result_103 = 1;
    cout << "Enter base_103 and exponent_103 respectively:  ";
    cin >> base_103 >> exponent_103;

    cout << base_103 << "^" << exponent_103 << " = ";
	result_103 =power_103(base_103,exponent_103);
    cout << result_103;
    
    return 0;
}
