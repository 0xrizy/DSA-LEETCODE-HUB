class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        
        unordered_map<char,int> set1;
        unordered_map<char,int> set2;

        for(int i=0;i<s.length();i++){
            set1[s[i]]++;
            set2[t[i]]++;
        }
        
        for(int i=0;i<set1.size();i++){
            if(set1[i]!=set2[i]) return false;
        }
        
        return true;
    }
};