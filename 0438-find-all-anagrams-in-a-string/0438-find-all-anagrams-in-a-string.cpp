class Solution {
public:
    
    bool isAnagram(vector<int> &freq){
        for(int &i : freq){
            if (i!=0)
                return false;
        }
        return true;
    }
    
    vector<int> findAnagrams(string s, string p) {
        int n = s.length();
        
        vector<int> freq(26,0);
        
        for (char &ch : p){
            freq[ch-'a']++;
        }
        
        vector<int> ans;
        int i ,j =0;
        while (j<n){
            freq[s[j]-'a']--;
            if (j-i+1 ==p.length()){
                if(isAnagram(freq)){
                    ans.push_back(i);
                }
                freq[s[i]-'a']++;
                i++;
            }
            j++;
        }
                     
        return ans;                         
    }
};