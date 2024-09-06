#include <iostream>
using namespace std;
int main(){
    int i_103, j_103, size_103, temp_103;
    int arr_103[25];
    cout << "Enter the total no. of elements: ";
    cin >> size_103;
    cout << "Enter the elements of the array: " ;
    for (i_103 = 0; i_103 < size_103; i_103++){
        cin >> arr_103[i_103];
    }
    for (i_103 = 0; i_103 < size_103; i_103++){
        for (j_103 = i_103; j_103 < size_103; j_103++){
            if (arr_103[i_103] > arr_103[j_103+1]){
                temp_103 = arr_103[i_103];
                arr_103[i_103] = arr_103[j_103+1];
                arr_103[j_103+1] = temp_103;
            }
        }
    }
    
    cout << "Elements sorted in the ascending order are: ";
    for (i_103 = 1; i_103 <= size_103; i_103++){
     cout << arr_103[i_103] ;   
    }
    return 0;
}
