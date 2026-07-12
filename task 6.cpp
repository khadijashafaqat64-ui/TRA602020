#include<iostream>
using namespace std;
int myStrLen(char*s)
{
	int len=0;
	while(*s!='\0')
	{
		s++;
		len++;
	}
	return len;
}
char toLowerChar(char c)
{
if(c>='A'&& c<='Z')	
return c+32;
return c;
}
bool isPalindrome(char*s)
{
	char* left=s;
	char* right=s + myStrLen(s)-1;
	while(left<right)
	{
		while(left<right &&* left ==' ')
		left++;
		
		while(left<right&&*right==' ')
		right--;
		if(toLowerChar(*left)!=toLowerChar(*right))
		return false;
		left++;
		right--;
	}
	return true;
}
int main()
{
	char words[][50]={
	"racecar",
	"hello",
	"level",
	"world",
	"madam"
	};
	for(int i=0;i<5;i++)
	{
		cout<<words[i]<<" ->"
		<<(isPalindrome(words[i])?"Palindrome":"Not Palindrome")
		<<endl;
	}
	return 0;
	
}
