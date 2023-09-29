class Solution {
    public boolean isMonotonic(int[] nums) {
        
                if(nums.length<2) return true;

        int i=0;
        while(nums[i]==nums[i+1]){
            if ( i==nums.length-2) return true;
            i++;
        } 
        
        
        
        if(nums[i]<nums[i+1]){
            for (int j=1;j<nums.length-1;j++){
                if(nums[j]>nums[j+1]) return false;
            }return true;
        }else if(nums[i]>nums[i+1]){
            for(int j=1;j<nums.length-1;j++){
                if (nums[j]<nums[j+1]) return false;
            }return true;
        }
        return true;
    }
}