class Solution {
    public:
      int getSingle(vector<int>& arr) {
          // code here]
          int result = 0;
          for (int num : arr) {
              result ^= num;
          }
          return result;
      }
  };