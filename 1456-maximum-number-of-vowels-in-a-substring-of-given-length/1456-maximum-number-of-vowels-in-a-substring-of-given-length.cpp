class Solution {
public:
    int maxVowels(string s, int k) {
        int n =s.length();
        
        int i=0,j=0;
        int currentVowelCount=0;
        int maxCount=0;
        while (j<n){
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                currentVowelCount++;
            }
            if(currentVowelCount>maxCount)
                maxCount=currentVowelCount;
            
            if(j-i+1==k){
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                {
                    currentVowelCount--;
                }
                i++;
            }
            j++;
        }
        return maxCount;
    }
};