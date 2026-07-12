#include<iostream>
using namespace std;
struct Data
{
	string  Name;
	string  color;
};
struct car
{
	int model;
	int top_speed;
    int num_of_gears;
    Data a;
};
int main()
{
	car race;
	cout<<"Enter your model:";
	cin>>race.model;
	cout<<"Enter your top_speed:";
	cin>>race.top_speed;
	cout<<"Enter your no.of_gears:";
	cin>>race.num_of_gears;
	cout<<"Enter your Car's name:";
	cin>>race.a.Name;
	cout<<"Enter your Car's color:";
	cin>>race.a.color;
	if(race.top_speed>200 && race.num_of_gears > 4)
	{
	  cout<<"Name of Car:"<<race.a.Name<<endl;
	  cout<<"Color of Car:"<<race.a.color<<endl;
	  cout<<"Model of Car:"<<race.model<<endl;
	  cout<<"Top_speed:"<<race.top_speed<<endl;
	  cout<<"No.of.Gears:"<<race.num_of_gears<<endl;	
	}

else
{
	cout<<"Car is not suitable for car.";
}
return 0;
}

