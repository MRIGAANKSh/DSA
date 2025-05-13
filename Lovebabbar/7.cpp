int bitwiseComplement(int n) {
    int m = n;
    int mask = 0;
    
    // Special case: if n is 0, its complement is 1.
    if(m == 0){
        return 1;  // ❗ Correction: this should return 1, not 0.
    }

    // Create a mask of all 1s of the same length as n's binary form.
    while(m != 0){
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    // Apply the mask to the bitwise NOT of n.
    int ans = (~n) & mask;
    return ans;
}


// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         int ans=1;
//         for(int i=0;i<=30;i++){
//             if(ans==n){
//                 return true;
//             }
//             if(ans<INT_MAX/2){
//                 ans=ans*2;
//             }
            
//         }
//         return false;
        
//     }
// };