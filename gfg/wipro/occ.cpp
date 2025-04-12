class Solution {
    public:
      vector<int> getAlternates(vector<int> &arr) {
          // code here
          vector<int>a;
          for(int i=0;i<arr.size();i+=2){
              a.push_back(arr[i]);
          }
          return a;
      }
  };