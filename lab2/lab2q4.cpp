#include<iostream>
using namespace std;

int main()
{
	int i_103,j_103,n_103,fact_103,sign_103=-1;
	float x_103, p_103,sum_103=0;
	cout<<"Enter the value of x : ";
	cin>>x_103;
	cout<<"Enter the value of n : ";
	cin>>n_103;

	for(i_103=1;i_103<=n_103;i_103+=2)
	{ 
		p_103=1;
        fact_103=1;
		for(j_103=1;j_103<=i_103;j_103++)
		{
			p_103=p_103*x_103;
			fact_103=fact_103*j_103;
		}
		sign_103=-1*sign_103;
		sum_103+=sign_103*p_103/fact_103;
	}
	cout<<"sin "<<x_103<<"="<<sum_103;

	
	return 0;
}
