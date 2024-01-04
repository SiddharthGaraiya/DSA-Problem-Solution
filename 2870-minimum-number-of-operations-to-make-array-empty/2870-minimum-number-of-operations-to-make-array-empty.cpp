class Solution {
public:
    const static int n =1000010;
     int arr[n];
        
    int minOperations(vector<int>& nums) {
        int count =0;
        for (int i=0;i<nums.size();i++){
            arr[nums[i]]++;
        }    
        for (int i=0;i<n;i++){
            if (arr[i]==1) return -1;
            int r= arr[i]%3;
            if (r==0) count+=arr[i]/3;
            else count +=arr[i]/3+1;
        }
        return count;
    }
};