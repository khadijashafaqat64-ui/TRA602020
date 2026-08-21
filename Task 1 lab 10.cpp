#include<iostream>
#include<string>
using namespace std;
const float PI =3.14159f;
class Shape
{
	protected:
		string shapeName;
	public:
		Shape(string name): shapeName(name) {}
		float calculationArea() {
			return 0.0f;
		}
	void describe()
	{
		cout<<"I am a Shape Called:"<<shapeName<<endl;
	}
};
class Rectangle:public Shape 
{
	private:
		float lenght;
		float width;
	public:
		Rectangle(string name,float l,float w):Shape(name),lenght(l),width(w){}
		float calculationArea() 
		{
		  return lenght *width;
			
		}
			void describe()
	{
		Shape::describe();
		cout<<"Type:  Rectangle| Lenght:"<<lenght<<"| Width:"<<width<<endl;
	}
		
};
class Circle:public Shape 
{
	private:
		float radius;
	public:
		Circle(string name,float r):Shape(name),radius(r){}
		float calculationArea() 
		{
		   return PI*radius*radius;
		
		}
	void describe()
	{
		Shape::describe();
		cout<<"Type: Circle | Radius:"<<radius<<endl;
	}
		
};
int main()
{
	Rectangle r("MyRectangle",6.0,4.0);
	r.describe();
	cout<<"Area:"<<r.calculationArea()<<endl;
	
	Circle c("MyCircle",5.0);
	c.describe();
	cout<<"Area:"<<c.calculationArea()<<endl;
	return 0;
}
