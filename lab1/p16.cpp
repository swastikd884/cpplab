#include<iostream>
using namespace std;
int main ()
{
    int A_103[10][10], i_103, j_103, m_103, n_103, x_103 = 0;
    cout << "Enter the number of rows and columns : ";
    cin >> m_103 >> n_103;
    cout << "Enter the matrix elements : ";
    for (i_103 = 0; i_103 < m_103; i_103++)
        for (j_103 = 0; j_103 < n_103; j_103++)
            cin >> A_103[i_103][j_103];
    for (i_103 = 0; i_103 < m_103; i_103++)
    {
        for( j_103 = 0; j_103 < n_103; j_103++)
        {
            if (A_103[i_103][j_103] != A_103[j_103][i_103])
                x_103 = 1;
        }
    }
    if (x_103 == 0)
        cout << "The matrix is symmetric.\n ";
    else
        cout << "It is not symmetric \n ";
    for (i_103 = 0; i_103 < m_103; i_103++)
        {
            for (j_103 = 0; j_103 < n_103; j_103++)	
                cout << A_103[i_103][j_103] << " ";
            cout << "\n ";
        }
    return 0;
}
