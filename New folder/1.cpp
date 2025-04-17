class Solution {
    public:
      int firstIndex(vector<int> &arr) {
          // Your code goes here
          for(int i=0;i<arr.size();i++){
              if(arr[i]==1){
                  return i;
              }
          }
          return -1;
      }
  };