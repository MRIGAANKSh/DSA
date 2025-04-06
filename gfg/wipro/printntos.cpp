class Solution {
    public:
      void printNos(int N) {
          if (N == 0) return;         // Base case
          cout << N << " ";           // Print current number
          printNos(N - 1);            // Recursive call with N-1
      }
  };
  