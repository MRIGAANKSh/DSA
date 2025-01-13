// Count Inversions
// Difficulty: MediumAccuracy: 16.93%Submissions: 615K+Points: 4
// Given an array of integers arr[]. Find the Inversion Count in the array.
// Two elements arr[i] and arr[j] form an inversion if arr[i] > arr[j] and i < j.

// Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If the array is already sorted then the inversion count is 0.
// If an array is sorted in the reverse order then the inversion count is the maximum. 

// Examples:

// Input: arr[] = [2, 4, 1, 3, 5]
// Output: 3
// Explanation: The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).

#include <vector>
using namespace std;

class Solution {
public:
    // Helper function to merge two halves and count inversions
    int mergeAndCount(vector<int>& arr, int left, int mid, int right) {
        vector<int> temp;  // Temporary array for merging
        int i = left;      // Pointer for the left subarray
        int j = mid + 1;   // Pointer for the right subarray
        int inversions = 0;

        // Merge the two subarrays and count inversions
        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i++]);  // No inversion
            } else {
                temp.push_back(arr[j++]);
                inversions += (mid - i + 1);  // Count inversions
            }
        }

        // Add remaining elements from the left subarray
        while (i <= mid) {
            temp.push_back(arr[i++]);
        }

        // Add remaining elements from the right subarray
        while (j <= right) {
            temp.push_back(arr[j++]);
        }

        // Copy merged elements back into the original array
        for (int k = left; k <= right; ++k) {
            arr[k] = temp[k - left];
        }

        return inversions;
    }

    // Function to perform merge sort and count inversions
    int mergeSortAndCount(vector<int>& arr, int left, int right) {
        int inversions = 0;
        if (left < right) {
            int mid = left + (right - left) / 2;

            // Count inversions in the left half
            inversions += mergeSortAndCount(arr, left, mid);

            // Count inversions in the right half
            inversions += mergeSortAndCount(arr, mid + 1, right);

            // Count split inversions and merge
            inversions += mergeAndCount(arr, left, mid, right);
        }
        return inversions;
    }

    // Function to count inversions in the array
    int inversionCount(vector<int>& arr) {
        return mergeSortAndCount(arr, 0, arr.size() - 1);
    }
};
