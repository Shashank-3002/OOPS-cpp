#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
    Teacher()
    {
        cout << "Hi, I am a Constructor" << endl;
        dept = "Computer Science";
    }

public:
    string name;
    string dept;
    string subj;
    double salary;
};

int main()
{
    Teacher t1;
    t1.name = "Shashank";
    t1.subj = "C++";
    t1.salary = 25000;
    cout << "Name: " << t1.name << endl;
    cout << "Subject: " << t1.subj << endl;
    cout << "Salary: " << t1.salary << endl;
    cout << "Department: " << t1.dept << endl;

    return 0;
}