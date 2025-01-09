// Majority Element
// Difficulty: MediumAccuracy: 27.82%Submissions: 677K+Points: 4
// Given an array arr. Find the majority element in the array. If no majority exists, return -1.

// A majority element in an array is an element that appears strictly more than arr.size()/2 times in the array.

// Examples:

// Input: arr[] = [3, 1, 3, 3, 2]
// Output: 3
// Explanation: Since, 3 is present more than n/2 times, so it is the majority element.

class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        int candidate = -1, count = 0;
        
        // Phase 1: Find the candidate for majority element
        for (int num : arr) {
            if (count == 0) {
                candidate = num;
            }
            count += (num == candidate) ? 1 : -1;
        }
        
        // Phase 2: Validate the candidate
        int countOccurrence = 0;
        for (int num : arr) {
            if (num == candidate) {
                countOccurrence++;
            }
        }
        
        if (countOccurrence > arr.size() / 2) {
            return candidate;
        }
        return -1;
    }
};
