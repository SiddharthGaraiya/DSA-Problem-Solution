class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n =nums.size();
        int c1=0;
        int mej1=NULL;
        int c2=0;
        int mej2=NULL;
        
        for (int i =0;i<n;i++){
            if(nums[i]==mej1){
                c1++;
            }else if (nums[i]==mej2){
                c2++;
            }
            else if (c1==0){
                mej1=nums[i];
                c1=1;
            }else if (c2==0){
                mej2=nums[i];
                c2=1;
            }
            else{
                c1--;
                c2--;
            }
        }
        
        
        c1=0;
        c2=0;
        for (int i:nums){
            if (i==mej1) c1++;
            else if (i==mej2) c2++;
        }
        
        vector<int>result;
        if (c1>floor (n/3))result.push_back(mej1);
        if (c2>floor (n/3))result.push_back(mej2);
        return result;
    }
};