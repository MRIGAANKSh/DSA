#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> arr={1,3,4,555,96,33,2,4,54,4,2,23};
    sort(arr.begin(),arr.end());
    
    cout <<"second" << arr[arr.size()-2] << endl;
}