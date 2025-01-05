#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

// int main(){
//     cout << "enter number\n";
//     int n;
//     cin >> n;
//     int ct=0;
//     while(n>0){
//         ct=ct+1;
//         n=n/10;
//     }
//     cout << "size of number is " << ct << endl;
//     return 0;
// }
//optimal  int cnt = (int)(log10(n)+1);

int main(){
    cout << "enter number\n";
    int n;
    cin >> n;
    int cnt = (int)(log10(n)+1);
    cout << "size is " << cnt << endl;
    return 0;
}