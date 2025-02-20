// Find median in a stream
// Difficulty: HardAccuracy: 30.34%Submissions: 130K+Points: 8Average Time: 45m
// Given a data stream arr[] where integers are read sequentially, the task is to determine the median of the elements encountered so far after each new integer is read.

// There are two cases for median on the basis of data set size.

// 1. If the data set has an odd number then the middle one will be consider as median.
// 2. If the data set has an even number then there is no distinct middle value and the median will be the arithmetic mean of the two middle values.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<double> getMedian(vector<int> &arr) {
        vector<double> result;
        vector<int> temp; // Stores elements in sorted order

        for (int num : arr) {
            // Insert `num` in the correct sorted position
            auto pos = lower_bound(temp.begin(), temp.end(), num);
            temp.insert(pos, num); // O(N) in worst case, but avoids full sorting
            
            int n = temp.size();
            if (n % 2 == 1) {
                result.push_back(temp[n / 2]); // Odd case
            } else {
                result.push_back((temp[n / 2] + temp[(n / 2) - 1]) / 2.0); // Even case
            }
        }
        return result;
    }
};

int main() {
    vector<int> arr = {5, 15, 1, 3};
    Solution sol;
    vector<double> medians = sol.getMedian(arr);

    for (double median : medians) {
        cout << median << " ";
    }
    return 0;
}
