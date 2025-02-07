// Smallest Positive Missing
// Difficulty: MediumAccuracy: 25.13%Submissions: 395K+Points: 4
// You are given an integer array arr[]. Your task is to find the smallest positive number missing from the array.

// Note: Positive number starts from 1. The array can have negative integers too.

// Examples:

// Input: arr[] = [2, -3, 4, 1, 1, 7]
// Output: 3
// Explanation: Smallest positive missing number is 3.

class Solution {
public:
    int missingNumber(vector<int>& arr) {
        unordered_set<int> numSet(arr.begin(), arr.end());
        int n = arr.size();
        
        // The smallest positive missing number must be in range [1, n+1]
        for (int i = 1; i <= n + 1; i++) {
            if (numSet.find(i) == numSet.end()) {
                return i;
            }
        }
        return n + 1; // This case should never occur
    }
};