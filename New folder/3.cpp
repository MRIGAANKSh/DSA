
class Solution {
    public:
      int sumOfSeries(int n) {
          // code here
          int sum=0;
          for(int i=1;i<n+1;i++){
              sum=sum+(i*i*i);
          }
          return sum;
      }
  };