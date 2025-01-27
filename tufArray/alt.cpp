#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr={1,2,-4,-5};
    int n=arr.size();
     vector<int> pos;
  vector<int> neg;
    for(int i=0;i<n;i++){
       if(arr[i]>0) pos.push_back(arr[i]);
      else neg.push_back(arr[i]);
    }
    for(int i=0;i<n/2;i++){
         arr[2*i] = pos[i];
      arr[2*i+1] = neg[i];
    }
    for(int k=0;k<n;k++){
        cout << arr[k];
    }
    return 0;

}