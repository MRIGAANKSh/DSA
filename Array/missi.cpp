// Missing And Repeating
// Difficulty: EasyAccuracy: 24.83%Submissions: 547K+Points: 2
// Given an unsorted array arr of positive integers. One number a from the set [1, 2,....,n] is missing and one number b occurs twice in the array. Find numbers a and b.

// Note: The test cases are generated such that there always exists one missing and one repeating number within the range [1,n].

// Examples:

// Input: arr[] = [2, 2]
// Output: [2, 1]
// Explanation: Repeating number is 2 and smallest positive missing number is 1.
// Input: arr[] = [1, 3, 3] 


// #include <vector>
// using namespace std;

// class Solution {
// public:
//     vector<int> findTwoElement(vector<int>& arr) {
//         int n = arr.size();
//         int repeating = -1, missing = -1;

//         // First pass: Mark elements visited
//         for (int i = 0; i < n; i++) {
//             int index = abs(arr[i]) - 1; // Convert value to index (1-based to 0-based)

//             // If the value at the index is already negative, it's the repeating number
//             if (arr[index] < 0) {
//                 repeating = abs(arr[i]);
//             } else {
//                 // Mark the value as visited by making it negative
//                 arr[index] = -arr[index];
//             }
//         }

//         // Second pass: Find the missing number
//         for (int i = 0; i < n; i++) {
//             // A positive value indicates the missing number (index + 1)
//             if (arr[i] > 0) {
//                 missing = i + 1;
//                 break;
//             }
//         }

//         return {repeating, missing};
//     }
// };


lass Solution {
public:
    vector<int> findTwoElement(vector<int>& arr) {
        long long n = arr.size();
        long long sum_n = n * (n + 1) / 2;          
        long long sum_n2 = n * (n + 1) * (2 * n + 1) / 6; 
        long long sum_arr = 0, sum_arr2 = 0;
        for (int num : arr) {
            sum_arr += num;
            sum_arr2 += (long long)num * num;
        }
        
        
        long long diff = sum_n - sum_arr;           
        long long diff2 = sum_n2 - sum_arr2;        
        
        long long sum = diff2 / diff;              
        int x = (diff + sum) / 2;                   
        int y = sum - x;                           
        return {y, x};
    }
};