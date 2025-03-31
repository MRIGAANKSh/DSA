Longest String Chain
Difficulty: MediumAccuracy: 50.0%Submissions: 14K+Points: 4Average Time: 20m
You are given an array of words where each word consists of lowercase English letters.
wordA is a predecessor of wordB if and only if we can insert exactly one letter anywhere in wordA without changing the order of the other characters to make it equal to wordB. For example, "abc" is a predecessor of "abac", while "cba" is not a predecessor of "bcad".

A word chain is a sequence of words [word1, word2, ..., wordk] with k >= 1, where word1 is a predecessor of word2, word2 is a predecessor of word3, and so on. A single word is trivially a word chain with k = 1.

Return the length of the longest possible word chain with words chosen from the given list of words in any order.

Examples:

Input: words[] = ["ba", "b", "a", "bca", "bda", "bdca"]
Output: 4
Explanation: One of the longest word chains is ["a", "ba", "bda", "bdca"].

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestStringChain(vector<string>& words) {
        // Step 1: Sort words based on their lengths
        sort(words.begin(), words.end(), [](const string &a, const string &b) {
            return a.size() < b.size();
        });

        unordered_map<string, int> dp; // Store longest chain ending at each word
        int longestChain = 0;

        // Step 2: Process each word
        for (const string &word : words) {
            dp[word] = 1; // Each word itself is at least a chain of length 1
            for (int i = 0; i < word.size(); i++) {
                string prevWord = word.substr(0, i) + word.substr(i + 1); // Remove one character
                
                if (dp.find(prevWord) != dp.end()) {
                    dp[word] = max(dp[word], dp[prevWord] + 1);
                }
            }
            longestChain = max(longestChain, dp[word]);
        }

        return longestChain;
    }
};

// Example usage:
int main() {
    Solution sol;
    vector<string> words = {"ba", "b", "a", "bca", "bda", "bdca"};
    cout << sol.longestStringChain(words) << endl; // Output: 4
    return 0;
}
