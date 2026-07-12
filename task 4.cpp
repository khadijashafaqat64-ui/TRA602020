#include<iostream>
using namespace std;
void myStringCopy(char*dest,char*src)
{
	while(*src!='\0')
	{
		*dest= *src;
		dest++;
		src++;
	}
	*dest='\0';
}
int main()
{
	char source[]="Hello,Pointers!";
	char destination[50];
	myStringCopy(destination,source);
	cout<<"Copied:"<<destination<<endl;
	return 0;
}

