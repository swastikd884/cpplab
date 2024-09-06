#include<iostream>
using namespace std;
int main ()
{
	int n_103;
	cout << "Enter the size of the array : ";
    cin >> n_103;
    int arr_103[n_103],i_103;
    cout << "Enter the elements of the array : ";
    for (i_103 = 0;i_103<n_103;i_103++)
    {
		cin >> arr_103[i_103];
	}
	for(i_103 = 1;i_103 < n_103;i_103++) 
	{
		if(arr_103[0] < arr_103[i_103])
		{
			arr_103[0] = arr_103[i_103];
		}
	}	

	cout << "Largest element = " << arr_103[0];
}	
