#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr;
    cout << "Size of vector: " << arr.size() << endl; // Displaying the size of an empty vector
    arr.push_back(10); // Adding an element to the vector
    arr.push_back(20); // Adding another element
    arr.push_back(30); // Adding a third element

    cout << "Elements in vector after adding: ";
    for(int val : arr) {
        cout << val << " "; // Displaying the elements of the vector
    }
    cout << endl;


    cout << "Size of vector after adding elements: " << arr.size() << endl; // Displaying the size after adding elements
    arr.pop_back(); // Removing the last element from the vector
    cout << "Elements in vector after popping: ";
    for(int val : arr) {
        cout << val << " "; // Displaying the elements after popping
    }
    cout << endl;

    cout << "Size of vector after popping an element: " << arr.size() << endl; // Displaying the size after popping an element

    cout << "Front element of vector: " << arr.front() << endl; // Displaying the first element of the vector
    cout << "Back element of vector: " << arr.back() << endl; // Displaying the last element of the vector
    cout <<"Elements in vector using at(): ";
    for(size_t i = 0; i < arr.size(); i++) {
        cout << arr.at(i) << " "; // Displaying elements using at() method
    }
    cout << endl;


    cout << "Size of vector: " << arr.size() << endl; // Displaying the size of the vector
    cout << "Capacity of vector: " << arr.capacity() << endl; // Displaying the capacity of the vector
    arr.clear(); // Clearing the vector
    cout << "Size of vector after clearing: " << arr.size() << endl; // Displaying the size after clearing
    return 0; // Return 0 to indicate successful execution
}