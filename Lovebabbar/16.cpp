class Solution {
  public:
    bool ispossible(const vector<int>& arr, int mid, int k) {
        int students = 1;
        int pages = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > mid) return false;  // A book can't be bigger than mid

            if (pages + arr[i] > mid) {
                students++;
                pages = arr[i];
            } else {
                pages += arr[i];
            }
        }
        return students <= k;
    }

    int findPages(vector<int> &arr, int k) {
        if (k > arr.size()) return -1;

        int sum = 0;
        int max_val = 0;
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
            max_val = max(max_val, arr[i]);
        }

        int s = max_val, e = sum;
        int ans = -1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (ispossible(arr, mid, k)) {
                ans = mid;
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }

        return ans;
    }
};


//book allocation problem