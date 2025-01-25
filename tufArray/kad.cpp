#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr={2,3,4,-1};
    int maxs=0;
    for(int i=0;i<arr.size();i++){
        int sum=0;
        for(int j=0;j<i;j++){
            sum+=arr[j];
        }
       if(sum>maxs){
        maxs=sum;
       }
    }
    cout << maxs << endl;
    return 0;
}
// long long maxSubarraySum(int arr[], int n) {
//     long long maxi = LONG_MIN; // maximum sum
//     long long sum = 0;

//     for (int i = 0; i < n; i++) {

//         sum += arr[i];

//         if (sum > maxi) {
//             maxi = sum;
//         }

//         // If sum < 0: discard the sum calculated
//         if (sum < 0) {
//             sum = 0;
//         }
//     }

//     // To consider the sum of the empty subarray
//     // uncomment the following check:

//     //if (maxi < 0) maxi = 0;

//     return maxi;
// }