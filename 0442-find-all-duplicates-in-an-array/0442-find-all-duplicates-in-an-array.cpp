class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        int n =nums.size();
        for (int i =0;i<n;i++){
           int a=abs(nums[i]);
            
            int idx=a-1;
            
            if (nums[idx]<0){
                result.push_back(a);
            }else 
                nums[idx]*=-1;
        }
        return result;
    }
};