class Solution {
    public:
      // Function to calculate sum of all numbers present in a string.
      int findSum(string& s) {
          int sum = 0;
          int num = 0;
          bool inNumber = false;
  
          for (char ch : s) {
              if (isdigit(ch)) {
                  num = num * 10 + (ch - '0');
                  inNumber = true;
              } else {
                  if (inNumber) {
                      sum += num;
                      num = 0;
                      inNumber = false;
                  }
              }
          }
  
          // Add the last number if string ends with a number
          if (inNumber) {
              sum += num;
          }
  
          return sum;
      }
  };
  