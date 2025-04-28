class Solution {
    public:
        vector<int> filterByDigits(const vector<int>& arr) {
            vector<int> result;
    
            for (int num : arr) {
                int temp = num;
                bool valid = true;
    
                if (temp == 0) valid = false; // Special case for 0
    
                while (temp > 0) {
                    int digit = temp % 10;
                    if (digit != 1 && digit != 2 && digit != 3) {
                        valid = false;
                        break;
                    }
                    temp /= 10;
                }
    
                if (valid) {
                    result.push_back(num);
                }
            }
    
            if (result.empty()) {
                return {-1};
            }
    
            return result;
        }
    };
    