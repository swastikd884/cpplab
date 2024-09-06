#include<iostream>
using namespace std;
int sumarray(int rowsize_103,int colsize_103)
{
	int matrix[rowsize_103][colsize_103];

    
    int i_103,j_103;
    cout<<"Enter the Matrix Element:\n";
    for(i_103=0;i_103<rowsize_103;i_103++)
    {
        for(j_103=0;j_103<colsize_103;j_103++)
        {
            cin>>matrix[i_103][j_103];
        }
    }
	int sum_103=0;
	for(i_103=0;i_103<rowsize_103;i_103++)
    {
        for(j_103=0;j_103<colsize_103;j_103++)
        {
            sum_103+=matrix[i_103][j_103];
        }
    }
    return sum_103;
}
int main()
{
    int rowsize_103,colsize_103,sum_103;
    
    cout<<"Enter the row Size Of the Matrix:";
    cin>>rowsize_103;
    cout<<"Enter the columns Size Of the Matrix:";
    cin>>colsize_103;
    sum_103=sumarray(rowsize_103,colsize_103);
    cout<<"sum is:"<<sum_103;

    
   
    return 0;
}
