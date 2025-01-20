#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr={1,3,4,5,6,7,4,3,3,2};
    int k=7;
    int loc;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==k){
            loc=i;
            break;
        }
    }
    cout << "element is at " << loc << endl;
    return 0;
}