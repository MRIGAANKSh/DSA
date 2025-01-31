// Union of Arrays with Duplicates
// Difficulty: EasyAccuracy: 42.22%Submissions: 416K+Points: 2
// Given two arrays a[] and b[], the task is to find the number of elements in the union between these two arrays.

// The Union of the two arrays can be defined as the set containing distinct elements from both arrays. If there are repetitions, then only one element occurrence should be there in the union.

// Note: Elements of a[] and b[] are not necessarily distinct.

// Examples

// Input: a[] = [1, 2, 3, 4, 5], b[] = [1, 2, 3]
// Output: 5
// Explanation: Union set of both the arrays will be 1, 2, 3, 4 and 5. So count is 5.

class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        // code here
        set<int>arr;
        for(int i=0;i<a.size();i++){
            arr.insert(a[i]);
        }
        for(int i=0;i<b.size();i++){
            arr.insert(b[i]);
        }
        int c=arr.size();
        return c;
    }
};