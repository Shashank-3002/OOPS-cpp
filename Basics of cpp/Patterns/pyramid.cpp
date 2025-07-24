#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1 ; j++){
            //Prints the spaces
            cout << " ";
        }
        for(int j=1; j < i; j++){
            //Prints the numbers
            cout << j;
        }
        for(int j=i; j>0; j--){
            //Prints the numbers
            cout << j;
        }
        cout << endl; // Move to the next line after printing one row
    }
    return 0;
}