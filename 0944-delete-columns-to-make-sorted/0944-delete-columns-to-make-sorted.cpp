class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int m=strs.size();
        int n =strs[0].length();
        int count=0;
        for (int i =0;i<n;i++){
            for (int j=1;j<m;j++){
                if (strs[j][i]<strs[j-1][i])
                {
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};