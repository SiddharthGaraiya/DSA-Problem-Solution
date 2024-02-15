class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        long long perimeter=0;
        long long cs=0;
        sort(nums.begin(),nums.end());
        for (int i =0;i<n;i++){
            if (nums[i]<cs){
                perimeter=cs+nums[i];
            }
            cs+=nums[i];
        }
        return perimeter==0?-1:perimeter;
    }
};