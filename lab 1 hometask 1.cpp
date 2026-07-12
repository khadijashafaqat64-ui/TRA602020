#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;
	int *ptr[5];
	ptr[0]=&a;
	ptr[1]=&b;
	ptr[2]=&c;
	ptr[3]=&d;
	ptr[4]=&e;
	cout<<"Enter the value of variable";
	for(int i=0;i<5;i++)
	{
		cin>>*ptr[i];
		}
		for(int i=0;i<5;i++)
	{
		cout<<ptr[i];
		cout<<endl;
		}	
		return 0;
	
}
