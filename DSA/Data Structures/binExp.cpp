#include<iostream>
using namespace std;

double power(double x, int n) {
    if(n == 0) return 1.0; // Any number to the power of 0 is 1
    if(n < 0) {
        x = 1 / x; // If n is negative, take the reciprocal of x
        n = -n; // Make n positive
    }

    double result = 1.0;
    while(n > 0) {
        if(n % 2 == 1) { // If n is odd
            result *= x; // Multiply the result by x
        }
        x *= x; // Square x
        n /= 2; // Divide n by 2
    }
    return result; // Return the final result
}

int main() {
    double x;
    int n;
    cout << "Enter base (x): ";
    cin >> x; // Input base
    cout << "Enter exponent (n): ";
    cin >> n; // Input exponent

    double result = power(x, n); // Calculate x^n
    cout << x << " raised to the power of " << n << " is: " << result << endl; // Display the result
    return 0; // Return 0 to indicate successful execution
}