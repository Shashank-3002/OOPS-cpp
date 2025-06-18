#include <iostream>
using namespace std;

// Base class
class Animal {
protected:
    string name;

public:
    // Constructor
    Animal(string n) : name(n) {}

    // Virtual function to display details
    virtual void displayDetails() {
        cout << "Name: " << name << ", Type: Animal" << endl;
    }

    // Virtual destructor (for polymorphism)
    virtual ~Animal() {}
};

// Derived class that inherits from base class
class Dog : public Animal {
public:
    // Constructor
    Dog(string n) : Animal(n) {}

    // Overriding displayDetails function
    void displayDetails() override {
        cout << "Name: " << name << ", Type: Dog" << endl;
    }
};

// Derived class that inherits from base class with using keyword
class CatUsing : public Animal {
public:
    // Constructor
    CatUsing(string n) : Animal(n) {}

    // Overriding displayDetails function
    void displayDetails() override {
        cout << "Name: " << name << ", Type: Cat" << endl;
    }

    // Using keyword to use base class member variable
    int getAge() { return 5; }
};

// Derived class that inherits from base class with public inheritance
class Elephant : public Animal {
public:
    // Constructor
    Elephant(string n) : Animal(n) {}

    // Overriding displayDetails function
    void displayDetails() override {
        cout << "Name: " << name << ", Type: Elephant" << endl;
    }
};

// Derived class that inherits from base class with private inheritance
class LionPrivate : private Animal {
public:
    // Constructor
    LionPrivate(string n) : Animal(n) {}

    // Overriding displayDetails function
    void displayDetails() override {
        cout << "Name: " << name << ", Type: Lion" << endl;
    }
};

// Derived class that inherits from base class with protected inheritance
class TigerProtected : protected Animal {
public:
    // Constructor
    TigerProtected(string n) : Animal(n) {}

    // Overriding displayDetails function
    void displayDetails() override {
        cout << "Name: " << name << ", Type: Tiger" << endl;
    }
};

// Main function to test inheritance types
int main() {
    Dog dog("Buddy");
    dog.displayDetails();

    CatUsing cat("Whiskers");
    cat.displayDetails();
    cout << "Age: " << cat.getAge() << endl;

    Elephant elephant("Rani");
    elephant.displayDetails();

    LionPrivate lion("Saroj");
    lion.displayDetails();

    TigerProtected tiger("Chandra");
    tiger.displayDetails();

    return 0;
}