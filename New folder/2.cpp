class Solution {
    public:
      long long int product(vector<int> &arr) {
          long long int prod = 1;
          int mod = 1000000007;
          for (int i = 0; i < arr.size(); i++) {
              prod = (prod * arr[i]) % mod;
          }
          return prod;
      }
  };
  