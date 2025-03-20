#include <vector>
using namespace std;

class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(vector<int>& arr) {
        int n = arr.size();
        bool swapped;  // Optimization: Track swaps to stop early

        for (int i = 0; i < n - 1; i++) {
            swapped = false;
            for (int j = 0; j < n - i - 1; j++) {  // Avoid unnecessary checks
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);  // Swap elements
                    swapped = true;
                }
            }
            // If no swaps occurred, array is already sorted
            if (!swapped) break;
        }
    }
};
