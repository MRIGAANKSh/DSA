// Factorial
// Difficulty: BasicAccuracy: 40.58%Submissions: 156K+Points: 1
// Given a positive integer, n. Find the factorial of n.

// Examples :

// Input: n = 5
// Output: 120
// Explanation: 1 x 2 x 3 x 4 x 5 = 120

class Solution {
    public:
      int factorial(int n) {
          // code here
          int fact=1;
          while(n>0){
              fact*=n;
              n--;
          }
          return fact;
      }
  };