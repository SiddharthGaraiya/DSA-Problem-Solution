class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev=nums[0];
        int count=0;
        int i =0;
        for(int &num : nums){
            if(num==prev){
                if(count<2){
                    nums[i]=num;
                    i++;
                    count++;
                }
            }else{
                nums[i]=num;
                i++;
                count=1;
                prev=num;
            }
        }
        return i;
    }
};