class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n =strs.size();
        
        unordered_map<string,vector<string>>mp;
        
        for (int i=0;i<n;i++){
            string str=strs[i];
            sort(strs[i].begin(),strs[i].end());
            
            mp[strs[i]].push_back(str);
            
            
        }
        vector<vector<string>>result;
        for (auto v:mp){
            result.push_back(v.second);
        }
        
        return result;
    }
};