#include<iostream>
using namespace std;

int main(){
    //print sum of integers from 1 to n
    int n=25;
    int sum=0;
    cout<<"Sum is: ";
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    cout<<sum;
    return 0;
}