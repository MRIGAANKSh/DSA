class Solution {
    public:
      int inSequence(int a, int b, int c) {
          if (c == 0) {
              return a == b ? 1 : 0;
          }
          // Check if (b - a) is divisible by c and if the result is non-negative
          if ((b - a) % c == 0 && (b - a) / c >= 0) {
              return 1;
          }
          return 0;
      }
  };
  