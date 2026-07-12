#include<iostream>
using namespace std;
void checkPrime(int *num)
{
	int n=*num;
	int count=0;
	if(n<=1)
	{
		cout<<"Not a prime Number";
		return;
	}
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			count=1;
			break;
		}
	}
	if(count==0)
	cout<<"Prime Number";
	else
	cout<<"Not a prime Number";
}
int main()
{
	int num;
	cout<<"Enter a number:";
	cin>>num;
	checkPrime(&num);
	return 0;
}
