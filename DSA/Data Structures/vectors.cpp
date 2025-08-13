#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1, 2, 3, 4, 5}; // Initializing a vector with some elements
    for(int val : arr) {
        cout << val << " "; // Displaying the elements of the vector
    }
    cout << endl;
    size_t size = arr.size(); // Getting the size of the vector
    cout << "Size of vector: " << size << endl; // Displaying the size

    vector <char> charArr = {'a', 'b', 'c', 'd'}; // Initializing a vector of characters
    for(char val : charArr) {
        cout << val << " "; // Displaying the characters in the vector
    }
    cout << endl;
    return 0; // Return 0 to indicate successful execution
}