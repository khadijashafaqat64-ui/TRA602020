#include<iostream>
#include<string>
using namespace std;
struct Instructor
{
	string name;
	string department;
};
struct course
{
	string courseCode;
	string courseName;
	int creditHours;
	int maxSeat;
	int enrolledStudent;
	Instructor ins;
};
bool enrollStudent(course &c)
{
	if(c.enrolledStudent<c.maxSeat)
	{
		c.enrolledStudent++;
		return true;
	}
	else
	{
		return false;
	}
}
void displayCourse(course c)
{
	cout<<"\n---Course Detailed---"<<endl;
	
	
	cout<<"Course Code  :"<<c.courseCode<<endl;
	cout<<"Course Name  :"<<c.courseName<<endl;
	cout<<"Credit Hours  :"<<c.creditHours<<endl;
	
	
	cout<<"Max Seat  :"<<c.maxSeat<<endl;
	cout<<"Enrolled  :"<<c.enrolledStudent<<endl;
	cout<<"Seats Left  :"<<(c.maxSeat-c.enrolledStudent)<<endl;
	cout<<"Instructor :"<<c.ins.name<<endl;
	cout<<"Department:"<<c.ins.department<<endl;
}
int main()
{
	course c[2];
	for(int i=0;i<2;i++)
	{
		cout<<"\n---Enter details for course"<<i+1<<"---\n";
		cout<<"Course Code:";
		cin>>c[i].courseCode;
		
		cout<<"Course Name:";
		cin>>c[i].courseName;
		
		cout<<"Credit Hours:";
		cin>>c[i].creditHours;
		
		cout<<"Max Seats:";
		cin>>c[i].maxSeat;
		
		cout<<"Currently Enrolled Student:";
		cin>>c[i].enrolledStudent;
		
		cout<<"Instructor Name:";
		cin>>c[i].ins.name;
		
			cout<<"Department  Name:";
		cin>>c[i].ins.department;
	}
	for(int i=0;i<2;i++)
	{
		int s;
		cout<<"\nHow many students to enroll in "<<c[i].courseCode<<"?";
		cin>>s;
		for(int j=0;j<s;j++)
		{
			if(enrollStudent(c[i]))
               {
			   cout<<"Enrolling Student"<<j+1<<"in"
			   <<c[i].courseCode<<"...Success!"<<endl;
           }
			   else
               {
               	cout<<"No seats avaliable!"<<j+1<<"in"
				   <<c[i].courseCode<<"....Course Full!"<<endl;
               	break;
			   }
		}
	}
	for(int i=0;i<2;i++)
	{
		displayCourse(c[i]);
	}
	return 0;
}

