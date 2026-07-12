#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int b=20;
	int *ptrA;
	int *ptrB;
	ptrA=&a;
	ptrB=&b;
	cout<<*ptrA<<endl;
	cout<<*ptrB;
	return 0;

}
