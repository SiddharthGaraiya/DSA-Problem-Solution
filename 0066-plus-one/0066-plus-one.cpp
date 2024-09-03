class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        if (digits[n-1]!=9)
        {
            digits[n-1]++;
            return digits;
        }
        
        int i = n-1;
        while (i>=0 && digits[i]==9){
            i--;
        }
        if (i==-1){
            digits[0]=1;
            for (i=1;i<n;i++){
                digits[i]=0;
            }
            digits.push_back(0);
        }else{
            digits[i]++;
            i++;
            while (i<=n-1){
                digits[i]=0;
                i++;
            }
        }
        return digits;
    }
};