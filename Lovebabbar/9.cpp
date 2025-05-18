*Complete the function below*/

class Solution {
  public:
    bool isPalinArray(vector<int> &arr) {
        // code here
       for(int i = 0; i < arr.size(); i++) {
            if(!palin(arr[i])) {
                return false;
            }
        }
        return true;
        
    }
    bool palin(int n){
        int num = n;
        int sum = 0;
        while(num != 0) {
            int rem = num % 10;
            sum = sum * 10 + rem;
            num = num / 10;
        }
        return sum == n;
    }
};
