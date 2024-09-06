#include <iostream>
using namespace std;
 
void largest()
{
	int n;
	cout<<"enter the number of elements present in the array:";
	cin>> n;
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		cout<<"enter the element:";
		cin>>arr[i];
	}
     
    // Initialize maximum element
    int max = arr[0];
 
    // Traverse array elements
    // from second and compare
    // every element with current max
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
 
    cout<<"max element:"<<max<<"\n";
    cout<<"index of element:"<<i-1;
}
 
// Driver Code
int main()
{
	
	largest();
    
}
