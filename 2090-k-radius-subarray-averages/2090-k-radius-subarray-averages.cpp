class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        if (k==0)
            return nums;
        int n=nums.size();
        vector<int>ans(n,-1);
        
        if (n<(2*k)+1)
            return ans;
        
        
        int i =0,j=0;
        long long cs=0;
        while (j<n){
            cs+=nums[j];
            
            if(j-i+1 == (2*k)+1){
                long long avg=cs/((2*k)+1);
                ans[i+k]=avg;
                cs-=nums[i];
                i++;
            }
            
            j++;
        }
        return ans;
        
    }
};