#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for(int i=0;i<n; i++){
        for(int j=0; j<i;j++){ //prints the initial spaces
            cout<<" ";
        }
        for(int j=0;j< n-i;j++){ //prints the numbers
            cout << (i+1);
        }
        cout << endl; // Move to the next line after printing one row
        /*11111
           2222
            333
             44
              5
        */
    }
}