#include<iostream>
using namespace std;
int main(){
    // arithmetic operators
    int a,b;
    cout<<"enter the value of a: ";
    cin>>a;
    cout<<"enter the value of b: ";
    cin>>b;
    cout<<"The value of a+b is: "<<a+b <<endl;
    cout<<"The value of a-b is: "<<a-b <<endl;
    cout<<"The value of a*b is: "<<a*b <<endl;
    cout<<"The value of a/b is: "<<a/b <<endl;
    cout<<"The value of a%b is: "<<a%b <<endl;
    cout<<"The value of a++ is: "<<a++ <<endl;
    cout<<"The value of a-- is: "<<a-- <<endl;
    cout<<"The value of ++a is: "<<++a <<endl;
    cout<<"The value of --a is: "<<--a <<endl<<endl<<endl;

    // Comparision operators
    cout<<"The value of a==b is: "<<(a==b)<<endl;
    cout<<"The value of a!=b is: "<<(a!=b)<<endl;
    cout<<"The value of a<=b is: "<<(a<=b)<<endl;
    cout<<"The value of a>=b is: "<<(a>=b)<<endl;
    cout<<"The value of a<b is: "<<(a<b)<<endl;
    cout<<"The value of a>b is: "<<(a>b)<<endl<<endl<<endl;

    //logical operators
    cout<<"The value of (a==b) && (a<=b) is: "<<((a==b)&&(a<=b))<<endl;
    cout<<"The value of (a==b) || (a>=b) is: "<<((a==b)||(a>=b))<<endl;
    cout<<"The value of !(a==b) is: "<<(!(a==b))<<endl;
    return 0;
}