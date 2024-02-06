#include <vector>
#include <algorithm>

class Solution {
public:
    void nextPermutation(std::vector<int>& nums) {
        int n = nums.size();
        int i = n - 1;
        
        while (i > 0 && nums[i - 1] >= nums[i]) {
            i--;
        }
        
        if (i == 0) {
            std::sort(nums.begin(), nums.end());
        } else {
            i--;
            int j = n - 1;
            
            while (nums[j] <= nums[i]) {
                j--;
            }
            
            std::swap(nums[i], nums[j]);
            std::reverse(nums.begin() + i + 1, nums.end());
        }
    }
};
