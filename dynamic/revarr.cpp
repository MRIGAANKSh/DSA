// Reverse array in groups
// Difficulty: BasicAccuracy: 37.48%Submissions: 342K+Points: 1Average Time: 15m
// Given an array arr of positive integers. Reverse every sub-array group of size k.

// Note: If at any instance, k is greater or equal to the array size, then reverse the entire array. You shouldn't return any array, modify the given array in place.

// Examples:

// Input: arr[] = [1, 2, 3, 4, 5], k = 3
// Output: [3, 2, 1, 5, 4]
// Explanation: First group consists of elements 1, 2, 3. Second group consists of 4,5.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseInGroups(vector<int>& arr, int k) {
        int n = arr.size();
        for (int i = 0; i < n; i += k) {
            int left = i, right = min(i + k - 1, n - 1);
            while (left < right) {
                swap(arr[left], arr[right]);
                left++;
                right--;
            }
        }
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k = 3;
    
    Solution sol;
    sol.reverseInGroups(arr, k);
    
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
