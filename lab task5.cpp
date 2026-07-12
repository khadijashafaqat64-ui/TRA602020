#include<iostream>
#include<string>
using namespace std;
struct Student
{
	string name;
	int rollNo;
	float marks[3];
	float gpa;
};
void calculateGPA(Student &s)
{
	float total= s.marks[0]+s.marks[1]+s.marks[2];
	float avg=total/3;
	s.gpa=(avg/100)*4;
	if(s.gpa>4.0)
	s.gpa=4.0;
}
void displayStudent(Student s)
{
	cout<<"---Student details ---"<<endl;
	cout<<"Name:   "  <<s.name <<endl;
	cout<<"Roll_No:    "<<s.rollNo<<endl;
	cout<<"Marks:    "
	<<s.marks[0]<<"  "
	<<s.marks[1]<<"  "
	<<s.marks[2]<<" "<<endl;
	cout<<"GPA:      "<<s.gpa<<"/4.0"<<endl;
}
int main()
{
	Student student[2];
	for(int i=0;i<2;i++)
	{
    cout<<"Enter details  " <<i+1 <<"  of Student:"<<endl;
	cout<<"Name:";
	cin>>student[i].name;	
	cout<<"Roll No:";
	cin>>student[i].rollNo;
	cout<<"Enter marks for 1 subject:";
	cin>>student[i].marks[0];
	cout<<"Enter marks for 2 subject:";
	cin>>student[i].marks[1];
	cout<<"Enter marks for 3 subject:";
	cin>>student[i].marks[2];
	calculateGPA(student[i]);
	
	
	}
	for(int i=0;i<2;i++)
	{
		displayStudent(student[i]);
	}
	return 0;
}
