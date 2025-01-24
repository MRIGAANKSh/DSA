// Two sum -Pairs with 0 Sum
// Difficulty: EasyAccuracy: 31.49%Submissions: 467K+Points: 2
// Given an integer array arr, return all the unique pairs [arr[i], arr[j]] such that i != j and arr[i] + arr[j] == 0.

// Note: The pairs must be returned in sorted order, the solution array should also be sorted, and the answer must not contain any duplicate pairs.

// Examples:

// Input: arr = [-1, 0, 1, 2, -1, -4]
// Output: [[-1, 1]]
// Explanation: arr[0] + arr[2] = (-1)+ 1 = 0.
// arr[2] + arr[4] = 1 + (-1) = 0.
// The distinct pair are [-1,1].

#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        set<pair<int, int>> uniquePairs;
        set<int> seen;

        for (int num : arr) {
            int target = -num;
            if (seen.count(target)) {
                uniquePairs.insert({min(num, target), max(num, target)});
            }
            seen.insert(num);
        }

        vector<vector<int>> result;
        for (const auto& pair : uniquePairs) {
            result.push_back({pair.first, pair.second});
        }

        return result;
    }
};
