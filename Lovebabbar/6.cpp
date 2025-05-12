#include<iostream>
#include<cmath>
using namespace std;

// int main(){
//     int i=0;
//     int ans=0;
//     int n;
//     cin>>n;
//     while(n!=0){
//         int bit=n&1;
//          ans = (bit * pow(10, i)) + ans;
//         n=n>>1;
//         i++;
//     }
//     cout << ans;
// }

int main(){
    int ans = 0;
    int i = 0;
    int n;
    cin >> n; // input binary number as an integer (e.g., 1011)

    while(n != 0){
        int dig = n % 10;
        if(dig == 1){
            ans += pow(2, i);
        }
        n = n / 10;
        i++;
    }

    cout << ans;
    return 0;
}