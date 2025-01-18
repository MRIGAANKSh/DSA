#include<iostream>
#include<vector>

using namespace std;


int main(){
    vector<int>arr={125,34,3,2,3};
    bool sort=true;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>arr[i+1]){
            sort=false;
            break;
        }
        else{
            sort=true;
        }
    }
    if(sort){
        cout << "array is sorted" << endl;
    }
    else{
        cout << "array is not sorted" << endl;
    }
}