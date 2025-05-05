class Solution {
    public:
      vector<int> findIndex(vector<int>& arr, int key) {
          int start = -1, end = -1;
  
          for(int i = 0; i < arr.size(); i++) {
              if(arr[i] == key) {
                  if(start == -1) {
                      start = i;  // first occurrence
                  }
                  end = i;  // update every time, so it ends with the last occurrence
              }
          }
  
          return {start, end};
      }
  };
  