// Array Subset
// Difficulty: BasicAccuracy: 44.05%Submissions: 401K+Points: 1Average Time: 20m
// Given two arrays a[] and b[], your task is to determine whether b[] is a subset of a[].

// Examples:

// Input: a[] = [11, 7, 1, 13, 21, 3, 7, 3], b[] = [11, 3, 7, 1, 7]
// Output: true
// Explanation: b[] is a subset of a[]

#include <vector>
#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
  public:
    bool isSubset(std::vector<int> &a, std::vector<int> &b) {
        std::unordered_map<int, int> freqA;

        // Count occurrences of elements in a
        for (int num : a) {
            freqA[num]++;
        }

        // Check if b is a subset of a
        for (int num : b) {
            if (freqA[num] > 0) {
                freqA[num]--;  // Reduce count since it is used
            } else {
                return false;  // Element in b is not present in sufficient quantity
            }
        }
        return true;
    }
};