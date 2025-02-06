// Largest subarray with 0 sum
// Difficulty: MediumAccuracy: 41.84%Submissions: 379K+Points: 4Average Time: 20m
// Given an array arr containing both positive and negative integers, the task is to compute the length of the largest subarray that has a sum of 0.

// Examples:

// Input: arr[] = [15, -2, 2, -8, 1, 7, 10, 23]
// Output: 5
// Explanation: The largest subarray with a sum of 0 is [-2, 2, -8, 1, 7]

class Solution {
  public:
    int maxLen(vector<int>& arr) {
        // code here
        unordered_map<int, int> prefixSumIndex;
        int maxLength = 0, sum = 0;

        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];

            // If sum is zero, update maxLength
            if (sum == 0) {
                maxLength = i + 1;
            }
            // If sum is already seen, update maxLength
            else if (prefixSumIndex.find(sum) != prefixSumIndex.end()) {
                maxLength = max(maxLength, i - prefixSumIndex[sum]);
            }
            // Store the first occurrence of sum
            else {
                prefixSumIndex[sum] = i;
            }
        }
        return maxLength;
    }
};