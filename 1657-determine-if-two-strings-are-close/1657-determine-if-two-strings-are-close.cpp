class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int s1=word1.length();
        int s2=word2.length();
        
        vector<int>arr_word1(26);
        vector<int>arr_word2(26);
        for (char &ch:word1){
            arr_word1[ch-'a']++;
        }
        
        for (char &ch:word2){
            if (arr_word1[ch-'a']==0)return false;
            arr_word2[ch-'a']++;
        }
        
        sort(arr_word1.begin(),arr_word1.end());
        sort(arr_word2.begin(),arr_word2.end());
        
        return arr_word1==arr_word2;
    }
};