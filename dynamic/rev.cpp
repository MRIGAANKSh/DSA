// Reverse a String
// Difficulty: BasicAccuracy: 69.49%Submissions: 389K+Points: 1Average Time: 15m
// You are given a string s, and your task is to reverse the string.

// Examples:

// Input: s = "Geeks"
// Output: "skeeG"

class Solution {
  public:
    string reverseString(string& s) {
        // code here
        string str;
        for(int i=0;i<s.size();i++){
            str=s[i]+str;
        }
        return str;
    }
};