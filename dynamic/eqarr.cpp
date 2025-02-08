// Check Equal Arrays
// Difficulty: EasyAccuracy: 42.18%Submissions: 379K+Points: 2Average Time: 30m
// Given two arrays a[] and b[] of equal size, the task is to find whether the elements in the arrays are equal.

// Two arrays are said to be equal if both contain the same set of elements, arrangements (or permutations) of elements may be different though.

// Note: If there are repetitions, then counts of repeated elements must also be the same for two arrays to be equal.

// Examples:

// Input: a[] = [1, 2, 5, 4, 0], b[] = [2, 4, 5, 0, 1]
// Output: true
// Explanation: Both the array can be rearranged to [0,1,2,4,5]
// Input: a[] = [1, 2, 5], b[] = [2, 4, 15]

class Solution {
    public:
      // Function to check if two arrays are equal or not.
      bool checkEqual(vector<int>& a, vector<int>& b) {
          // code here
          if(a.size()==b.size()){
              sort(a.begin(),a.end());
              sort(b.begin(),b.end());
              return a==b;
          }
      }
  };