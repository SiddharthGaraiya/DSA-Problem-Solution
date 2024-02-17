class Solution {
public:
    int largestVariance(string s) {
        
        int n =s.length();
        
        vector<int>f(26);
        for (char &c:s){
            f[c-'a']++;
        }
    
        int result=0;
        
        for (char first='a';first<='z';first++){
            for (char second='a';second<='z';second++){
                if (f[first-'a']==0||f[second-'a']==0)
                    continue;
                
                
                int firstCount=0;
                int secondCount=0;
                bool pastSecond=false;
                for (char &c:s){
                    if (c==first)
                        firstCount++;
                    if (c==second)
                        secondCount++;
                    
                    if (secondCount>0){
                        result=max(result,firstCount-secondCount);
                    }else if (pastSecond==true){
                        result=max(result,firstCount-1);
                    }
                    
                    if (secondCount>firstCount)
                    {
                        firstCount=0;
                        secondCount=0;
                        pastSecond=true;
                    }
                }
                
            }
        }
        return result;
    }
};