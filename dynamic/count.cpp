// Count Digits
// Difficulty: EasyAccuracy: 30.45%Submissions: 410K+Points: 2
// Given a positive integer n, count the number of digits in n that divide n evenly (i.e., without leaving a remainder). Return the total number of such digits.

// A digit d of n divides n evenly if the remainder when n is divided by d is 0 (n % d == 0).
// Digits of n should be checked individually. If a digit is 0, it should be ignored because division by 0 is undefined.

// Examples :

// Input: n = 12
// Output: 2
// Explanation: 1, 2 when both divide 12 leaves remainder 0.

class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
       int c = 0;
        int num = n;
        while (num != 0) {
            int a = num % 10; // Extract the last digit
            if (a != 0 && n % a == 0) { // Check to avoid division by zero
                c += 1;
            }
            num = num / 10; // Remove the last digit
        }
        return c;
    }
};