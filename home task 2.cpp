#include<iostream>
using namespace std;
struct Parameters
{
	float lenght;
	float width;
};
struct Result{
	float area;
	float perimeter;
};
struct Rectangle 
{
	Parameters p;
	Result r;
};
int main()
{
	Rectangle rec;
	cout<<"---Enter Rectangle---"<<endl;
	cout<<"Enter your lenght:";
	cin>>rec.p.lenght;
	
		cout<<"Enter your Width:";
	cin>>rec.p.width;
	rec.r.area=rec.p.lenght*rec.p.width;
	rec.r.perimeter=2*(rec.p.lenght+rec.p.width);
	cout<<"---Rectangle Result---"<<endl;
	cout<<"lenght  :"<<rec.p.lenght<<endl;
		cout<<"Width  :"<<rec.p.width<<endl;
		cout<<"Area:"<<rec.r.area<<endl;
		cout<<"Perimeter:"<<rec.r.perimeter<<endl;
		return 0;
}
