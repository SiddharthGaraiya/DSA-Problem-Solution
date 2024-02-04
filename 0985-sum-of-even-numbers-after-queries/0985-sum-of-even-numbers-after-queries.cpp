class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        int sum=0;
        for (int i=0;i<n;i++){
            if (!(nums[i]&1)){
                sum+=nums[i];
            }
        }
        
        int size=queries.size();
        vector<int>result;
        for (auto &val:queries){
            if (!(nums[val[1]]&1)){
                sum-=nums[val[1]];
            }
            nums[val[1]]+=val[0];
            if (!(nums[val[1]]&1)){
                sum+=nums[val[1]];
            }
            result.push_back(sum);
        }
        return result;
    }
};