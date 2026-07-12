#include<iostream>
using namespace std;
int main()
{
	int arr[5]={20,80,47,27,21};
	int *ptr;
	for(int i=0;i<5;i++)
	{
		ptr=&arr[i];
		cout<<"The Address of "<<i<<ptr<<endl;
	}
	return 0;
}
