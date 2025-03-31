// Maximum of minimum for every window size
// Difficulty: HardAccuracy: 42.9%Submissions: 49K+Points: 8Average Time: 45m
// Given an array of integers arr[], the task is to find the maximum of the minimum values for every possible window size in the array, where the window size ranges from 1 to arr.size().

// More formally, for each window size k, determine the smallest element in all windows of size k, and then find the largest value among these minimums where 1<=k<=arr.size().

// Examples :

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxOfMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> left(n), right(n), res(n, INT_MIN);
        stack<int> st;
        
        // Compute previous smaller element indices
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] >= arr[i]) 
                st.pop();
            left[i] = (st.empty()) ? -1 : st.top();
            st.push(i);
        }

        // Clear stack for next use
        while (!st.empty()) st.pop();

        // Compute next smaller element indices
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i]) 
                st.pop();
            right[i] = (st.empty()) ? n : st.top();
            st.push(i);
        }

        // Compute max of minimums for each window size
        for (int i = 0; i < n; i++) {
            int window_size = right[i] - left[i] - 1;
            res[window_size - 1] = max(res[window_size - 1], arr[i]);
        }

        // Fill missing values by propagating max values
        for (int i = n - 2; i >= 0; i--) {
            res[i] = max(res[i], res[i + 1]);
        }

        return res;
    }
};

// Example Usage
int main() {
    Solution sol;
    vector<int> arr = {10, 20, 30, 50, 10, 70, 30};
    vector<int> result = sol.maxOfMins(arr);

    for (int val : result) {
        cout << val << " ";
    }
    return 0;
}

