// Floor in a Sorted Array
// Difficulty: EasyAccuracy: 33.75%Submissions: 418K+Points: 2
// Given a sorted array arr[] (with unique elements) and an integer k, find the index (0-based) of the largest element in arr[] that is less than or equal to k. This element is called the "floor" of k. If such an element does not exist, return -1.

// Examples

// Input: arr[] = [1, 2, 8, 10, 11, 12, 19], k = 0
// Output: -1
// Explanation: No element less than 0 is found. So output is -1.
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findFloor(vector<int>& arr, int k) {
        int low = 0, high = arr.size() - 1;
        int floorIndex = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == k) {
                return mid; // Exact match found
            } else if (arr[mid] < k) {
                floorIndex = mid; // Potential floor
                low = mid + 1;     // Search right for a closer match
            } else {
                high = mid - 1;    // Search left
            }
        }

        return floorIndex;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 2, 8, 10, 11, 12, 19};
    
    int k = 0;
    cout << "Floor index of " << k << " is: " << sol.findFloor(arr, k) << endl;  // Output: -1

    k = 5;
    cout << "Floor index of " << k << " is: " << sol.findFloor(arr, k) << endl;  // Output: 1 (element = 2)

    k = 10;
    cout << "Floor index of " << k << " is: " << sol.findFloor(arr, k) << endl;  // Output: 3 (element = 10)

    k = 20;
    cout << "Floor index of " << k << " is: " << sol.findFloor(arr, k) << endl;  // Output: 6 (element = 19)

    return 0;
}
