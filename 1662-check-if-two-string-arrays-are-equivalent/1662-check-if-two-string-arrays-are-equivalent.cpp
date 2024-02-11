class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n1=word1.size();
        int n2=word2.size();
        int i=0;
        int j=0;
        int i2=0;
        int j2=0;
        
        while (i<n1 && j<n2){
            if (word1[i][i2]!=word2[j][j2])
                return false;
            i2++;j2++;
            if (i2==word1[i].length()){
                i2=0;
                i++;
            }
            if (j2==word2[j].length()){
                j2=0;
                j++;
            }
        }
        if (i==word1.size()&& j==word2.size())
            return true;
        return false;
    }
};