#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number of elements present in the array:";
	cin>> n;
	int arr[n],i,count=0;
	for(i=0;i<n;i++)
	{
		cout<<"enter the element:";
		cin>>arr[i];
	}
	for (int i = 0; i < n; i++)
        if (arr[i] == 0)
            count++;
 
    
    for (int i = 0; i < count; i++)
        arr[i] = 0;
 
   
    for (int i = count; i < n; i++)
        arr[i] = 1;
    cout<<"new array is:";    
    for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}

}
