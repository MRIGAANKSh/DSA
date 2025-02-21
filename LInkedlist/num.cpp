// Number of occurrence
// Difficulty: EasyAccuracy: 59.34%Submissions: 300K+Points: 2Average Time: 20m
// Given a sorted array, arr[] and a number target, you need to find the number of occurrences of target in arr[]. 

// Examples :

// Input: arr[] = [1, 1, 2, 2, 2, 2, 3], target = 2
// Output: 4
// Explanation: target = 2 occurs 4 times in the given array so the output is 4.

class Solution {
    public:
      int countFreq(vector<int>& arr, int target) {
          // code here
          int c=0;
          for(int i=0;i<arr.size();i++){
              if(arr[i]==target){
                  c+=1;
              }
          }
          return c;
      }
  };