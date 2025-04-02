#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minDist(vector<int>& arr, int x, int y) {
        int xd = -1, yd = -1, min_dist = INT_MAX;
        
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] == x) xd = i;
            if(arr[i] == y) yd = i;
            
            if(xd != -1 && yd != -1) {
                min_dist = min(min_dist, abs(xd - yd));
            }
        }
        
        return (xd == -1 || yd == -1) ? -1 : min_dist;
    }
};

// Example usage
int main() {
    vector<int> arr = {1, 2, 3, 2};
    int x = 1, y = 2;
    Solution sol;
    cout << sol.minDist(arr, x, y) << endl; // Output: 1
    return 0;
}
