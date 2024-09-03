class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx = 0;
        for (int i =0;i<nums.size();i++){
            while (i!= nums.size()-1 && nums[i]==nums[i+1])
                i++;
            nums[idx]=nums[i];
            idx++;
        }
        return idx;
    }
};