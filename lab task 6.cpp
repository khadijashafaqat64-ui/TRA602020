#include<iostream>
#include<string>
using namespace std;
struct Account
{
	string accountNumber;
	string holderName;
	double balance;
};
Account creatAccount()
{
	Account acc;
	cout<<"\n---Create Account---\n";
	cout<<"Enter Account number:";
	cin>>acc.accountNumber;
	cout<<"Enter Holder name:";
	cin>>acc.holderName;
	cout<<"Enter Balance:";
	cin>>acc.balance;
	return acc;
}
void deposite(Account &acc,double  amount)
{
	acc.balance+=amount;
	cout<<"\n---Deposite Receipt---\n";
	cout<<"Account:"<<acc.accountNumber<<endl;
	cout<<"Deposited:"<<amount<<endl;
	cout<<"New Balance:"<<acc.balance<<endl;
}
bool withdraw(Account &acc,double amount)
{
	if(amount<=acc.balance)
	{
		acc.balance-=amount;
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	Account user = creatAccount();
	
	double amount;
	cout<<"\nEnter amount to deposite:";
	cin>>amount;
	deposite(user,amount);
	cout<<"\nEnter amount to withdraw:";
	cin>>amount;
	if(withdraw(user,amount))
	{
		cout<<"Withdrawl Succcessful!"<<endl;
		cout<<"Remaining Balance:"<<user.balance<<endl;
	}
	else
	{
		cout<<"Insufficient Balance!";
	}
	return 0;
}
