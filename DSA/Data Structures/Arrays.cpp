#include<iostream>
using namespace std;

int main(){
    int size = 10;
    int arr[size] = {10,25,36,-40,12,-2,42,96,12,-42};
    // Display the size of the array in bytes and the number of elements
    cout<<sizeof(arr) << " bytes" << endl; // Display the size of the array in bytes
    cout << "Size of array: " << sizeof(arr)/sizeof(int) << endl; // Display the size of the array incase of unknown size at compile time

    // Display the array elements
    cout << "Array elements: ";
    // Accessing and displaying array elements
    //Accessing of elements in an array is done using the index
    // Index starts from 0 to size-1 
    for(int i = 0; i < size; i++){
        cout << arr[i] << ",";
    }
    cout << endl;

    // Initialize smallest and largest with extreme values
    int smallest = INT_MAX; // Initialize to maximum possible integer value -> this ensures any element in the array will be smaller = +ve infinity
    int largest = INT_MIN; // Initialize to minimum possible integer value -> this ensures any element in the array will be larger = -ve infinity

    // Traverse the array to find smallest and largest elements
    for(int i = 0; i < size; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    // Alternatively, we can use STL functions to find smallest and largest
    // Uncomment the following lines to use STL functions

    // for(int i = 0; i < size; i++){
    //     smallest = min(smallest, arr[i]);// Using STL min function to find smallest
    //     largest = max(largest, arr[i]); // Using STL max function to find largest
    // }
    
    // Display the smallest and largest elements
    cout << "Smallest element: " << smallest << endl;
    cout << "Largest element: " << largest <<endl;
    return 0;
}