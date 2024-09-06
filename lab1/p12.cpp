#include<iostream>
using namespace std;
int main ()
{
	int n_103;
	cout << "Enter the size of the array : ";
    cin >> n_103;
    int arr_103[n_103],i_103,sum_103 = 0;
    cout << "Enter the elements of the array : ";
    for (i_103 = 0;i_103<n_103;i_103++)
    {
		cin >> arr_103[i_103];
	}	
    for (i_103 = 0; i_103<n_103;i_103++)
    {
        sum_103 += arr_103[i_103];
    }
    cout << "\nSum of array elements : " << sum_103;
    return 0;
}
