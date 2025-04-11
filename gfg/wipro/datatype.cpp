class Solution {
    public:
      int dataTypeSize(string str) {
          if (str == "Integer") {
              return sizeof(int);
          } else if (str == "Long") {
              return sizeof(long);
          } else if (str == "Float") {
              return sizeof(float);
          } else if (str == "Double") {
              return sizeof(double);
          } else if (str == "Character") {
              return sizeof(char);
          }
          return -1; // for unsupported types
      }
  };
  