class Solution {
public:
    int climbStairs(int n) {
        int dp[n+1];
        fill_n(dp,n+1,0);
        dp[0]=dp[1]=1;
        return dpf(n,dp);
    }
    int dpf(int n,int dp[]){
        if (n==0) return 1;
        if(n<0) return 0;
        if (dp[n]==0) dp[n]=dpf(n-1,dp)+dpf(n-2,dp);
        return dp[n];
    }
};