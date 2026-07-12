#include<iostream>
using namespace std;
void reverseArray(int *ptr,int size)
{
	int *start=ptr;
	int *end =ptr + size-1;
	while(start<end)
	{
	int temp =*start;
	*start=*end;
	*end=temp;
	start++;
	end--;
	} 
}
int main()
{
int arr[]={0,1,2,3,4};
int size =5;
reverseArray(arr,size);
for(int i=0;i<size;i++)
{
	cout<<arr[i]<<" ";
}
	return 0;
}


