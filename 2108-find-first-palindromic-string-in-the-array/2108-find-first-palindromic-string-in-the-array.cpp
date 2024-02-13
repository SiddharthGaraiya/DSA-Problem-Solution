class Solution {
public:
    string firstPalindrome(vector<string>& words) {        
        for (string word:words){
            int n =word.size();
            if (equal(word.begin(),word.begin()+n/2,word.rbegin()))
                return word;
        }
        return "";
    }
};