// Second Largest
// Difficulty: EasyAccuracy: 26.72%Submissions: 927K+Points: 2
// Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.

// Note: The second largest element should not be equal to the largest element.

// Examples:

// Input: arr[] = [12, 35, 1, 10, 34, 1]
// Output: 34
// Explanation: The largest element of the array is 35 and the second largest element is 34.

// code i pyhtonn
// class Solution:
//     def getSecondLargest(self, arr):
//         # Code Here
//         n=len(arr)
//         arr.sort()
//         c=0
//         for i in range(n-1,0,-1):
//             if(arr[i]==arr[i-1]):
//                 continue
//             else:
//                 a=arr[i-1]
//                 c+=1
//                 break
//         if(c>0):
//             return a
//         else:
//             return -1
                
            
#include <vector>
#include <algorithm>

class Solution {
  public:
    // Function returns the second largest element
    int getSecondLargest(std::vector<int> &arr) {
        int n = arr.size();
        if (n < 2) return -1; // If the array has less than 2 elements, no second largest

        std::sort(arr.begin(), arr.end()); // Sort the array
        
        for (int i = n - 1; i > 0; --i) {
            if (arr[i] != arr[i - 1]) { // Find the first unique smaller element
                return arr[i - 1];
            }
        }
        return -1; // If all elements are the same
    }
};
