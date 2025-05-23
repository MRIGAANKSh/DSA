#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPossible(vector<int>& stalls, int k, int mid) {
        int cowCount = 1;
        int lastPos = stalls[0];

        for (int i = 1; i < stalls.size(); i++) {
            if (stalls[i] - lastPos >= mid) {
                cowCount++;
                lastPos = stalls[i];
                if (cowCount == k)
                    return true;
            }
        }
        return false;
    }

    int aggressiveCows(vector<int> &stalls, int k) {
        sort(stalls.begin(), stalls.end());

        int s = 1;
        int e = stalls.back() - stalls.front();
        int ans = -1;

        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (isPossible(stalls, k, mid)) {
                ans = mid;
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return ans;
    }
};


//painter problem
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Check if mid is a feasible maximum time for k painters
    bool isPossible(vector<int>& arr, int k, int mid) {
        int painters = 1;
        int currTime = 0;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > mid)
                return false; // A single board too big

            if (currTime + arr[i] > mid) {
                painters++;
                currTime = arr[i];

                if (painters > k)
                    return false;
            } else {
                currTime += arr[i];
            }
        }

        return true;
    }

    int findLargestMinTime(vector<int>& arr, int k) {
        int s = 0;
        int e = accumulate(arr.begin(), arr.end(), 0);
        int ans = -1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (isPossible(arr, k, mid)) {
                ans = mid;
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }

        return ans;
    }
};
