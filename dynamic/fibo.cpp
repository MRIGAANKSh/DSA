

// Nth Fibonacci Number
// Difficulty: EasyAccuracy: 22.3%Submissions: 348K+Points: 2
// Given a non-negative integer n, your task is to find the nth Fibonacci number.

// The Fibonacci sequence is a sequence where the next term is the sum of the previous two terms. The first two terms of the Fibonacci sequence are 0 followed by 1. The Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21

// The Fibonacci sequence is defined as follows:

// F(0) = 0
// F(1) = 1
// F(n) = F(n - 1) + F(n - 2) for n > 1
// Examples :

// Input: n = 5
// Output: 5
// Explanation: The 5th Fibonacci number is 5.

class Solution {
    public:
      int nthFibonacci(int n) {
          // code here
          if(n==1){
              return 1;
          }
          else if(n==0){
              return 0;
          }
          else{
              return nthFibonacci(n-1)+nthFibonacci(n-2);
          }
      }
  };