// First n Fibonacci
// Difficulty: BasicAccuracy: 29.92%Submissions: 249K+Points: 1
// Given a number n, return an array containing the first n Fibonacci numbers.

// Note: The first two numbers of the series are 0 and 1.

// Examples:

// Input: n = 5
// Output: [0, 1, 1, 2, 3]

#include <vector>

class Solution {
public:
    // Function to return a list containing the first n Fibonacci numbers.
    std::vector<int> fibonacciNumbers(int n) {
        std::vector<int> fib;
        if (n <= 0) return fib;  // Edge case: return empty vector if n is invalid
        
        fib.push_back(0);        // First Fibonacci number is 0
        if (n == 1) return fib;  // If only one number is needed, return
        
        fib.push_back(1);        // Second Fibonacci number is 1
        
        for (int i = 2; i < n; i++) {
            fib.push_back(fib[i - 1] + fib[i - 2]); // Generate next Fibonacci number
        }
        return fib;
    }
};
