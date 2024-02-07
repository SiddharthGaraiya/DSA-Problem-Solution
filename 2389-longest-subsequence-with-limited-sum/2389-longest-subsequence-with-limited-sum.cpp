class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n =nums.size();
        vector<int>result;
        
        sort(nums.begin(),nums.end());
        
        int sum=0;
        for (int i =0;i<n;i++){
            sum+=nums[i];
            nums[i]=sum;
        }
        
        for (auto target:queries){
            int hi=n-1;
            int lo=0;
            int mid;
            while (hi-lo>1){
                mid=(hi+lo)/2;
                if (nums[mid]<=target){
                    lo=mid+1;
                }
                else {
                    hi=mid;
                }
            }
            if (nums[lo]>target){
                    result.push_back(lo);
            }else if(nums[hi]>target){
                    result.push_back(hi);
            }else 
                    result.push_back(n);
        }
        return result;
    }
};