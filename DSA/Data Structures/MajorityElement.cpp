#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {1,2,2,1,1,1,1,2}; // Example array
    int n = arr.size();
    // // Finding the majority element in the array using brute force approach
    // for(int val: arr){
    //     int freq = 0; // Initialize frequency counter
    //     for(int elem: arr){
    //         if(val == elem) {
    //             freq++; // Increment frequency if element matches
    //         }
    //     }
    //     cout << "Element: " << val << ", Frequency: " << freq << endl; // Displaying element and its frequency
    //     if(freq > n/2) { // Check if frequency is greater than half the size of the array
    //         return val; // Return the majority element
    //     }
    // }


    // Finding the majority element in the array using Boyer-Moore Voting Algorithm
    int freq= 0, ans=0; // Initialize count to 0
    // Step 1: Find potential majority element
    for(int i=0; i<n; i++) {
        if(freq == 0) {
            ans = arr[i]; // Set current element as potential majority element
        }
        if(arr[i] == ans) {
            freq++; // Increment count if current element matches potential majority element
        } else {
            freq--; // Decrement count if it does not match
        }
    }
    // Step 2: Verify & count actual frequency
    int actualFreq = 0;
    for (int val : arr) {
        if (val == ans) {
            actualFreq++;
        }
    }

    cout << "Potential Majority Element is " << ans << " with frequency of " << actualFreq << endl;
    return 0;
}
