// Rotate Array
// Difficulty: MediumAccuracy: 37.06%Submissions: 443K+Points: 4
// Given an array arr[]. Rotate the array to the left (counter-clockwise direction) by d steps, where d is a positive integer. Do the mentioned change in the array in place.

// Note: Consider the array as circular.

// Examples :

// Input: arr[] = [1, 2, 3, 4, 5], d = 2
// Output: [3, 4, 5, 1, 2]
// Explanation: when rotated by 2 elements, it becomes 3 4 5 1 2.

class Solution {
  public:
    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        d = d % n; 
        vector<int> arr1(n);
        for (int i = d; i < n; i++) {
            arr1[i - d] = arr[i];
        }
        for (int i = 0; i < d; i++) {
            arr1[n - d + i] = arr[i];
        }
        for (int i = 0; i < n; i++) {
            arr[i] = arr1[i];
        }
    }
};