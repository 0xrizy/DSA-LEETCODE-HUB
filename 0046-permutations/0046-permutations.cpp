class Solution {
public:
    
    void fun(vector<int> &ds, vector<int>& nums, vector<vector<int>> &ans, int freq[]){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return ;
        }
        for(int i=0;i<nums.size();i++){
            if(freq[i]==1){
                continue;
            }
            freq[i]=1;
            ds.push_back(nums[i]);
            fun(ds,nums,ans,freq);
            ds.pop_back();
            freq[i]=0;
            
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++){
            freq[i]=0;
        }
        fun(ds,nums,ans,freq);
        return ans;
        
    }
};