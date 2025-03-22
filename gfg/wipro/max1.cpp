// Maximum Element in Array
// Difficulty: BasicAccuracy: 83.68%Submissions: 1K+Points: 1
// Given an array arr[]. The task is to find the largest element and return it.

// Examples:

// Input: arr = [1, 8, 7, 56, 90]
// Output: 90
// Explanation: The largest element of the given array is 90.

class Solution {
    public:
      int largest(int arr[], int n) {
          // code here
          int max=0;
          for(int i=0;i<n;i++){
              if(arr[i]>max){
                  max=arr[i];
              }
          }
          return max;
      }
  };