#include<iostream>
using namespace std;
struct Citizen
{
	string name;
	string city;
	int age;
};
int main()
{
	Citizen c;
	Citizen *ptr=&c;
	int choice;
	cout<<"Name:";
	cin>>ptr->name;
	cout<<"City:";
	cin>>ptr->city;
	cout<<"Age:";
	cin>>ptr->age;
	cout<<endl;
	cout<<"Enter 1 to update city"<<endl;
	cout<<"Enter any other key to recod "<<endl;
	cin>>choice;
	if(choice==1)
	{
		cout<<"Enter new city:";
		cin>>ptr->city;
		cout<<"Now city is Updated city"<<endl;	
	}
	else
	{
		cout<<"Original recod";
	}
	cout<<"Name:"<<ptr->name<<endl;
	cout<<"City:"<<ptr->city<<endl;
	cout<<"Age:"<<ptr->age;
	return 0;	
	
}
