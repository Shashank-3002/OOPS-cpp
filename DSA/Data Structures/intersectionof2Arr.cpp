#include<iostream>
using namespace std;

int intersectionOfArrays(int arr1[], int n1, int arr2[], int n2) {
    // Function to find the intersection of two arrays
    int i = 0, j = 0;
    cout << "Intersection of arrays: ";
    while (i < n1 && j < n2) {
        for (int k = 0; k < n2; k++) {
            if (arr1[i] == arr2[k]) {
                cout << arr1[i] << " ";
                break; // Break to avoid duplicates in the output
            }
        }
        i++;
        j++;
    }
    cout << endl;
    return 0; // Return 0 to indicate successful intersection
}

int main() {
    int size1, size2;
    
    cout << "Enter size of first array: ";
    cin >> size1;
    int arr1[size1];
    
    cout << "Enter elements of first array: ";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }
    
    cout << "Enter size of second array: ";
    cin >> size2;
    int arr2[size2];
    
    cout << "Enter elements of second array: ";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }
    
    // Find intersection of the two arrays
    intersectionOfArrays(arr1, size1, arr2, size2);
    
    return 0;
}