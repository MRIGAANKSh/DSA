// Power of 2
// Difficulty: EasyAccuracy: 32.58%Submissions: 412K+Points: 2
// Given a non-negative integer n. The task is to check if it is a power of 2. 

// Examples

// Input: n = 8
// Output: true
// Explanation: 8 is equal to 2 raised to 3 (23 = 8).

class Solution {
  public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(int n) {
        // code here
       return (n > 0) && ((n & (n - 1)) == 0);
    }
};