#include<iostream>
using namespace std; 
int main()
{
	char str[100];
	cout<<"Enter your string:";
	cin.getline(str,100);
	char *ptr;
	ptr=str;
	int lenght =0;
	while(*(ptr++)!='\0')
	 {
	lenght++;
	
	}
	cout<<"lenght:"<<lenght<<endl;
	ptr=str+lenght-1;
	for(int i=lenght;i>0;i--)
	{
		cout<<*ptr;
		ptr--;
	}
	return 0;

}
