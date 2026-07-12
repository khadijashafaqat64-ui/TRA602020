#include<iostream>
using namespace std;
int main()
{
	float arr[10]={2.2,3.1,6.6,7.8,9.5,8.2,5.1,2.3,4.5,6.7};
	float *ptr;
	for(int i=9;i>=0;i--) 
	{
		ptr=&arr[i];
		cout<<*ptr<<endl;
	}
	return 0;
}
