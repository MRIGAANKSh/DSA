#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr={1,2,4,5};
    int sum=0;
    
    int maxsum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    for(int j=1;j<=arr.size()+1;j++){
        maxsum+=j;
    }
    
    int ele=maxsum-sum;
    cout << "missing ele is" << ele << endl;
    return 0;
}