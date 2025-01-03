//kadane algorithm

//Kadane's Algorithm
//Difficulty: MediumAccuracy: 36.28%Submissions: 1MPoints: 4
//Given an integer array arr[]. You need to find the maximum sum of a subarray.

//Examples:

//Input: arr[] = [2, 3, -8, 7, -1, 2, 3]
//Output: 11
//Explanation: The subarray {7, -1, 2, 3} has the largest sum 11.

//code:
class Solution {
public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        int currsum = 0;
        int maxsum = INT_MIN;
        
        for (int i = 0; i < arr.size(); i++) {
            currsum += arr[i];
            maxsum = max(currsum, maxsum);
            if (currsum < 0) {
                currsum = 0;
            }
        }
        
        return maxsum;
    }
};