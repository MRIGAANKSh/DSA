Longest Common Subsequence
Difficulty: MediumAccuracy: 41.68%Submissions: 297K+Points: 4
Given two strings s1 and s2, return the length of their longest common subsequence (LCS). If there is no common subsequence, return 0.

A subsequence is a sequence that can be derived from the given string by deleting some or no elements without changing the order of the remaining elements. For example, "ABE" is a subsequence of "ABCDE".

Examples:

Input: s1 = "ABCDGH", s2 = "AEDFHR"
Output: 3
Explanation: The longest common subsequence of "ABCDGH" and "AEDFHR" is "ADH", which has a length of 3.

class Solution {
    public:
      int lcs(string &s1, string &s2) {
          int m = s1.length(), n = s2.length();
          vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
  
          for (int i = 1; i <= m; i++) {
              for (int j = 1; j <= n; j++) {
                  if (s1[i - 1] == s2[j - 1]) {
                      dp[i][j] = dp[i - 1][j - 1] + 1;
                  } else {
                      dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                  }
              }
          }
          return dp[m][n];
      }
  };
  
  // Example usage:
  #include <iostream>
  using namespace std;
  
  int main() {
      Solution sol;
      string s1 = "ABCDGH", s2 = "AEDFHR";
      cout << sol.lcs(s1, s2) << endl;  // Output: 3
      return 0;
  }
  