class Solution {
public:
    
    int n;
    int t[501];
    int solve(int i,vector<int>&arr,int k){
        if (i>=n)  return 0;
        if (t[i]!=-1) return t[i];
        
        int result =0;
        int curr_max=-1;
        
        for(int j=i;j<n&&(j-i+1)<=k;j++){
            curr_max=max(curr_max,arr[j]);
            result =max(result,((j-i+1)*curr_max)+solve(j+1,arr,k));
        }
        
        return t[i]=result;
    }
    
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        n =arr.size();
        memset(t,-1,sizeof(t));
        
        return solve(0,arr,k);
         
    }
};