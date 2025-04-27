class Solution {
    public:
      void segregateElements(vector<int>& arr) {
          int n = arr.size();
          vector<int> temp; // Temporary array to store result
          
          // First store positive elements
          for(int i = 0; i < n; i++) {
              if(arr[i] >= 0)
                  temp.push_back(arr[i]);
          }
          
          // Then store negative elements
          for(int i = 0; i < n; i++) {
              if(arr[i] < 0)
                  temp.push_back(arr[i]);
          }
          
          // Copy back to original array
          for(int i = 0; i < n; i++) {
              arr[i] = temp[i];
          }
      }
  };
  