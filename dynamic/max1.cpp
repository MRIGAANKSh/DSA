#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rowWithMax1s(vector<vector<int>>& arr) {
        int n = arr.size();
        int m = arr[0].size();
        int maxRow = -1, j = m - 1; // Start from the top-right corner

        for (int i = 0; i < n; i++) {
            while (j >= 0 && arr[i][j] == 1) {
                maxRow = i; // Update maxRow when a new 1 is found
                j--;  // Move left
            }
        }
        
        return maxRow;
    }
};

int main() {
    vector<vector<int>> arr = {
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 1, 1},
        {0, 0, 0, 0}
    };

    Solution sol;
    cout << sol.rowWithMax1s(arr) << endl;

    return 0;
}
