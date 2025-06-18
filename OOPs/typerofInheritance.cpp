// //1. Single Inheritance
// #include <iostream>
// using namespace std;

// // parent class: Person
// class College
// {
// public:
//     string name;
//     int age;

//     // Non-parameterized constructor
//     College()
//     {
//         cout <<"This is parent class..\n ";
//     }
// };

// // Child class: Student
// class Student : public College // Inheriting the properties from class->College
// {
// public:
//     int usn;

//     Student()
//     {
//         cout<<"This is child class..\n";
//     }

//     void getInfo()
//     {
//         cout << "Name: " << name<<endl;
//         cout << "Age: " << age<<endl;
//         cout << "USN: " << usn<<endl;
//     }
// };

// int main()
// {
//     Student s1;
//     s1.name = "Shashank";
//     s1.age = 21;
//     s1.usn = 126;

//     s1.getInfo();
//     return 0;
// }



// //2. Multiple Inheritance
// #include <iostream>
// using namespace std;

// // parent class: Person
// class College
// {
// public:
//     string name;
//     int age;

//     // Non-parameterized constructor
//     College()
//     {
//         cout <<"This is parent class..\n ";
//     }
// };

// // Child class: Student
// class Student : public College // Inheriting the properties from class->College
// {
// public:
//     int usn;

//     Student()
//     {
//         cout<<"This is child class-1..\n";
//     }
// };

// class Teacher : public Student //Multi-level inheritance of properties from the parent to child 1 then to child 2
// {
// public:
//     int salary;
// public:
//     Teacher(){
//         cout<<"This is child class-2\n";
//     }

//     void getInfo(){
//         cout << "Name: " << name<<endl;
//         cout << "Age: " << age<<endl;
//         cout << "USN: " << usn<<endl;
//         cout<<"Salary: " <<salary<<endl;
//     }
// };

// int main()
// {
//     // Student s1;
//     // s1.name = "Shashank";
//     // s1.age = 21;
//     // s1.usn = 126;
//     // s1.getInfo();

//     Teacher t1;
//     t1.name="Shashaaank";
//     t1.age=26;
//     t1.usn=126;
//     t1.salary=40000000;
//     t1.getInfo();
//     return 0;
// }



//3. Multiple Inheritance
#include <iostream>
using namespace std;

// parent class-1: College
class College
{
public:
    string name;
    int age;

    // Non-parameterized constructor
    College()
    {
        cout <<"This is parent class-1..\n ";
    }
};

//Parent class-2: Student
class Student : virtual public College // Inheriting the properties from class->College
{
public:
    int usn;

    Student()
    {
        cout<<"This is parent class-2..\n";
    }
};

class guestLetcure : virtual public College, public Student //Multiple inheritance of properties from two different parent classes
{
public:
    int days;

    guestLetcure(){
        cout<<"This is the child class with 2 parent classes..\n";
    }

    void getInfo()
    {
        cout << "Name: " << name<<endl;
        cout << "Age: " << age<<endl;
        cout << "USN: " << usn<<endl;
        cout << "No. of days he attends: " << days<<endl;
    }
};

int main()
{
    guestLetcure g1;
    g1.name = "Shashank";
    g1.age = 21;
    g1.usn = 126;
    g1.days=15;
    g1.getInfo();
    return 0;
}
