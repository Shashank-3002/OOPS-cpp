#include<iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
    
    virtual void sound() { // Virtual function for runtime polymorphism
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void sound() override { // Override the base class method
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog d1;
    d1.sound(); // Calls Dog's sound method
    d1.eat(); // Calls Animal's eat method
    return 0;
}