// Reverse Words
// Difficulty: EasyAccuracy: 56.08%Submissions: 367K+Points: 2Average Time: 20m
// Given a string s, reverse the string without reversing its individual words. Words are separated by spaces.

// Note: The string may contain leading or trailing spaces, or multiple spaces between two words. The returned string should only have a single space separating the words, and no extra spaces should be included.

// Examples :

// Input: s = " i like this program very much "
// Output: "much very program this like i"
// Explanation: After removing extra spaces and reversing the whole string (not individual words), the input string becomes "much very program this like i". 

class Solution {
    public:
      // Function to reverse words in a given string.
      string reverseWords(string &s) {
          // code here
          stringstream ss(s);
          string word, result = "";
          while (ss >> word) {
              result = word + " " + result;
          }
          result.pop_back(); // Remove extra space at the end
          return result;
      }
      
  };