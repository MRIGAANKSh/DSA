    //Indexes of Subarray Sum
   // Difficulty: MediumAccuracy: 16.5%Submissions: 1.7MPoints: 4
    //Given an array arr[] containing only non-negative integers, your task is to find a continuous subarray (a contiguous sequence of elements) whose sum equals a specified value target. You need to return the 1-based indices of the leftmost and rightmost elements of this subarray. You need to find the first subarray whose sum is equal to the target.

    //Note: If no such array is possible then, return [-1].
    //Examples:
    //Input: arr[] = [1, 2, 3, 7, 5], target = 12
   // Output: [2, 4]
    //Explanation: The sum of elements from 2nd to 4th position is 12.
   // Input: arr[] = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10], target = 15
   // Output: [1, 5]
    //Explanation: The sum of elements from 1st to 5th position is 15.
//gfg index of subarray sum
//code:
class Solution {
public:
    std::vector<int> subarraySum(std::vector<int>& arr, int target) {
        int n = arr.size();
        int i = 0, j = 0, sum = 0;

        // Use the sliding window technique
        while (j < n) {
            sum += arr[j];

            // Adjust the window if the sum exceeds the target
            while (sum > target && i < j) {
                sum -= arr[i];
                i++;
            }

            // Check if the current window's sum matches the target
            if (sum == target) {
                return {i + 1, j + 1}; // Return 1-based indices
            }

            j++;
        }

        // If no subarray is found, return -1
        return {-1};
    }
};