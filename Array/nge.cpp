
// Next Greater Element
// Difficulty: MediumAccuracy: 32.95%Submissions: 420K+Points: 4
// Given an array arr[ ] of integers, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element.
// If there does not exist next greater of current element, then next greater element for current element is -1. For example, next greater of the last element is always -1.

// Examples

// Input: arr[] = [1, 3, 2, 4]
// Output: [3, 4, 4, -1]
// Explanation: The next larger element to 1 is 3, 3 is 4, 2 is 4 and for 4, since it doesn't exist, it is -1.


class Solution {
  public:
    // Function to find the next greater element for each element of the array.
    vector<int> nextLargerElement(vector<int>& arr) {
        
        int n = arr.size();
        vector<int> nge(n, -1); 
        stack<int> st; 
        for (int i = n - 1; i >= 0; i--) {
           while (!st.empty() && st.top() <= arr[i]) {
                st.pop();
            }
            if (!st.empty()) {
                nge[i] = st.top();
            }
            st.push(arr[i]);
        }

        return nge;
    }
};