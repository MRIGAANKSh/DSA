#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find the first non-repeating character in a string.
    char nonRepeatingChar(string &s) {
        unordered_map<char, int> freq;
        
        // First pass: Count occurrences of each character
        for (char c : s) {
            freq[c]++;
        }

        // Second pass: Find the first character with frequency 1
        for (char c : s) {
            if (freq[c] == 1) return c;
        }
        
        return '-'; // Return '-' if no non-repeating character exists
    }
};

// Driver Code
int main() {
    Solution sol;
    string s = "geeksforgeeks";
    cout << sol.nonRepeatingChar(s) << endl; // Output: 'f'
    
    return 0;
}
