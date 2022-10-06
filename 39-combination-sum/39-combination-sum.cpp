class Solution {
public:
    void fun(int indx, vector<vector<int>>&ans,int target,vector<int> &candidates, int n,vector<int>&ds){
        //condition for each recursive call
      if(indx ==  n){
          //When the Target ==0 , we get the desired Combination
          if(target == 0){
              //PUSH DS into Answer Matrix
              ans.push_back(ds);
          }
          //return the function call when indx ==n
          return;
      }
        
        if(candidates[indx]<=target){
            //PICK - same indx
            ds.push_back(candidates[indx]);
            fun(indx,ans,target-candidates[indx],candidates,n,ds);
            //pop back for next indx call
            ds.pop_back();
        }
        //NOT PICK - Call next indx , didnt pick anything
        fun(indx+1,ans,target,candidates,n,ds);
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n= candidates.size();
        vector<int> ds;
        vector<vector<int>>ans;
        fun(0,ans,target,candidates,n,ds);
        return ans;
    }
};