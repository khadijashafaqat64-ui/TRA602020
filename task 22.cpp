#include<iostream>
#include<string>
using namespace std;
class Animal
{
	protected:
		string name;
		string species;
	public:
	Animal(string n,string s)
	{
		name=n;
		species =s;
	}
	void sound()
	{
		cout<<"Animals Sound"<<endl;
	 }
	void describe()
	{
		cout<<"Name:"<<name<<"|"<<"Species:"<<species<<endl; 
	}
};
class Cat:public Animal
{
	private:
		string breed;
	public:
		Cat(string n,string s,string b):Animal(n,s),breed (b)
		{
			
		}
	void sound()
	{
	cout<<"Cat sound is Meow! Meow!"<<endl	;
	}
	void describe()
	{
    Animal::describe();
    	cout<<"Breed:"<<breed<<endl;
	}
};
class Dog:public Animal
{
	private:
		string breed;
	public:
		Dog(string n,string s,string b) :Animal(n,s),breed(b)
		{
			
		}
		void sound()
		{
			cout<<"Dog Sound: Woof! Woof!";
		}
		void describe()
		{
			Animal::describe();
			cout<<"Breed:"<<breed<<endl;
		}
};
class GuardDog :public Dog
{
	private:
		int trainingLevel;
		public:
			GuardDog(string n,string s,string b,int t):Dog(n,s,b),trainingLevel(t)
			{
			}
			void sound()
			{
					Dog::sound();
          	cout<<  "STAYBACK!";		
			}
			void describe()
			{
				Dog::describe();
				cout<<"Training Level:"<<trainingLevel<<endl;
			}
};
int main()
{
	cout<<"Cat detail"<<endl;
	Cat c("KITTY","Germany","Persian");
	c.describe();
	c.sound();
	cout<<"Dog Details"<<endl;
	Dog g("Bruno","Canine","German Shephered");
	g.describe();
	g.sound();
	cout<<endl;
	cout<<"Guard dog Detial"<<endl;
	
	GuardDog d("Rex","Canin","Rottweiller",5) ;
	d.describe();
	d.sound();
	return 0;
	
}
