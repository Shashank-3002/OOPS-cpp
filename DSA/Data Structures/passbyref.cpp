#include <iostream>
using namespace std;

void calculator(int arr[], int n) {
    // Function to perform basic arithmetic operations on an array
    cout << "Sum of array elements: ";
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << sum << endl;

    cout << "Difference of array elements: ";
    if (n > 0) {
        int diff = arr[0]; // Start with the first element
        for (int i = 1; i < n; i++) {
            diff -= arr[i];
        }
        cout << diff << endl;
    } else {
        cout << "Array is empty!" << endl;
    }

    cout << "Product of array elements: ";
    int product = 1;
    for (int i = 0; i < n; i++) {
        product *= arr[i];
    }
    cout << product << endl;

    cout << "Division of array elements: ";
    if (n > 0) {
        double division = arr[0]; // Start with the first element
        for (int i = 1; i < n; i++) {
            if (arr[i] != 0) {
                division /= arr[i];
            } else {
                cout << "Division by zero encountered!" << endl;
                return;
            }
        }
        cout << division << endl;
    } else {
        cout << "Array is empty!" << endl;
    }
}


int main() {
    int size=5;
    int arr[size];

    // Display the array elements
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Array elements: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call the calculator function
    calculator(arr, size);

    return 0;
}