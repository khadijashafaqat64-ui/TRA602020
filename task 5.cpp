#include<iostream>
using namespace std;
void selectionSort(int *arr,int n)
{
	for(int i=0;i<n-1;i++)
	{
		int *minptr = (arr + i) ;
		for(int j=i+1;j<n;j++)
		{
	     	if(*(arr+j)<*minptr)
	     	{
	     		 minptr =(arr+j);
	     	
			 }
		
			}
			int temp =*(arr+i);
			*(arr+i)=*minptr;
			*minptr=temp;	
	}
}
int main()
{
	int arr[]={64,25,22,12,11};
	int n=5;
	cout<<"Before:";
	for(int i=0;i<n;i++)
	
		cout<<*(arr+i)<<" ";

		selectionSort(arr,n);
		cout<<"\nAfter:";
		for(int i=0;i<n;i++)
	
			cout<<*(arr+i)<<" ";
	
	return 0;
}
