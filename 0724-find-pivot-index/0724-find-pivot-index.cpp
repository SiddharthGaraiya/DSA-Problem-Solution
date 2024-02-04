class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n =nums.size();
        
        int sum=0;
        int totalsum=0;
        
        for (int i=0;i<n;i++){
            totalsum+=nums[i];
        }
        
        for (int i=0;i<n;i++){
            int ls=sum;
            int rs=totalsum-ls-nums[i];
            if (ls==rs)return i;
            sum+=nums[i];
        }
        return -1;
    }
};