// Longest Subarray with Sum K
// Difficulty: MediumAccuracy: 24.64%Submissions: 561K+Points: 4
// Given an array arr[] containing integers and an integer k, your task is to find the length of the longest subarray where the sum of its elements is equal to the given value k. If there is no subarray with sum equal to k, return 0.

// Examples:

// Input: arr[] = [10, 5, 2, 7, 1, -10], k = 15
// Output: 6
// Explanation: Subarrays with sum = 15 are [5, 2, 7, 1], [10, 5] and [10, 5, 2, 7, 1, -10]. The length of the longest subarray with a sum of 15 is 6.


class Solution {
public:
    int longestSubarray(vector<int>& arr, int k) {
        int n = arr.size();
        int c = 0; 
        vector<int> prefixSum(n, 0);
        unordered_map<int, int> m; 
        prefixSum[0] = arr[0];
        for (int i = 1; i < n; i++) {
            prefixSum[i] = prefixSum[i - 1] + arr[i];
        }
        for (int j = 0; j < n; j++) {
            if (prefixSum[j] == k) {
                c = max(c, j + 1);
            }
            int val = prefixSum[j] - k;
            if (m.find(val) != m.end()) {
                c = max(c, j - m[val]);
            }
            if (m.find(prefixSum[j]) == m.end()) {
                m[prefixSum[j]] = j;
            }
        }

        return c;
    }
};