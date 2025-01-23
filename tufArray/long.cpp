#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int > arr={1,-2,3,4,2};
    int k=7;
    int sum=0;
    int c=0;
    for(int i=0;i<arr.size();i++){
        for(int j=i;j<arr.size();j++){
            sum+=arr[j];
            c++;
            if(sum==k){
                break;
            }
        }
        if(sum==k){
            break;
        }
        if(sum>k){
            sum=0;
            c=0;
        }
    }
    cout << c << endl;
}