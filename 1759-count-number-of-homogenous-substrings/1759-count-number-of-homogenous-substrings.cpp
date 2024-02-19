class Solution {
public:
    int M=1e9+7;
    int countHomogenous(string s) {
        int count=1;
        int result=0;
        
        for (int i=0;i<s.length();i++){
            if (i>0&&s[i]==s[i-1]){
                count++;
                result=(result+count)%M;
            }
            else{
                count=1;
                result=(result+1)%M;
            }
        }
        return result;
    }
};