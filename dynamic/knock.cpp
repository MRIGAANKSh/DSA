// 0 - 1 Knapsack Problem
// Difficulty: MediumAccuracy: 31.76%Submissions: 457K+Points: 4
// You are given the weights and values of items, and you need to put these items in a knapsack of capacity capacity to achieve the maximum total value in the knapsack. Each item is available in only one quantity.

// In other words, you are given two integer arrays val[] and wt[], which represent the values and weights associated with items, respectively. You are also given an integer capacity, which represents the knapsack capacity. Your task is to find the maximum sum of values of a subset of val[] such that the sum of the weights of the corresponding subset is less than or equal to capacity. You cannot break an item; you must either pick the entire item or leave it (0-1 property).

// Examples :

// Input: capacity = 4, val[] = [1, 2, 3], wt[] = [4, 5, 1] 
// Output: 3
// Explanation: Choose the last item, which weighs 1 unit and has a value of 3.

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    // Function to return the maximum value that can be put in a knapsack of given capacity
    int knapSack(int capacity, vector<int>& val, vector<int>& wt) {
        int n = val.size();

        // Create a DP array to store the maximum value for each capacity
        vector<int> dp(capacity + 1, 0);

        // Fill the DP array iteratively
        for (int i = 0; i < n; i++) {  // Loop through all items
            for (int w = capacity; w >= wt[i]; w--) {  // Loop through weights in reverse
                dp[w] = max(dp[w], val[i] + dp[w - wt[i]]);
            }
        }

        // The last element in the DP array represents the maximum value achievable
        return dp[capacity];
    }
};


#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    // Function to calculate the maximum value
    int knapSack(int capacity, vector<int>& val, vector<int>& wt) {
        int n = val.size();
        int maxVal = 0;

        // Total number of subsets = 2^n
        int totalSubsets = (1 << n);

        // Iterate through all subsets
        for (int subset = 0; subset < totalSubsets; subset++) {
            int currentWeight = 0, currentValue = 0;

            // Iterate through each bit of the subset
            for (int i = 0; i < n; i++) {
                // Check if the i-th item is included in the current subset
                if (subset & (1 << i)) {
                    // If adding the current item exceeds capacity, skip the subset
                    if (currentWeight + wt[i] > capacity) {
                        currentValue = 0; // Invalidate this subset
                        break;
                    }
                    currentWeight += wt[i];
                    currentValue += val[i];
                }
            }

            // Update maximum value if the subset is valid
            maxVal = max(maxVal, currentValue);
        }

        return maxVal;
    }
};
