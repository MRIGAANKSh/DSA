class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int>temp(n);
        for(int i=0;i<arr.size();i++){
            temp[(i+k)%n]=arr[i];
        }
        for(int i=0;i<temp.size();i++){
            arr[i]=temp[i];
        }
    }
};

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }
        return count <= 1;
    }
};
