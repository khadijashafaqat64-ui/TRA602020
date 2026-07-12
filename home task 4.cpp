#include<iostream>
#include<string>
using namespace std;
struct Date
{
	int day;
	int month;
	int year;
};
struct Doctor
{
	string name;
	string specilaization;
};
struct Patient
{
	string patientID;
	string name;
	int age;
	Date addmission;
	Doctor assigned_Dr;
	double dailyCharge;
	
};
double calculateBill(Patient p,int days)
{
   return p.dailyCharge*days;
}
void displayedPatientReport(Patient p,int days)
{
	double total=calculateBill(p,days);
	cout<<"\n======Hospital Patient Report======\n";
	cout<<"Patient ID   :"<<p.patientID<<endl;
	cout<<"Name         :"<<p.name<<endl;
	cout<<"Age          :"<<p.age<<endl;
	
	
	cout<<"Admission Date:"
	<<p.addmission.day<<"-"
	<<p.addmission.month<<"-"
	<<p.addmission.year<<endl;
 cout<<"Doctor           :"<<p.assigned_Dr.name<<endl;
 cout<<"Days stayed      :"<<days<<endl;
 cout<<"Total Bill       :"<<total<<endl;
}
	
int main()
{
	Patient p[2];
	int days[2];
	for(int i=0;i<2;i++)
	{
		cout<<"\n---Enter details of Patients  "<<i+1<<endl;
	cout<<"Patient ID   :";
	cin>>p[i].patientID;
	cout<<"Name   :";
	cin>>p[i].name;
	cout<<"Age  :";
	cin>>p[i].age;
	cout<<"Admission Date:";
	cin>>p[i].addmission.day
	>>p[i].addmission.month
	>>p[i].addmission.year;
	cout<<"Droctor name   :";
	cin>>p[i].assigned_Dr.name;
	cout<<"Specialization  :";
	cin>>p[i].assigned_Dr.specilaization;
	cout<<"Daily Charge:";
	cin>>p[i].dailyCharge;
	cout<<"Number of days:";
	cin>>days[i];
}
	for(int i=0;i<2;i++)
	{
		displayedPatientReport(p[i] , days[i]);
	}
	return 0;
	
}
