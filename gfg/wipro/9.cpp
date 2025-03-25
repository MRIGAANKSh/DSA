#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
  public:
    long long ExtractNumber(string sentence) {
        stringstream ss(sentence);
        string word;
        vector<long long> validNumbers;

        while (ss >> word) {
            // Check if the word is a number
            if (all_of(word.begin(), word.end(), ::isdigit) && word.find('9') == string::npos) {
                validNumbers.push_back(stoll(word));
            }
        }

        // Return the largest valid number or -1 if none exist
        return validNumbers.empty() ? -1 : *max_element(validNumbers.begin(), validNumbers.end());
    }
};

// Example usage
int main() {
    Solution sol;
    string sentence = "This is alpha 5057 and 97";
    cout << sol.ExtractNumber(sentence) << endl; // Output: 5057
    return 0;
}
