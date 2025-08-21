#include<iostream>
#include<vector>
#include<algorithm> // For sort function
using namespace std;

int majorityElement(vector<int>& nums) {
    int n = nums.size();
    // Optimal approach to find majority element using sorting
    sort(nums.begin(), nums.end()); // Sort the array
    int count = 1; // Initialize count of current element
    int ans = nums[0]; // Initialize answer with the first element
    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i - 1]) {
            count++; // Increment count if current element matches previous
        } else {
            count = 1; // Reset count for a new element
        }
        if (count > n / 2) { // Check if count exceeds half the size of the array
            ans = nums[i]; // Update answer to current element
            cout << "Majority Element is " << ans << endl; // Displaying the majority element
            return ans; // Return the majority element
        }
    }
}

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


    majorityElement(arr); // Call the function to find the majority element
    return 0;
}
