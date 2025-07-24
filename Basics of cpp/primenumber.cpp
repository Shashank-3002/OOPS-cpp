#include<iostream>
using namespace std;

int main(){
    int n;
    bool isPrime=true;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            isPrime=false; //Once the given number is divisible by any number other than 1 and itself, it is not a prime number
            break;
        }
    }
    if(isPrime==true){
        cout<<"Prime Number\n";
    }else{
        cout<<"Non-Prime number\n";
    }
    return 0;
}