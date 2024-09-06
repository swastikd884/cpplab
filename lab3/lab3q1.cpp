#include <iostream>
using namespace std;
 
struct Employee {
    char name[50];
    int salary;
    char date[50];
   
};
 
int main() 
{
	int n;
	cin>>n;
    Employee e[n];
    for(int i=1;i<=n;i++)
    {
     
		cout << "\nEnter name of employee : ";
		cin>>e[n].name;
    
		cout << "\nEnter salary of employee : ";
		cin >> e[n].salary;
		cout << "\nEnter date: ";
		cin >> e[n].date;
		cout << "\n Employee Details " << endl;
		cout << "Name : " << e[n].name  << "\nSalary : " << e[n].salary<<"\ndate of joining:"<<e[n].date;
	}
}		
