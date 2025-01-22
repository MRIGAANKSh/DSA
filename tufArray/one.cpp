#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr={1,1,2,2,2,1,1,1,1};
    int c=0;
    int maxc=0;
    int i=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            c++;
        }
        else{
            c=0;
        }
        maxc=max(c,maxc);
    }
    cout << maxc << endl;
    return 0;
}