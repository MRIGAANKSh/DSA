#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int left = 0, right = arr.size() - 1;
        while (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
};

// Driver code
int main() {
    vector<int> arr = {1, 4, 3, 2, 6, 5};
    
    Solution obj;
    obj.reverseArray(arr);
    
    // Output the reversed array
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
