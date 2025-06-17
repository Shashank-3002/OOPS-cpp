#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
    Teacher(string n, string d, string s, double sal)
    {
        name=n;
        dept=d;
        subj=s;
        salary=sal;
    }
public:
    string name;
    string dept;
    string subj;
    double salary;

    void getinfo() {
        cout<<"Name: " <<name<<endl;
        cout<<"Department: " <<dept <<endl;
        cout<<"Subject: " <<subj <<endl;
        cout<<"Salary: "<<salary <<endl;
    }
};

int main()
{
    Teacher t1( "Shashank", "Electronics and Communication", "C++", 250000);
    t1.getinfo();
    return 0;
}