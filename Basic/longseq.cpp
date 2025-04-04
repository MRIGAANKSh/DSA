// Longest Increasing Subsequence
// Difficulty: MediumAccuracy: 32.8%Submissions: 323K+Points: 4
// Given an array arr[] of integers, the task is to find the length of the Longest Strictly Increasing Subsequence (LIS).

// A subsequence is strictly increasing if each element in the subsequence is strictly less than the next element.

// Examples:

// Input: arr[] = [5, 8, 3, 7, 9, 1]
// Output: 3
// Explanation: The longest strictly increasing subsequence could be [5, 7, 9], which has a length of 3

#include <bits/stdc++.h>
using namespace std;

int longestIncreasingSubsequence(vector<int>& arr) {
    int n = arr.size();
    vector<int> dp(n, 1);
    
    int maxLIS = 1;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[j] < arr[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        maxLIS = max(maxLIS, dp[i]);
    }
    
    return maxLIS;
}

int main() {
    vector<int> arr = {5, 8, 3, 7, 9, 1};
    cout << "Length of LIS: " << longestIncreasingSubsequence(arr) << endl;
    return 0;
}
