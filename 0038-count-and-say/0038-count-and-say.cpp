class Solution {
public:
    string solve(int n){
        if (n==1){
            return "1";
        }
        
        string say=solve(n-1);
        int size=say.size();
        int i=0;
        string ans="";
        int idx=0;
        while (i<size){
            int curr_char=say[i];
            int count =0;
            while (i<size&&say[i]==curr_char){
                count++;
                i++;
            }
            ans.append(to_string(count));
            ans.append(1,curr_char);
        }
        return ans;
    }
    
    string countAndSay(int n) {
        return solve(n);
    }
};