#include<iostream>
#include<fstream>
using namespace std;
struct sensor{
	int id;
	float tempurature;
	float humidity;
};
int main()
{
	sensor s[3];
	for(int i=0;i<=2;i++)
	{
		cout<<"Enter your ID:";
		cin>>s[i].id;
		cout<<"Enter Tempurature:";
		cin >>s[i].tempurature;
		cout<<"Enter your Humidity:";
		cin>>s[i].humidity;
		cout<<endl;
	}
	ofstream outfile("sensor_log.txt");
	for(int i=0;i<=2;i++)
	{
		outfile<<s[i].id<<"  "
		<<s[i].tempurature<<"  "
		<<s[i].humidity<<endl;
	}
	 
	outfile.close();
	cout<<"File sensor_log.txt was created successfully."<<endl;
	ifstream infile("sensor_log.txt");
	cout<<"Reading file content"<<endl;
	sensor se;
	int count =1;
	string timestamps[3]={"2026-01-15  08:00,2026-01-18  08:05,2026-01-21"};
	while(infile>>se.id>>se.tempurature>>se.humidity)
	{
		cout<<"-----Sensor Reading "<<"----"<<endl;
		cout<<"ID:"<<se.id<<endl;
		cout<<"Tempurature:"<<se.tempurature<<"C"<<endl;
		cout<<"Humidity:"<<se.humidity<<"%"<<endl;
		cout<<"Timestamp:"<<timestamps[count-1]<<endl;
		count++;
	}
	infile.close();
}
