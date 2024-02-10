class Solution {
public:
    bool check(string&s ,int i,int j){
        if (i>j){
            return true;
        }
        if (s[i]==s[j]){
            return check(s,i+1,j-1);
        }
        return false; 
    }
    
    
    int countSubstrings(string s) {
        int n =s.size();
        int count=0;
        for (int i =0;i<n;i++){
            for (int j =i;j<n;j++){
                bool b=check(s,i,j);
                if (b) count++;
            }
        }
        
        return count;
    }
};