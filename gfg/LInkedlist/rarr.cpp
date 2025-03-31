// Rotate Array by One
// Difficulty: BasicAccuracy: 69.6%Submissions: 298K+Points: 1Average Time: 20m
// Given an array arr, rotate the array by one position in clockwise direction.

// Examples:

// Input: arr[] = [1, 2, 3, 4, 5]
// Output: [5, 1, 2, 3, 4]
// Explanation: If we rotate arr by one position in clockwise 5 come to the front and remaining those are shifted to the end.

class Solution {
    public:
      void rotate(vector<int> &arr) {
          // code here
           
                  int n = arr.size();
          if (n <= 1) return;  // No rotation needed for empty or single-element arrays
  
          int lastElement = arr[n - 1];  // Store the last element
          
          // Shift elements to the right
          for (int i = n - 1; i > 0; i--) {
              arr[i] = arr[i - 1];
          }
  
          arr[0] = lastElement;  
      }
  };