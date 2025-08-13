#include<iostream>
using namespace std;

int main(){
    int n = 7;
    int arr[n] = {3,-4,5,4,-1,7,-8}; // Initializing an array with some elements
    
    //Sum of maximum subarray using brute force approach
    cout << "Finding maximum subarray sum using brute force approach..." << endl;
    int maxSum = INT_MIN; // Initialize max sum to the smallest integer
    for(int start = 0; start < n; start++) {
        int currentSum = 0; // Initialize current sum for each starting point
        for(int end = start; end < n; end++) {
            currentSum += arr[end]; // Add the current element to the current sum
            maxSum = max(currentSum,maxSum); // Initialize max sum with the current sum
        }
    }
    cout << "Maximum subarray sum is: " << maxSum << endl; // Displaying the maximum subarray sum


    //Sum of maximum subarray using Kadane's algorithm
    cout << "Finding maximum subarray sum using Kadane's algorithm..." << endl;
    int currentMax = 0; // Initialize current max to 0
    maxSum = INT_MIN; // Reset max sum to the smallest integer
    for(int i = 0; i < n; i++) {
        currentMax += arr[i]; // Add the current element to the current max
        maxSum = max(maxSum, currentMax); // Update max sum if current max is greater
        if(currentMax < 0) {
            currentMax = 0; // Reset current max if it becomes negative
        }
    }
    cout <<"The maximum sum of subarray is: "<<maxSum << endl;
    return 0;
}