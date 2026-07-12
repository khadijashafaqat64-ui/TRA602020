#include<iostream>
using namespace std;
struct result
{
	float marks;
	char grade;
};
struct Recod
{
	int roll_number;
	result a;	
};
int main()
{
  	Recod  b1;
	  cout<<"Enter your roll number";
	  cin>>b1.roll_number;
	  cout<<"Enter your marks:";
	  cin>>b1.a.marks;
	  cout<<"Enter your Grade:";
	  cin>>b1.a.grade;
	  cout<<endl;
	  cout<<"Roll_Number of student:"<<b1.roll_number<<endl;
	  cout<<"Marks of student:"<<b1.a.marks<<endl;
	  cout<<"Grade of Student:"<<b1.a.grade<<endl;
	  return 0;
}

