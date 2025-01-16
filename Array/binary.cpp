// Binary Search
// Difficulty: EasyAccuracy: 44.32%Submissions: 548K+Points: 2
// Given a sorted array arr and an integer k, find the position(0-based indexing) at which k is present in the array using binary search.

// Note: If multiple occurrences are there, please return the smallest index.

// Examples:

// Input: arr[] = [1, 2, 3, 4, 5], k = 4
// Output: 3
// Explanation: 4 appears at index 3.


class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        int st = 0, end = arr.size() - 1;
        int result = -1; // Variable to store the smallest index

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (arr[mid] == k) {
                result = mid;  // Update the result with the current index
                end = mid - 1; // Continue searching in the left half for the smallest index
            } else if (arr[mid] < k) {
                st = mid + 1;  // Move to the right half
            } else {
                end = mid - 1; // Move to the left half
            }
        }
        return result; // If k is not found, result will remain -1
    }
};
