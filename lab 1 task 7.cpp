#include<iostream>
using namespace std;
int main()
{
	int arr[8];
	cout<<"Enter your array";
	for(int i=0;i<8;i++)
	{
		cin>>arr[i];
	}
	int *ptr;
	int *maxval;
	maxval=&arr[0];
	for(int i=0;i<8;i++)
	{
		ptr=&arr[i];
		if(*ptr > *maxval)
		{
			maxval=ptr;
		}
	}
	cout<<"largest value"<<*maxval<<endl;
	cout<<"Address of value"<<maxval<<endl;
	return 0;
}
