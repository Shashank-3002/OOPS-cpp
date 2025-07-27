#include<iostream>
using namespace std;

int factorial(int n) {
    int fact=1;
    for(int i=1; i<=n;i++) {
        fact *= i;// Calculate factorial by multiplying each number from 1 to n
    }
    return fact; // Return the calculated factorial
}

int ncr(int n, int r) {
    int fact_n = factorial(n); // Calculate factorial of n
    int fact_r = factorial(r); // Calculate factorial of r
    int fact_nmr = factorial(n - r); // Calculate factorial of (n - r)
    // Calculate nCr using the formula n! / (r! * (n - r)!)
    return factorial(n) / (factorial(r) * factorial(n - r)); // Calculate nCr using factorial
}


int main() {
    int result = factorial(5); // Call the factorial function
    cout << "The factorial is: " << result << endl; // Display the result

    //ncr of two numbers
    cout << "The nCr of 8 and 2 is: " << ncr(8, 2) << endl; // Display the nCr result
    cout << "The nCr of 6 and 3 is: " << ncr(6, 3) << endl; // Display another nCr result
    return 0; // Indicate successful execution of the program
}