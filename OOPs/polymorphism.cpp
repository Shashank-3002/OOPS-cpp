#include<iostream>
using namespace std;

class Student{
public:
    int roll;
    string name;
    double marks;

    // Non-Parameterized constructor
    Student() {
        cout << "Non-Parameterized constructor called" << endl;
    }

    // Parameterized constructor
    // This constructor initializes the member variables with the provided values.
    Student(int r, string n, double m) {
        cout << "Parameterized constructor called" << endl;
        this->roll = r;
        this->name = n;
        this->marks = m;     
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << ", Marks: " << marks << endl;
    }
};

int main(){
    Student s1; // Calls Non-Parameterized constructor
    s1.roll = 101;
    s1.name = "Alice";
    s1.marks = 85.5;
    s1.display();

    Student s2(102, "Bob", 90.0); // Calls Parameterized constructor
    s2.display();
    return 0;
}