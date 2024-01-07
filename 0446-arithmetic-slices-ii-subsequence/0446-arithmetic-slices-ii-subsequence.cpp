class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        unordered_map<long,int> mp[n];
        int res=0;
        
        for (int i=0;i<n;i++){
            for (int j=0;j<i;j++){
                long diff =(long)nums[i]-nums[j];     
                
                auto it =mp[j].find(diff);
                int count_at_j = it== end(mp[j])? 0:it->second;
                
                mp[i][diff]+=count_at_j+1;
                res +=count_at_j;
                
            }
        }
        
        return res;
    }   
};