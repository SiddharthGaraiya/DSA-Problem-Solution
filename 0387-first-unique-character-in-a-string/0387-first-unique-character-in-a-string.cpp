class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> mp;
        int n=s.size();
        
        for (int i=0;i<n;i++){
            if (mp.find(s[i])!=mp.end())
                mp[s[i]]=-10;
            else mp[s[i]]=i;
        }
        
        int minidx=1e5+10;
        for (auto it:mp){
            if (it.second!=-10){
                minidx=min(minidx,it.second);
            }
        }
        if (minidx==1e5+10) return -1;
        return minidx;
    }
};