#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Triangle Pattern with charcters:" << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << "* ";
        }
        cout << endl; // Move to the next line after printing one row
        /* 
           *
           * *
           * * *
           * * * *
           * * * * * 
        */
    }
    
    
    
    cout << endl;

    cout << "Triangle Pattern with numbers:" << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << i+1<< " ";
        }
        cout << endl; // Move to the next line after printing one row
        /*1
          2 2
          3 3 3
          4 4 4 4
          5 5 5 5 5 */
    }

    cout << endl;

    cout << "Triangle Pattern with characters starting from 'A':" << endl;
    char ch = 'A';// Convert to character starting from 'A'
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << ch << " ";
            // Increment to the next character
        }
        ch++;
        cout << endl; // Move to the next line after printing one row
        /*A
          B B
          C C C
          D D D D
          E E E E E */
    }
    return 0;
}