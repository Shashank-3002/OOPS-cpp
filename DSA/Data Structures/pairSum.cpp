#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> arr, int target) {
    vector<int> ans;
    int n = arr.size();
    
    // // Using a nested loop to find pairs that sum to the target -> brute force approach
    // cout << "Finding pairs with sum equal to target using brute force approach..." << endl;
    // for(int i = 0; i < n; i++) {
    //     for(int j = i + 1; j < n; j++) {
    //         if(arr[i] + arr[j] == target) {
    //             ans.push_back(i);
    //             ans.push_back(j);
    //             return ans; // Return the first found pair
    //         }
    //     }
    // }
    // return ans; // Return empty if no pair found
    // Note: This approach has O(n^2) time complexity, which is not optimal



    // Using a two-pointer approach to find pairs that sum to the target
    int i = 0; // Initialize left pointer
    int j = n - 1; // Initialize two pointers
    cout << "Finding pairs with sum equal to target using two pointer approach..." << endl;
    while (i<j){
        int pairSum = arr[i] + arr[j]; // Calculate the sum of the pair
        if (pairSum > target) {
            j--; // Move the right pointer left if sum is greater than target
        } else if (pairSum < target) {
            i++; // Move the left pointer right if sum is less than target
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans; // Return the first found pair
        }
    }
    return ans; // Return empty if no pair found
    // Note: This approach has O(n) time complexity, which is more optimal than the brute force approach
}

int main() {
    vector<int> arr = {2, 4, 11, 15, 22}; // Example array
    int target = 19; // Target sum for pairs
    
    vector<int> ans= pairSum(arr, target);
    cout<< ans[0] << ", " << ans[1] << endl; // Displaying the first found pair
    
    return 0;
}