#include<iostream>
#include<string>
using namespace std;
struct date
{
	int day;
	int month;
	int year;
};
struct Phone_book
{
  string name;
  string city;
  string phoneNumber;
  date dmy;	
};
int main()
{
	Phone_book phone_book;
	cout<<"---Enter Phonebook Details---"<<endl;
	cout<<"Enter Name:";
	cin>>phone_book.name;
	cout<<"Enter city:";
	cin>>phone_book.city;
	cout<<"Enter Phone Number:";
	cin>>phone_book.phoneNumber;
	cout<<"Enter Date of Birthday:";
	cin>>phone_book.dmy.day;
cout<<"Months:";
	cin>>phone_book.dmy.month;
	cout<<"year:";
	cin>>phone_book.dmy.year;
	
	
	cout<<"\n---Phone Details---"<<endl;
	cout<<"Name:"<<phone_book.name<<endl;
	cout<<"City:"<<phone_book.city<<endl;
	cout<<"phone-number"<<phone_book.phoneNumber<<endl;
	cout<<"Date of Birth:"
	<<phone_book.dmy.day<<"-"
	<<phone_book.dmy.month<<"-"
    <<phone_book.dmy.year<<endl;
	return 0;
}
