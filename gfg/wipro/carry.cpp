#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        // Start from the last digit
        int carry = 1;
        
        for (int i = N - 1; i >= 0; i--) {
            arr[i] += carry;
            if (arr[i] < 10) {
                return arr; // No more carry, return the result
            }
            arr[i] = 0; // Set current digit to 0 if carry is propagated
        }

        // If carry remains, add '1' at the beginning
        arr.insert(arr.begin(), 1);
        return arr;
    }
};

// Driver code
int main() {
    Solution sol;
    vector<int> arr = {1, 2, 4};
    vector<int> result = sol.increment(arr, arr.size());
    
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
