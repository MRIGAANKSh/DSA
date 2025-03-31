// K Closest Points to Origin
// Difficulty: MediumAccuracy: 71.95%Submissions: 7K+Points: 4
// Given an array of points where each point is represented as points[i] = [xi, yi] on the X-Y plane and an integer k, return the k closest points to the origin (0, 0).

// The distance between two points on the X-Y plane is the Euclidean distance, defined as: 

// sqrt( (x2 - x1)2 + (y2 - y1)2 )

// Note: You can return the k closest points in any order, driver code will sort them before printing.


#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // Helper function to calculate squared distance
        auto dist = [](const vector<int>& p) {
            return p[0] * p[0] + p[1] * p[1];
        };

        // QuickSelect Partition function
        auto partition = [&](int left, int right) {
            vector<int> pivot = points[right];  // Choosing rightmost element as pivot
            int pivotDist = dist(pivot);
            int i = left;
            
            for (int j = left; j < right; j++) {
                if (dist(points[j]) <= pivotDist) {
                    swap(points[i], points[j]);
                    i++;
                }
            }
            swap(points[i], points[right]);
            return i;
        };

        // QuickSelect main function
        int left = 0, right = points.size() - 1;
        while (left <= right) {
            int pivotIndex = partition(left, right);
            if (pivotIndex == k) break;
            if (pivotIndex < k) left = pivotIndex + 1;
            else right = pivotIndex - 1;
        }

        return vector<vector<int>>(points.begin(), points.begin() + k);
    }
};
