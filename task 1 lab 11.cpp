#include<iostream>
#include<string>
using namespace std;
class person{
	protected:
		string name;
		string address;
		public:
			person(string n,string add):name(n),address(add)
			{
			}
	void showPerson()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Address:"<<address<<endl;
		}
};
class Employee:public person
{
	protected:
		int empID;
		public:
		Employee(string n,string add,int ID):person(n,add),empID(ID){}
		void showEmployee()
		{
			person::showPerson();
			cout<<"Employee ID:"<<empID<<endl;
		}
};
class Manager:public Employee
{
protected:
	string qualification;
	public:
		Manager(string n,string add,int ID,string q):Employee(n,add,ID),qualification(q)
		{
		}
		void ShowManager()
		{
			Employee::showEmployee();
			cout<<"Qualification:"<<qualification<<endl;
		}
};
int main()
{
	Manager m("Khaf","Ali Twon",46,"Masters");
	m.ShowManager();
	cout<<endl;
	Manager m2("Ali","Lahore",235,"inter");
	m2.ShowManager();
	return 0;
}
