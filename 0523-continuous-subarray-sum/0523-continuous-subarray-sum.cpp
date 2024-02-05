class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map <int,int>mp;
        mp[0]=-1;
        
        
        int sum=0;
        for (int i=0;i<n;i++){
            sum+=nums[i];
            int r=sum%k;
            if (mp.find(r)!=mp.end()){
                if (i-mp[r]>=2){
                    return true;
                }
            }else{
            mp[r]=i;
                }
        }
        
        return false;
    }
};