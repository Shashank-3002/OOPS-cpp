#include <iostream>
#include <string>
using namespace std;

class teacher
{
    // properties
public:
    string name;
    string dept;
    string subj;
    double salary;

    // methods-->functions of the objects and classes(member funcctions)
    void changedept(string newdept)
    {
        dept = newdept;
    }
};

int main()
{
    teacher t1;
    t1.name = "DSH";
    t1.subj = "OOPs";
    t1.dept = "Library";
    t1.salary = 1000000;
    cout << "Name of the Teacher is: " << t1.name << endl;
    cout << "Name of the Subject is: " << t1.subj << endl;
    cout << "Name of the Department is: " << t1.dept << endl;
    cout << "Salary of the Teacher is: " << t1.salary << endl;
    return 0;
};

