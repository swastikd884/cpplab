#include<iostream>
using namespace std;
int main ()
{
	int n_103,i,j;
	cout << "Enter the value of n: ";
    cin >> n_103;
    for (i=1;i<=n_103;i++)
    {
		for(j=1;j<=i;j++)
		{
			cout<< "*";
		}
		cout<<"\n";	
    }
}    
