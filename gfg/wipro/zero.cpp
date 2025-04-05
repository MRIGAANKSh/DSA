// Count the Zeros
// Difficulty: EasyAccuracy: 68.08%Submissions: 118K+Points: 2Average Time: 15m
// Given an array arr of only 0's and 1's. The array is sorted in such a manner that all the 1's are placed first and then they are followed by all the 0's. Find the count of all the 0's.

// Examples:

// Input: arr[] = [1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0]
// Output: 3
// Explanation: There are 3 0's in the given array.


class Solution {
    public:
      int countZeroes(vector<int> &arr) {
          // code here
          int c=0;
          sort(arr.begin(),arr.end());
          for(int i=0;i<arr.size();i++){
              if(arr[i]==0){
                  c+=1;
              }
              else{
                  break;
              }
          }
          return c;
      }
  };