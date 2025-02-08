// Palindrome String
// Difficulty: EasyAccuracy: 51.21%Submissions: 377K+Points: 2
// You are given a string s. Your task is to determine if the string is a palindrome. A string is considered a palindrome if it reads the same forwards and backwards.

// Examples :

// Input: s = "abba"
// Output: true
// Explanation: "abba" reads the same forwards and backwards, so it is a palindrome.

class Solution {
    public:
      // Function to check if a string is a palindrome.
      bool isPalindrome(string& s) {
          // code here
          int left = 0, right = s.size() - 1;
          
          while (left < right) {
              if (s[left] != s[right]) {
                  return false;
              }
              left++;
              right--;
          }
          
          return true;
  
      }
  };