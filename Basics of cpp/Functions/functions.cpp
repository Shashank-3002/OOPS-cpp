#include<iostream>
using namespace std;

int printhello(){
    cout << "Hello World" << endl;
    return 3; // Return 3 to indicate successful execution
}

int sum(int a, int b){
    return a + b; // Return the sum of a and b
}

int min(int a, int b){
    if(a<b){
        return a; // Return a if it is less than b
    } else {
        return b; // Otherwise, return b
    } // Return the minimum of a and b
}

int main(){
    int result = printhello(); // Call the function and store the return value
    cout << "The function returned: " << result << endl; // Display the return value

    cout << "Sum of 5 and 10 is: " << sum(5, 10) << endl; // Call the sum function and display the result
    cout << "Sum of 20 and 30 is: " << sum(20, 30) << endl; // Call the sum function with different values
    
    cout << "Minimum of 5 and 10 is: " << min(5, 10) << endl; // Call the min function and display the result
    cout << "Minimum of 20 and 30 is: " << min(20, 30) << endl; // Call the min function with different values
    return 0; // Indicate successful execution of the program
}