// Longest Consecutive Subsequence
// Difficulty: MediumAccuracy: 33.0%Submissions: 345K+Points: 4Average Time: 25m
// Given an array arr[] of non-negative integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.

// Examples:

// Input: arr[] = [2, 6, 1, 9, 4, 5, 3]
// Output: 6
// Explanation: The consecutive numbers here are 1, 2, 3, 4, 5, 6. These 6 numbers form the longest consecutive subsquence.

#include <unordered_set>
#include <vector>
#include <algorithm>

class Solution {
public:
    int longestConsecutive(std::vector<int>& arr) {
        // Handle edge case: empty array
        if (arr.empty()) return 0;

        // Use a hash set for O(1) lookups
        std::unordered_set<int> numSet(arr.begin(), arr.end());

        int maxLength = 0;

        // Iterate through each number in the set
        for (int num : numSet) {
            // Check if the current number is the start of a sequence
            if (numSet.find(num - 1) == numSet.end()) {
                int currentNum = num;
                int currentLength = 1;

                // Find the length of the consecutive sequence
                while (numSet.find(currentNum + 1) != numSet.end()) {
                    currentNum++;
                    currentLength++;
                }

                // Update the maximum length found
                maxLength = std::max(maxLength, currentLength);
            }
        }

        return maxLength;
    }
};