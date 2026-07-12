#include<iostream>
using namespace std;
int main()
{
	int arr[5]={1,4,6,8,5};
	int *ptr;
	ptr=&arr[2];
	cout<<"Address of 3 index"<<ptr<<endl;
	cout<<"Value of 3 index :"<<*ptr<<endl;
     return 0;
}
