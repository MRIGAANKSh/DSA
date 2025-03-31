//hi
class Solution {
    public:
        int countPS(string &s) {
            int n = s.length();
            int count = 0;
            
            // Function to expand around the center and count palindromes
            auto expandAroundCenter = [&](int left, int right) {
                while (left >= 0 && right < n && s[left] == s[right]) {
                    if (right - left + 1 >= 2) // Consider only length >= 2
                        count++;
                    left--;
                    right++;
                }
            };
    
            // Loop through each character as a potential center
            for (int i = 0; i < n; i++) {
                // Odd-length palindromes (single character center)
                expandAroundCenter(i, i);
                // Even-length palindromes (two-character center)
                expandAroundCenter(i, i + 1);
            }
    
            return count;
        }
    };
    