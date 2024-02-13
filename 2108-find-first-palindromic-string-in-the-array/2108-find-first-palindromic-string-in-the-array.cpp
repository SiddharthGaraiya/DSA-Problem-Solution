class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n = words.size();
        
        for (string word:words){
            if (word==string(word.rbegin(),word.rend()))
                return word;
        }
        return "";
    }
};