// Minimum Jumps
// Difficulty: MediumAccuracy: 11.91%Submissions: 926K+Points: 4
// Given an array arr[] of non-negative integers. Each array element represents the maximum length of the jumps that can be made forward from that element. This means if arr[i] = x, then we can jump any distance y such that y ≤ x. Find the minimum number of jumps to reach the end of the array starting from the first element. If an element is 0, then you cannot move through that element.

// Note:  Return -1 if you can't reach the end of the array.

// Examples : 

// Input: arr[] = [1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9]
// Output: 3 
// Explanation: First jump from 1st element to 2nd element with value 3. From here we jump to 5th element with value 9, and from here we will jump to the last. 
// Input: arr = [1, 4, 3, 2, 6, 7]
// Output: 2 
// Explanation: First we jump from the 1st to 2nd element and then jump to the last element.

// for loop code mine with only time complexity problem
//code

// class Solution {
//   public:
//     int minJumps(vector<int>& arr) {
//         // code here
        
//         int s=0;
//         int c=0;
//         for(int i=0;i<=arr.size();i+c){
//             c=arr[i];
//             s+=1;
//         }
//         return s;
//     }
// };

//optimal

#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        if (n <= 1){
           return 0; 
        }  
        if (arr[0] == 0) {
            return -1; 
            
        }

        int maxReach = arr[0]; // The farthest index reachable
        int steps = arr[0];    // Steps remaining in the current jump
        int jumps = 1;         // At least one jump needed

        for (int i = 1; i < n; i++) {
            if (i == n - 1) {
                return jumps; // If we've reached the end, return jumps
            }
            maxReach = max(maxReach, i + arr[i]); // Update the farthest we can go
            steps--; // Use one step to move to index i

            if (steps == 0) {
                jumps++; // We need another jump
                if (i >= maxReach) return -1; // If we can't move further, return -1
                steps = maxReach - i; // Update steps for the next jump
            }
        }

        return -1; // If the end is unreachable
    }
};
