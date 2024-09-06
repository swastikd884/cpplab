#include<iostream>
using namespace std;
class bank
{
    private:
        string name;
        int accno;
        string acc_type ;
        int balance;
    public:
		 bank(string n,int ano,int bal,string sa)
        {
            name=n;
            accno=ano;
            balance=bal;
            acc_type = sa;
        }
		void setdata()
        {
				cout<<"enter the name of account holder : "<<endl;
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
				cout<<"you have unsufficient balance that you cant withdraw money :"<<endl;
		}
		void display()
		{
			cout<<"name of customer is "<<name<<endl;
			cout<<"account no. :"<<accno<<endl;
			cout<<"account type : "<<acc_type<<endl;
			cout<<"total balance in your account is Rs. "<<balance<<endl;
		}
};
int main()
{
	string s1,s2;
	s1="rahul";
	s2="savingsaccount";
    bank customer(s1,34678,5000,s2);
    customer.setdata();
    customer.deposit();
    customer.check();
    customer.display();
}
