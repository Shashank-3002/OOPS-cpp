#include<iostream>
using namespace std;

bool isLeapYear(int year) {
    // A year is a leap year if it is divisible by 4
    // but not divisible by 100, unless it is also divisible by 400
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true; // It is a leap year
    } else {
        return false; // It is not a leap year
    }
}

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year; // Input the year

    if (isLeapYear(year)) {
        cout << year << " is a leap year." << endl; // Output if it is a leap year
    } else {
        cout << year << " is not a leap year." << endl; // Output if it is not a leap year
    }
    return 0; // Return 0 to indicate successful execution
}