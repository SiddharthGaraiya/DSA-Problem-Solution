class Solution {
public:
    vector<vector<int>> result;
    
    void twoSum(vector<int> &nums,int target,int i,int j){
        while(i<j){
            if (nums[i]+nums[j]>target) j--;
            else if(nums[i]+nums[j]<target) i++;
            else {
                while(i<j&&nums[i]==nums[i+1]) i++;
                while (i<j&& nums[j]==nums[j-1]) j--;
                result.push_back({-target,nums[i],nums[j]});
                i++;
                j--;
            }
            
        }
    }
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        result.clear();    
        sort (begin(nums),end(nums));
        
        for (int i=0;i<n-2;i++){
            if (i>0&&nums[i]==nums[i-1]){
                continue;
            }
            int target =-nums[i];
            twoSum(nums,target,i+1,n-1);
        }
        return result;
    }
    
};