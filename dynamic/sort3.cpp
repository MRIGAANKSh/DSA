// Common in 3 Sorted Arrays
// Difficulty: EasyAccuracy: 22.16%Submissions: 410K+Points: 2
// You are given three arrays sorted in increasing order. Find the elements that are common in all three arrays.
// If there are no such elements return an empty array. In this case, the output will be -1.

// Note: can you handle the duplicates without using any additional Data Structure?

// Examples :

// Input: arr1 = [1, 5, 10, 20, 40, 80] , arr2 = [6, 7, 20, 80, 100] , arr3 = [3, 4, 15, 20, 30, 70, 80, 120]
// Output: [20, 80]
// Explanation: 20 and 80 are the only common elements in arr, brr and crr.

#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
    // Function to find common elements in three sorted arrays
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3) {
        int i = 0, j = 0, k = 0;
        vector<int> result;

        while (i < arr1.size() && j < arr2.size() && k < arr3.size()) {
            if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
                result.push_back(arr1[i]);

                // Move all pointers forward
                i++;
                j++;
                k++;

                // Skip duplicates in arr1
                while (i < arr1.size() && arr1[i] == arr1[i - 1]) i++;
                // Skip duplicates in arr2
                while (j < arr2.size() && arr2[j] == arr2[j - 1]) j++;
                // Skip duplicates in arr3
                while (k < arr3.size() && arr3[k] == arr3[k - 1]) k++;
            } 
            else if (arr1[i] < arr2[j]) {
                i++;
            } 
            else if (arr2[j] < arr3[k]) {
                j++;
            } 
            else {
                k++;
            }
        }

        if (result.empty()) return {-1}; // If no common elements found
        return result;
    }
};

// Driver Code
int main() {
    Solution obj;
    vector<int> arr1 = {1, 5, 10, 20, 40, 80};
    vector<int> arr2 = {6, 7, 20, 80, 100};
    vector<int> arr3 = {3, 4, 15, 20, 30, 70, 80, 120};

    vector<int> result = obj.commonElements(arr1, arr2, arr3);

    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
