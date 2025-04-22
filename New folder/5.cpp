class Solution {
    public:
      string toLower(string& s) {
          // code here
        for (int i = 0; i < s.length(); i++) {
          s[i] = tolower(s[i]);
      }
      return s;
      }
  };

  //to lower string ....