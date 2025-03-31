// Longest Bounded-Difference Subarray
// Difficulty: MediumAccuracy: 71.71%Submissions: 6K+Points: 4
// Given an array of positive integers arr[] and a non-negative integer x, the task is to find the longest sub-array where the absolute difference between any two elements is not greater than x.
// If multiple such subarrays exist, return the one that starts at the smallest index.

// Examples: 

// Input: arr[] = [8, 4, 2, 6, 7], x = 4 
// Output: [4, 2, 6] 
// Explanation: The sub-array described by index [1..3], i.e. [4, 2, 6] contains no such difference of two elements which is greater than 4.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> longestSubarray(vector<int>& arr, int x) {
        int left = 0, maxLength = 0, startIdx = 0;
        deque<int> maxDeque, minDeque;

        for (int right = 0; right < arr.size(); ++right) {
            // Maintain decreasing order in maxDeque
            while (!maxDeque.empty() && arr[maxDeque.back()] < arr[right])
                maxDeque.pop_back();
            maxDeque.push_back(right);

            // Maintain increasing order in minDeque
            while (!minDeque.empty() && arr[minDeque.back()] > arr[right])
                minDeque.pop_back();
            minDeque.push_back(right);

            // If the condition is violated, move the left pointer
            while (arr[maxDeque.front()] - arr[minDeque.front()] > x) {
                left++;
                if (maxDeque.front() < left) maxDeque.pop_front();
                if (minDeque.front() < left) minDeque.pop_front();
            }

            // Update the result if a longer subarray is found
            if (right - left + 1 > maxLength) {
                maxLength = right - left + 1;
                startIdx = left;
            }
        }

        // Extract the longest valid subarray
        return vector<int>(arr.begin() + startIdx, arr.begin() + startIdx + maxLength);
    }
};

// Driver code
int main() {
    Solution sol;
    vector<int> arr = {8, 4, 2, 6, 7};
    int x = 4;
    vector<int> result = sol.longestSubarray(arr, x);

    // Print result
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
