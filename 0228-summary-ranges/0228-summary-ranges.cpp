class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n =nums.size();
        vector<string>v;
        
        for (int i=0;i<n;i++){
            int first=nums[i];
            while(i+1<n&&nums[i]+1==nums[i+1]){
                i++;
            }
            if (first==nums[i]){
                v.push_back(to_string(first));
            }
            else
                v.push_back(to_string(first)+"->"+to_string(nums[i]));
        }
        return v;
    }
};