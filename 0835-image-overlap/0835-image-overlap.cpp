class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n =img1.size();
        int maxCount =-1;
        for (int i=-1*(n-1);i<=n-1;i++){
            for (int j=-1*(n-1);j<=n-1;j++){
                int count=0;
                for (int i2=0;i2<n;i2++){
                    for (int j2=0;j2<n;j2++){
                        int img2_i=i2+i;
                        int img2_j=j2+j;
                        if (img2_i>=0&&img2_i<n&&img2_j>=0&&img2_j<n)
                        {
                            if (img1[i2][j2]==1&&img2[img2_i][img2_j]==1){
                                count++;
                            }
                        }
                    }
                }
                maxCount =max(count,maxCount);
            }    
        }
        return maxCount;
    }
};