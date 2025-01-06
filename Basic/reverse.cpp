//reverse a number
#include<iostream>
using namespace std;
int main(){
    cout <<"endter a number "<< endl;
    int n;
    cin >> n;
    int num=0;
    int r=n;
    while(r>0){
        int rem=r%10;
        num=rem+num*10;
        r=r/10;
    }

    cout << "reverse of number is "<< num<< endl;
    if(num==n){
        cout << "number is palindrome";
    }
    else{
        cout << "not" ;
    }
    return 0;
}