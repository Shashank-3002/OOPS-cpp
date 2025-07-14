//Abstraction in C++ using Classes and Objects
#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0; // This makes Shape an abstract class
};

// Derived class
class Circle : public Shape {
public:
    void draw() override { // Override the pure virtual function
        cout << "Drawing Circle" << endl;
    }
};
// Another derived class
class Square : public Shape {
public:
    void draw() override { // Override the pure virtual function
        cout << "Drawing Square" << endl;
    }
};
int main() {
    Shape* shape1 = new Circle(); // Create a Circle object
    Shape* shape2 = new Square(); // Create a Square object

    shape1->draw(); // Calls Circle's draw method
    shape2->draw(); // Calls Square's draw method

    delete shape1; // Clean up memory
    delete shape2; // Clean up memory

    return 0;
}