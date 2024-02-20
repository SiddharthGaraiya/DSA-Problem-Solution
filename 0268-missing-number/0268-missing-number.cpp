class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n =nums.size();

        vector<int>arr(10010);
        
        for (int a:nums){
            arr[a]++;
        }
        
        for (int i =0;i<arr.size();i++){
            if (arr[i]==0)
                return i;
        }
        
        return -1;
    }
};