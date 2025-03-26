class Solution {
    public:
      int* checkDoorStatus(int N) {
          int* doors = new int[N]();  // Initialize all doors to 0 (closed)
          
          for (int i = 1; i * i <= N; i++) {
              doors[i * i - 1] = 1;  // Mark perfect squares as open
          }
          
          return doors;
      }
  };
  