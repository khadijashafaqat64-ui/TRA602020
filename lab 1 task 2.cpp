#include<iostream>
using namespace std;
int main()
{
	int a[6]={3,7,9,2,5,3};
	int *ptr;
	
	for(int i=0;i<6;i++)
	{
		ptr=&a[i];
		cout<<*ptr<<endl;
		
	}
	return 0;
}
