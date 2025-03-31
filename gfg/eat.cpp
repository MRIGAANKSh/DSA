// Jumping Caterpillars
// Difficulty: EasyAccuracy: 22.73%Submissions: 19K+Points: 2
// Given n leaves numbered from 1 to n. A caterpillar at leaf 1. The array contains the jump power of the caterpillar.  The caterpillar jumps from leaf to leaf in multiples of arr[j],  j is specific to the caterpillar. Whenever a caterpillar reaches a leaf, it eats it a little bit. You have to find out how many leaves are left uneaten after all caterpillars have reached the end. Each caterpillar has its own jump factor denoted by arr[j], and each caterpillar starts at leaf number 1.

// Examples:

// Input: arr[] = [2, 3, 5], n = 10 
// Output: 2
// Explanation: The leaves eaten by the first caterpillar are (2, 4, 6, 8, 10). The leaves eaten by the second caterpilllar are (3, 6, 9). The leaves eaten by the third caterpilllar are (5, 10). Ultimately, the uneaten leaves are 1, 7 and their number is 2.


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int uneatenLeaves(vector<int>& arr, int n) {
        vector<bool> eaten(n + 1, false); // Boolean array to mark eaten leaves

        for (int jump : arr) {
            for (int leaf = jump; leaf <= n; leaf += jump) { // Jumping step-wise
                eaten[leaf] = true;
            }
        }

        // Counting uneaten leaves
        int uneaten_count = 0;
        for (int i = 1; i <= n; i++) {
            if (!eaten[i]) uneaten_count++;
        }

        return uneaten_count;
    }
};

int main() {
    Solution obj;
    vector<int> arr = {2, 3, 5};
    int n = 10;
    cout << obj.uneatenLeaves(arr, n) << endl; // Output: 2
    return 0;
}
