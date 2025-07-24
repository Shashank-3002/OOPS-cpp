// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     cout << "Pattern with numbers:" << endl;
//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= n; j++) {
//             cout << j <<" "; 
//         }
//         cout << endl; // Move to the next line after printing one row
//     }
//     cout << endl;
//     cout << "Pattern with characters:" << endl;
//     for(int i = 0; i < n; i++) {
//         char ch = 'A'; // Convert to character starting from 'A'
//         for(int k = 0; k<n; k++) {
//             cout << ch <<" ";
//             ch = ch + 1; // Increment to the next character 
//         }
//         cout << endl; // Move to the next line after printing one row
//     }
//     return 0;   
// }


#include <iostream>
using namespace std;

int main() {
    int m;
    cout << "Enter the value of m: ";
    cin >> m;
    int num = 1; // Initialize a number to start from 1
    cout << "Pattern with numbers incremented after each line:" << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            cout << num <<" ";
            num++; // Increment the number after printing
        }
        cout << endl; // Move to the next line after printing one row
    }
    cout << "After pattern:" << num << endl; // Display the next number after the pattern

    cout << endl;


    cout << "Pattern with characters starting from 'A':" << endl;
    char ch = 'A'; // Initialize character to start from 'A'
    for(int i = 0; i < m; i++) {
        for(int k = 0; k < m; k++) {
            cout << ch <<" ";
            ch++; // Increment to the next character
        }
        cout << endl; // Move to the next line after printing one row
    }
    cout << "After pattern:"<<ch;
    return 0;   
}