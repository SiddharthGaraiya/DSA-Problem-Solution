class Solution {
public:
    
    
    
    string frequencySort(string s) {
        int n =s.size();
        vector<pair<char,int>>v(123);
        for (int i=0;i<n;i++){
            v[s[i]].first=s[i];
            v[s[i]].second++;
        }
        
        auto comp=[&](pair<char,int>&p1,pair<char,int>&p2){
            return p1.second>p2.second;
        };
        sort(v.begin(),v.end(),comp);
        
        string str="";
        for (auto p:v){
            str.append(string(p.second,p.first));
        }
        return str;
    }
};