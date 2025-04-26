class Solution {
    public:
      int minimumInteger(int N, vector<int> &A) {
          // code here
          long long sum = 0;
          for (int i = 0; i < N; i++) {
              sum += A[i];
          }
  
          int ans = INT_MAX;
          for (int i = 0; i < N; i++) {
              if ((long long)A[i] * N >= sum) {
                  ans = min(ans, A[i]);
              }
          }
          return ans;
      }
  };
  