#include<iostream>
using namespace std;
struct Pump
{
	string name;
	float price;
	int stock;
};
void inputPump(Pump &p)
{
	cout<<"Enter Pump name:";
	cin>>p.name;
	cout<<"Price per liter:";
	cin>>p.price;
	cout<<"Enter Available Liter fuel:";
	cin>>p.stock;
}
void displayPump(Pump &p)
{
	cout<<"Pump Name:"<<p.name<<endl;
	cout<<"Price per liter:"<<p.price<<endl;
	cout<<"Total Stock:"<<p.stock<<endl;
	
}
int main()
{
 Pump p;
 inputPump(p);
 displayPump(p);
 return 0;	
}
