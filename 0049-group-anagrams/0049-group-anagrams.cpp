class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        vector<vector<string>> ans;
        for(int i=0;i<strs.size();i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());
                map[temp].push_back(strs[i]);
            
        }
        
        for(auto i = map.begin(); i != map.end(); i++)
            ans.push_back(i -> second);
        return ans;
        
    }
};