#include<iostream>
using namespace std;

int swapMinMax(int arr[], int n) {
    // Function to swap the minimum and maximum elements in an array
    if (n <= 1) return -1; // Return -1 if the array has less than 2 elements

    int minIndex = 0, maxIndex = 0;

    // Find the indices of the minimum and maximum elements
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    // Swap the minimum and maximum elements
    swap(arr[minIndex], arr[maxIndex]);

    return 0; // Return 0 to indicate successful swap
}

int main() {
    int size = 8;
    int arr[size];

    // Input array elements
    cout << "Enter " << size << " elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Swap the minimum and maximum elements
    swapMinMax(arr, size);

    // Display the modified array
    cout << "Array after swapping min and max: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}