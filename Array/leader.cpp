// Array Leaders
// Difficulty: EasyAccuracy: 29.94%Submissions: 788K+Points: 2
// You are given an array arr of positive integers. Your task is to find all the leaders in the array. An element is considered a leader if it is greater than or equal to all elements to its right. The rightmost element is always a leader.

// Examples:

// Input: arr = [16, 17, 4, 3, 5, 2]
// Output: [17, 5, 2]
// Explanation: Note that there is nothing greater on the right side of 17, 5 and, 2.
// Input: arr = [10, 4, 2, 4, 1]
// Output: [10, 4, 4, 1]
// Explanation: Note that both of the 4s are in output, as to be a leader an equal element is also allowed on the right. side

//mine 
class Solution {
public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> leaders; // To store the leaders
        int maxFromRight = INT_MIN; // Initialize the maximum from the right
        
        // Traverse the array from right to left
        for (int i = arr.size() - 1; i >= 0; i--) {
            if (arr[i] >= maxFromRight) {
                leaders.push_back(arr[i]); // Current element is a leader
                maxFromRight = arr[i];    // Update the maximum
            }
        }
        
        // Since we traverse from right to left, reverse the result
        reverse(leaders.begin(), leaders.end());
        return leaders;
    }
};
