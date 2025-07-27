#include<iostream>
using namespace std;

int main(){
    int a =6, b=10;

    cout << (a & b) << endl; // Bitwise AND operation
    cout << (a | b) << endl; // Bitwise OR operation
    cout << (a ^ b) << endl; // Bitwise XOR operation
    cout << (~a) << endl; // Bitwise NOT operation
    cout << (a << 1) << endl; // Left shift operation
    cout << (b >> 1) << endl; // Right shift operation
    cout << (a << 2) << endl; // Left shift operation with 2 bits
    cout << (b >> 2) << endl; // Right shift operation with 2 bits
    cout << (a & 1) << endl; // Bitwise AND with 1
    cout << (10 >> 2) << endl; // Right shift operation on 10 by 2 bits
    cout << (10 << 2) << endl; // Left shift operation on 10 by 2 bits

    //Operator precedence
    int x = 5, y = 10, z = 15;
    int result = x + y * z; // Multiplication has higher precedence than addition
    cout << "Result of x + y * z: " << result << endl; // Display the result of operator precedence
    result = (x + y) * z; // Parentheses change the precedence
    cout << "Result of (x + y) * z: " << result << endl; // Display the result with parentheses
    result = x + (y * z); // Parentheses change the precedence
    cout << "Result of x + (y * z): " << result << endl;
    result = (x + y) * (y + z); // Parentheses change the precedence
    cout << "Result of (x + y) * (y + z): " << result << endl; // Display the result with parentheses

    //Equal precedence operators
    int a1 = 5, b1 = 10, c1 = 15;
    int result1 = a1 + b1 - c1; // Addition and subtraction have equal precedence
    cout << "Result of a1 + b1 - c1: " << result1 << endl; // Display the result of equal precedence operators
    result1 = a1 - b1 + c1; // Order of operations matters
    cout << "Result of a1 - b1 + c1: " << result1 << endl; // Display the result with different order
    result1 = a1 + b1 - c1 + a1; // Multiple operations with equal precedence
    cout << "Result of a1 + b1 - c1 + a1: " << result1 << endl; // Display the result with multiple operations
    result1 = a1 - b1 + c1 - a1; // Multiple operations with equal precedence
    cout << "Result of a1 - b1 + c1 - a1: " << result1 << endl; // Display the result with multiple operations
    result1 = a1 + b1 - c1 + a1 - b1; // Multiple operations with equal precedence
    cout << "Result of a1 + b1 - c1 + a1 - b1: " << result1 << endl; // Display the result with multiple operations
    
    return 0; // Indicate successful execution of the program
}