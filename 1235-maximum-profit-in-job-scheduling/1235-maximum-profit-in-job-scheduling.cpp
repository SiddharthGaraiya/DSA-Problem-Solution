class Solution {
public:
    int nonoverlaps(vector<vector<int>> &job,int i)
    {
        int l = 0, h = i - 1; 
        while (l <= h) 
        { 
            int mid = (l + h) / 2; 
            if (job[mid][0] <= job[i][1])  
            { 
                if (job[mid + 1][0] <= job[i][1]) 
                    l = mid + 1;  
                else                
                    return mid; 
            } 
            else
                h = mid - 1; 
        } 
        return -1; 
    }
    
    
    
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n = profit.size();
        
        vector<vector<int>>job(n,vector<int>(3));
        
        for(int i=0;i<n;i++)
        {
            job[i] = {endTime[i],startTime[i],profit[i]};
        }
            

        sort(job.begin(),job.end());
        

        vector<int> dp(n,0);
        dp[0] = job[0][2];
        
        
        for(int i=1;i<n;i++)
        {
           
            int notpick = dp[i-1];
            int pick = job[i][2]; 
            int index = nonoverlaps(job,i);
            
            if(index!=-1)
                pick += dp[index]; 
            dp[i] = max(pick,notpick);
        }
        return dp[n-1];
    }
};