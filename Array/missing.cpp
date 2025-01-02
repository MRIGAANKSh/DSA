#include <vector>
#include <iostream>
#include <unordered_set>

class Solution {
public:
    int missingNumber(std::vector<int>& arr) {
        // Use an unordered_set for fast lookups
        std::unordered_set<int> numSet(arr.begin(), arr.end());
        int n = arr.size();
        
        // Check for the missing number from 1 to n+1
        for (int j = 1; j <= n + 1; ++j) {
            if (numSet.find(j) == numSet.end()) { // If j is not in the set
                return j; // Return the missing number
            }
        }
        return -1; // This line should never be reached
    }
};
