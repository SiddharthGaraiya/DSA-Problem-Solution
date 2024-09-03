class Solution {
public:
    int getLucky(string s, int k) {
        string digits = "";
        
        for (char &c : s){
            int num = c-'a'+1;
            digits+= to_string(num);
        }
        
        long long int ans = 0;
        while (k--){
            ans =0;
            for (char &c : digits){
                ans += c-'0';
            }
            digits = to_string (ans);
        }
        return ans;
    }
};