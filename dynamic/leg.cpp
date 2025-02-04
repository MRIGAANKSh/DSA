// Largest Element in Array
// Difficulty: BasicAccuracy: 67.48%Submissions: 409K+Points: 1Average Time: 20m
// Given an array arr[]. The task is to find the largest element and return it.

// Examples:

// Input: arr[] = [1, 8, 7, 56, 90]
// Output: 90
// Explanation: The largest element of the given array is 90.
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int max=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    }
};