#include<iostream>
using namespace std;

int sumN(int n) {
    int sum = 0; // Initialize sum to 0
    for(int i = 1; i <= n; i++) {
        sum += i; // Add each number from 1 to n to sum
    }
    return sum; // Return the total sum
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n; // Input the value of n
    int result = sumN(n); // Call the function to calculate the sum
    cout << "The sum of first " << n << " natural numbers is: " << result << endl; // Display the result
    return 0; // Indicate successful execution of the program
}