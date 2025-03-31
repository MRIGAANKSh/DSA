class Solution {
    public:
      int maxLength(string& s) {
          stack<int> st;
          st.push(-1); // Base index for valid substring calculation
          int maxLength = 0;
  
          for (int i = 0; i < s.length(); i++) {
              if (s[i] == '(') {
                  st.push(i); // Store the index of '('
              } else { // s[i] == ')'
                  st.pop(); // Try to match with '('
                  if (!st.empty()) {
                      maxLength = max(maxLength, i - st.top());
                  } else {
                      st.push(i); // Update the base index for future valid substrings
                  }
              }
          }
  
          return maxLength;
      }
  };
  