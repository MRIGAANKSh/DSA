#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr={1,2,3,4,5};
    int tar=5;
    int start=0;
    int end=arr.size()-1;
    while(start<end){
        int mid=start+(end-start)/2;
        if(arr[mid]==tar){
            cout << mid;
            break;
        }
        else if(arr[mid]<tar){
            start=mid+1;
        }
        else if(arr[mid]>tar){
            end=mid;
        }
    }
    return 0;
}