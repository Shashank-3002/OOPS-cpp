#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j>0; j--)//Backward loop syntax
        {
            cout << j << " ";
        }
        cout << endl; // Move to the next line after printing one row
        /*
          1
          2 1
          3 2 1
          4 3 2 1
          5 4 3 2 1
        */  
    }

    char ch = 'A'; // Convert to character starting from 'A'
    cout << "Pattern with characters starting from 'A':" << endl;
    for(int i=0; i<n; i++){
        for(int j=i+1; j>0;j--){ // Backward loop syntax
            cout << ch << " ";

        }
        ch++; // Increment to the next character
        cout << endl; // Move to the next line after printing one row
        /*
          A
          B A
          C B A
          D C B A
          E D C B A
        */
    }
    return 0;
}