// k largest elements
// Difficulty: MediumAccuracy: 53.56%Submissions: 172K+Points: 4
// Given an array arr[] of positive integers and an integer k, Your task is to return k largest elements in decreasing order. 

// Examples:

// Input: arr[] = [12, 5, 787, 1, 23], k = 2
// Output: [787, 23]
// Explanation: 1st largest element in the array is 787 and second largest is 23

class Solution {
    public:
      vector<int> kLargest(vector<int>& arr, int k) {
          // Your code here
          sort(arr.begin(),arr.end());
          vector<int>a;
          for(int i=0;i<k;i++){
              a.push_back(arr[arr.size()-1-i]);
          }
          return a;
      }
  };