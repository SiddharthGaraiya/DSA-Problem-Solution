class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        
        int majElement=nums[0];
        int count = 1;
        for (int i =1;i<n;i++){
            if (nums[i]==majElement) count++;
            if (nums[i]!=majElement){
                if (count>=1){
                    count--;
                }else {
                    majElement=nums[i];
                    count=1;
                }
            }
        }
        return majElement;
    }
};