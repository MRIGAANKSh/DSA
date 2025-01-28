// Maximum Product Subarray
// Difficulty: MediumAccuracy: 18.09%Submissions: 426K+Points: 4
// Given an array arr[] that contains positive and negative integers (may contain 0 as well). Find the maximum product that we can get in a subarray of arr[].

// Note: It is guaranteed that the output fits in a 32-bit integer.

// Examples

// Input: arr[] = [-2, 6, -3, -10, 0, 2]
// Output: 180
// Explanation: The subarray with maximum product is {6, -3, -10} with product = 6 * (-3) * (-10) = 180.

class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return 0;

        int maxProduct = arr[0];
        int maxEndingHere = arr[0];
        int minEndingHere = arr[0];

        for (int i = 1; i < n; i++) {
            if (arr[i] < 0) {
                swap(maxEndingHere, minEndingHere);
            }

            maxEndingHere = max(arr[i], maxEndingHere * arr[i]);
            minEndingHere = min(arr[i], minEndingHere * arr[i]);

            maxProduct = max(maxProduct, maxEndingHere);
        }

        return maxProduct;
    }
};
