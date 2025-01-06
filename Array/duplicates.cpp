// //Array Duplicates
// Difficulty: EasyAccuracy: 18.95%Submissions: 796K+Points: 2
// Given an array arr of integers, find all the elements that occur more than once in the array. If no element repeats, return an empty array.

// Examples:

// Input: arr[] = [2, 3, 1, 2, 3]
// Output: [2, 3] 
// Explanation: 2 and 3 occur more than once in the given array

// mine time complexty eoror
//{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& arr) {
//         vector<int> a1; // Correctly declare the vector to store duplicates
        
//         for (int i = 0; i < arr.size(); i++) {
//             int c = 0;
//             for (int j = 0; j < arr.size(); j++) {
//                 if (arr[i] == arr[j]) {
//                     c += 1;
//                 }
//             }
//             // Add the duplicate only if it occurs more than once and is not already in a1
//             if (c > 1 && find(a1.begin(), a1.end(), arr[i]) == a1.end()) {
//                 a1.push_back(arr[i]);
//             }
//         }
        
//         // Return the result vector
//         if (!a1.empty()) {
//             return a1;
//         } else {
//             return {}; // Return an empty vector
//         }
//     }
// };


// //{ Driver Code Starts.

// int main() {
//     int t; // Number of test cases
//     cin >> t;
//     cin.ignore(); // Ignore the newline after the integer input
//     while (t--) {
//         vector<int> a;
//         string input;

//         // Input format: first number n followed by the array elements
//         getline(cin, input);
//         stringstream ss(input);
//         int num;
//         while (ss >> num)
//             a.push_back(num); // Read the array elements from input string

//         Solution obj;
//         vector<int> result = obj.findDuplicates(a);
//         sort(result.begin(), result.end());

//         // Print the result in the required format
//         if (result.empty()) {
//             cout << "[]"; // Print empty brackets if no duplicates are found
//         } else {
//             for (int i = 0; i < result.size(); i++) {
//                 if (i != 0)
//                     cout << " ";
//                 cout << result[i];
//             }
//         }
//         cout << endl;
//         cout << "~" << endl;
//     }

//     return 0;
// }

// // } Driver Code Ends

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        vector<int> duplicates; // To store the result
        unordered_map<int, int> freq; // To count the frequency of elements

        // Count the frequency of each element
        for (int num : arr) {
            freq[num]++;
        }

        // Collect elements that appear more than once
        for (auto& pair : freq) {
            if (pair.second > 1) {
                duplicates.push_back(pair.first);
            }
        }

        return duplicates;
    }
};
