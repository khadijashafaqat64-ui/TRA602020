
#include <iostream>
#include <fstream>
using namespace std;
struct Student
{
    int rollNo;
    string name;
    string section;
    float cgpa;
};
int main()
{
    Student s[2];
    for (int i = 0; i < 2; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << endl;
        cout << "Roll No: ";
        cin >> s[i].rollNo;
        cout << "Name: ";
        cin >> s[i].name;
        cout << "Section: ";
        cin >> s[i].section;
        cout << "CGPA: ";
        cin >> s[i].cgpa;
    }
    ofstream fout("student.txt");
    for (int i = 0; i < 2; i++)
    {
        fout << s[i].rollNo << " "
             << s[i].name << " "
             << s[i].section << " "
             << s[i].cgpa << endl;
    }

    fout.close();
    ofstream appendFile("student.txt", ios::app);
    appendFile << "Total students: 2" << endl;
    appendFile.close();
    ifstream file("student.txt");
    cout<<endl;
    cout << "      STUDENT RECORD SYSTEM" << endl;
    Student temp;
    for (int i = 0; i < 2; i++)
    {
        file >> temp.rollNo >> temp.name >> temp.section >> temp.cgpa;
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll No : " << temp.rollNo << endl;
        cout << "Name    : " << temp.name << endl;
        cout << "Section : " << temp.section << endl;
        cout << "CGPA    : " << temp.cgpa << endl;
    }
    string line;
    getline(file, line); 
    getline(file, line);
	cout<<endl; 
    cout << line << endl;
    file.close();

    return 0;
}

