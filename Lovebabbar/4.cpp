#include<iostream>
using namespace std;

int main(){
    int i = 5;
    while(i > 0){
        int k = 0;
        while(k < i){
            cout << k;
            k++;
        }
        int j = 5 - i;
        while(j > 0){
            cout << "*";
            j--;
        }
        int p = i;
        while(p > 0){
            cout << p;
            p--;
        }
        cout << endl;  // Move to next line for next pattern row
        i--;           // Decrement i to prevent infinite loop
    }
}
//pattern bn gya hai