#include<iostream>
using namespace std;
int findMax(int *ptr,int size, int &index)
{
	int max=*ptr;
	index=0;
	for(int i=1;i<size; i++)
	{
		if(*(ptr+i)>max)
		{
		
		max =*(ptr+i);
		index=i;
	}
	}
	return max;
}
int main()
{
	int arr[7]={78,76,98,3,23,6,4};
int index;
 int result =findMax(arr,7,index);
	cout<<"Maxium value:"<<result<<endl;
	cout<<"Index of maxium value:"<<index<<endl;
	return 0;

}

