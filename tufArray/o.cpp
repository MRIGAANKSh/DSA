#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr={1,2,2,3,3};
    for(int i=0;i<arr.size();i++){
        int num=arr[i];
        int c=0;
        for(int j=i;j<arr.size();j++){
            if(arr[j]==num){
                c++;
            }
        }
        if(c==0){
            cout << arr[i] << endl;
            break;
        }
    }
    return 0;
}