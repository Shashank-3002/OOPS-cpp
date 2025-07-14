/*Types of Polymorphism:
    1. Compile time Polymorphism: Ex- Constructor overloading, Function overloading and Operator overloading. 
    2. run Time polymorphism. */

#include <iostream>
#include <string>  
using namespace std;

//Function overloading is a type of compile-time polymorphism where multiple functions can have the same name but different parameters.
class Student {
public: 
    void showInfo(int roll) {
        cout<< "First showInfo function called" << endl;
        // Display roll number
        cout << "Roll Number: " << roll << endl;
    }
    void showInfo(string name) {
        cout<< "Second showInfo function called" << endl;
        // Display name
        cout << "Name: " << name << endl;
    }
};  

int main() {
    Student s;
    s.showInfo(101); // Calls the first showInfo function
    s.showInfo("Alice"); // Calls the second showInfo function
    return 0;
}





//Operator overloading is another form of compile-time polymorphism where operators are given new meanings for user-defined types.
#include <iostream>
using namespace std;
class Complex {
public:
    int real, imag;

    // Constructor to initialize complex number
    Complex(int r, int i) : real(r), imag(i) {}

    // Overloading the '+' operator
    Complex operator+(const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }

    // Function to display the complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 2); // 3 + 2i
    Complex c2(1, 7); // 1 + 7i

    Complex c3 = c1 + c2; // Using overloaded '+' operator
    c3.display(); // Output: 4 + 9i

    return 0;
}      
