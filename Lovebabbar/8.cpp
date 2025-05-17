//uniq occurence of ele in array of there count...



class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int>ans;
        int c=1;
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size();i++){
            if(arr[i]==arr[i-1]){
                c+=1;
            }else{
                ans.push_back(c);
                c=1;
            }
        }
        ans.push_back(c);

        for(int i=0;i<ans.size()-1;i++){
            for(int j=i+1;j<ans.size();j++){
                if(ans[i]==ans[j]){
                    return false;
                }
            }
        }
        return true;
    }
};

//duplicate array
class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        vector<int>ans;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1]){
               ans.push_back(arr[i]); 
            }
        }
        return ans;
    }
};