#include<iostream>
using namespace std;

int main(){
    int size = 10;
    int arr[size] = {10,25,36,-40,12,-2,42,96,12,-42};
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
        // If current element is greater than largest, update largest
        if(arr[i] > largest){
            largest = arr[i];
            // Index of largest element can be found using i
            cout << "Largest element found at index: " << i << endl;
        }
    }

    // Alternatively, we can use STL functions to find smallest and largest
    // Uncomment the following lines to use STL functions

    // for(int i = 0; i < size; i++){
    //     smallest = min(smallest, arr[i]);// Using STL min function to find smallest
    //     largest = max(largest, arr[i]); // Using STL max function to find largest
    // }
    
    //Index of smallest element can be found using the index of smallest
    cout << "Smallest element found at index: ";
    for(int i = 0; i < size; i++){
        if(arr[i] == smallest){
            cout << i << endl;
            break; // Break after finding the first occurrence
        }
    }
    //Index of largest element can be found using the index of largest
    cout << "Largest element found at index: ";
    for(int i = 0; i < size; i++){
        if(arr[i] == largest){
            cout << i << endl;
            break; // Break after finding the first occurrence
        }
    }

    // Display the smallest and largest elements
    cout << "Smallest element: " << smallest << endl;
    cout << "Largest element: " << largest <<endl;
    return 0;
}