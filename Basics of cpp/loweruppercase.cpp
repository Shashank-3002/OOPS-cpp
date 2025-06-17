#include <iostream>
using namespace std;

int main(){
    //Using the range of alphabets
    char ch;
    cout<<"Enter the charcter(ch): ";
    cin>>ch;

    if(ch>='a' && ch<='z'){
        cout<<"Lower Case\n";
    } else {
        cout<<"Upper Case\n";
    }

    //Implicit Type conversion from charcters to its ASCII integer values
    char ch;
    cout<<"Enter the charcter(ch): ";
    cin>>ch;

    if(ch>=97 && ch<=122){
        cout<<"Lower Case\n";
    } else {
        cout<<"Upper Case\n";
    }
}