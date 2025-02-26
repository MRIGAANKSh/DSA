#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasTripletSum(vector<int> &arr, int target) {
        int n = arr.size();
        sort(arr.begin(), arr.end()); // Step 1: Sort the array

        // Step 2: Fix one element and use two-pointer approach
        for (int i = 0; i < n - 2; i++) {
            int left = i + 1, right = n - 1;
            
            while (left < right) {
                int sum = arr[i] + arr[left] + arr[right];

                if (sum == target) {
                    return true; // Found a triplet
                }
                else if (sum < target) {
                    left++; // Increase sum
                }
                else {
                    right--; // Decrease sum
                }
            }
        }
        return false; // No triplet found
    }
};

// Example Usage
int main() {
    Solution sol;
    vector<int> arr = {1, 4, 45, 6, 10, 8};
    int target = 22;
    
    if (sol.hasTripletSum(arr, target)) {
        cout << "Triplet exists\n";
    } else {
        cout << "No triplet found\n";
    }

    return 0;
}
