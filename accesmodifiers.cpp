#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    float marks; //Data Hiding

public:
    string name;
    string subject;

    // setter function-->used to set the values for the private attributes
    void setmarks(float m)
    {
        marks = m;
    }

    // getter function-->used to get the values for the private attributes
    float getmarks()
    {
        return marks;
    }
};

int main()
{
    student s1;
    s1.name = "Shashank";
    s1.subject = "Maths";
    // setting the values for the private property by calling the setter function
    s1.setmarks(97);

    cout << "name of the student is: " << s1.name << endl;
    cout << "Marks of the student is: " << s1.getmarks() << endl;
}; 