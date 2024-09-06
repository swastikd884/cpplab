#include<iostream>
using namespace std;
class account
{
    private:
        string name;
        int accno;
        string acc_type ;
        int balance=0;
        int intamt;
    public:
		void setdata()
        {
				cout<<"\nenter the name of account holder : "<<endl;
                cin>>name;
                
                cout<<"enter the type of account: "<<endl;
                cin>>acc_type;
                cout<<"enter the account number of customer : "<<endl;
                cin>>accno;
                cout<<"enter the balance : "<<endl;
                cin>>balance;
         }
         void deposit()
		{
			int amount;
			cout<<"how much money do you want to deposit : "<<endl;
			cin>>amount;
			balance=balance+amount;
		}
		void check()
		{
			int amnt;
			cout<<"how much money do you want to withdraw : "<<endl;
			cin>>amnt;
			if (balance>amnt)
			{
				balance=balance-amnt;
			}
			else
			{
				cout<<"you have unsufficient balance that you cant withdraw money :"<<endl;
				balance=balance-100;
			}
		}
		void display_balance()
		{
			cout<<"name of customer is "<<name<<endl;
			cout<<"account no. :"<<accno<<endl;
			cout<<"account type : "<<acc_type<<endl;
			cout<<"total balance in your account is Rs. "<<balance<<endl;
		}
		void interest()
		{
			intamt=0.10*balance;
			cout<<"interest amount is:"<<intamt;
		}	
};
int main()
{
	account a[2];
	for(int i = 0; i < 2; i++)
	{
		a[i].setdata();
		a[i].deposit();
		a[i].check();
		a[i].display_balance();
		a[i].interest();
	}
	
	
  
}
