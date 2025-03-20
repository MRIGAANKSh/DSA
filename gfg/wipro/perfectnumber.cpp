// Perfect Numbers
// Difficulty: EasyAccuracy: 17.21%Submissions: 198K+Points: 2
// Given a number n, check if a number is perfect or not. A number is said to be perfect if sum of all its factors excluding the number itself is equal to the number. 

// Examples:

// Input: n = 6
// Output: true 
// Explanation: Factors of 6 are 1, 2, 3 and 6. Excluding 6 their sum is 6 which is equal to N itself. So, it's a Perfect Number.

#include <cmath>

class Solution {
  public:
    bool isPerfectNumber(int n) {
        if (n <= 1) return false;  // No perfect number below 2
        
        int sum = 1;  // 1 is always a divisor (excluding itself)
        
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                sum += i;
                if (i != n / i) sum += n / i;  // Add the quotient if it's different
            }
        }
        
        return sum == n;
    }
};
