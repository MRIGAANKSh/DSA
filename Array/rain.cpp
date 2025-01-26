// Trapping Rain Water
// Difficulty: HardAccuracy: 33.14%Submissions: 461K+Points: 8
// Given an array arr[] with non-negative integers representing the height of blocks. If the width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. 

// Examples:

// Input: arr[] = [3, 0, 1, 0, 4, 0 2]
// Output: 10
// Explanation: Total water trapped = 0 + 3 + 2 + 3 + 0 + 2 + 0 = 10 units.

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxWater(vector<int>& arr) {
        int n = arr.size();
        if (n <= 2) {
            return 0; // No water can be trapped if there are less than 3 blocks
        }
        
        int left = 0, right = n - 1;
        int left_max = 0, right_max = 0;
        int water_trapped = 0;
        
        while (left <= right) {
            if (arr[left] <= arr[right]) {
                if (arr[left] >= left_max) {
                    left_max = arr[left]; // Update left max
                } else {
                    water_trapped += left_max - arr[left]; // Water trapped at current position
                }
                left++;
            } else {
                if (arr[right] >= right_max) {
                    right_max = arr[right]; // Update right max
                } else {
                    water_trapped += right_max - arr[right]; // Water trapped at current position
                }
                right--;
            }
        }
        
        return water_trapped;
    }
};
