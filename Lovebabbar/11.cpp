class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int p = pivot(nums);

        // Binary search in the appropriate half
        if (target >= nums[p] && target <= nums[n - 1]) {
            return binarySearch(nums, p, n - 1, target);
        } else {
            return binarySearch(nums, 0, p - 1, target);
        }
    }

private:
    int pivot(vector<int>& nums) {
        int s = 0, e = nums.size() - 1;
        while (s < e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] >= nums[0]) {
                s = mid + 1;
            } else {
                e = mid;
            }
        }
        return s; // index of smallest element (pivot)
    }

    int binarySearch(vector<int>& nums, int s, int e, int target) {
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] < target) s = mid + 1;
            else e = mid - 1;
        }
        return -1;
    }
};


class Solution {
public:
    int mySqrt(int x) {
        int s=0;
        int ans;
        int e=x;
        long long int mid=s+(e-s)/2;
        while(s<=e){
            long long int sq=mid*mid;
            if(sq==x){
                return mid;
            }
            if(sq<x){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            } 
           
        } return ans;
    }
};