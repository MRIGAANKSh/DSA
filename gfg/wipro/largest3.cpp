class Solution {
    public:
      int thirdLargest(vector<int> &arr) {
          // Your code here
         if (arr.size() < 3) return -1; // or throw an error depending on requirements
          
          sort(arr.begin(), arr.end(), greater<int>());
          return arr[2]; // 3rd largest element
      }
  };