// Sum of Natural Numbers
// Difficulty: BasicAccuracy: 23.81%Submissions: 437K+Points: 1
// Given an integer n, your task is to compute the sum of all natural numbers from 1 to n (inclusive). If n is 0, the sum should be 0.

// Examples:

// Input: n = 1
// Output: 1
// Explanation: For n = 1, the sum will be 1.

class Solution {
  public:
    int seriesSum(int n) {
        // code here
        int sum=0;
        for(int i=0;i<=n;i++){
            sum+=i;
        }
        return sum;
    }
};