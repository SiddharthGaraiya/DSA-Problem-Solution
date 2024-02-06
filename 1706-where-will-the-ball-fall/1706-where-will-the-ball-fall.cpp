class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int m =grid.size();
        int n =grid[0].size();
        
        
        vector<int>result;
        for (int k=0;k<n;k++){
            int i=0;
            int j=k;
            
            bool flag=false;
            while (i<m && j<n){
                if (grid[i][j]==1){
                    if (j==n-1 || grid[i][j+1]==-1){
                        flag=true;
                        break;
                    }
                    j++;
                }else{
                     if (j==0 || grid[i][j-1]==1){
                        flag=true;
                         break;
                    }
                    j--;
                }
                i++;
            }
            if(flag)
                result.push_back(-1);
            else result.push_back(j);
        }
        
        return result;
    }
};