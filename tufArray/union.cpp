#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
    vector<int>arr1={1,2,3,4,5};
    vector<int>arr2={4,4,5,6,7};
    set<int>temp;
    for(int i=0;i<arr1.size();i++){
        temp.insert(arr1[i]);
    }
    for(int j=0;j<arr2.size();j++){
        temp.insert(arr2[j]);
    }
    for(auto & x:temp){
        cout << x << endl;
    }
    return 0;
}