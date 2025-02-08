// Anagram
// Difficulty: EasyAccuracy: 44.93%Submissions: 379K+Points: 2Average Time: 20m
// Given two strings s1 and s2 consisting of lowercase characters. The task is to check whether two given strings are an anagram of each other or not. An anagram of a string is another string that contains the same characters, only the order of characters can be different. For example, "act" and "tac" are an anagram of each other. Strings s1 and s2 can only contain lowercase alphabets.

// Note: You can assume both the strings s1 & s2 are non-empty.

// Examples :

// Input: s1 = "geeks", s2 = "kseeg"
// Output: true
// Explanation: Both the string have same characters with same frequency. So, they are anagrams.

class Solution {
    public:
      // Function is to check whether two strings are anagram of each other or not.
      bool areAnagrams(string& s1, string& s2) {
          if (s1.size() != s2.size()) {
              return false;
          }
  
          // Sort both strings and compare them
          string sorted_s1 = s1, sorted_s2 = s2;
          sort(sorted_s1.begin(), sorted_s1.end());
          sort(sorted_s2.begin(), sorted_s2.end());
  
          return sorted_s1 == sorted_s2;
      
          
      }
  };