// Search an element in sorted and rotated array
// Difficulty: EasyAccuracy: 41.3%Submissions: 52K+Points: 2Average Time: 20m
// Given a sorted and rotated array A of N distinct elements which are rotated at some point, and given an element K. The task is to find the index of the given element K in array A.

// Example 1:

// Input:
// N = 9
// A[] = {5,6,7,8,9,10,1,2,3}
// K = 10
// Output: 5
// Explanation: 10 is found at index 5.

int Search(vector<int> vec, int K) {
    //code here
    for(int i=0;i<vec.size();i++){
        if(vec[i]==K){
            return i;
        }
    }
    return -1;
}