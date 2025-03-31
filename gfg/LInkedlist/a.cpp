#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int> &arr) {
        if (arr.empty()) return 0; // Edge case for empty array

        int i = 0; // Pointer for unique elements

        for (int j = 1; j < arr.size(); j++) {
            if (arr[j] != arr[i]) { // Found a new unique element
                i++;
                arr[i] = arr[j]; // Move it to the correct position
            }
        }

        return i + 1; // New size of the array with distinct elements
    }
};

int main() {
    vector<int> arr = {2, 2, 2, 2, 2}; 
    Solution sol;
    int newSize = sol.removeDuplicates(arr);
    
    cout << "Modified array size: " << newSize << endl;
    cout << "Modified array: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
