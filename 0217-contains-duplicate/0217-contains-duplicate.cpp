class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i] == nums[i+1]){
        //         return true;                 O(nlogn)
        //         break;
        //     }
        // }
        // return false;
        
        unordered_set<int> set ;
        
        for(int i=0;i<nums.size();i++){
            if(set.count(nums[i])){
                return true;
            }
            else set.insert(nums[i]);
        }
        return false;
        

    }
};