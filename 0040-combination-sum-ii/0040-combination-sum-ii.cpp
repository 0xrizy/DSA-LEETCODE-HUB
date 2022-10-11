class Solution {
public:
    void fun(int ind, int target, vector<int> arr,vector<vector<int>> &ans, vector<int> &ds){
        if(target ==0){
            ans.push_back(ds);
            return;
        }
        for(int i =ind;i<arr.size();i++){
            //means we skip the iteration bcz of DUPLICATE picking
            if(i>ind && arr[i]==arr[i-1]) continue; //The continue statement breaks one iteration

            if(arr[i]>target) break;
            ds.push_back(arr[i]);
            fun(i+1,target-arr[i],arr,ans,ds);
            ds.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> ds;
        vector<vector<int>> ans;
         
        fun(0,target,candidates,ans,ds);
        return ans;
    }
};