// Minimize the Heights II
// Difficulty: MediumAccuracy: 15.06%Submissions: 662K+Points: 4
// Given an array arr[] denoting heights of N towers and a positive integer K.

// For each tower, you must perform exactly one of the following operations exactly once.

// Increase the height of the tower by K
// Decrease the height of the tower by K
// Find out the minimum possible difference between the height of the shortest and tallest towers after you have modified each tower.

// You can find a slight modification of the problem here.
// Note: It is compulsory to increase or decrease the height by K for each tower. After the operation, the resultant array should not contain any negative integers.

// Examples :

// Input: k = 2, arr[] = {1, 5, 8, 10}
// Output: 5
// Explanation: The array can be modified as {1+k, 5-k, 8-k, 10-k} = {3, 3, 6, 8}.The difference between the largest and the smallest is 8-3 = 5.

#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int getMinDiff(vector<int> &arr, int k) {
        int n = arr.size();
        if (n == 1) return 0; // If there's only one tower, the difference is always 0.

        // Step 1: Sort the array
        sort(arr.begin(), arr.end());

        // Step 2: Calculate the initial difference
        int initial_diff = arr[n - 1] - arr[0];
        int result = initial_diff;

        // Step 3: Iterate through the array
        for (int i = 0; i < n - 1; ++i) {
            int max_height = max(arr[i] + k, arr[n - 1] - k);
            int min_height = min(arr[0] + k, arr[i + 1] - k);

            // Ignore negative heights
            if (min_height < 0) continue;

            // Update the result with the minimum difference
            result = min(result, max_height - min_height);
        }

        return result;
    }
};
