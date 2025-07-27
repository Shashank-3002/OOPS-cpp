#include<iostream>
using namespace std;

int decTobin(int decNum){
    int ans = 0; // Initialize answer to 0
    int pow = 1; // Initialize power to 1 (2^0)
    while(decNum > 0) {
        int rem = decNum % 2; // Get the last digit in binary
        ans += rem * pow; // Update answer with the last digit multiplied by power
        decNum /= 2; // Remove the last digit from decimal number
        pow *= 10; // Increase power of 10 for next digit
    }
    return ans; // Return the binary representation
}

int binTodec(int binNum) {
    int ans = 0; // Initialize answer to 0
    int pow = 1; // Initialize power to 1 (2^0)
    while(binNum > 0) {
        int rem = binNum % 10; // Get the last digit in binary
        ans += rem * pow; // Update answer with the last digit multiplied by power
        binNum /= 10; // Remove the last digit from binary number
        pow *= 2; // Increase power of 2 for next digit
    }
    return ans; // Return the decimal representation
}

int main() {
    int decimalNumber = 42; // Example decimal number to convert
    int binaryNumber = decTobin(decimalNumber); // Call the function to convert to binary
    cout << "The binary representation of " << decimalNumber << " is: " << binaryNumber << endl; // Display the result

    int binNumber = 101010; // Example binary number to convert
    int decimalNum = binTodec(binNumber); // Call the function to convert to decimal
    cout << "The decimal representation of " << binNumber << " is: " << decimalNum << endl; // Display the result
    return 0; // Indicate successful execution of the program
}