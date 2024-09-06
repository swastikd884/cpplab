#include<iostream>
using namespace std;
class account_8103
{
    private:
        string name_8103;
        int accno_8103;
        string acc_type_8103 ;
        int balance_8103=0;
        int intamt_8103;
    public:
		void setdata_8103()
        {
				cout<<"\nenter the name of account holder : "<<endl;
                cin>>name_8103;
                
                cout<<"enter the type of account: "<<endl;
                cin>>acc_type_8103;
                cout<<"enter the account number of customer : "<<endl;
                cin>>accno_8103;
                cout<<"enter the balance : "<<endl;
                cin>>balance_8103;
         }
         void deposit_8103()
		{
			int amount;
			cout<<"how much money do you want to deposit : "<<endl;
			cin>>amount;
			balance_8103=balance_8103+amount;
		}
		void check_8103()
		{
			int amnt;
			cout<<"how much money do you want to withdraw : "<<endl;
			cin>>amnt;
			if (balance_8103>amnt)
			{
				balance_8103=balance_8103-amnt;
			}
			else
			{
				cout<<"you have unsufficient balance that you cant withdraw money :"<<endl;
				balance_8103=balance_8103-100;
			}
		}
		void display_balance_8103()
		{
			cout<<"name of customer is "<<name_8103<<endl;
			cout<<"account no. :"<<accno_8103<<endl;
			cout<<"account type : "<<acc_type_8103<<endl;
			cout<<"total balance in your account is Rs. "<<balance_8103<<endl;
		}
		void interest_8103()
		{
			intamt_8103=0.10*balance_8103;
			cout<<"interest amount is:"<<intamt_8103;
		}	
};
int main()
{
	cout<<"SWASTIK DAS 2128103";
	account_8103 a[2];
	for(int i_8103 = 0; i_8103 < 2; i_8103++)
	{
		a[i_8103].setdata_8103();
		a[i_8103].deposit_8103();
		a[i_8103].check_8103();
		a[i_8103].display_balance_8103();
		a[i_8103].interest_8103();
	}
	
	
  
}
