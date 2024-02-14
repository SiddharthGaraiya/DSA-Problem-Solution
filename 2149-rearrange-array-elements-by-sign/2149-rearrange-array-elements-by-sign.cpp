class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pi=0;
        int n =nums.size();
        int ni=1;
        vector<int>result(n);
        for (int i=0;i<n ;i++){
            if (nums[i]<0){
                result[ni]=nums[i];
                ni+=2;
            }else {
                result[pi]=nums[i];
                pi+=2;
            }
        }
        return result;
    }
};