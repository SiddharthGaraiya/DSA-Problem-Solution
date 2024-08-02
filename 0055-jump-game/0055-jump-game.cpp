class Solution {
public:
    int t[10001];
    bool solve(vector<int> & nums, int i ){
        if (i==nums.size()-1)
            return true;
        if (t[i]!=-1)
            return t[i];
        
        for (int j =1;j<=nums[i];j++)
        {
            if (solve(nums,i+j))
                return t[i]=true;
        }
        return t[i]=false;
        
    }
    
    bool canJump(vector<int>& nums) {
        memset(t,-1,sizeof(t));
        return solve(nums,0);
    }
};