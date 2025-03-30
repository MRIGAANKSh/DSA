// Segregate Even and Odd numbers
// Difficulty: BasicAccuracy: 42.11%Submissions: 33K+Points: 1
// Given an array arr, write a program segregating even and odd numbers. The program should put all even numbers first in sorted order, and then odd numbers in sorted order.

// Note:- You don't have to return the array, you have to modify it in-place.

// Example:

// Input: arr[] = [12, 34, 45, 9, 8, 90, 3]
// Output: [8, 12, 34, 90, 3, 9, 45]
// Explanation: Even numbers are 12, 34, 8 and 90. Rest are odd numbers.


class Solution {
    public:
      void segregateEvenOdd(vector<int>& arr) {
          // code here
          vector<int>even;
          vector<int>odd;
          for(int i=0;i<arr.size();i++){
              if(arr[i]%2==0){
                  even.push_back(arr[i]);
              }
              else{
                  odd.push_back(arr[i]);
              }
          }
          sort(even.begin(),even.end());
          sort(odd.begin(),odd.end());
          for(int i=0;i<even.size();i++){
              arr[i]=even[i];
          }
          int n=even.size();
          for(int j=0;j<odd.size();j++){
              arr[n+j]=odd[j];
          }
      }
  };