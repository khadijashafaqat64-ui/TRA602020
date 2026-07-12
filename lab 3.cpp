#include<iostream>
using namespace std;
struct complex
{
	float real;
	float imag;
};
void addition(float r1,float i1,float r2,float i2)
{
float real=r1+r2;
float imag=i1+i2 ;
cout<<"Addition";
if(imag>=0)

	cout<<real<<"+"<<imag<<"i"<<endl;
else
  cout<<real<<"-"<<-imag<<"i"<<endl;	
}
void subtraction(float r1,float i1,float r2,float i2)
{
float real=r1-r2;
float imag=i1-i2 ;
cout<<"Subtraction";
if(imag>=0)

	cout<<real<<"+"<<imag<<"i"<<endl;
else
  cout<<real<<"-"<<-imag<<"i"<<endl;	
}
void multiply(float r1,float i1,float r2,float i2)
{
float real=( r1*r2)-(i1*i2);
float imag=( r1*r2)+(i1*i2);
cout<<"Multiplication";
if(imag>=0)

	cout<<real<<"+"<<imag<<"i"<<endl;
else
  cout<<real<<"-"<<-imag<<"i"<<endl;	
}
int main()
{
	complex n1,n2;
	cout<<"Enter first complex number(real imag):";
	cin>>n1.real>>n1.imag;
		cout<<"Enter Second complex number(real imag):";
	cin>>n2.real>>n2.imag;
	 addition(n1.real,n1.imag,n2.real,n2.imag);
  subtraction(n1.real,n1.imag,n2.real,n2.imag);
   multiply(n1.real,n1.imag,n2.real,n2.imag);
   return 0;
}
