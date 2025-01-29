Implement Pow
Difficulty: MediumAccuracy: 52.79%Submissions: 12K+Points: 4
Implement the function power(b, e), which calculates b raised to the power of e (i.e. be).

Examples:

Input: b = 3.00000, e = 5
Output: 243.00000

class Solution {
  public:
    double power(double b, int e) {
        // code here
        if (e == 0) return 1;  
        if (e < 0) return 1 / power(b, -e);  

        double halfPower = power(b, e / 2); 

        if (e % 2 == 0) {
            return halfPower * halfPower;  
        } else {
            return b * halfPower * halfPower; 
        }
    
    }
};