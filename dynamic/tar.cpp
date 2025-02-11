// Two Sum - Pair with Given Sum
// Difficulty: EasyAccuracy: 30.61%Submissions: 350K+Points: 2Average Time: 20m
// Given an array arr[] of positive integers and another integer target. Determine if there exists two distinct indices such that the sum of there elements is equals to target.

// Examples:

// Input: arr[] = [1, 4, 45, 6, 10, 8], target = 16
// Output: true
// Explanation: arr[3] + arr[4] = 6 + 10 = 16.

#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    bool twoSum(vector<int>& arr, int target) {
        unordered_set<int> seen; // Stores numbers encountered so far

        for (int num : arr) {
            if (seen.find(target - num) != seen.end()) {
                return true; // Found a pair
            }
            seen.insert(num); // Store the current number
        }
        
        return false; // No valid pair found
    }
};
