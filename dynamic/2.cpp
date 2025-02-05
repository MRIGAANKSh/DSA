// Union of 2 Sorted with Duplicates
// Difficulty: MediumAccuracy: 31.39%Submissions: 402K+Points: 4Average Time: 20m
// Given two sorted arrays a[] and b[], where each array may contain duplicate elements , the task is to return the elements in the union of the two arrays in sorted order.

// Union of two arrays can be defined as the set containing distinct common elements that are present in either of the arrays.
// Examples:

// Input: a[] = [1, 2, 3, 4, 5], b[] = [1, 2, 3, 6, 7]
// Output: 1 2 3 4 5 6 7
// Explanation: Distinct elements including both the arrays are: 1 2 3 4 5 6 7.

class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
        set<int>s;
        vector<int>arr;
        for(int i=0;i<a.size();i++){
            s.insert(a[i]);
        }
        for(int j=0;j<b.size();j++){
            s.insert(b[j]);
        }
         return vector<int>(s.begin(),s.end());
        
    }
};