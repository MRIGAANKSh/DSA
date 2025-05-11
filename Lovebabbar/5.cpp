//diff of prod and sum


// class Solution {
// public:
//     int subtractProductAndSum(int n) {
//         int sum=0;
//         int prod=1;
//         while(n!=0){
//             int rem=n%10;
//             sum=sum+rem;
//             prod=prod*rem;
//             n=n/10;
//         }
//         return prod-sum;
//     }
// };

//count 1 bit of a number
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while (n) {
            count += n & 1;  // Add 1 if the last bit is 1
            n >>= 1;         // Shift right to check the next bit
        }
        return count;
    }
};
