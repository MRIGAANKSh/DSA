class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        // code here
        int n=arr.size();
        for(int i=0;i<n-1;i++){
            int maxi=i;
            for(int j=i+1;j<n;j++){
                if(arr[maxi]>arr[j]){
                    maxi=j;
                }
            }
            swap(arr[maxi],arr[i]);
        }
    }
};

//selection sort
