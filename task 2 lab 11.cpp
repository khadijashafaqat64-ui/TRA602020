#include<iostream>
#include<string>
using namespace std;
class Person
{
private:
 string name;
 string address;
 public:
 Person(string n,string add):name(n),address(add)
 {}
 void getdata()
 {
 	cout<<"Enter Name:";
 	cin>>name;
 	cout<<"Enter address:";
 	cin>>address;
 }
  void showdata()
 {
 	cout<<"Name:"<<name<<endl;
 	cout<<"Address:"<<address<<endl;
 }
};
class Qulification
{
	private:
		string qualification;
	public:
	 Qulification(string q):qualification(q)
		{
		}
		void getdata()
		{

			cout<<" qualification:";
			cin>> qualification;
		}
		void showdata()
		{
			cout<<" Qualification:"<< qualification<<endl;
		}

};
class Employee:public Person,public Qulification
{
	private:
		int empID;
		public:
			Employee(string n,string add,string q,int id):Person(n,add), Qulification(q),empID(id){
			}
			void getdata()
			{
				Person::getdata();
				  Qulification::getdata();
				 cout<<"Enter ID";
				 cin>>empID;
			}
			void showdata()
		{
	     	Person::showdata();
		     Qulification::showdata();
		
			cout<<" EmpID:"<< empID<<endl;
		}

};
int main()
{
	Employee e("Ali","Karachi","MBBS",30090);
	e.getdata();
	e.showdata();
}
