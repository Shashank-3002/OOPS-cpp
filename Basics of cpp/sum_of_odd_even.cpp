#include<iostream>  
using namespace std;

int main(){
    //sum of even and odd numbers
    cout<<"---sum of odd and even numbers using for loop---"<<endl;
    int n=100;
    int oddSum=0,evenSum=0;

    for(int i=1; i<=n; i++){
        if(i%2==0){
            evenSum+=i;
        } else{
            oddSum+=i;
        }
    }
    cout<<"Sum of Even numbers: "<<evenSum<<endl;
    cout<<"Sum of Odd numbers: "<<oddSum<<endl;
    
    //Sum of even and odd numbers using while loop
    cout<<"---sum of odd and even numbers using while loop---"<<endl;
    int m=50;
    int j=1;
    int sumEven=0,sumOdd=0;

    while(j<=m){
        if(j%2==0){
            sumEven+=j;
        } else{
            sumOdd+=j;
        }
        j++;
    }
    cout<<"Sum of even numbers: "<<sumEven<<endl;
    cout<<"Sum of odd numbers: "<<sumOdd<<endl;
    return 0;
}