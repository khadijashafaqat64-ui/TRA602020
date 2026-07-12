#include<iostream>
using namespace std;
int countVowels(char* str )
{
int count=0;
int index=0;
char*ptr =str;
while(*ptr!='\0')	
{
	char c=*ptr;
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	{
	cout<<"vowel "<<*ptr<<" at index"<<index<<endl;
	count++;}
	ptr++;
	index++;
}
return count;
}
int main()
{
	char str[]="Programming";
	cout<<"Vowel count :"<<countVowels(str) <<endl;
	return 0;
}
