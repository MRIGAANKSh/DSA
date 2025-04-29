class Solution {
  public:
    void leftRotate(vector<int>& arr, int d) {
        int n = arr.size();
        if (n == 0 || d == 0 || d == n) return;

        d = d % n;  // In case d > n

        // Step 1: Copy first d elements to temp
        vector<int> temp(arr.begin(), arr.begin() + d);

        // Step 2: Shift remaining elements to the left
        for (int i = d; i < n; i++) {
            arr[i - d] = arr[i];
        }

        // Step 3: Append temp elements at the end
        for (int i = 0; i < d; i++) {
            arr[n - d + i] = temp[i];
        }
    }
};
