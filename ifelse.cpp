#include<iostream>
using namespace std;

int main(){
    //n is even or odd
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    if(n %2 == 0){
        cout<<"n is even \n";
    } else {
        cout<<"n is odd\n";
    }

    //person can vote or not
    int age;
    cout<<"Enter the age of person: ";
    cin>>age;

    if(age >= 18){
        cout<<"You can vote\n";
    } else {
        cout<<"You can't vote\n";
    }

    //assigning grade using if-elseif-else statements

    int marks;
    cout<< "Enter your marks: ";
    cin>>marks;

    if(marks>=90){
        cout<<"A grade";
    } else if(marks>=75){
        cout<<"B grade";
    } else{
        cout<<"C grade";
    }
    return 0;
}