// Product array puzzle
// Difficulty: EasyAccuracy: 33.46%Submissions: 276K+Points: 2Average Time: 20m
// Given an array, arr[] construct a product array, res[] where each element in res[i] is the product of all elements in arr[] except arr[i]. Return this resultant array, res[].
// Note: Each element is res[] lies inside the 32-bit integer range.

// Examples:

// Input: arr[] = [10, 3, 5, 6, 2]
// Output: [180, 600, 360, 300, 900]
// Explanation: For i=0, res[i] = 3 * 5 * 6 * 2 is 180.
// For i = 1, res[i] = 10 * 5 * 6 * 2 is 600.
// For i = 2, res[i] = 10 * 3 * 6 * 2 is 360.
// For i = 3, res[i] = 10 * 3 * 5 * 2 is 300.
// For i = 4, res[i] = 10 * 3 * 5 * 6 is 900.

class Solution {
    public:
      vector<int> productExceptSelf(vector<int>& arr) {
          int n = arr.size();
          vector<int> result(n, 1);
          
          // Step 1: Compute left product
          int leftProduct = 1;
          for (int i = 0; i < n; i++) {
              result[i] = leftProduct;
              leftProduct *= arr[i];
          }
          
          // Step 2: Compute right product and multiply with left product
          int rightProduct = 1;
          for (int i = n - 1; i >= 0; i--) {
              result[i] *= rightProduct;
              rightProduct *= arr[i];
          }
          
          return result;
      }
  };
  