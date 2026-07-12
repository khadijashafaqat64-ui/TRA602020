#include<iostream>
#include<string>
using namespace std;
struct Author
{
 string name;
 string nationality;	
};
struct Book
{
	string title;
	string IBSN;
	double price;
	int Pubyear;
	Author field;
};
int main()
{
	Book library[3];
	for(int i=0;i<3;i++)
	{
		cout<<"\n--- Enter details for Book"<<i+1<<endl;
		cout<<"Enter your title:";
		cin>>library[i].title;
		cout<<"Enter your IBSN:";
		cin>>library[i].IBSN;
		cout<<"Enter your Price:";
		cin>>library[i].price;
		cout<<"Enter your Pubyear:";
		cin>>library[i].Pubyear;
		cout<<"Enter your author name:";
		cin>>library[i].field.name;
		cout<<"Enter your author nationality:";
		cin>>library[i].field.nationality;
	}
cout<<"\nBooks Published after 2015:"<<endl;
for(int i=0;i<3;i++)
{
	if(library[i].Pubyear > 2015)
	{
		cout<<"Title:"<<library[i].title;
		cout<<"\nISBN"<<library[i].IBSN;
		cout<<"\nprice"<<library[i].price;
		cout<<"\nPubyear"<<library[i].Pubyear;
		cout<<"\nName:"<<library[i].field.name;
		cout<<"\nNationality:"<<library[i].field.nationality;
cout<<endl;
	}
}
return 0;
}
