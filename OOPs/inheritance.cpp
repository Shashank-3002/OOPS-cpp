#include<iostream>
using namespace std;

class Person{
public:
    string name;
    int age;
    //parameterized constructor
    Person(string name, int age){
        this->name=name;
        this->age=age;
    }

    // //Non-Parameterized constructor
    // Person(){
    //     cout<<"I am Parent Constructor"<<endl;
    // }
};

class Student : public Person{
    //the name, age and getInfo are already called from the base/parent class Person

public:
    int usn;

    //for parameterized constructor we need to specify the constructor of the parent class as well
    Student(string name, int age, int usn): Person(name, age){
        this->name=name;
        this->age=age;
        this->usn=usn;
    }

    //non-parameterized constructor (Note: Remove as comments of those which are being used)
    // Student(){
    //     cout<<"I am child constructor"<<endl;
    // }

    void getInfo(){
        cout<<"Name: "<<name <<endl;
        cout<<"Age: "<<age <<endl;
        cout<<"USN: "<<usn<<endl;
    }
};

int main(){
    //for parameterized constructor
    Student s1("Shashank", 21, 126);
    s1.getInfo();

    //for non-parameterized constructor
    // Student s1;
    // s1.name="Shashank";
    // s1.age=21;
    // s1.usn=126;
    // s1.getInfo();
    return 0;
}