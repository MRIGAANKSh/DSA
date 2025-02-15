// Find triplets with zero sum
// Difficulty: MediumAccuracy: 25.81%Submissions: 334K+Points: 4Average Time: 20m
// Given an array arr[] of integers, determine whether it contains a triplet whose sum equals zero. Return true if such a triplet exists, otherwise, return false.

// Examples:

// Input: arr[] = [0, -1, 2, -3, 1]
// Output: true
// Explanation: The triplet [0, -1, 1] has a sum equal to zero.

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find triplets with zero sum.
    bool findTriplets(vector<int> &arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());  // Step 1: Sort the array

        // Step 2: Iterate through the array
        for (int i = 0; i < n - 2; i++) {
            int left = i + 1, right = n - 1;  // Two-pointer approach
            
            while (left < right) {
                int triplet_sum = arr[i] + arr[left] + arr[right];

                if (triplet_sum == 0) {
                    return true;  // Found a valid triplet
                } 
                else if (triplet_sum < 0) {
                    left++;  // Move left pointer to increase sum
                } 
                else {
                    right--;  // Move right pointer to decrease sum
                }
            }
        }

        return false;  // No triplet found
    }
};

// Driver code
int main() {
    Solution obj;
    vector<int> arr = {0, -1, 2, -3, 1};
    if (obj.findTriplets(arr))
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}
