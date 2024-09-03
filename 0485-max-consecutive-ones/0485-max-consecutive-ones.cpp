class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxOnes = 0, currOnes = 0;
        
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                currOnes++;
                maxOnes = max(maxOnes, currOnes);
            } else {
                currOnes = 0;  
            }
        }
        
        return maxOnes;
    }
};
