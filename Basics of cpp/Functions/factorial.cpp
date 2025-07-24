#include<iostream>
using namespace std;

int factorial(int n) {
    int fact=1;
    for(int i=1; i<=n;i++) {
        fact *= i;// Calculate factorial by multiplying each number from 1 to n
    }
    return fact; // Return the calculated factorial
}

int main() {
    int result = factorial(5); // Call the factorial function
    cout << "The factorial is:" << result << endl; // Display the result
    return 0; // Indicate successful execution of the program
}