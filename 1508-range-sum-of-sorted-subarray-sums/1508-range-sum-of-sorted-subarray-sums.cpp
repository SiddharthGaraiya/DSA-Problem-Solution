class Solution {
public:
    int M = 1e9+7;
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> subarraySum;
        for (int i =0;i<n;i++){
            int sum=0;
            for (int j =i;j<n;j++){
                sum+=nums[j];
                subarraySum.push_back(sum);
            }
        }
        
        sort(begin(subarraySum),end(subarraySum));
        
        int result =0;
        for (int i =left-1;i<=right-1;i++){
            result = (result +subarraySum[i])%M;
        }
        return result;
    }
};