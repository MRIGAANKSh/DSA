#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numOfPerfectSquares(int a, int b) {
        int x = ceil(sqrt(a));  // Smallest integer whose square is >= a
        int y = floor(sqrt(b)); // Largest integer whose square is <= b
        
        return max(0, y - x + 1); // Ensure non-negative count
    }
};

// Example usage:
int main() {
    Solution sol;
    int a = 3, b = 8;
    cout << sol.numOfPerfectSquares(a, b) << endl; // Output: 1
    return 0;
}
