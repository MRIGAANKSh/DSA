

// K Sized Subarray Maximum
// Difficulty: MediumAccuracy: 26.04%Submissions: 365K+Points: 4
// Given an array arr[] of integers and an integer k, your task is to find the maximum value for each contiguous subarray of size k. The output should be an array of maximum values corresponding to each contiguous subarray.

// Examples:

// Input: arr[] = [1, 2, 3, 1, 4, 5, 2, 3, 6], k = 3
// Output: [3, 3, 4, 5, 5, 5, 6] 
// Explanation: 
// 1st contiguous subarray = [1 2 3] max = 3
// 2nd contiguous subarray = [2 3 1] max = 3
// 3rd contiguous subarray = [3 1 4] max = 4
// 4th contiguous subarray = [1 4 5] max = 5
// 5th contiguous subarray = [4 5 2] max = 5
// 6th contiguous subarray = [5 2 3] max = 5
// 7th contiguous subarray = [2 3 6] max = 6

// class Solution {
//     public:
//       // Function to find maximum of each subarray of size k.
//       vector<int> maxOfSubarrays(vector<int>& arr, int k) {
//           // code here
//           vector<int>a;
//           for(int i=0;i<arr.size()-k+1;i++){
//               int sum=0;
//               for(int j=i;j<i+k;j++){
//                  if(arr[j]>sum){
//                      sum=arr[j];
//                  }
//               }
//               a.push_back(sum);
//           }
//           return a;
//       }
//   };

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        vector<int> result;
        deque<int> dq;  // Stores indices of useful elements

        for (int i = 0; i < arr.size(); i++) {
            // Remove elements out of this window
            if (!dq.empty() && dq.front() <= i - k)
                dq.pop_front();

            // Remove elements smaller than the current one
            while (!dq.empty() && arr[dq.back()] <= arr[i])
                dq.pop_back();

            // Insert current element at the back
            dq.push_back(i);

            // Store the max (only after the first k elements)
            if (i >= k - 1)
                result.push_back(arr[dq.front()]);
        }
        return result;
    }
};

