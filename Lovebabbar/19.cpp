class Solution {
public:
    bool isPalindrome(string s) {
        string k = "";
        
        // Remove non-alphanumeric characters and convert to lowercase
        for (char c : s) {
            if (isalnum(c)) {
                k += tolower(c);
            }
        }

        int start = 0;
        int end = k.length() - 1;

        while (start < end) {
            if (k[start] != k[end]) {
                return false;
            }
            start++;
            end--;
        }

        return true;
    }
};
