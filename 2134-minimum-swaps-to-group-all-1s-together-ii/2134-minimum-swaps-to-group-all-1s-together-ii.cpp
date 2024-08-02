class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        
        int windowSize=0;
        for (int &num:nums){
            windowSize+=num;
        }
       
        if (windowSize == 0)
            return 0;
        
        
        int i=0,j=0;
        int currSwap=0;
        int minSwap= INT_MAX;
        while (j<2*n){
            if (nums[j%n]==0)
                currSwap++;
            
            if (j-i+1 == windowSize)
            {
                minSwap=min(currSwap,minSwap);
                if (nums[i%n]==0)
                    currSwap--;
                i++;
            }
            j++;
        }
        return minSwap;
    }
};