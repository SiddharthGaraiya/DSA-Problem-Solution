class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        
        int mTotal = 0;
        for (int & roll : rolls){
            mTotal+=roll;
        }
        
        int total = (m+n)*mean;
        
        int nTotal = total - mTotal;
        
        int min = nTotal/n;
        if (min>6)return{};
        if (min<1) return {};
        vector<int> ans (n,min);
        nTotal-=(min*n);
        
        int i =0;
        while (nTotal--){
            if (ans[i]==6)return {};
            if (i>=n)return {};
            ans[i]++;
            i++;
        }
        
        return ans;
    }
};