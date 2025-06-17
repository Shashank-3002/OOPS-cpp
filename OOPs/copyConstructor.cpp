#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    double* cgpaPtr; // dynamic memory allocation using the pointer which points to the address of the location which store the value of cgpa

    Student(string name, double cgpa) //User defined constructor
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }


    // Student(Student &obj) //User defined Copy constructor with shallow copy 
    // {
    //     this->name = obj.name;
    //     this->cgpaPtr = obj.cgpaPtr;
    // }
    
    
    Student(Student &obj) //User defined Copy constructor with deep copy 
    {
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr; // creates new address for this object keeping the original object address as it is
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"cgpa: "<<*cgpaPtr<<endl;
    }
};

int main(){
    Student s1("Shashank", 8.9);
    s1.getInfo(); //returns 8.9

    //Returns the cgpa of 8.9 for first call and 9.2 for second call for shallow copy
    // Student s2(s1);
    // *(s2.cgpaPtr)=9.2;
    // s1.getInfo(); //returns 9.2 
    
    
    //Returns the cgpa of 8.9 for first and second call but returns 9.2 for s2.getInfo() with different name and allocates a separate location for tis object using deep copy 
    Student s2(s1);
    *(s2.cgpaPtr)=9.2;
    s2.name="Shashank2";
    s1.getInfo(); //Returns 8.9
    s2.getInfo();
    return 0;
}