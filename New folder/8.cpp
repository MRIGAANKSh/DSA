class Solution {
    public:
      int findSum(vector<int>& arr) {
          // code here
          set<int> a(arr.begin(), arr.end()); // directly insert all elements
          int sum = 0;
          for (int val : a) {
              sum += val;
          }
          return sum;
      }
  };