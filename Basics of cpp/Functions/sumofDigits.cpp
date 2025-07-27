#include<iostream>
using namespace std;
int sumofDigits(int num){
    int digitSum = 0; // Initialize sum of digits to 0

    while(num > 0) {
        int lastdigit = 0; // Initialize last digit to 0
        lastdigit = num % 10; // Get the last digit of the number
        num /= 10; // Remove the last digit from the number
        digitSum += lastdigit; // Update the sum with the last digit
    }
    return digitSum; // Return the sum of digits
}

int main(){
    int number = 12345; // Example number to calculate the sum of digits
    sumofDigits(number); // Call the function to calculate and display the sum of digits
    cout << "The sum of digits is: " << sumofDigits(number) << endl; // Display the result
    return 0; // Indicate successful execution of the program
}