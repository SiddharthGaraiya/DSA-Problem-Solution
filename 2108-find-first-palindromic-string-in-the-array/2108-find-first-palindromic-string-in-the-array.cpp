class Solution {
public:
    bool isPalindrome(string&word){
        int n =word.size();
        int lo=0;
        int hi =n-1;
        
        while (lo<hi){
            if (word[lo]!=word[hi])return false;
            else {
                lo++;
                hi--;
            }
        }
        return true;
    }
    
    
    string firstPalindrome(vector<string>& words) {
        int n = words.size();
        
        for (string word:words){
            if (isPalindrome(word))
                return word;
        }
        return "";
    }
};