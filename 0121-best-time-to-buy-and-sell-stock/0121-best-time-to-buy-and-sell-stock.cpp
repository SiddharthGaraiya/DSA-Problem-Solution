class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        vector<int> a(n);
        
        int mx = 0 ;
        for (int i = n-1;i>=0;i--){
            a[i]= mx= max(prices[i],mx);
        }
        
        int ans = 0 ;
        for (int i =0;i<n;i++){
            ans = max (ans , a[i]-prices[i]);
        }
        
        return ans;
    }
};