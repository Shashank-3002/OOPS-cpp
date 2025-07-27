#include<iostream>
using namespace std;

int sum(int a, int b) {
    a=a+10; // Modify a by adding 10
    b=b+20; // Modify b by adding 20
    return a + b; // Return the sum of a and b
}

int main() {
    int x = 5, y = 10; // Initialize x and y
    int result = sum(x, y); // Call the sum function-> passing by value
    // x and y remain unchanged in the main function
    cout << "The sum is: " << result << endl; // Display the result = 45
    cout << "x: " << x << ", y: " << y << endl; // Display original values of x and y
    return 0;
}