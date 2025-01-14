// Equilibrium Point
// Difficulty: EasyAccuracy: 28.13%Submissions: 610K+Points: 2
// Given an array of integers arr[], the task is to find the first equilibrium point in the array.

// The equilibrium point in an array is an index (0-based indexing) such that the sum of all elements before that index is the same as the sum of elements after it. Return -1 if no such point exists. 

// Examples:

// Input: arr[] = [1, 2, 0, 3]
// Output: 2 
// Explanation: The sum of left of index 2 is 1 + 2 = 3 and sum on right of index 2 is 0 + 3 = 3.

#include <vector>
using namespace std;

class Solution {
public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        int totalSum = 0; // Stores the sum of all elements in the array
        int leftSum = 0;  // Stores the sum of elements to the left of the current index

        // Calculate total sum of the array
        for (int num : arr) {
            totalSum += num;
        }

        // Iterate through the array to find the equilibrium point
        for (int i = 0; i < arr.size(); i++) {
            // Subtract the current element from the total sum to get the right sum
            totalSum -= arr[i];

            // Check if the left sum equals the right sum
            if (leftSum == totalSum) {
                return i; // Equilibrium point found
            }

            // Update the left sum to include the current element
            leftSum += arr[i];
        }

        return -1; // No equilibrium point found
    }
};
