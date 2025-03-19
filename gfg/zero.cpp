// Move All Zeroes to End
// Difficulty: EasyAccuracy: 45.51%Submissions: 287K+Points: 2Average Time: 15m
// You are given an array arr[] of non-negative integers. Your task is to move all the zeros in the array to the right end while maintaining the relative order of the non-zero elements. The operation must be performed in place, meaning you should not use extra space for another array.

// Examples:

// Input: arr[] = [1, 2, 0, 4, 3, 0, 5, 0]
// Output: [1, 2, 4, 3, 5, 0, 0, 0]
// Explanation: There are three 0s that are moved to the end.

class Solution {
    public:
        void pushZerosToEnd(vector<int>& arr) {
            int n = arr.size();
            int j = 0; // index to place non-zero elements
    
            // Move all non-zero elements to the front
            for (int i = 0; i < n; i++) {
                if (arr[i] != 0) {
                    swap(arr[i], arr[j]);
                    j++;
                }
            }
        }
    };
    