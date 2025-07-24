#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Pattern with numbers:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 1; j <=i+1; j++) {
            cout << j <<" "; 
        }
        cout << endl; // Move to the next line after printing one row
    }
    return 0;
    cout << endl;
}