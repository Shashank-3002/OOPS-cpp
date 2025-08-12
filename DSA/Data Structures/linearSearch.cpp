#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    // Function to perform linear search on an array
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return the index if the key is found
        }
    }
    return -1; // Return -1 if the key is not found
}

int main() {
    int size = 5;
    int arr[size];
    int target;

    // Input array elements
    cout << "Enter " << size << " elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Input target element to search
    cout << "Enter the element to search: ";
    cin >> target;

    // Perform linear search
    int result = linearSearch(arr, size, target);

    // Output the result
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}