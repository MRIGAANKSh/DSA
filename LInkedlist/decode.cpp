// Decode the string
// Difficulty: MediumAccuracy: 44.28%Submissions: 48K+Points: 4Average Time: 10m
// Given an encoded string s, the task is to decode it. The encoding rule is :

// k[encodedString], where the encodedString inside the square brackets is being repeated exactly k times. Note that k is guaranteed to be a positive integer.
// Note: The test cases are generated so that the length of the output string will never exceed 105 .

// Examples:

// Input: s = "1[b]"
// Output: "b"
// Explanation: "b" is present only one time.\\

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string decodedString(string &s) {
        stack<string> st;  // Stack to store substrings and numbers
        stack<int> numStack;  // Stack to store repetition counts
        string currentString = "";
        int num = 0;

        for (char c : s) {
            if (isdigit(c)) {
                num = num * 10 + (c - '0');  // Handle multi-digit numbers
            } else if (c == '[') {
                numStack.push(num);  // Push the number to stack
                st.push(currentString);  // Push current string to stack
                num = 0;
                currentString = "";
            } else if (c == ']') {
                string decodedString = currentString;
                int repeatTimes = numStack.top();
                numStack.pop();

                // Repeat the string `repeatTimes` times
                currentString = st.top();
                st.pop();
                while (repeatTimes--) {
                    currentString += decodedString;
                }
            } else {
                currentString += c;  // Append characters to the current string
            }
        }
        return currentString;
    }
};

// Example test cases
int main() {
    Solution sol;
    string s1 = "1[b]";
    string s2 = "3[b2[ca]]";
    
    cout << sol.decodedString(s1) << endl;  // Output: "b"
    cout << sol.decodedString(s2) << endl;  // Output: "bcacabcacabcaca"

    return 0;
}
