class Solution {
    public:
      int search(int k, vector<int>& arr) {
          // code here
          for(int i=0;i<arr.size();i++){
              if(arr[i]==k){
                  return i+1;
              }
          }
          return -1;
      }
  };