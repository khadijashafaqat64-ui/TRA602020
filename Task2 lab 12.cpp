#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}
    void setName(string n) { name = n; }
    void setAge(int a)     { age = a; }
    string getName() const { return name; }
    int getAge() const     { return age; }
    void showPerson() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
class Student : public Person {
private:
    int rollNumber;
public:
    Student(string n, int a, int roll) : Person(n, a), rollNumber(roll) {}
    void showStudent() const {
        showPerson(); 
        cout << "Roll Number: " << rollNumber << endl;
    }
};
class Employee : protected Person {
private:
    int empID;

public:
    Employee(string n, int a, int id) : Person(n, a), empID(id) {}

    void showEmployee() const {
        showPerson(); 
        cout << "Employee ID: " << empID << endl;
    }
};

class Teacher : private Person {
private:
    string subject;

public:
    Teacher(string n, int a, string sub) : Person(n, a), subject(sub) {}
    void showTeacher() const {
        showPerson();
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    cout << "==== Student ===" << endl;
    Student s("Alice", 20, 101);
    s.showStudent();
    cout << "Name: " << s.getName() << endl; 
    s.showPerson();        
	cout<<endl;                     
    cout << "===== Employee ===" << endl;
    Employee e("Bob", 30, 5001);
    e.showEmployee(); 
    cout<<endl;
    cout << "===== Teacher ===" << endl;
    Teacher t("Carol", 40, "Mathematics");
    t.showTeacher(); 
    return 0;
}
