class Solution {
    public int[] sortArrayByParity(int[] nums) {
        int left = 0;
        int right = nums.length - 1;
        
        while (left < right) {
            // Move left pointer to find an odd number
            while (left < right && nums[left] % 2 == 0) {
                left++;
            }
            
            // Move right pointer to find an even number
            while (left < right && nums[right] % 2 != 0) {
                right--;
            }
            
            // Swap the even and odd numbers
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            
            // Move both pointers inward
            left++;
            right--;
        }
        
        return nums;
    }
}
