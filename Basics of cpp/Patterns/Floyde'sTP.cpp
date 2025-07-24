#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int num = 1; // Initialize a number to start from 1
    cout << "Pattern with numbers incremented after each line:" << endl;
    for(int i=0; i<n; i++){
        for(int j = 0;  j<i+1; j++){
            cout << num <<" ";
            num++; // Increment the number after printing
        }
        cout << endl;
    }
        // Move to the next line after printing one row
        /*
          1
          2 3
          4 5 6
          7 8 9 10
          11 12 13 14 15
        */
    cout << "After pattern:" << num << endl; // Display the next number after the pattern

    cout << endl;

    cout << "Pattern with characters starting from 'A':" << endl;
    char ch = 'A'; // Initialize character to start from 'A'
    for(int i = 0; i < n; i++) {
        for(int k = 0; k < i+1; k++) {
            cout << ch <<" ";
            ch++; // Increment to the next character
        }
        cout << endl; // Move to the next line after printing one row
        /*
          A
          B C
          D E F
          G H I J
          K L M N O
        */
    }
}