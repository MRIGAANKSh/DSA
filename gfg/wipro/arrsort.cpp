// Check if array is sorted
// Difficulty: EasyAccuracy: 39.37%Submissions: 245K+Points: 2Average Time: 15m
// Given an array arr[], check whether it is sorted in non-decreasing order. Return true if it is sorted otherwise false.

// Examples:

// Input: arr[] = [10, 20, 30, 40, 50]
// Output: true
// Explanation: The given array is sorted.


class Solution {
    public:
      bool arraySortedOrNot(vector<int>& arr) {
          // code here
          int c=0;
          for(int i=0;i<arr.size()-1;i++){
              if(arr[i]<=arr[i+1]){
                  c+=1;
              }
          }
          if(c==arr.size()-1){
              return true;
          }
          return false;
      }
  };