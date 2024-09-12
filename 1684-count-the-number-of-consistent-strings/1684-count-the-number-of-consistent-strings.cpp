class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<int> freq(26,0);
        
        for (char &c: allowed){
            freq[c-'a']++;
        }
        
        int ans = 0 ;
        for (string & word : words){
            for (char & c : word){
                if (freq[c-'a']==0){
                    ans--;
                    break;
                }
            }   
            ans++;
        }
        
        return ans;
    }
};