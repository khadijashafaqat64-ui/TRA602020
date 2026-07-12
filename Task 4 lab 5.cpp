#include<iostream>
using namespace std;
struct Bill
{
	string accNO;
	string name;
	int units;
	float rate;
	float baseAmount;
	float surcharge;
	float total;
};
void inputBill(Bill &c)
{
	cout<<"Enter Customer Account number:";
	cin>>c.accNO;
	cout<<"Enter Customer Name:";
	cin>>c.name;
	cout<<"Enter units uesd:";
	cin>>c.units;
	cout<<"Enter  Base Amount:";
	cin>>c.baseAmount;
	cout<<"Enter Surcharge:";
	cin>>c.surcharge;
	cout<<"Enter rate of one unit:";
	cin>>c.rate;
}
void calculatedBill(Bill &c)
{
	c.baseAmount=c.units*c.rate;
	c.surcharge=c.baseAmount*0.1;
	c.total=c.baseAmount+c.surcharge;
}
void displayedBill(Bill &c)
{
	cout<<"Electricity Bill"<<endl;
	cout<<"Account Number"<<c.accNO<<endl;
	cout<<"Name:"<<c.name<<endl;
	cout<<"Unit:"<<c.units<<endl;
	cout<<"Rate:"<<c.rate<<endl;
	cout<<"Base Amount:"<<c.baseAmount<<endl;
	cout<<"Surcharge:"<<c.surcharge<<endl;
	cout<<"Total Bill:"<<c.total<<endl;
}
int main()
{
	Bill c;
	inputBill(c);
	calculatedBill(c);
	displayedBill(c);
return 0;
}
