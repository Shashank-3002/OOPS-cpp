#include<iostream>
using namespace std;

int reverseArray(int arr[], int n) {
    // Function to reverse an array
    int start = 0;
    int end = n - 1;
    
    while (start < end) {
        // Swap elements at start and end
        swap(arr[start], arr[end]);
        // Move towards the middle
        start++;
        end--;
    }
    
    return 0; // Return 0 to indicate successful reversal
}
int main() {
    int size = 10;
    int arr[size];

    // Input array elements
    cout << "Enter " << size << " elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Reverse the array
    reverseArray(arr, size);

    // Display the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}