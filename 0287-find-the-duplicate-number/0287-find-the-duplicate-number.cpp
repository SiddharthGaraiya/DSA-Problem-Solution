class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n =nums.size();
        
        for (int i=0;i<n;i++){
            int a =abs(nums[i]);
            int idx= a-1;
            
            if (nums[idx]<0)
                return idx+1;
            else nums[idx]*=-1;
        }
        return 0;
    }
};